#include "mainwindow.h"
#include "ui_mianwindow.h"
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi(this);
    
    // Connect the Save action to the save slot
    connect(action_S, &QAction::triggered, this, &MainWindow::onSaveTriggered);
}

MainWindow::~MainWindow() {}

void MainWindow::onSaveTriggered()
{
    // If no file path is set, open a save dialog
    if (currentFilePath.isEmpty()) {
        currentFilePath = QFileDialog::getSaveFileName(
            this,
            tr("儲存檔案"),
            "",
            tr("文字檔案 (*.txt);;所有檔案 (*.*)")
        );
        
        // If user cancelled, return
        if (currentFilePath.isEmpty()) {
            return;
        }
    }
    
    // Save the file
    QFile file(currentFilePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, tr("錯誤"), tr("無法儲存檔案"));
        return;
    }
    
    QTextStream out(&file);
    out << textEdit->toPlainText();
    file.close();
    
    statusbar->showMessage(tr("檔案已儲存: ") + currentFilePath, 3000);
}

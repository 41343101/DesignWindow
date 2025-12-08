#include "mainwindow.h"
#include "ui_mianwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi(this);
    
    // Connect Save As action to slot
    connect(action_A, &QAction::triggered, this, &MainWindow::saveAs);
}

MainWindow::~MainWindow() {}

void MainWindow::saveAs()
{
    // Open a file dialog to get the file path
    QString fileName = QFileDialog::getSaveFileName(this,
        tr("另存新檔"), "",
        tr("文字檔案 (*.txt);;所有檔案 (*)"));
    
    if (fileName.isEmpty())
        return;
    
    // Ensure the file has .txt extension if not specified
    if (!fileName.endsWith(".txt", Qt::CaseInsensitive)) {
        fileName += ".txt";
    }
    
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, tr("無法儲存檔案"),
            tr("無法寫入檔案 %1:\n%2.")
            .arg(QDir::toNativeSeparators(fileName), file.errorString()));
        return;
    }
    
    QTextStream out(&file);
    out << textEdit->toPlainText();
    file.close();
    
    currentFilePath = fileName;
    
    // Show success message in status bar
    statusbar->showMessage(tr("檔案已儲存: %1").arg(fileName), 3000);
}

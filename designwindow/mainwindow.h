#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mianwindow.h"

class MainWindow : public QMainWindow,
                   Ui_MainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void saveAs();

private:
    QString currentFilePath;
};
#endif // MAINWINDOW_H

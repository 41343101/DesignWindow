/********************************************************************************
** Form generated from reading UI file 'mianwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIANWINDOW_H
#define UI_MIANWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_N;
    QAction *action_O;
    QAction *action_C;
    QAction *action_S;
    QAction *action_A;
    QAction *action_X;
    QAction *action_U;
    QAction *action_T;
    QAction *action_A_2;
    QAction *action_C_2;
    QAction *action_H;
    QAction *action_About;
    QAction *action_Calculator;
    QAction *action_Notepad;
    QAction *action_Options;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu;
    QMenu *menu_T;
    QMenu *menu_H;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        action_N = new QAction(MainWindow);
        action_N->setObjectName("action_N");
        action_O = new QAction(MainWindow);
        action_O->setObjectName("action_O");
        action_C = new QAction(MainWindow);
        action_C->setObjectName("action_C");
        action_S = new QAction(MainWindow);
        action_S->setObjectName("action_S");
        action_A = new QAction(MainWindow);
        action_A->setObjectName("action_A");
        action_X = new QAction(MainWindow);
        action_X->setObjectName("action_X");
        action_U = new QAction(MainWindow);
        action_U->setObjectName("action_U");
        action_T = new QAction(MainWindow);
        action_T->setObjectName("action_T");
        action_A_2 = new QAction(MainWindow);
        action_A_2->setObjectName("action_A_2");
        action_C_2 = new QAction(MainWindow);
        action_C_2->setObjectName("action_C_2");
        action_H = new QAction(MainWindow);
        action_H->setObjectName("action_H");
        action_About = new QAction(MainWindow);
        action_About->setObjectName("action_About");
        action_Calculator = new QAction(MainWindow);
        action_Calculator->setObjectName("action_Calculator");
        action_Notepad = new QAction(MainWindow);
        action_Notepad->setObjectName("action_Notepad");
        action_Options = new QAction(MainWindow);
        action_Options->setObjectName("action_Options");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName("menu_F");
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_T = new QMenu(menubar);
        menu_T->setObjectName("menu_T");
        menu_H = new QMenu(menubar);
        menu_H->setObjectName("menu_H");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName("toolBar_2");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_T->menuAction());
        menubar->addAction(menu_H->menuAction());
        menu_F->addAction(action_N);
        menu_F->addAction(action_O);
        menu_F->addAction(action_C);
        menu_F->addSeparator();
        menu_F->addAction(action_S);
        menu_F->addAction(action_A);
        menu_F->addSeparator();
        menu_F->addAction(action_X);
        menu->addAction(action_U);
        menu->addAction(action_T);
        menu->addAction(action_A_2);
        menu->addAction(action_C_2);
        menu_T->addAction(action_Calculator);
        menu_T->addAction(action_Notepad);
        menu_T->addSeparator();
        menu_T->addAction(action_Options);
        menu_H->addAction(action_H);
        menu_H->addSeparator();
        menu_H->addAction(action_About);
        toolBar->addAction(action_N);
        toolBar->addAction(action_O);
        toolBar->addAction(action_S);
        toolBar->addAction(action_A);
        toolBar_2->addAction(action_U);
        toolBar_2->addAction(action_T);
        toolBar_2->addAction(action_A_2);
        toolBar_2->addAction(action_C_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_N->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236(N)", nullptr));
#if QT_CONFIG(shortcut)
        action_N->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        action_O->setText(QCoreApplication::translate("MainWindow", "\351\226\213\345\225\237(O)", nullptr));
#if QT_CONFIG(shortcut)
        action_O->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_C->setText(QCoreApplication::translate("MainWindow", "\351\227\234\351\226\211(C)", nullptr));
        action_S->setText(QCoreApplication::translate("MainWindow", "\345\204\262\345\255\230(S)", nullptr));
#if QT_CONFIG(shortcut)
        action_S->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_A->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230(A)", nullptr));
        action_X->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272(X)", nullptr));
        action_U->setText(QCoreApplication::translate("MainWindow", "\351\202\204\345\216\237(U)", nullptr));
#if QT_CONFIG(shortcut)
        action_U->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        action_T->setText(QCoreApplication::translate("MainWindow", "\345\211\252\344\270\213(T)", nullptr));
#if QT_CONFIG(shortcut)
        action_T->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        action_A_2->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\201\270(A)", nullptr));
#if QT_CONFIG(shortcut)
        action_A_2->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        action_C_2->setText(QCoreApplication::translate("MainWindow", "\350\244\207\350\243\275(C)", nullptr));
#if QT_CONFIG(shortcut)
        action_C_2->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        action_H->setText(QCoreApplication::translate("MainWindow", "\350\252\252\346\230\216(H)", nullptr));
#if QT_CONFIG(shortcut)
        action_H->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        action_About->setText(QCoreApplication::translate("MainWindow", "\351\227\234\346\226\274(A)", nullptr));
        action_Calculator->setText(QCoreApplication::translate("MainWindow", "\350\250\210\347\256\227\346\251\237(C)", nullptr));
#if QT_CONFIG(tooltip)
        action_Calculator->setToolTip(QCoreApplication::translate("MainWindow", "\351\226\213\345\225\237\350\250\210\347\256\227\346\251\237\345\267\245\345\205\267", nullptr));
#endif // QT_CONFIG(tooltip)
        action_Notepad->setText(QCoreApplication::translate("MainWindow", "\350\250\230\344\272\213\346\234\254(N)", nullptr));
#if QT_CONFIG(tooltip)
        action_Notepad->setToolTip(QCoreApplication::translate("MainWindow", "\351\226\213\345\225\237\350\250\230\344\272\213\346\234\254", nullptr));
#endif // QT_CONFIG(tooltip)
        action_Options->setText(QCoreApplication::translate("MainWindow", "\351\201\270\351\240\205(O)", nullptr));
#if QT_CONFIG(tooltip)
        action_Options->setToolTip(QCoreApplication::translate("MainWindow", "\351\226\213\345\225\237\351\201\270\351\240\205\350\250\255\345\256\232", nullptr));
#endif // QT_CONFIG(tooltip)
        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\252\224\346\241\210(F)", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\347\267\250\350\274\257(E)", nullptr));
        menu_T->setTitle(QCoreApplication::translate("MainWindow", "\345\267\245\345\205\267(T)", nullptr));
        menu_H->setTitle(QCoreApplication::translate("MainWindow", "\350\252\252\346\230\216(H)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIANWINDOW_H

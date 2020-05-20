/********************************************************************************
** Form generated from reading UI file 'clientwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWINDOW_H
#define UI_CLIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clientWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTextEdit *infoEdit;
    QTextEdit *inputEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendButton;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *clientWindow)
    {
        if (clientWindow->objectName().isEmpty())
            clientWindow->setObjectName(QStringLiteral("clientWindow"));
        clientWindow->resize(391, 670);
        centralWidget = new QWidget(clientWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 10, 258, 423));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        infoEdit = new QTextEdit(widget);
        infoEdit->setObjectName(QStringLiteral("infoEdit"));

        verticalLayout->addWidget(infoEdit);

        inputEdit = new QTextEdit(widget);
        inputEdit->setObjectName(QStringLiteral("inputEdit"));

        verticalLayout->addWidget(inputEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sendButton = new QPushButton(widget);
        sendButton->setObjectName(QStringLiteral("sendButton"));

        horizontalLayout->addWidget(sendButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        clientWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(clientWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 391, 23));
        clientWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(clientWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        clientWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(clientWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        clientWindow->setStatusBar(statusBar);

        retranslateUi(clientWindow);

        QMetaObject::connectSlotsByName(clientWindow);
    } // setupUi

    void retranslateUi(QMainWindow *clientWindow)
    {
        clientWindow->setWindowTitle(QApplication::translate("clientWindow", "clientWindow", Q_NULLPTR));
        sendButton->setText(QApplication::translate("clientWindow", "send", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class clientWindow: public Ui_clientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWINDOW_H

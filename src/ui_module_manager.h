/********************************************************************************
** Form generated from reading UI file 'module_manager.ui'
**
** Created: Fri Sep 16 19:12:07 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULE_MANAGER_H
#define UI_MODULE_MANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_packageDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *moduleTable;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *installButton;
    QPushButton *uninstallButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *packageDialog)
    {
        if (packageDialog->objectName().isEmpty())
            packageDialog->setObjectName(QString::fromUtf8("packageDialog"));
        packageDialog->resize(652, 490);
        verticalLayout_3 = new QVBoxLayout(packageDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget = new QWidget(packageDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        moduleTable = new QTableWidget(widget);
        if (moduleTable->columnCount() < 3)
            moduleTable->setColumnCount(3);
        moduleTable->setObjectName(QString::fromUtf8("moduleTable"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(moduleTable->sizePolicy().hasHeightForWidth());
        moduleTable->setSizePolicy(sizePolicy1);
        moduleTable->setSortingEnabled(true);
        moduleTable->setRowCount(0);
        moduleTable->setColumnCount(3);
        moduleTable->horizontalHeader()->setCascadingSectionResizes(false);
        moduleTable->horizontalHeader()->setStretchLastSection(true);
        moduleTable->verticalHeader()->setStretchLastSection(false);

        verticalLayout_2->addWidget(moduleTable);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy2);
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        installButton = new QPushButton(widget_2);
        installButton->setObjectName(QString::fromUtf8("installButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(installButton->sizePolicy().hasHeightForWidth());
        installButton->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(installButton);

        uninstallButton = new QPushButton(widget_2);
        uninstallButton->setObjectName(QString::fromUtf8("uninstallButton"));
        sizePolicy3.setHeightForWidth(uninstallButton->sizePolicy().hasHeightForWidth());
        uninstallButton->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(uninstallButton);


        verticalLayout_2->addWidget(widget_2);


        verticalLayout_3->addWidget(widget);

        buttonBox = new QDialogButtonBox(packageDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(packageDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), packageDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), packageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(packageDialog);
    } // setupUi

    void retranslateUi(QDialog *packageDialog)
    {
        packageDialog->setWindowTitle(QApplication::translate("packageDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        installButton->setText(QApplication::translate("packageDialog", "Install", 0, QApplication::UnicodeUTF8));
        uninstallButton->setText(QApplication::translate("packageDialog", "Uninstall", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class packageDialog: public Ui_packageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULE_MANAGER_H
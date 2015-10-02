/********************************************************************************
** Form generated from reading UI file 'dialog_hi_bye.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_HI_BYE_H
#define UI_DIALOG_HI_BYE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog_Hi_Bye
{
public:
    QGridLayout *gridLayout;
    QTextEdit *text_1;
    QTextEdit *text_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *ok;
    QPushButton *cancel;

    void setupUi(QDialog *Dialog_Hi_Bye)
    {
        if (Dialog_Hi_Bye->objectName().isEmpty())
            Dialog_Hi_Bye->setObjectName(QStringLiteral("Dialog_Hi_Bye"));
        Dialog_Hi_Bye->resize(306, 212);
        gridLayout = new QGridLayout(Dialog_Hi_Bye);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        text_1 = new QTextEdit(Dialog_Hi_Bye);
        text_1->setObjectName(QStringLiteral("text_1"));

        gridLayout->addWidget(text_1, 0, 0, 1, 1);

        text_2 = new QTextEdit(Dialog_Hi_Bye);
        text_2->setObjectName(QStringLiteral("text_2"));

        gridLayout->addWidget(text_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ok = new QPushButton(Dialog_Hi_Bye);
        ok->setObjectName(QStringLiteral("ok"));

        horizontalLayout->addWidget(ok);

        cancel = new QPushButton(Dialog_Hi_Bye);
        cancel->setObjectName(QStringLiteral("cancel"));

        horizontalLayout->addWidget(cancel);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(Dialog_Hi_Bye);

        QMetaObject::connectSlotsByName(Dialog_Hi_Bye);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Hi_Bye)
    {
        Dialog_Hi_Bye->setWindowTitle(QString());
        text_1->setPlaceholderText(QApplication::translate("Dialog_Hi_Bye", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265...", 0));
        text_2->setPlaceholderText(QApplication::translate("Dialog_Hi_Bye", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\202\320\265\320\272\321\201\321\202 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\321\217...", 0));
        ok->setText(QApplication::translate("Dialog_Hi_Bye", "\320\236\320\232", 0));
        cancel->setText(QApplication::translate("Dialog_Hi_Bye", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_Hi_Bye: public Ui_Dialog_Hi_Bye {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_HI_BYE_H

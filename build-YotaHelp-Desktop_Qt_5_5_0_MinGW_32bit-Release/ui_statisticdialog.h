/********************************************************************************
** Form generated from reading UI file 'statisticdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICDIALOG_H
#define UI_STATISTICDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatisticDialog
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QDateEdit *dateEdit;
    QLabel *label;
    QLabel *label_2;
    QDateEdit *dateEdit_2;
    QPushButton *pushButton;
    QLabel *label_statistic;
    QTableWidget *tableWidget;
    QPushButton *DeletStatistic;
    QWidget *tab_2;
    QTableWidget *tableWidget_2;
    QLabel *label_statistic_2;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QDateEdit *dateEdit_3;

    void setupUi(QDialog *StatisticDialog)
    {
        if (StatisticDialog->objectName().isEmpty())
            StatisticDialog->setObjectName(QStringLiteral("StatisticDialog"));
        StatisticDialog->resize(346, 408);
        gridLayout = new QGridLayout(StatisticDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(StatisticDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 301, 81));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 231, 51));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        dateEdit = new QDateEdit(gridLayoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setCalendarPopup(true);

        gridLayout_2->addWidget(dateEdit, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Tahoma"));
        font.setPointSize(10);
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        dateEdit_2 = new QDateEdit(gridLayoutWidget);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setCalendarPopup(true);

        gridLayout_2->addWidget(dateEdit_2, 1, 1, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(244, 20, 51, 51));
        label_statistic = new QLabel(tab);
        label_statistic->setObjectName(QStringLiteral("label_statistic"));
        label_statistic->setGeometry(QRect(10, 90, 301, 16));
        tableWidget = new QTableWidget(tab);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 110, 300, 231));
        QFont font1;
        font1.setPointSize(8);
        tableWidget->setFont(font1);
        tableWidget->setRowCount(0);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(150);
        tableWidget->horizontalHeader()->setHighlightSections(true);
        tableWidget->horizontalHeader()->setMinimumSectionSize(30);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setCascadingSectionResizes(true);
        tableWidget->verticalHeader()->setDefaultSectionSize(17);
        tableWidget->verticalHeader()->setMinimumSectionSize(10);
        DeletStatistic = new QPushButton(tab);
        DeletStatistic->setObjectName(QStringLiteral("DeletStatistic"));
        DeletStatistic->setGeometry(QRect(10, 340, 300, 20));
        DeletStatistic->setFont(font1);
        DeletStatistic->setCursor(QCursor(Qt::PointingHandCursor));
        DeletStatistic->setMouseTracking(true);
        DeletStatistic->setFocusPolicy(Qt::StrongFocus);
        DeletStatistic->setFlat(true);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableWidget_2 = new QTableWidget(tab_2);
        if (tableWidget_2->columnCount() < 2)
            tableWidget_2->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 110, 302, 231));
        tableWidget_2->setFont(font1);
        tableWidget_2->setRowCount(0);
        tableWidget_2->horizontalHeader()->setVisible(false);
        tableWidget_2->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(150);
        tableWidget_2->horizontalHeader()->setHighlightSections(true);
        tableWidget_2->horizontalHeader()->setMinimumSectionSize(30);
        tableWidget_2->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_2->horizontalHeader()->setStretchLastSection(true);
        tableWidget_2->verticalHeader()->setCascadingSectionResizes(true);
        tableWidget_2->verticalHeader()->setDefaultSectionSize(17);
        tableWidget_2->verticalHeader()->setMinimumSectionSize(10);
        label_statistic_2 = new QLabel(tab_2);
        label_statistic_2->setObjectName(QStringLiteral("label_statistic_2"));
        label_statistic_2->setGeometry(QRect(10, 90, 301, 16));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 301, 81));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(244, 20, 51, 51));
        horizontalLayoutWidget = new QWidget(groupBox_2);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 20, 231, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        dateEdit_3 = new QDateEdit(horizontalLayoutWidget);
        dateEdit_3->setObjectName(QStringLiteral("dateEdit_3"));
        dateEdit_3->setCalendarPopup(true);

        horizontalLayout->addWidget(dateEdit_3);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);


        retranslateUi(StatisticDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StatisticDialog);
    } // setupUi

    void retranslateUi(QDialog *StatisticDialog)
    {
        StatisticDialog->setWindowTitle(QApplication::translate("StatisticDialog", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", 0));
        groupBox->setTitle(QApplication::translate("StatisticDialog", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", 0));
        label->setText(QApplication::translate("StatisticDialog", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \321\201\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\321\203 \321\201", 0));
        label_2->setText(QApplication::translate("StatisticDialog", "\320\277\320\276", 0));
        pushButton->setText(QApplication::translate("StatisticDialog", "Ok", 0));
        label_statistic->setText(QApplication::translate("StatisticDialog", "<font color=blue><b>\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260..</b></font>", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("StatisticDialog", "\320\227\320\260\320\277\321\200\320\276\321\201", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("StatisticDialog", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", 0));
        DeletStatistic->setText(QApplication::translate("StatisticDialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\321\203", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("StatisticDialog", "\320\237\320\265\321\200\320\270\320\276\320\264", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("StatisticDialog", "\320\227\320\260\320\277\321\200\320\276\321\201", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("StatisticDialog", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", 0));
        label_statistic_2->setText(QApplication::translate("StatisticDialog", "<font color=blue><b>\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260..</b></font>", 0));
        groupBox_2->setTitle(QApplication::translate("StatisticDialog", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", 0));
        pushButton_2->setText(QApplication::translate("StatisticDialog", "Ok", 0));
        label_3->setText(QApplication::translate("StatisticDialog", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \321\201\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\321\203 \320\267\320\260", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("StatisticDialog", "\320\224\320\265\320\275\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class StatisticDialog: public Ui_StatisticDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICDIALOG_H

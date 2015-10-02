/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *lblResult;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QRadioButton *Android;
    QRadioButton *iOS;
    QRadioButton *Samsung;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *settings_internet;
    QPushButton *settings_mms;
    QPushButton *activation;
    QPushButton *speedtest;
    QTextEdit *textEdit;
    QCheckBox *hello;
    QPushButton *statistic;
    QComboBox *comboBox;
    QPushButton *add;
    QPushButton *minus;
    QLineEdit *hello_Edit_2;
    QGroupBox *groupBox_3;
    QPushButton *helloButton;
    QComboBox *comboHi;
    QPushButton *byeButton;
    QComboBox *comboBye;
    QPushButton *add_Bye;
    QPushButton *minus_Bye;
    QPushButton *add_Hi;
    QPushButton *minus_Hi;
    QGroupBox *groupBox_4;
    QPushButton *few;
    QComboBox *combo_few;
    QPushButton *add_few;
    QPushButton *minus_few;
    QGroupBox *groupBox_5;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *b8;
    QPushButton *b7;
    QPushButton *b6;
    QPushButton *b4;
    QPushButton *b2;
    QPushButton *b1;
    QPushButton *b3;
    QPushButton *b5;
    QGroupBox *groupBox_6;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Edit;
    QPushButton *Save;
    QPushButton *Old;
    QPushButton *constructor;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(600, 383);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(600, 380));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lblResult = new QLabel(centralWidget);
        lblResult->setObjectName(QStringLiteral("lblResult"));
        lblResult->setGeometry(QRect(90, 330, 47, 13));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 5, 241, 193));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 15, 211, 51));
        Android = new QRadioButton(groupBox_2);
        Android->setObjectName(QStringLiteral("Android"));
        Android->setGeometry(QRect(10, 18, 55, 21));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Android->sizePolicy().hasHeightForWidth());
        Android->setSizePolicy(sizePolicy1);
        Android->setSizeIncrement(QSize(0, 0));
        Android->setIconSize(QSize(0, 16));
        Android->setChecked(true);
        iOS = new QRadioButton(groupBox_2);
        iOS->setObjectName(QStringLiteral("iOS"));
        iOS->setGeometry(QRect(80, 18, 36, 21));
        Samsung = new QRadioButton(groupBox_2);
        Samsung->setObjectName(QStringLiteral("Samsung"));
        Samsung->setGeometry(QRect(130, 18, 61, 21));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 70, 211, 121));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        settings_internet = new QPushButton(verticalLayoutWidget);
        settings_internet->setObjectName(QStringLiteral("settings_internet"));

        verticalLayout->addWidget(settings_internet);

        settings_mms = new QPushButton(verticalLayoutWidget);
        settings_mms->setObjectName(QStringLiteral("settings_mms"));

        verticalLayout->addWidget(settings_mms);

        activation = new QPushButton(verticalLayoutWidget);
        activation->setObjectName(QStringLiteral("activation"));

        verticalLayout->addWidget(activation);

        speedtest = new QPushButton(verticalLayoutWidget);
        speedtest->setObjectName(QStringLiteral("speedtest"));

        verticalLayout->addWidget(speedtest);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(260, 25, 311, 141));
        textEdit->setReadOnly(true);
        hello = new QCheckBox(centralWidget);
        hello->setObjectName(QStringLiteral("hello"));
        hello->setEnabled(true);
        hello->setGeometry(QRect(260, 5, 14, 17));
        hello->setCheckable(true);
        hello->setChecked(true);
        statistic = new QPushButton(centralWidget);
        statistic->setObjectName(QStringLiteral("statistic"));
        statistic->setGeometry(QRect(510, 3, 61, 20));
        QFont font;
        font.setFamily(QStringLiteral("Arial Unicode MS"));
        font.setPointSize(7);
        font.setBold(false);
        font.setUnderline(true);
        font.setWeight(50);
        statistic->setFont(font);
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(275, 3, 110, 20));
        comboBox->setEditable(false);
        add = new QPushButton(centralWidget);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(385, 3, 20, 20));
        add->setIconSize(QSize(20, 20));
        add->setCheckable(true);
        add->setChecked(false);
        minus = new QPushButton(centralWidget);
        minus->setObjectName(QStringLiteral("minus"));
        minus->setGeometry(QRect(405, 3, 20, 20));
        minus->setToolTipDuration(-1);
        minus->setAutoFillBackground(false);
        hello_Edit_2 = new QLineEdit(centralWidget);
        hello_Edit_2->setObjectName(QStringLiteral("hello_Edit_2"));
        hello_Edit_2->setGeometry(QRect(275, 3, 110, 20));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 205, 241, 91));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        groupBox_3->setFont(font1);
        groupBox_3->setFlat(false);
        groupBox_3->setCheckable(false);
        groupBox_3->setChecked(false);
        helloButton = new QPushButton(groupBox_3);
        helloButton->setObjectName(QStringLiteral("helloButton"));
        helloButton->setGeometry(QRect(10, 20, 46, 23));
        comboHi = new QComboBox(groupBox_3);
        comboHi->setObjectName(QStringLiteral("comboHi"));
        comboHi->setGeometry(QRect(56, 20, 120, 23));
        comboHi->setEditable(false);
        byeButton = new QPushButton(groupBox_3);
        byeButton->setObjectName(QStringLiteral("byeButton"));
        byeButton->setGeometry(QRect(10, 55, 46, 23));
        comboBye = new QComboBox(groupBox_3);
        comboBye->setObjectName(QStringLiteral("comboBye"));
        comboBye->setGeometry(QRect(56, 55, 120, 23));
        comboBye->setEditable(false);
        add_Bye = new QPushButton(groupBox_3);
        add_Bye->setObjectName(QStringLiteral("add_Bye"));
        add_Bye->setGeometry(QRect(175, 55, 23, 23));
        minus_Bye = new QPushButton(groupBox_3);
        minus_Bye->setObjectName(QStringLiteral("minus_Bye"));
        minus_Bye->setGeometry(QRect(197, 55, 23, 23));
        add_Hi = new QPushButton(groupBox_3);
        add_Hi->setObjectName(QStringLiteral("add_Hi"));
        add_Hi->setGeometry(QRect(175, 20, 23, 23));
        minus_Hi = new QPushButton(groupBox_3);
        minus_Hi->setObjectName(QStringLiteral("minus_Hi"));
        minus_Hi->setGeometry(QRect(197, 20, 23, 23));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 300, 241, 61));
        few = new QPushButton(groupBox_4);
        few->setObjectName(QStringLiteral("few"));
        few->setGeometry(QRect(10, 20, 46, 23));
        combo_few = new QComboBox(groupBox_4);
        combo_few->setObjectName(QStringLiteral("combo_few"));
        combo_few->setGeometry(QRect(56, 20, 120, 23));
        combo_few->setEditable(false);
        add_few = new QPushButton(groupBox_4);
        add_few->setObjectName(QStringLiteral("add_few"));
        add_few->setGeometry(QRect(176, 20, 23, 23));
        minus_few = new QPushButton(groupBox_4);
        minus_few->setObjectName(QStringLiteral("minus_few"));
        minus_few->setGeometry(QRect(197, 20, 23, 23));
        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(260, 210, 311, 151));
        groupBox_5->setAutoFillBackground(true);
        groupBox_5->setStyleSheet(QStringLiteral("ff0000"));
        groupBox_5->setFlat(false);
        groupBox_5->setCheckable(false);
        gridLayoutWidget = new QWidget(groupBox_5);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 0, 291, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(9);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        b8 = new QPushButton(gridLayoutWidget);
        b8->setObjectName(QStringLiteral("b8"));

        gridLayout->addWidget(b8, 4, 1, 1, 1);

        b7 = new QPushButton(gridLayoutWidget);
        b7->setObjectName(QStringLiteral("b7"));

        gridLayout->addWidget(b7, 4, 0, 1, 1);

        b6 = new QPushButton(gridLayoutWidget);
        b6->setObjectName(QStringLiteral("b6"));

        gridLayout->addWidget(b6, 2, 1, 1, 1);

        b4 = new QPushButton(gridLayoutWidget);
        b4->setObjectName(QStringLiteral("b4"));

        gridLayout->addWidget(b4, 1, 1, 1, 1);

        b2 = new QPushButton(gridLayoutWidget);
        b2->setObjectName(QStringLiteral("b2"));
        b2->setCheckable(false);
        b2->setFlat(false);

        gridLayout->addWidget(b2, 0, 1, 1, 1);

        b1 = new QPushButton(gridLayoutWidget);
        b1->setObjectName(QStringLiteral("b1"));

        gridLayout->addWidget(b1, 0, 0, 1, 1);

        b3 = new QPushButton(gridLayoutWidget);
        b3->setObjectName(QStringLiteral("b3"));

        gridLayout->addWidget(b3, 1, 0, 1, 1);

        b5 = new QPushButton(gridLayoutWidget);
        b5->setObjectName(QStringLiteral("b5"));
        b5->setEnabled(true);

        gridLayout->addWidget(b5, 2, 0, 1, 1);

        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(260, 166, 311, 31));
        horizontalLayoutWidget = new QWidget(groupBox_6);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 0, 291, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Edit = new QPushButton(horizontalLayoutWidget);
        Edit->setObjectName(QStringLiteral("Edit"));
        Edit->setEnabled(false);

        horizontalLayout->addWidget(Edit);

        Save = new QPushButton(horizontalLayoutWidget);
        Save->setObjectName(QStringLiteral("Save"));
        Save->setEnabled(false);

        horizontalLayout->addWidget(Save);

        Old = new QPushButton(horizontalLayoutWidget);
        Old->setObjectName(QStringLiteral("Old"));
        Old->setEnabled(false);

        horizontalLayout->addWidget(Old);

        constructor = new QPushButton(centralWidget);
        constructor->setObjectName(QStringLiteral("constructor"));
        constructor->setGeometry(QRect(570, 210, 23, 23));
        constructor->setCheckable(true);
        constructor->setChecked(false);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "YHotKey", 0));
        lblResult->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "Option", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "OS", 0));
        Android->setText(QApplication::translate("MainWindow", "Android", 0));
        iOS->setText(QApplication::translate("MainWindow", "iOS", 0));
        Samsung->setText(QApplication::translate("MainWindow", "Samsung", 0));
        settings_internet->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 Internet", 0));
        settings_mms->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 MMS", 0));
        activation->setText(QApplication::translate("MainWindow", "\320\220\320\272\321\202\320\270\320\262\320\260\321\206\320\270\321\217", 0));
        speedtest->setText(QApplication::translate("MainWindow", "speedtest", 0));
        hello->setText(QString());
        statistic->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", 0));
        add->setText(QString());
        minus->setText(QString());
        hello_Edit_2->setText(QString());
        hello_Edit_2->setPlaceholderText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270 \321\202\320\265\320\272\321\201\321\202..", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Hi/Bye", 0));
        helloButton->setText(QApplication::translate("MainWindow", "Hi", 0));
        byeButton->setText(QApplication::translate("MainWindow", "Bye", 0));
#ifndef QT_NO_TOOLTIP
        add_Bye->setToolTip(QApplication::translate("MainWindow", "<b>\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214</b> \320\277\321\200\320\276\321\211\320\260\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        add_Bye->setText(QString());
#ifndef QT_NO_TOOLTIP
        minus_Bye->setToolTip(QApplication::translate("MainWindow", "<b>\320\243\320\264\320\260\320\273\320\270\321\202\321\214</b> \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\265 \320\277\321\200\320\276\321\211\320\260\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        minus_Bye->setText(QString());
#ifndef QT_NO_TOOLTIP
        add_Hi->setToolTip(QApplication::translate("MainWindow", "<b>\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214</b> \320\277\321\200\320\270\320\262\320\265\321\202\321\201\321\202\320\262\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        add_Hi->setText(QString());
#ifndef QT_NO_TOOLTIP
        minus_Hi->setToolTip(QApplication::translate("MainWindow", "<b>\320\243\320\264\320\260\320\273\320\270\321\202\321\214</b> \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\265 \320\277\321\200\320\270\320\262\320\265\321\202\321\201\321\202\320\262\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        minus_Hi->setText(QString());
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\320\240\320\265\320\266\320\265 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\265\320\274\321\213\320\265 \321\210\320\260\320\261\320\273\320\276\320\275\321\213", 0));
        few->setText(QApplication::translate("MainWindow", "\320\236\320\272", 0));
#ifndef QT_NO_TOOLTIP
        add_few->setToolTip(QApplication::translate("MainWindow", "<b>\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214</b> \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214\321\201\320\272\320\270\320\271 \321\210\320\260\320\261\320\273\320\276\320\275", 0));
#endif // QT_NO_TOOLTIP
        add_few->setText(QString());
#ifndef QT_NO_TOOLTIP
        minus_few->setToolTip(QApplication::translate("MainWindow", "<b>\320\243\320\264\320\260\320\273\320\270\321\202\321\214</b> \320\262\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\271 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214\321\201\320\272\320\270\320\271 \321\210\320\260\320\261\320\273\320\276\320\275", 0));
#endif // QT_NO_TOOLTIP
        minus_few->setText(QString());
        groupBox_5->setTitle(QString());
        b8->setText(QApplication::translate("MainWindow", "\320\232\320\275\320\276\320\277\320\272\320\260_8", 0));
        b7->setText(QApplication::translate("MainWindow", "\320\232\320\275\320\276\320\277\320\272\320\260_7", 0));
        b6->setText(QApplication::translate("MainWindow", "\320\232\320\275\320\276\320\277\320\272\320\260_6", 0));
        b4->setText(QApplication::translate("MainWindow", "\320\232\320\275\320\276\320\277\320\272\320\260_4", 0));
        b2->setText(QApplication::translate("MainWindow", "\320\232\320\275\320\276\320\277\320\272\320\260_2", 0));
        b1->setText(QApplication::translate("MainWindow", "\320\232\320\275\320\276\320\277\320\272\320\260_1", 0));
        b3->setText(QApplication::translate("MainWindow", "\320\232\320\275\320\276\320\277\320\272\320\260_3", 0));
        b5->setText(QApplication::translate("MainWindow", "\320\232\320\275\320\276\320\277\320\272\320\260_5", 0));
        groupBox_6->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        Edit->setToolTip(QApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\242\320\265\320\272\321\201\321\202", 0));
#endif // QT_NO_TOOLTIP
        Edit->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0));
#ifndef QT_NO_TOOLTIP
        Save->setToolTip(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
#endif // QT_NO_TOOLTIP
        Save->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
#ifndef QT_NO_TOOLTIP
        Old->setToolTip(QApplication::translate("MainWindow", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214 \320\277\320\265\321\200\320\262\320\276\320\275\320\260\321\207\320\260\320\273\321\214\320\275\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        Old->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\275\320\260\321\207\320\260\320\273\321\214\320\275\321\213\320\271", 0));
#ifndef QT_NO_TOOLTIP
        constructor->setToolTip(QApplication::translate("MainWindow", "<b>\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214</b> \320\277\321\200\320\270\320\262\320\265\321\202\321\201\321\202\320\262\320\270\320\265", 0));
#endif // QT_NO_TOOLTIP
        constructor->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

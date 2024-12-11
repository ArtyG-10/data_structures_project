/********************************************************************************
** Form generated from reading UI file 'applicationpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATIONPAGE_H
#define UI_APPLICATIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ApplicationPage
{
public:
    QLabel *volleyball_pic;
    QLabel *running_pic;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *gaming_pic;
    QLabel *electronic_music_pic;
    QLabel *reading_pic;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QLineEdit *lineEdit_search;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QListWidget *listWidget_connections;
    QLabel *label_3;
    QPushButton *pushButton_logout;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_message_to_send;
    QLabel *label_4;

    void setupUi(QDialog *ApplicationPage)
    {
        if (ApplicationPage->objectName().isEmpty())
            ApplicationPage->setObjectName("ApplicationPage");
        ApplicationPage->resize(400, 300);
        ApplicationPage->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(85, 170, 127);"));
        volleyball_pic = new QLabel(ApplicationPage);
        volleyball_pic->setObjectName("volleyball_pic");
        volleyball_pic->setGeometry(QRect(10, 40, 61, 51));
        volleyball_pic->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/images/volleyball.png")));
        volleyball_pic->setScaledContents(true);
        running_pic = new QLabel(ApplicationPage);
        running_pic->setObjectName("running_pic");
        running_pic->setGeometry(QRect(90, 40, 61, 51));
        running_pic->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/images/running.png")));
        running_pic->setScaledContents(true);
        checkBox = new QCheckBox(ApplicationPage);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(10, 90, 71, 22));
        checkBox_2 = new QCheckBox(ApplicationPage);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(90, 90, 78, 22));
        gaming_pic = new QLabel(ApplicationPage);
        gaming_pic->setObjectName("gaming_pic");
        gaming_pic->setGeometry(QRect(170, 40, 61, 51));
        gaming_pic->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/images/gaming.png")));
        gaming_pic->setScaledContents(true);
        electronic_music_pic = new QLabel(ApplicationPage);
        electronic_music_pic->setObjectName("electronic_music_pic");
        electronic_music_pic->setGeometry(QRect(250, 40, 61, 51));
        electronic_music_pic->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/images/edm.png")));
        electronic_music_pic->setScaledContents(true);
        reading_pic = new QLabel(ApplicationPage);
        reading_pic->setObjectName("reading_pic");
        reading_pic->setGeometry(QRect(330, 40, 61, 51));
        reading_pic->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/images/reading.png")));
        reading_pic->setScaledContents(true);
        checkBox_3 = new QCheckBox(ApplicationPage);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(170, 90, 78, 22));
        checkBox_4 = new QCheckBox(ApplicationPage);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setGeometry(QRect(250, 90, 78, 22));
        checkBox_5 = new QCheckBox(ApplicationPage);
        checkBox_5->setObjectName("checkBox_5");
        checkBox_5->setGeometry(QRect(330, 90, 78, 22));
        lineEdit_search = new QLineEdit(ApplicationPage);
        lineEdit_search->setObjectName("lineEdit_search");
        lineEdit_search->setGeometry(QRect(280, 170, 113, 24));
        label = new QLabel(ApplicationPage);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 140, 111, 16));
        pushButton = new QPushButton(ApplicationPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(280, 200, 101, 21));
        label_2 = new QLabel(ApplicationPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 10, 71, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        listWidget_connections = new QListWidget(ApplicationPage);
        listWidget_connections->setObjectName("listWidget_connections");
        listWidget_connections->setGeometry(QRect(10, 170, 91, 81));
        label_3 = new QLabel(ApplicationPage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 140, 91, 20));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        pushButton_logout = new QPushButton(ApplicationPage);
        pushButton_logout->setObjectName("pushButton_logout");
        pushButton_logout->setGeometry(QRect(310, 270, 80, 24));
        pushButton_2 = new QPushButton(ApplicationPage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(280, 230, 111, 24));
        lineEdit_message_to_send = new QLineEdit(ApplicationPage);
        lineEdit_message_to_send->setObjectName("lineEdit_message_to_send");
        lineEdit_message_to_send->setGeometry(QRect(120, 170, 113, 24));
        label_4 = new QLabel(ApplicationPage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 200, 141, 61));

        retranslateUi(ApplicationPage);

        QMetaObject::connectSlotsByName(ApplicationPage);
    } // setupUi

    void retranslateUi(QDialog *ApplicationPage)
    {
        ApplicationPage->setWindowTitle(QCoreApplication::translate("ApplicationPage", "Dialog", nullptr));
        volleyball_pic->setText(QString());
        running_pic->setText(QString());
        checkBox->setText(QCoreApplication::translate("ApplicationPage", "Volleyball", nullptr));
        checkBox_2->setText(QCoreApplication::translate("ApplicationPage", "Running", nullptr));
        gaming_pic->setText(QString());
        electronic_music_pic->setText(QString());
        reading_pic->setText(QString());
        checkBox_3->setText(QCoreApplication::translate("ApplicationPage", "Gaming", nullptr));
        checkBox_4->setText(QCoreApplication::translate("ApplicationPage", "music", nullptr));
        checkBox_5->setText(QCoreApplication::translate("ApplicationPage", "reading", nullptr));
        label->setText(QCoreApplication::translate("ApplicationPage", "Search by username:", nullptr));
        pushButton->setText(QCoreApplication::translate("ApplicationPage", "Add Connection", nullptr));
        label_2->setText(QCoreApplication::translate("ApplicationPage", "Interests:", nullptr));
        label_3->setText(QCoreApplication::translate("ApplicationPage", "Connections:", nullptr));
        pushButton_logout->setText(QCoreApplication::translate("ApplicationPage", "Logout", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ApplicationPage", "Read Last Message", nullptr));
        label_4->setText(QCoreApplication::translate("ApplicationPage", "Type message above then\n"
" click on connection on\n"
" the left to send message.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ApplicationPage: public Ui_ApplicationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATIONPAGE_H

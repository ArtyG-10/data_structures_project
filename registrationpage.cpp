#include "registrationpage.h"
#include "ui_registrationpage.h"
#include <QMessageBox>


RegistrationPage::RegistrationPage(Users* users_, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegistrationPage)
{
    users = users_;
    ui->setupUi(this);
}

RegistrationPage::~RegistrationPage()
{
    delete ui;
}

void RegistrationPage::on_pushButton_clicked()

{
    QString username = ui->lineEdit_username_register->text();
    QString password1 = ui->lineEdit_password_register->text();
    QString password2 = ui->lineEdit_password_confirm_register->text();
    if(password1 != password2){
        QMessageBox::information(this,"registration","error passwords do not match");
    } else{
        users->add_user(username.toStdString(),password1.toStdString());
        users->get_all_users();
        QMessageBox::information(this, "registration", "Successful account creation");
        hide();
    }
}


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
    if(username.isEmpty() || password1.isEmpty() || password2.isEmpty()){
        QMessageBox::warning(this, "login", "error please type a username and password");
    }else if(password1 != password2){
        QMessageBox::information(this,"registration","error passwords do not match");
    } else{
        if(!users->add_user(username.toStdString(),password1.toStdString())){
            QMessageBox::warning(this,"error","username is taken");
        }else{
            QMessageBox::information(this, "registration", "Successful account creation");
            hide();
        }
    }
}


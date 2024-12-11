#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(Users* users_, Connections* connections_, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    users = users_;
    connections = connections_;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    if(username.isEmpty() || password.isEmpty()){
        QMessageBox::warning(this, "login", "error please type a username and password");
    }else if(users->check_credentials(username.toStdString(),password.toStdString())){
        //QMessageBox::information(this,"login", "usename and password match");
        applicationPage = new ApplicationPage(users, connections, username.toStdString(),this);
        hide();
        applicationPage->show();
    }else {
        QMessageBox::warning(this,"login", "error usename and password do not match");
    }
}


void MainWindow::on_pushButton_register_clicked()
{
    registrationPage = new RegistrationPage(users, this);
    registrationPage->show();
}


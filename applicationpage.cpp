#include "applicationpage.h"
#include "mainwindow.h"
#include "ui_applicationpage.h"
#include "connections.h"
#include <vector>
#include <string>
#include <QMessageBox>

ApplicationPage::ApplicationPage(Users* users_, Connections* connections_, std::string current_user_, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ApplicationPage)
{
    ui->setupUi(this);
    connections = connections_;
    users = users_;
    current_user = current_user_;

    std::vector<std::string> vect = connections->returnAllConnections(current_user);

    for(auto e:vect){
        ui->listWidget_connections->addItem(QString::fromStdString(e));
    }

}

ApplicationPage::~ApplicationPage()
{
    delete ui;
}

void ApplicationPage::on_pushButton_logout_clicked()
{
    auto mainWindow = new MainWindow(users, connections, this);
    mainWindow->show();
    hide();
}


void ApplicationPage::on_pushButton_clicked()
{
    QString username = ui->lineEdit_search->text();
    if(!users->check_username_unique(username.toStdString())){
        connections->addEdge(current_user,username.toStdString());
        QMessageBox::information(this, "connection", "added " + username + " succesfully!");
        ui->listWidget_connections->repaint();
        ui->retranslateUi(this);
    }else{
        QMessageBox::information(this, "connection", username + " not found :(");
    }
}


void ApplicationPage::on_listWidget_connections_itemClicked(QListWidgetItem *item)
{
    std::string to_user = item->text().toStdString();
    QString message = ui->lineEdit_message_to_send->text();
    if(!message.isEmpty()){
        users->send_message(current_user, to_user, message.toStdString());
        QMessageBox::information(this, "Messaging", "sent message to " + item->text() + " succesfully!");
    } else {
        QMessageBox::information(this, "Messaging", "error message blank");
    }
}


void ApplicationPage::on_pushButton_2_clicked()
{
    std::string msg = users->users_hashtable.find(current_user)->second.read_message();
    QMessageBox::information(this, "Messaging", QString::fromStdString(msg));
}


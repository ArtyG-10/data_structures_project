#include "applicationpage.h"
#include "ui_applicationpage.h"

ApplicationPage::ApplicationPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ApplicationPage)
{
    ui->setupUi(this);
    //QPixmap pixmap("C:\Users\Arturo\Documents\Final_Project/volleyball.png");
    //ui->volleyball->setPixmap(pixmap);
}

ApplicationPage::~ApplicationPage()
{
    delete ui;
}

#include "applicationpage.h"
#include "ui_applicationpage.h"

ApplicationPage::ApplicationPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ApplicationPage)
{
    ui->setupUi(this);
}

ApplicationPage::~ApplicationPage()
{
    delete ui;
}

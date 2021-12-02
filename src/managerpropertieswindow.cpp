#include "managerpropertieswindow.h"
#include "ui_managerpropertieswindow.h"

ManagerPropertiesWindow::ManagerPropertiesWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ManagerPropertiesWindow)
{
    ui->setupUi(this);
}

ManagerPropertiesWindow::~ManagerPropertiesWindow()
{
    delete ui;
}

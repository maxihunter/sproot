#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainlistitem.h"
#include "librarywindow.h"
#include <QtGui>
#include <QtCore>

ManagerWindow::ManagerWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

ManagerWindow::~ManagerWindow()
{
    delete ui;
}

void ManagerWindow::on_pushButton_clicked()
{
    QString nm = QString("Name default");
    addNewItem(&nm);

}

void ManagerWindow::on_pushButton_2_clicked()
{
    LibraryWindow * library = new LibraryWindow();
    library->show();
}

void ManagerWindow::addNewItem(QString * name) {
    //Creating a new list widget item whose parent is the listwidget itself
    QListWidgetItem *listWidgetItem = new QListWidgetItem(ui->listWidget);
    ui->listWidget->addItem (listWidgetItem);
    ManagerListItem *theWidgetItem = new ManagerListItem();
    if (name == nullptr) {
        QString s = QString("My name is #")+QString::number(ui->listWidget->count());
        theWidgetItem->setName(&s);
    }  else {
        theWidgetItem->setName(name);
    }

    //listWidgetItem->setSizeHint (theWidgetItem->sizeHint());
    listWidgetItem->setSizeHint(QSize(50,60));
    ui->listWidget->setItemWidget(listWidgetItem, theWidgetItem);
}

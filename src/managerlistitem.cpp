#include "mainlistitem.h"
#include "ui_mainlistitem.h"

ManagerListItem::ManagerListItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainListItem)
{
    ui->setupUi(this);
}

ManagerListItem::~ManagerListItem()
{
    delete ui;
}
void ManagerListItem::setName(QString *name) {
    QLabel *text = new QLabel(ui->label);
    text->setText(QString("Stream name: ")+name);
}

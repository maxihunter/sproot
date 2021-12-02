#include "librarywindow.h"
#include "ui_librarywindow.h"

LibraryWindow::LibraryWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LibraryWindow)
{
    ui->setupUi(this);
    QTableWidget *table = ui->tableWidget;
    table->setColumnCount(3);
    QStringList header;
    header << "No" << "Name" << "Type" << "Size" << "Path";
    table->setHorizontalHeaderLabels(header);
}

LibraryWindow::~LibraryWindow()
{
    delete ui;
}

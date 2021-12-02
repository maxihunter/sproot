#ifndef MAINLISTITEM_H
#define MAINLISTITEM_H

#include <QWidget>

namespace Ui {
class MainListItem;
}

class ManagerListItem : public QWidget
{
    Q_OBJECT

public:
    explicit ManagerListItem(QWidget *parent = nullptr);
    ~ManagerListItem();
    void setName(QString *name);

private:
    Ui::MainListItem *ui;
};

#endif // MAINLISTITEM_H

#ifndef MANAGERPROPERTIESWINDOW_H
#define MANAGERPROPERTIESWINDOW_H

#include <QMainWindow>

namespace Ui {
class ManagerPropertiesWindow;
}

class ManagerPropertiesWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ManagerPropertiesWindow(QWidget *parent = nullptr);
    ~ManagerPropertiesWindow();

private:
    Ui::ManagerPropertiesWindow *ui;
};

#endif // MANAGERPROPERTIESWINDOW_H

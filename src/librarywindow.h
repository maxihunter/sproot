#ifndef LIBRARYWINDOW_H
#define LIBRARYWINDOW_H

#include <QMainWindow>

namespace Ui {
class LibraryWindow;
}

class LibraryWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LibraryWindow(QWidget *parent = nullptr);
    ~LibraryWindow();

private:
    Ui::LibraryWindow *ui;
};

#endif // LIBRARYWINDOW_H

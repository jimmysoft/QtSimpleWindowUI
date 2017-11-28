#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "simplewindow.h"
#include "simplewindowwithvideo.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    SimpleWindowWithVideo * simpleWindowWithVideoui;
    SimpleWindow * simpleWindowui;

    void ShowWindows(int);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

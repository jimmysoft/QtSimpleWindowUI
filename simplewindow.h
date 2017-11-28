#ifndef SIMPLEWINDOW_H
#define SIMPLEWINDOW_H

#include <QWidget>

class MainWindow;

namespace Ui {
class SimpleWindow;
}

class SimpleWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SimpleWindow(QWidget *parent = 0);
    ~SimpleWindow();
    MainWindow * mainWindow;
    void SetMainWindow(MainWindow*);

private slots:
    void on_buttonEngineerMode_clicked();

private:
    Ui::SimpleWindow *ui;
};

#endif // SIMPLEWINDOW_H

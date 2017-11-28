#include "simplewindow.h"
#include "ui_simplewindow.h"
#include "mainwindow.h"


SimpleWindow::SimpleWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SimpleWindow)
{
    ui->setupUi(this);
}

SimpleWindow::~SimpleWindow()
{
    delete ui;
}

void SimpleWindow::on_buttonEngineerMode_clicked()
{
    mainWindow->ShowWindows(2);
}

void SimpleWindow::SetMainWindow(MainWindow* mainWindow)
{
    this->mainWindow = mainWindow;
}

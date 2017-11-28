#ifndef SIMPLEWINDOWWITHVIDEO_H
#define SIMPLEWINDOWWITHVIDEO_H

#include <QWidget>

class MainWindow;

namespace Ui {
class SimpleWindowWithVideo;
}

class SimpleWindowWithVideo : public QWidget
{
    Q_OBJECT

public:
    explicit SimpleWindowWithVideo(QWidget *parent = 0);
    ~SimpleWindowWithVideo();
    MainWindow * mainWindow;
    void SetMainWindow(MainWindow*);

private slots:
    void on_buttonEngineerMode_clicked();

private:
    Ui::SimpleWindowWithVideo *ui;
};

#endif // SIMPLEWINDOWWITHVIDEO_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QAction>
#include <QMouseEvent>
#include <QCursor>
#include <QEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
QMenu *menuQuit;
public:
    // 设置鼠标点击事件
    void mouseClickEvent(QMouseEvent *event);
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

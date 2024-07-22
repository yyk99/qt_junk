#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class OnlineSourceSheet;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void selectOnlineDialog();
    void onImageGrid();
private:
    Ui::MainWindow *ui;

    OnlineSourceSheet *onlineSourceSheet;
};
#endif // MAINWINDOW_H

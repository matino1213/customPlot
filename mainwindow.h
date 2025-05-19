#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QRandomGenerator>
#include "input.h"
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnGenerate_clicked();

private:
    Ui::MainWindow *ui;
    int count;
    int min;
    int max;
    int generateTime;
    QVector<double> *x, *y;
    bool isStartGenerate = false;
    void generateRandomData();
};
#endif // MAINWINDOW_H

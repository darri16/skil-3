#ifndef SNAKETHREAD_H
#define SNAKETHREAD_H
#include <QThread>
#include <QMainWindow>
#include "snakegrid.h"
#include "snakewidget.h"
#include "config.h"

using namespace config;

class SnakeThread : public QThread {
    Q_OBJECT

public:
    SnakeThread(SnakeGrid *grid, SnakeWidget *widget, QMainWindow *mainWindow);
protected:
    void run();
private:
    SnakeGrid *grid;
    SnakeWidget *widget;
    QMainWindow *mainWindow;
};

#endif // SNAKETHREAD_H

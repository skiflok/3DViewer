#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>

#include <QMainWindow>

#include <QOpenGLWidget>
#include <QOpenGLShaderProgram>
#include <QOpenGLBuffer>
#include <QTimer>

#include <QtWidgets/QWidget>
#include <QtOpenGL>
#include <QTimer>
#include <QFileDialog>




extern "C" {
#include "../../parser.h"
}


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_openTestFile_clicked();

    void on_openLamp_clicked();

    void on_parse_clicked();

    void on_openFile_clicked();

    void on_apply_clicked();

    void on_adaptation_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

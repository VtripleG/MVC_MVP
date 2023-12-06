#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QList>
#include "Controller.h"

class QTextBrowser;
class QLineEdit;
class QString;

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    QTextBrowser* m_textBrowser;
    QLineEdit* m_lineEdit;
    QList<QString>* m_list;
    Controller m_controller;

public slots:
    void ButtonClicked();
};
#endif // MAINWINDOW_H

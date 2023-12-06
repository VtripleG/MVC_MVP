#ifndef CULCVIEW_H
#define CULCVIEW_H

#include <QWidget>

class QLineEdit;
class QTextBrowser;

class CulcView : public QWidget
{
    Q_OBJECT

public:
    CulcView(QWidget *parent = nullptr);
    ~CulcView();
};
#endif // CULCVIEW_H

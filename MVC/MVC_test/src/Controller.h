#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <QList>

class QString;

class Controller
{
public:
    Controller(QList<QString>* list = nullptr );
    void AddMessage(QString text);
    QString GetLastMessage();
private:
    QList <QString>* m_list;

};

#endif // CONTROLLER_H

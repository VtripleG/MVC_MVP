#include "Controller.h"
#include <QString>
#include <QDebug>

Controller::Controller( QList<QString>* list ): m_list(list)
{

}

void Controller::AddMessage(QString text)
{
    this->m_list->append(text);
}

QString Controller::GetLastMessage()
{
    if (!m_list->isEmpty()) {
        return m_list->last();
    } else {
        qDebug() << "List is empty";
    }
}

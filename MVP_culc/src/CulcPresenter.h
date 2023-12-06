#ifndef CULCPRESENTER_H
#define CULCPRESENTER_H

#include <QObject>
#include "CulcModel.h"

class QTextBrowser;
class QLineEdit;

class CulcPresenter: public QObject
{
    Q_OBJECT
public:
    CulcPresenter( QLineEdit* lineEdit = nullptr, QTextBrowser* textBrowser = nullptr );
    ~CulcPresenter();
public slots:
    void PlusButtonsClicked ( bool checked );
    void MinusButtonsClicked ( bool checked );
    void SplitButtonsClicked ( bool checked );
    void MultiButtonsClicked ( bool checked );

    void EqualButtonClicked ( bool checked );

private:
    CulcModel m_model;
    QLineEdit* m_lineEdit;
    QTextBrowser* m_textBrowser;
};

#endif // CULCPRESENTER_H

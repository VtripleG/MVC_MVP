#ifndef CULCMODEL_H
#define CULCMODEL_H

#include <QObject>

enum Actions
{
    Unknown = 0,
    Plus,
    Minus,
    Split,
    Multi
};

class CulcModel: public QObject
{
    Q_OBJECT
public:
    CulcModel ();
    ~CulcModel ();
    void SetFirstNum ( double num );
    void SetSecondNum ( double num );
    void SetFlag ( Actions flag );
    double GetResult ();
private:
    void ClearAll();
    Actions m_flag = Actions::Unknown;
    double m_firstNum;
    double m_secondNum;
};

#endif // CULCMODEL_H


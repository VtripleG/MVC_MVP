#include "CulcModel.h"

CulcModel::CulcModel()
{

}

CulcModel::~CulcModel()
{

}

void CulcModel::SetFirstNum(double num)
{
    this->m_firstNum = num;
}

void CulcModel::SetSecondNum(double num)
{
    this->m_secondNum = num;
}

void CulcModel::SetFlag(Actions flag)
{
    this->m_flag = flag;
}

double CulcModel::GetResult()
{
    double result;
    switch (m_flag) {
    case Actions::Minus:
        result = m_firstNum - m_secondNum;
        break;
    case Actions::Multi:
        result = m_firstNum * m_secondNum;
        break;
    case Actions::Plus:
        result = m_firstNum + m_secondNum;
        break;
    case Actions::Split:
        result = m_firstNum / m_secondNum;
        break;
    default:
        break;
    }
    ClearAll();
    return result;
}

void CulcModel::ClearAll()
{
    double null = 0;
    m_firstNum = null;
    m_secondNum = null;
    m_flag = Actions::Unknown;
}

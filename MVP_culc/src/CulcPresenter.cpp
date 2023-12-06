#include "CulcPresenter.h"

#include <QLineEdit>
#include <QTextBrowser>

#include "CulcModel.h"


CulcPresenter::CulcPresenter(QLineEdit *lineEdit, QTextBrowser *textBrowser):
    m_lineEdit(lineEdit),
    m_textBrowser(textBrowser)
{

}

CulcPresenter::~CulcPresenter()
{

}

void CulcPresenter::PlusButtonsClicked( bool checked )
{
    m_model.SetFirstNum(m_lineEdit->text().toDouble());
    m_model.SetFlag(Actions::Plus);
    m_textBrowser->insertPlainText(m_lineEdit->text() + " + ");
    m_lineEdit->clear();
}

void CulcPresenter::MinusButtonsClicked( bool checked )
{
    m_model.SetFirstNum(m_lineEdit->text().toDouble());
    m_model.SetFlag(Actions::Minus);
    m_textBrowser->insertPlainText(m_lineEdit->text() + " - ");
    m_lineEdit->clear();
}

void CulcPresenter::SplitButtonsClicked( bool checked )
{
    m_model.SetFirstNum(m_lineEdit->text().toDouble());
    m_model.SetFlag(Actions::Split);
    m_textBrowser->insertPlainText(m_lineEdit->text() + " / ");
    m_lineEdit->clear();
}

void CulcPresenter::MultiButtonsClicked( bool checked )
{
    m_model.SetFirstNum(m_lineEdit->text().toDouble());
    m_model.SetFlag(Actions::Multi);
    m_textBrowser->insertPlainText(m_lineEdit->text() + " * ");
    m_lineEdit->clear();
}

void CulcPresenter::EqualButtonClicked( bool checked )
{
    m_textBrowser->insertPlainText(m_lineEdit->text());
    m_model.SetSecondNum(m_lineEdit->text().toDouble());
    m_lineEdit->clear();
    double buff = m_model.GetResult();
    m_textBrowser->insertPlainText(" = ");
    m_textBrowser->insertPlainText(QString::number(buff));
    m_textBrowser->insertPlainText("\n");
}

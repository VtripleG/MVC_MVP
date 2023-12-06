#include "CulcView.h"
#include "CulcPresenter.h"

#include <QPushButton>
#include <QLineEdit>
#include <QTextBrowser>
#include <QVBoxLayout>
#include <QHBoxLayout>


CulcView::CulcView(QWidget *parent)
    : QWidget(parent)
{
    QLineEdit* lineEdit = new QLineEdit;
    QTextBrowser* textBrowser = new QTextBrowser;

    CulcPresenter* presenter = new CulcPresenter (lineEdit, textBrowser);

    QPushButton* plusButton = new QPushButton;
    plusButton->setText("+");

    QPushButton* minusButton = new QPushButton;
    minusButton->setText("-");

    QPushButton* splitButton = new QPushButton;
    splitButton->setText("/");

    QPushButton* multiButton = new QPushButton;
    multiButton->setText("*");

    QPushButton* equalButton = new QPushButton;
    equalButton->setText("=");
    equalButton->setMaximumWidth(40);
    equalButton->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Minimum);

    QHBoxLayout* firstLine = new QHBoxLayout;
    QHBoxLayout* secondLine = new QHBoxLayout;

    firstLine->addWidget(plusButton);
    firstLine->addWidget(minusButton);
    secondLine->addWidget(multiButton);
    secondLine->addWidget(splitButton);

    QVBoxLayout* actionsBlock= new QVBoxLayout;

    actionsBlock->addLayout(firstLine);
    actionsBlock->addLayout(secondLine);

    QHBoxLayout* buttonsBlock = new QHBoxLayout;

    buttonsBlock->addLayout(actionsBlock);
    buttonsBlock->addWidget(equalButton);

    QVBoxLayout* mainLayout = new QVBoxLayout;

    mainLayout->addWidget(textBrowser);
    mainLayout->addWidget(lineEdit);
    mainLayout->addLayout(buttonsBlock);

    this->setLayout(mainLayout);

    connect ( plusButton, &QPushButton::clicked, presenter, &CulcPresenter::PlusButtonsClicked );
    connect ( minusButton, &QPushButton::clicked, presenter, &CulcPresenter::MinusButtonsClicked );
    connect ( splitButton, &QPushButton::clicked, presenter, &CulcPresenter::SplitButtonsClicked );
    connect ( multiButton, &QPushButton::clicked, presenter, &CulcPresenter::MultiButtonsClicked );
    connect ( equalButton, &QPushButton::clicked, presenter, &CulcPresenter::EqualButtonClicked );

}

CulcView::~CulcView()
{
}

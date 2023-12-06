#include "mainwindow.h"
#include "Controller.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QTextBrowser>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    this->m_list = new QList<QString>;
    this->m_controller = Controller(this->m_list);
    this->m_textBrowser = new QTextBrowser;
    QVBoxLayout* mainLayout = new QVBoxLayout;
    QHBoxLayout* hLayout = new QHBoxLayout;
    QPushButton* button = new QPushButton;
    this->m_lineEdit = new QLineEdit;
    hLayout->addWidget(m_lineEdit);
    hLayout->addWidget(button);
    mainLayout->addWidget(this->m_textBrowser);
    QWidget* sendLine = new QWidget;
    sendLine->setLayout(hLayout);
    mainLayout->addWidget(sendLine);
    this->setLayout(mainLayout);
    connect(button, &QPushButton::clicked, this, &MainWindow::ButtonClicked);

}

MainWindow::~MainWindow()
{
}

void MainWindow::ButtonClicked()
{
    m_controller.AddMessage(this->m_lineEdit->text()+"\n");
    this->m_textBrowser->insertPlainText(m_controller.GetLastMessage());
    this->m_lineEdit->clear();
}


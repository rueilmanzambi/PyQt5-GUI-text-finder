#include "textfinder.h"
#include "ui_textfinder.h"
#include<QFile>
#include<QTextStream>

TextFInder::TextFInder(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TextFInder)
{
    ui->setupUi(this);
    loadTextFile();
}

TextFInder::~TextFInder()
{
    delete ui;
}


void TextFInder::on_findButton_clicked()
{
    QString searchString = ui->lineEdit->text();
    ui->textEdit->find(searchString, QTextDocument::FindWholeWords);
}

void TextFInder::loadTextFile()
{
    QFile inputFile(":/input.txt");
    inputFile.open(QIODevice::ReadOnly);

    QTextStream in(&inputFile);
    QString line = in.readAll();
    inputFile.close();

    ui->textEdit->setPlainText(line);
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}

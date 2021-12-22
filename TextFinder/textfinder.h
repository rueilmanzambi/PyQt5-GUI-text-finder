#ifndef TEXTFINDER_H
#define TEXTFINDER_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class TextFInder; }
QT_END_NAMESPACE

class TextFInder : public QWidget
{
    Q_OBJECT

public:
    TextFInder(QWidget *parent = nullptr);
    ~TextFInder();

private slots:
    void on_findButton_clicked();

private:
    Ui::TextFInder *ui;
    void loadTextFile();
};
#endif // TEXTFINDER_H

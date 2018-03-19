#ifndef DFEDIT_H
#define DFEDIT_H

#include <QMainWindow>
#include <src/models/dfmodel.h>

namespace Ui
{
    class DfEdit;
}

class DfEdit : public QMainWindow
{
    Q_OBJECT

public:
    explicit DfEdit(QWidget *parent = 0);
    ~DfEdit();

    void connectAll();

signals:
    void load(QString fname);

public slots:
    void showLoadDialog();

private:
    Ui::DfEdit *ui;
    DfModel *df;
};

#endif // DFEDIT_H

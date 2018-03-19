#include "dfedit.h"
#include "ui_dfedit.h"

#include <QFileDialog>

DfEdit::DfEdit(QWidget *parent) :
QMainWindow(parent), ui(new Ui::DfEdit)
{   
    ui->setupUi(this);
    df = new DfModel(this);

    connectAll();
}

DfEdit::~DfEdit()
{
    delete ui;
}

void DfEdit::connectAll()
{
    connect(this, &DfEdit::load, df, &DfModel::load);
    connect(ui->actionOpen, &QAction::triggered, this, &DfEdit::showLoadDialog);
}

void DfEdit::showLoadDialog()
{
    QString fname = QFileDialog::getOpenFileName(this,
        "Open Daggerfall Save", QString(), "Game Files (*.dat);;All Files (*)");
    emit load(fname);
}

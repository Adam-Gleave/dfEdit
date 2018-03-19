#include "dfmodel.h"
#include <QDebug>

DfModel::DfModel(QObject *parent) : QObject(parent)
{

}

void DfModel::load(QString fname)
{
    DfStream *stream = new DfStream();
    stream->init(fname);
    quint32 test = stream->read<quint16>();
    qDebug() << "Read: " << QString::number(test, 16);
}

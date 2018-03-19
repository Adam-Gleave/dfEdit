#include "dfstream.h"

void DfStream::init(QString str)
{
    f = new QFile(str);
    f->open(QIODevice::ReadOnly);
    stream = new QDataStream(f);
    stream->setByteOrder(QDataStream::LittleEndian);
}

DfStream::~DfStream()
{
    delete f;
    delete stream;
}

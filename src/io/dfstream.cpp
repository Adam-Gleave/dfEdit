#include "dfstream.h"

void DfStream::init(QString str)
{
    f = new QFile(str);
    f->open(QIODevice::ReadOnly);
    stream = new QDataStream(f);
    stream->setByteOrder(QDataStream::LittleEndian);
}

void DfStream::getBytes(char *in, quint32 size)
{
    QByteArray arr;
    arr.resize(size);
    stream->readRawData(arr.data(), size);
    std::memcpy(in, arr.data(), size);
}

#ifndef DFSTREAM_H
#define DFSTREAM_H

#include <memory>
#include <QDataStream>
#include <QFile>

class DfStream
{
public:
    DfStream() {}
    ~DfStream();
    void init(QString fname);

    template <typename T>
    T DfStream::read()
    {
        T data;
        buf.resize(sizeof(T));
        stream->readRawData(buf.data(), sizeof(T));
        memcpy(&data, buf.data(), sizeof(T));

        return data;
    }

private:
    QDataStream *stream;
    QFile *f;
    QByteArray buf;
};

#endif // DFSTREAM_H

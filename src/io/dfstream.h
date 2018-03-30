#ifndef DFSTREAM_H
#define DFSTREAM_H

#include <QObject>
#include <memory>
#include <QDataStream>
#include <QFile>

class DfStream: public QObject
{
    Q_OBJECT
public:
    DfStream(QObject *parent = nullptr) { }
    void init(QString fname);
    void getBytes(char *in, quint32 size);

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

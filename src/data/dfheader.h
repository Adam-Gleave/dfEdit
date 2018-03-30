#ifndef DATADFHEADER_H
#define DATADFHEADER_H

#include <QObject>
#include <src/io/dfstream.h>

class DfHeader: public QObject
{
    Q_OBJECT
public:
    DfHeader(QObject *parent = nullptr) { }

    inline void load(DfStream &stream)
    {
        data = (char*)malloc(13);
        stream.getBytes(this->data, HEADER_SIZE);
    }

    inline std::string getData()
    {
        return data;
    }

private:
    const static int HEADER_SIZE = 13;
    char *data;
};

#endif // DATADFHEADER_H

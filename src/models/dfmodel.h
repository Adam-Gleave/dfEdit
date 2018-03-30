#ifndef DFMODEL_H
#define DFMODEL_H

#include <QObject>
#include <src/data/dfheader.h>

class DfModel : public QObject
{
    Q_OBJECT
public:
    explicit DfModel(QObject *parent = nullptr) { }

signals:

public slots:
    void load(QString fname);

private:
    DfHeader *header;
};

#endif // DFMODEL_H

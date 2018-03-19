#ifndef DFMODEL_H
#define DFMODEL_H

#include <QObject>
#include <src/io/dfstream.h>

class DfModel : public QObject
{
    Q_OBJECT
public:
    explicit DfModel(QObject *parent = nullptr);

signals:

public slots:
    void load(QString fname);
};

#endif // DFMODEL_H

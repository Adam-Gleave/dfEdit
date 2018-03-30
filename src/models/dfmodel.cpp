#include "dfmodel.h"

void DfModel::load(QString fname)
{
    DfStream *stream = new DfStream(this);
    stream->init(fname);

    header = new DfHeader(this);
    header->load(*stream);

    auto debug = true;
}

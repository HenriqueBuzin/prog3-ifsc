#ifndef FILE_H
#define FILE_H

#include <QString>

class File
{
public:
    File(QString url);
    QString getFile();
private:
    QString _url;
};

#endif // FILE_H

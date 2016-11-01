#ifndef __SERILIZER__H
#define __SERILIZER__H

#include <QObject>

class Serilizer : QObject
{
	Q_OBJECT
public:
	Serilizer(QObject* parent = NULL);
	virtual ~Serilizer();
public:
	//bool save()
};
#endif//__SERILIZER__H

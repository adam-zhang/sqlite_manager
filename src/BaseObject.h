#ifndef __BASEOBJECT__H
#define __BASEOBJECT__H

#include <QUuid>

class BaseObject
{
public:
	BaseObject();
	~BaseObject();
private:
	QUuid id_;
public:
	const QUuid& id()const;
	void setId(const QUuid& id);
};
#endif//__BASEOBJECT__H

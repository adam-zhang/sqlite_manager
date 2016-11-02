#include "BaseObject.h"

BaseObject::BaseObject()
{}

BaseObject::~BaseObject() {}

const QUuid& BaseObject::id()const
{
	return id_;
}

void BaseObject::setId(const QUuid& id)
{
	id_ = id;
}


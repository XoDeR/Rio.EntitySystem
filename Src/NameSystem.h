#pragma once
#include "Common.h"

class Entity;

class NameSystem
{
public:
	void setName(Entity& e, const string name);
	const string getName(Entity& e);
};
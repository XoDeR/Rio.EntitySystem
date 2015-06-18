#pragma once
#include "Common.h"
#include "Entity.h"

class EntityManager
{
public:
	Entity createEntity();
	void removeEntity(Entity e);
	bool isActive(Entity e);
	void registerRemoveComponentCallback(function<void(uint32_t)> removeCallback);
private:
	vector<uint8_t> generation;
	deque<uint32_t> freeIndices;
	vector<function<void(uint32_t)>> removeComponentCallbackList;
};
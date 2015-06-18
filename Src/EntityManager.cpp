#include "EntityManager.h"

Entity EntityManager::createEntity()
{
	uint32_t idx;
	if (freeIndices.size() > MINIMUM_FREE_INDICES)
	{
		idx = freeIndices.front();
		freeIndices.pop_front();
	}
	else 
	{
		generation.push_back(0);
		idx = generation.size() - 1;
		//assert(idx < (1 << ENTITY_INDEX_BITS));
	}
	Entity newEntity(idx);

	return newEntity;
}

bool EntityManager::isActive(Entity e)
{
	return generation[e.getIndex()] == e.getGeneration();
}

void EntityManager::removeEntity(Entity e)
{
	const uint32_t idx = e.getIndex();
	++generation[idx];
	freeIndices.push_back(idx);

	for (auto removeCallback : removeComponentCallbackList)
	{
		removeCallback(e.id);
	}
}

void EntityManager::registerRemoveComponentCallback(function<void(uint32_t)> removeCallback)
{
	removeComponentCallbackList.push_back(removeCallback);
}

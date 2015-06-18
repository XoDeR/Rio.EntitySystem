#pragma once
#include "Common.h"

#include "Entity.h"
#include "MovementComponent.h"

class World;
class EntityManager;

class MovementSystem
{
public:
	explicit MovementSystem(World& world);
	void addEntity(Entity e);
	void removeEntity(uint32_t entityId);
	int getPosition(Entity e);
	void process();
private:
	World& world;
	EntityManager& entityManager;
	unordered_map<uint32_t, MovementComponent> componentList;
};
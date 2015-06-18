#pragma once
#include "Common.h"
#include "Entity.h"

class World;
class EntityManager;

class EntityFactory
{
public:
	explicit EntityFactory(World& world);
	Entity createSoldier();
	Entity createTower();
	Entity createEnemy();
private:
	World& world;
	EntityManager& entityManager;
};
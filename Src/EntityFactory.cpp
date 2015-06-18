#include "EntityFactory.h"
#include "World.h"
#include "EntityManager.h"
#include "MovementSystem.h"

EntityFactory::EntityFactory(World& world)
	: world(world)
	, entityManager(world.getEntityManager())
{

}

Entity EntityFactory::createSoldier()
{
	Entity e = entityManager.createEntity();
	world.getMovementSystem().addEntity(e);
	return e;
}

Entity EntityFactory::createTower()
{
	Entity e(0);
	return e;
}

Entity EntityFactory::createEnemy()
{
	Entity e(0);
	return e;
}

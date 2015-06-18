#include "World.h"

#include "MovementSystem.h"

World::World()
{

}

World::~World()
{

}

void World::initSystems()
{
	movementSystem = unique_ptr<MovementSystem>(new MovementSystem(*this));
}

EntityManager& World::getEntityManager()
{
	return entityManager;
}

MovementSystem& World::getMovementSystem()
{
	//CCAssert(movementSystem != nullptr)
	return *movementSystem.get();
}

void World::process()
{
	movementSystem->process();
}






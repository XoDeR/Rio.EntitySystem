#include "World.h"
#include "EntityFactory.h"
#include "MovementSystem.h"
#include "EntityManager.h"

void main()
{
	World world;
	world.initSystems();
	EntityFactory entityFactory(world);
	Entity soldier = entityFactory.createSoldier();

	world.process();

	MovementSystem& movementSystem = world.getMovementSystem();
	int newPosition = movementSystem.getPosition(soldier);

	EntityManager& entityManager = world.getEntityManager();
	entityManager.removeEntity(soldier);
}
#include "MovementSystem.h"
#include "EntityManager.h"
#include "World.h"

MovementSystem::MovementSystem(World& world)
	: world(world)
	, entityManager(world.getEntityManager())
{
	using namespace std::placeholders;
	std::function<void(uint32_t)> callback = std::bind(&MovementSystem::removeEntity, this, _1);
	entityManager.registerRemoveComponentCallback(callback);
}

void MovementSystem::addEntity(Entity e)
{
	MovementComponent newMovementComponent;
	componentList[e.id] = newMovementComponent;
}

void MovementSystem::removeEntity(uint32_t entityId)
{
	// will call destructor of the component
	componentList.erase(entityId);
}

int MovementSystem::getPosition(Entity e)
{
	int result = 0;
	if (entityManager.isActive(e) == true)
	{
		result = componentList[e.id].position;
	}
	return result;
}

void MovementSystem::process()
{
	for (auto& it : componentList)
	{
		it.second.position += 10;
	}
}





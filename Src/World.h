#pragma once
#include "Common.h"
#include "EntityManager.h"

class MovementSystem;

class World
{
public:
	World();
	~World();
	void initSystems();
	void process();
	EntityManager& getEntityManager();

	MovementSystem& getMovementSystem();

	
private:
	EntityManager entityManager;

	// systems
	unique_ptr<MovementSystem> movementSystem;

	
};
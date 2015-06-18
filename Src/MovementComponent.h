#pragma once
#include "Common.h"
#include "Entity.h"

struct MovementComponent
{
	MovementComponent()
		: e(55555) // invalid id
		, position(0)
		, direction(0)
	{
	}
	Entity e; // owner
	int position;
	int direction;
};
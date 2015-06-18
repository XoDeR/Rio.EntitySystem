#pragma once
#include "Common.h"

struct Entity
{
	explicit Entity(uint32_t id)
		: id(id)
	{
	}
	uint32_t id;
	uint32_t getIndex() const 
	{ 
		return id & ENTITY_INDEX_MASK; 
	}
	uint32_t getGeneration() const 
	{ 
		return (id >> ENTITY_INDEX_BITS) & ENTITY_GENERATION_MASK; 
	}
};

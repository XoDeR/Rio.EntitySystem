#pragma once

#include "inttypes.h"
#include <string>
#include <vector>
#include <deque>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <functional>
#include <memory>
using std::string; 
using std::vector;
using std::deque;
using std::set;
using std::unordered_set;
using std::unordered_map;
using std::function;
using std::unique_ptr;

const uint32_t ENTITY_INDEX_BITS = 24;
const uint32_t ENTITY_INDEX_MASK = (1 << ENTITY_INDEX_BITS) - 1;

const uint32_t ENTITY_GENERATION_BITS = 8;
const uint32_t ENTITY_GENERATION_MASK = (1 << ENTITY_GENERATION_BITS) - 1;

const uint32_t MINIMUM_FREE_INDICES = 1024;
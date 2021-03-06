// RoadMap.hpp
//
// ICS 46 Winter 2021
// Project #5: Rock and Roll Stops the Traffic
//
// This header defines a type RoadMap, which is simply a typedef to a particular
// instantiation of the Digraph template, where each vertex has a string for its
// information and each edge has a RoadSegment for its information.

#ifndef ROADMAP_HPP
#define ROADMAP_HPP

#include <string>
#include "Digraph.hpp"
#include "RoadSegment.hpp"



typedef Digraph<std::string, RoadSegment> RoadMap;



#endif // ROADMAP_HPP


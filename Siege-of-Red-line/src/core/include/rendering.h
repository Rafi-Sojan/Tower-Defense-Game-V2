#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <unordered_map>
#include <string>
#include <algorithm>

struct tiles {
	std::unordered_map<unsigned int, int> tileid = {}; // first = tileid, second = orientations, thinking of introducing 4 orientations or 8 orientations depending on what type of map it is gonna be isometric or top down map, haven't decided
};

struct objects {
	std::unordered_map<unsigned int, int> objectid = {}; // first = objectid, second = orientations
};

class animations {
public:

private:

};

class layers {
public:
	
private:

};

class background_layer : layers {

};

class ui_layer : layers {

};

class object_layer : layers {

};

class inventory_layer : layers {

};

class effects : layers {

};


#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <unordered_map>
#include <string>
#include <algorithm>

class tower_behaviour {
public:
	bool checkenemywithinradius;
	float tower_radius = 0.0;

private:

};

class enemy_behaviour {
public:
	bool checkenemycollisionwithcastle;
	float enemy_sprite_collision_axis = 0.0;

private:

};

class projectile_behaviour {
public:
	int projectileid;
	bool checkenemycollision;

private:

};

class castle_behaviour {
public:
	bool checkcastledefensesdown;

private:

};

class game_mechanics {
public:

private:

};
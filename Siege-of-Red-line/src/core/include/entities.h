#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <unordered_map>
#include <string>
#include <algorithm>

class tower {
public:
	struct tower_attributes {
		std::string type;
		float cost;
		float radius;
		float damage;
		float health;
		float defense;
		float delay;
		struct upgrades {};
	};

private:

};

class enemies {
public:
	struct enemy_attributes {
		std::string type;
		float defense;
		float health;
		float speed;
		float attack;
		float attribute_multiplier;
	 };

private:

};

class archers {
public:

private:

};

class soldiers {
public:

private:

};

class tanks {
public:

private:

};

class aerial_bombers {
public:

private:

};

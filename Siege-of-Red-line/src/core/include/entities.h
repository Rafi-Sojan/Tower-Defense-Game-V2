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
		float projectile;
		float projectilespeed;
		std::unordered_map<float, int> upgrades = {}; // first = cost , second = variant type 
	};
	
	// will try figuring out 
	struct sprites_animations {
		std::unordered_map<unsigned int, int> sprite_id;
		std::unordered_map<unsigned int, int> animation_id;
	};

protected:
	tower_attributes attributes;
	
};

// will start witha archer tower and later think about other towers
class archer_tower : public tower {
public:
	archer_tower() {
		attributes.type = "archer tower";
		attributes.cost = 100.0;
		attributes.damage = 20.0;
		attributes.radius = 10.0;
		attributes.health = 75.0;
		attributes.defense = 10.0;
		attributes.delay = 1.5;
		attributes.projectile = 1;
		attributes.projectilespeed = 1.5;
		attributes.upgrades = { {150 , 0} , {200 , 1}, {250 , 2} , {300 , 3} , {350 , 4} }; // initially let there be 5 upgrades and 5 variants 
	}
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
		std::vector<int> variants = {};
	 };

	struct enemy_animations {
		std::unordered_map<unsigned int, int> sprite_id = {};
		std::unordered_map<unsigned int, int> animation_id = {};
	};

protected:
	enemy_attributes attributes;

};

class goblin : enemies {
public:
	goblin() {
		attributes.type = "goblin";
		attributes.defense = 5;
		attributes.health = 50;
		attributes.speed = 1;
		attributes.attack = 5;
		attributes.attribute_multiplier = 2.5;
		attributes.variants = { 0, 1, 2, 3, 4 }; // adding variants so that they have different sprites upon crossing a threshold level with upgraded attributes
	}
};








// for later

class tanks {
public:

private:

};

class aerial_bombers {
public:

private:

};

#ifndef _WARRIOR_H_
#define _WARRIOR_H_

#include <iostream>
#include <string>

class Warrior{
public:
	std::string name;
	int level;
	int amount;
	int damage;
	enum tipo { Spadachim, Warriorr, Archer, Mage, Fighters};
	Resource * cost;

	Warrior(std::string,
		int,
		int,
		int,
		enum, 
		Resource *);
		
	~Warrior();

	int applied_damage();
};

#endif

#ifndef _WARRIOR_H_
#define _WARRIOR_H_

#include <iostream>
#include <string>

class Warrior{
	std::string name;
	int level;
	int amount;
	int damage;
	enum tipo { Spadachim, Warriorr, Archer, Mage, Fighters};


	Warrior(std::string,
		int,
		int,
		int,
		enum);
		
	~Warrior();

	int applied_damage();
};

#endif

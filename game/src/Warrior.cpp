#include "Warrior.h"

	Warrior::Warrior(std::string n, int l, int a, int d, enum t){
    		name = n;
    		level = l;
            amount = a;
    		damage = d;
            tipo = t;

    }

	~Warrior::Warrior(){ }

	int Warrior::applied_damage(){
            return amount * damage * level;
    }
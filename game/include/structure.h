#ifndef _STRUCTURE_H_
#define _STRUCTURE_H_

#include <iostream>
#include <string>
#include "Resource.h"

class Structure{
public:
	std::string name;
	int level;
	int amount;
	int prereq;
	Resource * cost;

		Structure(std::string,
			int,
			int,
			int,
			Resource *);
		~Structure();
};

#endif
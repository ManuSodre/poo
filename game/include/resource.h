#ifndef _RESOURCE_H_
#define _RESOURCE_H_

#include <iostream>
#include <string>

class Resource{
public:
	std::string name;
	int amount;
	enum material {Water, Iron, Wood, Stone, Food, Population};
	


	Resource(std::string, 
				int, 
				enum);
		
	~Resource();

};

#endif

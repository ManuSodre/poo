#ifndef _WORKER_H_
#define _WORKER_H_

#include <iostream>
#include <string>
#include "Resource.h"

class Worker{
	std::string name;
	int level;
	int amount;
	int eficiency;
	Resource * cost;


	Worker(std::string,
		int,
		int,
		int,
		Resource *);
		
	~Worker();

	int get_collected_res();
};

#endif

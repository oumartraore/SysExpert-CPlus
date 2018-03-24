#ifndef FAIT_H_INCLUDED
#define FAIT_H_INCLUDED

#include <iostream>
#include "Fait.h"

using namespace std;

class FaitBD
{
private:
	vector<Fait> faits;

public:
	FaitBD();
	~FaitBD();

	// Getter & Setter
	vector<Fait> getFaits();
	void addFait(Fait fait);
	void delFait(Fait fait);
	
	
};


#endif
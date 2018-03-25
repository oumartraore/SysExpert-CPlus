#ifndef REGLEBD_H_INCLUDED
#define REGLEBD_H_INCLUDED

#include <iostream>
#include "Regle.h"

using namespace std;

class RegleBD
{
private:
	vector<Regle> m_regles;

public:
	RegleBD();
	~RegleBD();
	
	// Getter & Setter
	vector<Regle> getRegles() const;
	void addRegle(Regle regle);
	void delRegle(Regle regle);
};


#endif
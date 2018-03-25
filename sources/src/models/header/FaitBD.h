#ifndef FAITBD_H_INCLUDED
#define FAITBD_H_INCLUDED

#include <iostream>
#include "Fait.h"

using namespace std;

class FaitBD
{
private:
	vector<Fait> m_faits;

public:
	FaitBD();
	~FaitBD();

	// Getter & Setter
	vector<Fait> getFaits() const;
	void addFait(Fait fait);
	void delFait(Fait fait);
	
	Fait faitExistant(string nom);
	
};


#endif
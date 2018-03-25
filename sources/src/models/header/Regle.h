#ifndef REGLE_H_INCLUDED
#define REGLE_H_INCLUDED

#include <iostream>
#include "Fait.h"

using namespace std;

/**
 * \file Regle.h
 * \brief Définition de la classe Regle.
 * \author TRAORE Oumar
 * \version 0.1
 * \date 24 Mars 2018
 *
 * Une règle est composé des premisses et une conclusion principalement.
 *
 */

class Regle
{
private:
	string m_nom;
	vector<Fait> m_premisses;
	Fait m_conclusion;

public:
	Regle();
	Regle(string nom, std::vector<Fait> premisses, Fait conclusion)
	~Regle();

	// Getter & Setter
	string getNom() const;
	void setNom(string nom);
	vector<Fait> getPremisses() const;
	void addPremisse(Fait premisse);
	void delPremisse();

};

#endif
#include "Regle.h"

Regle::~Regle()
{

}

Regle::Regle()
{

}

Regle::Regle(string nom, std::vector<Fait> premisses, Fait conclusion)
{
	this->m_nom = nom;
	this->m_premisses = premisses;
	this->m_conclusion = conclusion;
}

string Regle::getNom() const
{

}

void Regle::setNom(string nom)
{

}

vector<Fait> Regle::getPremisses() const
{

}

void Regle::addPremisse(Fait premisse)
{

}

void Regle::delPremisse()
{

}
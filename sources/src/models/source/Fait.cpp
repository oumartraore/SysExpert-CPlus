#include "Fait.h"

Fait::~Fait()
{

}

Fait::Fait() 
{

}

Fait::Fait(string nom, string question) 
{

}

// Getter & Setter

string Fait::getNom()
{
	return this->m_nom;
}

void Fait::setFait(string nom)
{
	this->m_nom = nom;
}

string Fait::getQuestion()
{
	return this->m_question;
}

void Fait::setQuestion(string question)
{
	this->m_question = question;
}
#ifndef FAIT_H_INCLUDED
#define FAIT_H_INCLUDED

#include <iostream>

using namespace std;

/**
 * \file Fait.h
 * \brief Définition de la classe Fait.
 * \author TRAORE Oumar
 * \version 0.1
 * \date 24 Mars 2018
 *
 * Permet la création d'un fait ou fait inféré du système expert.
 *
 */


class Fait
{
public:
	string m_nom;
	string m_question;
	char m_reponse;
	double m_probabilite;

public:
	Fait();
	Fait(string fait, string question);
	~Fait();
	
	// Getter & Setter
	string getNom() const;
	void setNom(string nom);
	string getQuestion() const;
	void setQuestion(string question);
	char getReponse() const;
	void setReponse(char reponse);
	double getProbabilite() const;
	void setProbabilite(double probabilite);
};

#endif
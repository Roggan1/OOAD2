/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Flug.h
 * Author: stud
 *
 * Created on 27. Juni 2017, 09:56
 */

#ifndef FLUG_H
#define FLUG_H
#include <string>

using namespace std;

class Flug
{
public:
    Flug(); //standardkonstruktor
    Flug(int flugNr, string start, string ziel, double preis, string airline); //weiterer konstruktor
    int getID();  //getter für alle variablen der klasse
    string getStart();
    string getZiel();
    double getPreis();
    string getAirline();

    virtual ~Flug();
private:

    int m_flugNr;  //variablen der klasse
    string m_start;
    string m_ziel;
    double m_preis;
    string m_airline;
    
};

#endif /* FLUG_H */


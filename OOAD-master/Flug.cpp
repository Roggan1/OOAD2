/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Flug.cpp
 * Author: stud
 * 
 * Created on 27. Juni 2017, 09:56
 */

#include "Flug.h"

Flug::Flug(int flugNr, string start, string ziel, double preis, string airline) : m_flugNr(flugNr), m_start(start), m_ziel(ziel), m_preis(preis), m_airline(airline)
{
                                                                                //Konstruktor der Klasse Flug
}

Flug::~Flug()
{
}

int Flug::getID()       //Getter für die Flugnummer
{
    return m_flugNr;
}

string Flug::getStart() //Getter für den Start
{
    return m_start;
}

string Flug::getZiel()  //Getter für das Ziel
{
    return m_ziel;
}

double Flug::getPreis() //Getter für den Preis
{
    return m_preis;
}

string Flug::getAirline()   //Getter für die Airline
{
    return m_airline;
}


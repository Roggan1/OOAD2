/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Buchung.cpp
 * Author: stud
 * 
 * Created on 27. Juni 2017, 09:56
 */

#include "Buchung.h"


Buchung::Buchung(Flug* Flug, int Anzahl)
{
    m_Flug=Flug; //Flug Speichern
    m_Anzahl=Anzahl; //Anzahl Speichern
    m_Preis=m_Flug->getPreis()*m_Anzahl;//Preis berechnen
}

Buchung::~Buchung()
{
}

int Buchung::getAnzahl() //getter für Anzahl der gebuchten Tickets
{
    return m_Anzahl;
}

int Buchung::getPreis() //getter für berechneten preis
{
    return m_Preis;
}


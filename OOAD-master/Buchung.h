/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Buchung.h
 * Author: stud
 *
 * Created on 27. Juni 2017, 09:56
 */

#ifndef BUCHUNG_H
#define BUCHUNG_H
#include "Flug.h"

using namespace std;

class Buchung
{
public:
    Buchung(Flug Flug, int Anzahl);
    Buchung belegErstellen();

    virtual ~Buchung();
private:

    int m_Anzahl;
    Flug m_Flug;
    int m_Preis;
    
};

#endif /* BUCHUNG_H */


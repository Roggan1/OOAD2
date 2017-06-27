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
#include "CUI.h"

class Buchung
{
public:
    Buchung();
    Buchung belegErstellen();

    virtual ~Buchung();
private:

    Account m_zahlung;
    Bezahlung m_bestätigung;
    
};

#endif /* BUCHUNG_H */


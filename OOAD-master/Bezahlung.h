/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bezahlung.h
 * Author: stud
 *
 * Created on 27. Juni 2017, 09:57
 */

#ifndef BEZAHLUNG_H
#define BEZAHLUNG_H
#include "CUI.h"

class Bezahlung
{
public:
    Bezahlung();

    virtual ~Bezahlung();
private:

    time_t m_datum;
    double m_betrag;
    
};

#endif /* BEZAHLUNG_H */


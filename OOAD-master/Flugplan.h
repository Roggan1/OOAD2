/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Flugplan.h
 * Author: stud
 *
 * Created on 27. Juni 2017, 09:56
 */

#ifndef FLUGPLAN_H
#define FLUGPLAN_H
#include "CUI.h"

class Flugplan
{
public:
    Flugplan();
    int fluegeEinlesen();

    virtual ~Flugplan();
private:

    string m_flughafen;
    time_t m_gueltigAb;
    Flug* m_flugListe;
    
};

#endif /* FLUGPLAN_H */


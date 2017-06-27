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
#include <iostream>
#include <string>
#include "Flug.h"
#include <fstream>
#include <sstream>
#include <vector>
#include <ctime>

using namespace std;

class Flugplan
{
public:
    Flugplan();
    void fluegeEinlesen(string file);
    Flug* getFlug(int ID);
    int getSize();
    
    virtual ~Flugplan();
private:

    //time_t m_gueltigAb;
    vector<Flug*> m_flugListe;
    
};

#endif /* FLUGPLAN_H */


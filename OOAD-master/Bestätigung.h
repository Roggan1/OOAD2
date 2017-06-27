/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bestätigung.h
 * Author: stud
 *
 * Created on 27. Juni 2017, 09:57
 */

#ifndef BESTÄTIGUNG_H
#define BESTÄTIGUNG_H

class Bestätigung
{
public:
    Bestätigung();

    virtual ~Bestätigung();
private:

    time_t m_datum;
    double m_preis;
    
};

#endif /* BESTÄTIGUNG_H */


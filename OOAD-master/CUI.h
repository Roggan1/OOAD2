/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CUI.h
 * Author: stud
 *
 * Created on 27. Juni 2017, 09:55
 */

#ifndef CUI_H
#define CUI_H
#include <string>
#include <vector>
#include <iostream>

#include "Buchung.h"
#include "Flug.h"
#include "Flugplan.h"


using namespace std;

class CUI
{
public:
    CUI();
    int zeigeMenue();
    void init();
    void fluegeAnzeigen();
    void buchen();
    void bezahlen();
    
    virtual ~CUI();
private:

    int m_auswahl;
    Flugplan* m_Flugplan;
   
    vector<Buchung*> Buchungsliste;
    
};

#endif /* CUI_H */


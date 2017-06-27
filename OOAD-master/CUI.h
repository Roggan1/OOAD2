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
    CUI();//konstruktor
    int zeigeMenue();//funktion zum anzeigen des menüs und auswählen der funktionen
    void init();// funktion zum initialisierne des ticketsystems
    void fluegeAnzeigen(); //funktion zum anzeigen der gespeicherten flüge
    void buchen();// funktion zur erstellung einer buchung
    void bezahlen();//funktion bestätigung der buchung
    
    virtual ~CUI();
private:

    int m_auswahl; //speichern der menüauswahl
    Flugplan* m_Flugplan; //zeiger auf flugplan
   
    vector<Buchung*> Buchungsliste; //vektor zur speicherung der buchungen
    
};

#endif /* CUI_H */


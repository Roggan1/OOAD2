/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CUI.cpp
 * Author: stud
 * 
 * Created on 27. Juni 2017, 09:55
 */

#include <vector>

#include "CUI.h"

CUI::CUI()//Konstruktor der CUI
{
    
}

CUI::~CUI()//Destruktor der CUI
{
}

void CUI::init()
{
    m_Flugplan=new Flugplan; //erzeugen des Flugplans
    m_Flugplan->fluegeEinlesen("Flüge.txt"); //einlesen der Flüge

    while(m_auswahl!=3){ //führe solange aus bis das Programm beendet wird
    zeigeMenue(); //anzeigen des Menüs
    }
}

int CUI::zeigeMenue()
{
    cout<<"**FlyNow Ticketsystem**"<<endl; //ausgabe für menü
    cout<<"1. Flug buchen"<<endl;
    cout<<"2. FluegeAnzeigen"<<endl;
    cout<<"3. Programm Beenden"<<endl; 
   
   
    cin>>m_auswahl; //einlesen der menüauswahl
    switch(m_auswahl)  //aufrufen der jeweiligen menüpunkte
    {
        case 1: 
            buchen(); //aufrufen der funktion buchen
            break;
        case 2:  
            fluegeAnzeigen(); //anzeigen der flüge
            break;
        case 3: 
            return 0; //beenden des programms
            break;
    }
    return 0;
}

void CUI::fluegeAnzeigen()
{
    for(int i=i;i<m_Flugplan->getSize();i++){ //Schleife um alle Flüge im Flugplan anzuzeigen
    cout<<m_Flugplan->getFlug(i)->getID()<<" Von "<<m_Flugplan->getFlug(i)->getStart()<<" nach "<<m_Flugplan->getFlug(i)->getZiel()<<" Airline: "<<m_Flugplan->getFlug(i)->getAirline()<<" Preis: "<<m_Flugplan->getFlug(i)->getPreis()<<endl;
    //ausgabe der Flugliste
    }
}

void CUI::buchen()
{
    int tmpAnzahl,tmpID; //temporäre variablen zur zwischenspeicherung von Anzahl und ID des Flugs
    cout<<"Flugnummer eingeben:"<<endl; //einlesen der Flugnummer
    cin>> tmpID;
    
    cout<<"Wieviele Tickets?"; //Einlesen der Ticketanzahl
    cin>> tmpAnzahl;
    
Buchungsliste.push_back(new Buchung(m_Flugplan->getFlug(tmpID), tmpAnzahl));//Speicherung der Buchung in der Buchungsliste
bezahlen(); //aufrufen der Bezahlfunktion
}

void CUI::bezahlen()
{
    cout<<Buchungsliste[Buchungsliste.size()-1]->getAnzahl()<<" Tickets für "<< Buchungsliste[Buchungsliste.size()-1]->getPreis()<<"€ gekauft"<<endl;
 //Ausgabe der Bestätigung
}
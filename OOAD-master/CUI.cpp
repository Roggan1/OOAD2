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
    cout<<"**FlyNow Ticketsystem**"<<endl;
    cout<<"1. Flug buchen"<<endl;
    cout<<"2. FluegeAnzeigen"<<endl;
    cout<<"3. Programm Beenden"<<endl; 
   
   
    cin>>m_auswahl;
    switch(m_auswahl)
    {
        case 1: 
            buchen();
            break;
        case 2:  
            fluegeAnzeigen();
            break;
        case 3: 
            return 0;
            break;

    }
}

void CUI::fluegeAnzeigen()
{
    for(int i=i;i<m_Flugplan->getSize();i++){
    cout<<m_Flugplan->getFlug(i)->getID()<<" Von "<<m_Flugplan->getFlug(i)->getStart()<<" nach "<<m_Flugplan->getFlug(i)->getZiel()<<" Airline: "<<m_Flugplan->getFlug(i)->getAirline()<<" Preis: "<<m_Flugplan->getFlug(i)->getPreis()<<endl;
    }
}

void CUI::buchen()
{
    int tmpAnzahl,tmpID;
    cout<<"Flugnummer eingeben:"<<endl;
    cin>> tmpID;
    
    cout<<"Wieviele Tickets?";
    cin>> tmpAnzahl;
    
Buchungsliste.push_back(new Buchung(m_Flugplan->getFlug(tmpID), tmpAnzahl));
bezahlen();
}

void CUI::bezahlen()
{
    cout<<Buchungsliste[Buchungsliste.size()-1]->getAnzahl()<<" Tickets für "<< Buchungsliste[Buchungsliste.size()-1]->getPreis()<<"€ gekauft"<<endl;
 
}
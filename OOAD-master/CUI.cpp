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
    m_Flugplan->fluegeEinlesen(); //einlesen der Flüge
    
    //m_aktAccount=nullptr;
    
    while(m_auswahl!=4){ //führe solange aus bis das Programm beendet wird
    zeigeMenue(); //anzeigen des Menüs
    }
}

int CUI::zeigeMenue()
{
    //if(m_aktAccount==0){
    /*
    cout<<"**FlyNow Ticketsystem**"<<endl;
    cout<<"1. Login"<<endl;
    cout<<"2. Flug Suchen"<<endl;
    cout<<"3. Programm Beenden"<<endl;
    cout<<"4. Registrieren"<<endl;
      */
    //}else{ 
    
    cout<<"**FlyNow Ticketsystem**"<<endl;
    cout<<"1. Logout"<<endl;
    cout<<"2. Flug Suchen"<<endl;
    cout<<"3. Programm Beenden"<<endl; 
     
    //}
    
    cin>>m_auswahl;
    switch(m_auswahl)
    {
        case 1: 
            /*
            if(m_aktAccount==nullptr){
                anmelden();
            }else{
                logout();
            }
            break;
              */
        case 2: 
            flugSuchen();
            break;
        case 3: 
            return 0;
            break;
            /*
        case 4: 
            if(m_aktAccount==nullptr){
            registrieren();
            }
            break;
             */
    }
}

int CUI::anmelden()
{
    string tmpName;
    string tmpPW;
    
    cout<<"Benutzername:"<<endl;
    cin>>tmpName;
    
    cout<<"Passwort:"<<endl;
    cin>>tmpPW;
    
    if(loginPrüfen(tmpName, tmpPW)){
        cout<<"Sie wurden erfolgreich angemeldet"<<endl;
    }else{
        cout<<"Sie konnten nicht angemeldet werden"<<endl;
    }
    return 0;
}

void CUI::flugSuchen()
{
   int Eingabe;        //Eingabevariablen
    string  Eingabe;
    
    cout << "Nach was möchten Sie suchen?"  << endl;    //Der Benutzer wird nach den Suchkriterien gefragt
    cout << "1. Start" << endl;
    cout << "2. Ziel" << endl;
    cout << "3. FlugNummer" << endl;
    cin >> m_auswahl;       //Eingabe des Nutzers
    
    switch(m_auswahl) {     //Die Eingabe des Nutzers wird Ausgewehrtet
    case 1: cout << "Bitte geben Sie den Startairpot ein" << endl;
    cin >> Eingabe;
    m_Flugplan.findeStart(Eingabe); //Der Flug wird im Flugplan gesucht
    break;
    case 2: cout << "Bitte geben Sie den Zielairport ein" << endl;
    cin >> Eingabe;
    m_Flugplan.findeZiel(Eingabe); //Der Flug wird im Flugplan gesucht
    break;
    case 3: cout << "Bitte geben Sie die Flugnummer ein" << endl;
    cin >> Eingabe;
    m_Flugplan.findeID(Eingabe);   //Der Flug wird im Flugplan gesucht
    break;
}
}

void CUI::fluegeAnzeigen(int FlugNr)
{
m_Flugplan->print(FlugNr); //Der Flug wird über den Flugplan aufgerufen
}

void CUI::logout()
{
    /*
    m_aktAccount=nullptr;
     */
}

void CUI::registrieren()
{
    /*
    string tmpName;
    string tmpPW;
    string tmpMail;
    time_t tmpGeburtsdatum;
    string tmpBankdaten;
    
    cout<<"Benutzername:"<<endl;
    cin>>tmpName;
    
    cout<<"Passwort:"<<endl;
    cin>>tmpPW;
    
    cout<<"Mailadresse:"<<endl;
    cin>>tmpMail;
    
    cout<<"Geburtsdatum:"<<endl;
    cin>>tmpGeburtsdatum;
    
    cout<<"Bankdaten:"<<endl;
    cin>>tmpBankdaten;
    
    m_Accountliste.push_back(new Account(tmpName, tmpPW, tmpMail, tmpGeburtsdatum, tmpBankdaten));
    */
}

bool CUI::loginPrüfen(string Name, string Passwort)
{
    /*
    for(int i=0; i<m_Accountliste.size(); i++){
        
    if(m_Accountliste[i]->getKunde(Name, Passwort)){
        m_aktAccount=m_Accountliste[i];
        return true;
    }
    }
    return false;
     */
}

void CUI::buchen()
{
    int tmpAnzahl,tmpID;
    cout<<"Flugnummer eingeben:"<<endl;
    cin>> tmpID;
    
    cout<<"Wieviele Tickets?"
    cin>> tmpAnzahl;
    
Buchungsliste.push_back(new Buchung(m_Flugplan->getFlug(tmpID), tmpAnzahl));
bezahlen();
}

void CUI::bezahlen()
{
    Buchungsliste[Buchungsliste.size()-1]->belegErstellen();
 
}

void CUI::zeigeTicket()
{

}

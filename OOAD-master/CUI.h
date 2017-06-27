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
#include <iostream>
#include "Account.h"
#include "Bestätigung.h"
#include "Bezahlung.h"
#include "Buchung.h"
#include "Flug.h"
#include "Flugplan.h"
#include "Ticket.h"

using namespace std;

class CUI
{
public:
    CUI();
    int zeigeMenue();
    int addAccount();
    int anmelden();
    void flugSuchen();
    void init();
    bool loginPrüfen(string Name, string Passwort);
    void fluegeAnzeigen();
    void buchen();
    void bezahlen();
    void zeigeTicket();
    void logout();
    void registrieren();
    
    virtual ~CUI();
private:

    int m_auswahl;
    Account* m_aktAccount;
    vector<Account*> m_Accountliste;
    Flugplan* m_Flugplan;
    vector<Ticket*> m_Ticketliste;
    vector<Buchung*> Buchungsliste;
    
};

#endif /* CUI_H */


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Account.h
 * Author: stud
 *
 * Created on 27. Juni 2017, 09:56
 */

#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "CUI.h"
#include <iostream>
#include <string>

using namespace std;

class Account
{
public:
    Account(string name,string passwort, string mail, time_t geburtsdatum, string bankdaten);
    bool getKunde(string Name, string Passwort);

    virtual ~Account();
private:

    string m_name;
    string m_mail;
    time_t m_geburtsdatum;
    string m_bankdaten;
    string m_pwd;
    
    
};

#endif /* ACCOUNT_H */


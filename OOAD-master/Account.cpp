/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Account.cpp
 * Author: stud
 * 
 * Created on 27. Juni 2017, 09:56
 */

#include "Account.h"

Account::Account(string name, string passwort, string mail, time_t geburtsdatum, string bankdaten)
{
    m_name=name;
    m_mail=mail;
    m_geburtsdatum=geburtsdatum;
    m_bankdaten=bankdaten;
    m_pwd=passwort;
}

Account::~Account()
{
}

bool Account::getKunde(string Name, string Passwort)
{
    if(Name==m_name&&Passwort==m_pwd){
        return true;
    }else{
        return false;
    } 
}


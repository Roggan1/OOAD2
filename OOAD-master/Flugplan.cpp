/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Flugplan.cpp
 * Author: stud
 * 
 * Created on 27. Juni 2017, 09:56
 */

#include <memory>

#include "Flugplan.h"

Flugplan::Flugplan()
{
    m_gueltigAb = -1; //setzt den Default Wert der Gültigkeit auf einen Ungültigen Wert
}

Flugplan::~Flugplan()
{
    for (int i = 0; i < m_flugListe.size(); i++) //Destruction des Vectors nach Beendigung
    {
        delete m_flugListe[i];
    }
}

void Flugplan::fluegeEinlesen(string file) //Einlesen des Flugplanes
{
    vector<string> data; //Erstellung der benötigten Variablen
    ifstream ifs;
    string line;
    stringstream ss;
    int anzahl;

    ifs.open(file, ios::in); //öffnen des Flugplanes
    ifs >> anzahl; //Herauslesen der Anzahl an Flügen
    cout << anzahl << endl; //Zeile entfernen

    for (int i = 0; i < anzahl; i++) //Anhand der Anzahl die Daten auslesen
    {
        getline(ifs, line); //Auslesen
        data.push_back(line); //Speichern
        cout << line << endl; //Zeile entfernen
    }

    for (int i = 0; i < data.size(); i++) //Den Datenvector auslesen
    {
        ss.str(data.at(i)); //Auslesen
        int flugNr = 0; //Die benutzten Variablen deklarieren
        string start = "";
        string ziel = "";
        double preis = 0;
        string airline = "";
        ss >> flugNr >> start >> ziel >> preis >> airline; //Variablen befüllen
        m_flugListe.push_back(new Flug(flugNr, start, ziel, preis, airline)); //Den erstellten Flug in die Flügliste einfügen
        ss.clear(); //Den Stringstream clearen

    }
   // m_gueltigAb = time(); //setzt die Aktualisierungszeit
}


Flug* Flugplan::getFlug(int ID)
{
    return m_flugListe[ID];
}

int Flugplan::getSize()
{
    return m_flugListe.size();
}


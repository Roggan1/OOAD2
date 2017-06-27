/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ticket.h
 * Author: stud
 *
 * Created on 27. Juni 2017, 09:56
 */

#ifndef TICKET_H
#define TICKET_H
#include "CUI.h"

class Ticket
{
public:
    Ticket();

    virtual ~Ticket();
private:

    time_t m_datum;
    
};

#endif /* TICKET_H */


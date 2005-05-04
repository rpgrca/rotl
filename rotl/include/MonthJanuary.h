/******************************************************************************\
*
* File:          ../../include/MonthJanuary.h
* Creation date: April 11, 2005 16:55
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CMonthJanuary'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CMonth'
* April 11, 2005 17:26 ReyBrujo
*     Updated inheritance 'CMonth'
* April 11, 2005 16:55 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMonthJanuary'
*     Added method 'CMonthJanuary'
*     Added inheritance 'CMonth'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _MONTHJANUARY_H
#define _MONTHJANUARY_H

//@START_USER1
//@END_USER1



class CMonthJanuary
    : public CMonth
{

//@START_USER2
//@END_USER2

//
// Group: ClassBuilder methods
//

private:
    void ConstructorInclude();
    void DestructorInclude();

//
// Non-Grouped Members
//

//
// Non-Grouped Methods
//

public:
    CMonthJanuary();
    virtual ~CMonthJanuary();
};

#endif


#ifdef CB_INLINES
#ifndef _MONTHJANUARY_H_INLINES
#define _MONTHJANUARY_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

/******************************************************************************\
*
* File:          ../../include/CMonthApril.h
* Creation date: MonthApril 11, 2005 17:26
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CMonthApril'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* MonthApril 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CMonth'
* MonthApril 11, 2005 17:26 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMonthApril'
*     Added method 'CMonthApril'
*     Added inheritance 'CMonth'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _MONTHAPRIL_H
#define _MONTHAPRIL_H

//@START_USER1
//@END_USER1



class CMonthApril
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
    CMonthApril();
    virtual ~CMonthApril();
};

#endif


#ifdef CB_INLINES
#ifndef _MONTHAPRIL_H_INLINES
#define _MONTHAPRIL_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

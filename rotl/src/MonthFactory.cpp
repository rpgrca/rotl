/******************************************************************************\
*
* File:          ../../src/MonthFactory.cpp
* Creation date: April 11, 2005 17:58
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMonthFactory'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated interface of method 'Create'
*     Updated code of method '~CMonthFactory'
*     Updated code of method 'CMonthFactory'
* April 11, 2005 18:12 ReyBrujo
*     Updated code of method 'Create'
* April 11, 2005 17:58 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Create'
*     Added method '~CMonthFactory'
*     Added method 'CMonthFactory'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
//@START_USER1
//@END_USER1


// Master include file
#include "rotl.h"


//@START_USER2
//@END_USER2




/*@NOTE_919
Constructor method.
*/
CMonthFactory::CMonthFactory() //@INIT_919
{//@CODE_919
    ConstructorInclude();

    // Put in your own code
}//@CODE_919


/*@NOTE_915
Destructor method.
*/
CMonthFactory::~CMonthFactory()
{//@CODE_915
    DestructorInclude();

    // Put in your own code
}//@CODE_915


/*@NOTE_920
Creates a month.
*/
CMonth* CMonthFactory::Create(const enMonthType eMonth)
{//@CODE_920
    CMonth *pMonth = NULL;

    switch (eMonth) {
        case enMONTHTYPE_JANUARY:
            pMonth = new CMonthJanuary;
            break;

        case enMONTHTYPE_FEBRUARY:
            pMonth = new CMonthFebruary;
            break;

        case enMONTHTYPE_MARCH:
            pMonth = new CMonthMarch;
            break;

        case enMONTHTYPE_APRIL:
            pMonth = new CMonthApril;
            break;

        case enMONTHTYPE_MAY:
            pMonth = new CMonthMay;
            break;

        case enMONTHTYPE_JUNE:
            pMonth = new CMonthJune;
            break;

        case enMONTHTYPE_JULY:
            pMonth = new CMonthJuly;
            break;

        case enMONTHTYPE_AUGUST:
            pMonth = new CMonthAugust;
            break;

        case enMONTHTYPE_SEPTEMBER:
            pMonth = new CMonthSeptember;
            break;

        case enMONTHTYPE_OCTOBER:
            pMonth = new CMonthOctober;
            break;

        case enMONTHTYPE_NOVEMBER:
            pMonth = new CMonthNovember;
            break;

        case enMONTHTYPE_DECEMBER:
            pMonth = new CMonthDecember;
            break;
    }

    return (pMonth);
}//@CODE_920


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_916
Method which must be called first in a constructor.
*/
void CMonthFactory::ConstructorInclude()
{
}


/*@NOTE_917
Method which must be called first in a destructor.
*/
void CMonthFactory::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

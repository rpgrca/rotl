/******************************************************************************\
*
* File:          ../../src/CMonthFebruary.cpp
* Creation date: April 11, 2005 17:26
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMonthFebruary'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 12:12 ReyBrujo, 2005
*     Updated code of method 'CMonthFebruary'
* April 16, 2005 00:29 ReyBrujo, 2005
*     Updated code of method '~CMonthFebruary'
*     Updated code of method 'CMonthFebruary'
* April 13, 2005 00:08 ReyBrujo, 2005
*     Updated code of method 'CMonthFebruary'
* April 12, 2005 18:51 ReyBrujo
*     Updated code of method 'CMonthFebruary'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CMonthFebruary'
*     Updated code of method 'CMonthFebruary'
*     Updated inheritance 'CMonth'
* April 11, 2005 18:10 ReyBrujo
*     Updated code of method 'CMonthFebruary'
* April 11, 2005 17:26 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMonthFebruary'
*     Added method 'CMonthFebruary'
*     Added inheritance 'CMonth'
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




/*@NOTE_815
Constructor method.
*/
CMonthFebruary::CMonthFebruary() //@INIT_815
    : CMonth()
{//@CODE_815
    ConstructorInclude();

    // Put in your own code
    SetName("February");
    SetType(enMONTHTYPE_FEBRUARY);
    SetSeason(new CSeasonSummer);
    SetForecast();

    AddEvent(new CSeasonalEventFloods);
    AddEvent(new CSeasonalEventRiots);
    AddEvent(new CSeasonalEventPlague);
}//@CODE_815


/*@NOTE_810
Destructor method.
*/
CMonthFebruary::~CMonthFebruary()
{//@CODE_810
    DestructorInclude();

    // Put in your own code
}//@CODE_810


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_811
Method which must be called first in a constructor.
*/
void CMonthFebruary::ConstructorInclude()
{
}


/*@NOTE_812
Method which must be called first in a destructor.
*/
void CMonthFebruary::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

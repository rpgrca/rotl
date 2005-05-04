/******************************************************************************\
*
* File:          ../../src/CMonthAugust.cpp
* Creation date: April 11, 2005 17:26
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMonthAugust'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 12:12 ReyBrujo, 2005
*     Updated code of method 'CMonthAugust'
* April 16, 2005 00:29 ReyBrujo, 2005
*     Updated code of method '~CMonthAugust'
*     Updated code of method 'CMonthAugust'
* April 13, 2005 00:08 ReyBrujo, 2005
*     Updated code of method 'CMonthAugust'
* April 12, 2005 18:51 ReyBrujo
*     Updated code of method 'CMonthAugust'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CMonthAugust'
*     Updated code of method 'CMonthAugust'
*     Updated inheritance 'CMonth'
* April 11, 2005 18:10 ReyBrujo
*     Updated code of method 'CMonthAugust'
* April 11, 2005 17:26 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMonthAugust'
*     Added method 'CMonthAugust'
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




/*@NOTE_857
Constructor method.
*/
CMonthAugust::CMonthAugust() //@INIT_857
    : CMonth()
{//@CODE_857
    ConstructorInclude();

    // Put in your own code
    SetName("August");
    SetType(enMONTHTYPE_AUGUST);
    SetSeason(new CSeasonWinter);
    SetForecast();

    AddEvent(new CSeasonalEventSandStorm);
    AddEvent(new CSeasonalEventForeignInvasion);
    AddEvent(new CSeasonalEventRiots);
    AddEvent(new CSeasonalEventPlague);
}//@CODE_857


/*@NOTE_852
Destructor method.
*/
CMonthAugust::~CMonthAugust()
{//@CODE_852
    DestructorInclude();

    // Put in your own code
}//@CODE_852


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_853
Method which must be called first in a constructor.
*/
void CMonthAugust::ConstructorInclude()
{
}


/*@NOTE_854
Method which must be called first in a destructor.
*/
void CMonthAugust::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

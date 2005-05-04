/******************************************************************************\
*
* File:          ../../src/CMonthMarch.cpp
* Creation date: April 11, 2005 17:26
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMonthMarch'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 12:12 ReyBrujo, 2005
*     Updated code of method 'CMonthMarch'
* April 16, 2005 00:29 ReyBrujo, 2005
*     Updated code of method '~CMonthMarch'
*     Updated code of method 'CMonthMarch'
* April 13, 2005 00:08 ReyBrujo, 2005
*     Updated code of method 'CMonthMarch'
* April 12, 2005 18:51 ReyBrujo
*     Updated code of method 'CMonthMarch'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CMonthMarch'
*     Updated code of method 'CMonthMarch'
*     Updated inheritance 'CMonth'
* April 11, 2005 18:10 ReyBrujo
*     Updated code of method 'CMonthMarch'
* April 11, 2005 17:26 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMonthMarch'
*     Added method 'CMonthMarch'
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




/*@NOTE_822
Constructor method.
*/
CMonthMarch::CMonthMarch() //@INIT_822
    : CMonth()
{//@CODE_822
    ConstructorInclude();

    // Put in your own code
    SetName("March");
    SetType(enMONTHTYPE_MARCH);
    SetSeason(new CSeasonSummer);
    SetForecast();

    AddEvent(new CSeasonalEventDrought);
}//@CODE_822


/*@NOTE_817
Destructor method.
*/
CMonthMarch::~CMonthMarch()
{//@CODE_817
    DestructorInclude();

    // Put in your own code
}//@CODE_817


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_818
Method which must be called first in a constructor.
*/
void CMonthMarch::ConstructorInclude()
{
}


/*@NOTE_819
Method which must be called first in a destructor.
*/
void CMonthMarch::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

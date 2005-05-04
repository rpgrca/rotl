/******************************************************************************\
*
* File:          ../../src/CMonthNovember.cpp
* Creation date: April 11, 2005 17:26
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMonthNovember'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 12:12 ReyBrujo, 2005
*     Updated code of method 'CMonthNovember'
* April 16, 2005 00:29 ReyBrujo, 2005
*     Updated code of method '~CMonthNovember'
*     Updated code of method 'CMonthNovember'
* April 13, 2005 00:08 ReyBrujo, 2005
*     Updated code of method 'CMonthNovember'
* April 12, 2005 18:51 ReyBrujo
*     Updated code of method 'CMonthNovember'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CMonthNovember'
*     Updated code of method 'CMonthNovember'
*     Updated inheritance 'CMonth'
* April 11, 2005 18:10 ReyBrujo
*     Updated code of method 'CMonthNovember'
* April 11, 2005 17:26 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMonthNovember'
*     Added method 'CMonthNovember'
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




/*@NOTE_878
Constructor method.
*/
CMonthNovember::CMonthNovember() //@INIT_878
    : CMonth()
{//@CODE_878
    ConstructorInclude();

    // Put in your own code
    SetName("November");
    SetType(enMONTHTYPE_NOVEMBER);
    SetSeason(new CSeasonWinter);
    SetForecast();

    AddEvent(new CSeasonalEventForeignInvasion);
    AddEvent(new CSeasonalEventRiots);
}//@CODE_878


/*@NOTE_873
Destructor method.
*/
CMonthNovember::~CMonthNovember()
{//@CODE_873
    DestructorInclude();

    // Put in your own code
}//@CODE_873


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_874
Method which must be called first in a constructor.
*/
void CMonthNovember::ConstructorInclude()
{
}


/*@NOTE_875
Method which must be called first in a destructor.
*/
void CMonthNovember::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

/******************************************************************************\
*
* File:          ../../src/CMonthOctober.cpp
* Creation date: April 11, 2005 17:26
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMonthOctober'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 12:12 ReyBrujo, 2005
*     Updated code of method 'CMonthOctober'
* April 16, 2005 00:29 ReyBrujo, 2005
*     Updated code of method '~CMonthOctober'
*     Updated code of method 'CMonthOctober'
* April 13, 2005 00:08 ReyBrujo, 2005
*     Updated code of method 'CMonthOctober'
* April 12, 2005 18:51 ReyBrujo
*     Updated code of method 'CMonthOctober'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CMonthOctober'
*     Updated code of method 'CMonthOctober'
*     Updated inheritance 'CMonth'
* April 11, 2005 18:10 ReyBrujo
*     Updated code of method 'CMonthOctober'
* April 11, 2005 17:26 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMonthOctober'
*     Added method 'CMonthOctober'
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




/*@NOTE_871
Constructor method.
*/
CMonthOctober::CMonthOctober() //@INIT_871
    : CMonth()
{//@CODE_871
    ConstructorInclude();

    // Put in your own code
    SetName("October");
    SetType(enMONTHTYPE_OCTOBER);
    SetSeason(new CSeasonWinter);
    SetForecast();

    AddEvent(new CSeasonalEventSandStorm);
    AddEvent(new CSeasonalEventHeavyRains);
}//@CODE_871


/*@NOTE_866
Destructor method.
*/
CMonthOctober::~CMonthOctober()
{//@CODE_866
    DestructorInclude();

    // Put in your own code
}//@CODE_866


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_867
Method which must be called first in a constructor.
*/
void CMonthOctober::ConstructorInclude()
{
}


/*@NOTE_868
Method which must be called first in a destructor.
*/
void CMonthOctober::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

/******************************************************************************\
*
* File:          ../../src/CMonthDecember.cpp
* Creation date: April 11, 2005 17:26
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMonthDecember'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 12:12 ReyBrujo, 2005
*     Updated code of method 'CMonthDecember'
* April 16, 2005 00:29 ReyBrujo, 2005
*     Updated code of method '~CMonthDecember'
*     Updated code of method 'CMonthDecember'
* April 13, 2005 00:08 ReyBrujo, 2005
*     Updated code of method 'CMonthDecember'
* April 12, 2005 18:51 ReyBrujo
*     Updated code of method 'CMonthDecember'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CMonthDecember'
*     Updated code of method 'CMonthDecember'
*     Updated inheritance 'CMonth'
* April 11, 2005 18:10 ReyBrujo
*     Updated code of method 'CMonthDecember'
* April 11, 2005 17:26 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMonthDecember'
*     Added method 'CMonthDecember'
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




/*@NOTE_885
Constructor method.
*/
CMonthDecember::CMonthDecember() //@INIT_885
    : CMonth()
{//@CODE_885
    ConstructorInclude();

    // Put in your own code
    SetName("December");
    SetType(enMONTHTYPE_DECEMBER);
    SetSeason(new CSeasonSpring);
    SetForecast();

    AddEvent(new CSeasonalEventHeavyRains);
    AddEvent(new CSeasonalEventFloods);
    AddEvent(new CSeasonalEventPlague);
}//@CODE_885


/*@NOTE_880
Destructor method.
*/
CMonthDecember::~CMonthDecember()
{//@CODE_880
    DestructorInclude();

    // Put in your own code
}//@CODE_880


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_881
Method which must be called first in a constructor.
*/
void CMonthDecember::ConstructorInclude()
{
}


/*@NOTE_882
Method which must be called first in a destructor.
*/
void CMonthDecember::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

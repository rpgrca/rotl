/******************************************************************************\
*
* File:          ../../src/CMonthMay.cpp
* Creation date: April 11, 2005 17:26
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMonthMay'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 12:12 ReyBrujo, 2005
*     Updated code of method 'CMonthMay'
* April 16, 2005 00:29 ReyBrujo, 2005
*     Updated code of method '~CMonthMay'
*     Updated code of method 'CMonthMay'
* April 13, 2005 00:08 ReyBrujo, 2005
*     Updated code of method 'CMonthMay'
* April 12, 2005 18:51 ReyBrujo
*     Updated code of method 'CMonthMay'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CMonthMay'
*     Updated code of method 'CMonthMay'
*     Updated inheritance 'CMonth'
* April 11, 2005 18:10 ReyBrujo
*     Updated code of method 'CMonthMay'
* April 11, 2005 17:26 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMonthMay'
*     Added method 'CMonthMay'
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




/*@NOTE_836
Constructor method.
*/
CMonthMay::CMonthMay() //@INIT_836
    : CMonth()
{//@CODE_836
    ConstructorInclude();

    // Put in your own code
    SetName("May");
    SetType(enMONTHTYPE_MAY);
    SetSeason(new CSeasonAutumn);
    SetForecast();

    AddEvent(new CSeasonalEventRiots);
}//@CODE_836


/*@NOTE_831
Destructor method.
*/
CMonthMay::~CMonthMay()
{//@CODE_831
    DestructorInclude();

    // Put in your own code
}//@CODE_831


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_832
Method which must be called first in a constructor.
*/
void CMonthMay::ConstructorInclude()
{
}


/*@NOTE_833
Method which must be called first in a destructor.
*/
void CMonthMay::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

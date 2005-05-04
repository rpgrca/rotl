/******************************************************************************\
*
* File:          ../../src/CMonthJune.cpp
* Creation date: April 11, 2005 17:26
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMonthJune'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 12:12 ReyBrujo, 2005
*     Updated code of method 'CMonthJune'
* April 16, 2005 00:29 ReyBrujo, 2005
*     Updated code of method '~CMonthJune'
*     Updated code of method 'CMonthJune'
* April 13, 2005 00:08 ReyBrujo, 2005
*     Updated code of method 'CMonthJune'
* April 12, 2005 18:51 ReyBrujo
*     Updated code of method 'CMonthJune'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CMonthJune'
*     Updated code of method 'CMonthJune'
*     Updated inheritance 'CMonth'
* April 11, 2005 18:10 ReyBrujo
*     Updated code of method 'CMonthJune'
* April 11, 2005 17:26 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMonthJune'
*     Added method 'CMonthJune'
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




/*@NOTE_843
Constructor method.
*/
CMonthJune::CMonthJune() //@INIT_843
    : CMonth()
{//@CODE_843
    ConstructorInclude();

    // Put in your own code
    SetName("June");
    SetType(enMONTHTYPE_JUNE);
    SetSeason(new CSeasonAutumn);
    SetForecast();

    AddEvent(new CSeasonalThieves);
    AddEvent(new CSeasonalEventPlague);
}//@CODE_843


/*@NOTE_838
Destructor method.
*/
CMonthJune::~CMonthJune()
{//@CODE_838
    DestructorInclude();

    // Put in your own code
}//@CODE_838


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_839
Method which must be called first in a constructor.
*/
void CMonthJune::ConstructorInclude()
{
}


/*@NOTE_840
Method which must be called first in a destructor.
*/
void CMonthJune::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

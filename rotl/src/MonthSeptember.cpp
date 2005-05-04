/******************************************************************************\
*
* File:          ../../src/CMonthSeptember.cpp
* Creation date: April 11, 2005 17:26
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMonthSeptember'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 12:12 ReyBrujo, 2005
*     Updated code of method 'CMonthSeptember'
* April 16, 2005 00:29 ReyBrujo, 2005
*     Updated code of method '~CMonthSeptember'
*     Updated code of method 'CMonthSeptember'
* April 13, 2005 00:08 ReyBrujo, 2005
*     Updated code of method 'CMonthSeptember'
* April 12, 2005 18:51 ReyBrujo
*     Updated code of method 'CMonthSeptember'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CMonthSeptember'
*     Updated code of method 'CMonthSeptember'
*     Updated inheritance 'CMonth'
* April 11, 2005 18:10 ReyBrujo
*     Updated code of method 'CMonthSeptember'
* April 11, 2005 17:26 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMonthSeptember'
*     Added method 'CMonthSeptember'
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




/*@NOTE_864
Constructor method.
*/
CMonthSeptember::CMonthSeptember() //@INIT_864
    : CMonth()
{//@CODE_864
    ConstructorInclude();

    // Put in your own code
    SetName("September");
    SetType(enMONTHTYPE_SEPTEMBER);
    SetSeason(new CSeasonWinter);
    SetForecast();

    AddEvent(new CSeasonalEventBlizzard);
    AddEvent(new CSeasonalThieves);
    AddEvent(new CSeasonalEventEarthquake);
}//@CODE_864


/*@NOTE_859
Destructor method.
*/
CMonthSeptember::~CMonthSeptember()
{//@CODE_859
    DestructorInclude();

    // Put in your own code
}//@CODE_859


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_860
Method which must be called first in a constructor.
*/
void CMonthSeptember::ConstructorInclude()
{
}


/*@NOTE_861
Method which must be called first in a destructor.
*/
void CMonthSeptember::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

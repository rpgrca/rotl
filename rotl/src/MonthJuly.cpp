/******************************************************************************\
*
* File:          ../../src/CMonthJuly.cpp
* Creation date: April 11, 2005 17:26
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMonthJuly'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 12:12 ReyBrujo, 2005
*     Updated code of method 'CMonthJuly'
* April 16, 2005 00:29 ReyBrujo, 2005
*     Updated code of method '~CMonthJuly'
*     Updated code of method 'CMonthJuly'
* April 12, 2005 18:51 ReyBrujo
*     Updated code of method 'CMonthJuly'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CMonthJuly'
*     Updated code of method 'CMonthJuly'
*     Updated inheritance 'CMonth'
* April 11, 2005 18:10 ReyBrujo
*     Updated code of method 'CMonthJuly'
* April 11, 2005 17:26 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMonthJuly'
*     Added method 'CMonthJuly'
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




/*@NOTE_850
Constructor method.
*/
CMonthJuly::CMonthJuly() //@INIT_850
    : CMonth()
{//@CODE_850
    ConstructorInclude();

    // Put in your own code
    SetName("July");
    SetType(enMONTHTYPE_JULY);
    SetSeason(new CSeasonWinter);
    SetForecast();
}//@CODE_850


/*@NOTE_845
Destructor method.
*/
CMonthJuly::~CMonthJuly()
{//@CODE_845
    DestructorInclude();

    // Put in your own code
}//@CODE_845


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_846
Method which must be called first in a constructor.
*/
void CMonthJuly::ConstructorInclude()
{
}


/*@NOTE_847
Method which must be called first in a destructor.
*/
void CMonthJuly::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

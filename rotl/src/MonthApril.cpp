/******************************************************************************\
*
* File:          ../../src/CMonthApril.cpp
* Creation date: MonthApril 11, 2005 17:26
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMonthApril'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 12:12 ReyBrujo, 2005
*     Updated code of method 'CMonthApril'
* April 16, 2005 00:29 ReyBrujo, 2005
*     Updated code of method '~CMonthApril'
*     Updated code of method 'CMonthApril'
* MonthApril 12, 2005 18:51 ReyBrujo
*     Updated code of method 'CMonthApril'
* MonthApril 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CMonthApril'
*     Updated code of method 'CMonthApril'
*     Updated inheritance 'CMonth'
* MonthApril 11, 2005 18:10 ReyBrujo
*     Updated code of method 'CMonthApril'
* MonthApril 11, 2005 17:26 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMonthApril'
*     Added method 'CMonthApril'
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




/*@NOTE_829
Constructor method.
*/
CMonthApril::CMonthApril() //@INIT_829
    : CMonth()
{//@CODE_829
    ConstructorInclude();

    // Put in your own code
    SetName("April");
    SetType(enMONTHTYPE_APRIL);
    SetSeason(new CSeasonAutumn);
    SetForecast();
}//@CODE_829


/*@NOTE_824
Destructor method.
*/
CMonthApril::~CMonthApril()
{//@CODE_824
    DestructorInclude();

    // Put in your own code
}//@CODE_824


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_825
Method which must be called first in a constructor.
*/
void CMonthApril::ConstructorInclude()
{
}


/*@NOTE_826
Method which must be called first in a destructor.
*/
void CMonthApril::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

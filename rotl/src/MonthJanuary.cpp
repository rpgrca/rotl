/******************************************************************************\
*
* File:          ../../src/MonthJanuary.cpp
* Creation date: April 11, 2005 16:55
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMonthJanuary'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 11:31 ReyBrujo, 2005
*     Updated code of method 'CMonthJanuary'
* April 16, 2005 00:29 ReyBrujo, 2005
*     Updated code of method '~CMonthJanuary'
*     Updated code of method 'CMonthJanuary'
* April 13, 2005 00:08 ReyBrujo, 2005
*     Updated code of method 'CMonthJanuary'
* April 12, 2005 18:51 ReyBrujo
*     Updated code of method 'CMonthJanuary'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CMonthJanuary'
*     Updated code of method 'CMonthJanuary'
*     Updated inheritance 'CMonth'
* April 11, 2005 18:10 ReyBrujo
*     Updated code of method 'CMonthJanuary'
* April 11, 2005 17:26 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CMonthJanuary'
*     Updated code of method 'CMonthJanuary'
*     Updated inheritance 'CMonth'
* April 11, 2005 16:55 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMonthJanuary'
*     Added method 'CMonthJanuary'
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




/*@NOTE_808
Constructor method.
*/
CMonthJanuary::CMonthJanuary() //@INIT_808
    : CMonth()
{//@CODE_808
    ConstructorInclude();

    // Put in your own code
    SetName("January");
    SetType(enMONTHTYPE_JANUARY);
    SetSeason(new CSeasonSummer);
    SetForecast();

    AddEvent(new CSeasonalEventDrought);
    AddEvent(new CSeasonalEventForeignInvasion);
}//@CODE_808


/*@NOTE_716
Destructor method.
*/
CMonthJanuary::~CMonthJanuary()
{//@CODE_716
    DestructorInclude();

    // Put in your own code
}//@CODE_716


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_717
Method which must be called first in a constructor.
*/
void CMonthJanuary::ConstructorInclude()
{
}


/*@NOTE_718
Method which must be called first in a destructor.
*/
void CMonthJanuary::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

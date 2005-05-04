/******************************************************************************\
*
* File:          ../../src/SeasonalEventBlizzard.cpp
* Creation date: April 10, 2005 23:58
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CSeasonalEventBlizzard'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:06 ReyBrujo, 2005
*     Updated code of method '~CSeasonalEventBlizzard'
*     Updated code of method 'CSeasonalEventBlizzard'
* April 13, 2005 17:12 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeasonalEventBlizzard'
*     Updated code of method 'CSeasonalEventBlizzard'
*     Updated inheritance 'CSeasonalEvent'
* April 12, 2005 18:40 ReyBrujo
*     Updated code of method 'CSeasonalEventBlizzard'
* April 12, 2005 17:51 ReyBrujo
*     Updated code of method 'CSeasonalEventBlizzard'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeasonalEventBlizzard'
*     Updated code of method 'CSeasonalEventBlizzard'
*     Updated inheritance 'CSeasonalEvent'
* April 11, 2005 01:39 ReyBrujo, 2005
*     Updated code of method 'CSeasonalEventBlizzard'
* April 11, 2005 00:10 ReyBrujo, 2005
*     Added method 'CSeasonalEventBlizzard'
* April 10, 2005 23:58 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonalEventBlizzard'
*     Added inheritance 'CSeasonalEvent'
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




/*@NOTE_479
Constructor method.
*/
CSeasonalEventBlizzard::CSeasonalEventBlizzard() //@INIT_479
    : CSeasonalEvent()
{//@CODE_479
    ConstructorInclude();

    // Put in your own code
    SetType(enEVENTTYPE_SEASONAL_BLIZZARD);

    m_pModifier->SetUnitSpiritModifier(CONST_BLIZZARD_SPIRIT_MODIFIER);
}//@CODE_479


/*@NOTE_447
Destructor method.
*/
CSeasonalEventBlizzard::~CSeasonalEventBlizzard()
{//@CODE_447
    DestructorInclude();

    // Put in your own code
}//@CODE_447


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_448
Method which must be called first in a constructor.
*/
void CSeasonalEventBlizzard::ConstructorInclude()
{
}


/*@NOTE_449
Method which must be called first in a destructor.
*/
void CSeasonalEventBlizzard::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

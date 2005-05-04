/******************************************************************************\
*
* File:          ../../src/SeasonalThieves.cpp
* Creation date: April 11, 2005 01:59
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CSeasonalThieves'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:06 ReyBrujo, 2005
*     Updated code of method '~CSeasonalThieves'
*     Updated code of method 'CSeasonalThieves'
* April 12, 2005 18:40 ReyBrujo
*     Updated code of method 'CSeasonalThieves'
* April 12, 2005 18:23 ReyBrujo
*     Updated code of method 'CSeasonalThieves'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeasonalThieves'
*     Updated code of method 'CSeasonalThieves'
*     Updated inheritance 'CSeasonalEvent'
* April 11, 2005 01:59 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonalThieves'
*     Added method 'CSeasonalThieves'
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




/*@NOTE_547
Constructor method.
*/
CSeasonalThieves::CSeasonalThieves() //@INIT_547
    : CSeasonalEvent()
{//@CODE_547
    ConstructorInclude();

    // Put in your own code
    SetType(enEVENTTYPE_SEASONAL_THIEVES);

    m_pModifier->SetCityGoldModifier(CONST_THIEVES_GOLD_MODIFIER);
    m_pModifier->SetCityFoodModifier(CONST_THIEVES_FOOD_MODIFIER);
    m_pModifier->SetCityDefenseModifier(CONST_THIEVES_DEFENSE_MODIFIER);
    m_pModifier->SetCityCropValueModifier(CONST_THIEVES_CROP_VALUE_MODIFIER);
}//@CODE_547


/*@NOTE_542
Destructor method.
*/
CSeasonalThieves::~CSeasonalThieves()
{//@CODE_542
    DestructorInclude();

    // Put in your own code
}//@CODE_542


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_543
Method which must be called first in a constructor.
*/
void CSeasonalThieves::ConstructorInclude()
{
}


/*@NOTE_544
Method which must be called first in a destructor.
*/
void CSeasonalThieves::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

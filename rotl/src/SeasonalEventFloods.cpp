/******************************************************************************\
*
* File:          ../../src/SeasonalEventFloods.cpp
* Creation date: April 11, 2005 01:39
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CSeasonalEventFloods'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:06 ReyBrujo, 2005
*     Updated code of method '~CSeasonalEventFloods'
*     Updated code of method 'CSeasonalEventFloods'
* April 12, 2005 22:43 ReyBrujo, 2005
*     Updated code of method 'CSeasonalEventFloods'
* April 12, 2005 18:40 ReyBrujo
*     Updated code of method 'CSeasonalEventFloods'
* April 12, 2005 18:23 ReyBrujo
*     Updated code of method 'CSeasonalEventFloods'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeasonalEventFloods'
*     Updated code of method 'CSeasonalEventFloods'
*     Updated inheritance 'CSeasonalEvent'
* April 11, 2005 01:59 ReyBrujo, 2005
*     Updated code of method 'CSeasonalEventFloods'
* April 11, 2005 01:42 ReyBrujo, 2005
*     Updated code of method 'CSeasonalEventFloods'
* April 11, 2005 01:40 ReyBrujo, 2005
*     Updated code of method 'CSeasonalEventFloods'
* April 11, 2005 01:39 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonalEventFloods'
*     Added method 'CSeasonalEventFloods'
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




/*@NOTE_526
Constructor method.
*/
CSeasonalEventFloods::CSeasonalEventFloods() //@INIT_526
    : CSeasonalEvent()
{//@CODE_526
    ConstructorInclude();

    // Put in your own code
    SetType(enEVENTTYPE_SEASONAL_FLOODS);

    m_pModifier->SetCityHealthModifier(CONST_FLOODS_HEALTH_MODIFIER);
    m_pModifier->SetCityPopulationModifier(CONST_FLOODS_POPULATION_MODIFIER);
    m_pModifier->SetCityCropValueModifier(CONST_FLOODS_CROP_VALUE_MODIFIER);
    m_pModifier->SetCityDefenseModifier(CONST_FLOODS_DEFENSE_MODIFIER);
    m_pModifier->SetUnitSoldierModifier(CONST_FLOODS_SOLDIER_MODIFIER);
    m_pModifier->SetUnitSpiritModifier(CONST_FLOODS_SPIRIT_MODIFIER);
}//@CODE_526


/*@NOTE_521
Destructor method.
*/
CSeasonalEventFloods::~CSeasonalEventFloods()
{//@CODE_521
    DestructorInclude();

    // Put in your own code
}//@CODE_521


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_522
Method which must be called first in a constructor.
*/
void CSeasonalEventFloods::ConstructorInclude()
{
}


/*@NOTE_523
Method which must be called first in a destructor.
*/
void CSeasonalEventFloods::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

/******************************************************************************\
*
* File:          ../../src/SeasonalEventForeignInvasion.cpp
* Creation date: April 11, 2005 01:59
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CSeasonalEventForeignInvasion'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:06 ReyBrujo, 2005
*     Updated code of method '~CSeasonalEventForeignInvasion'
*     Updated code of method 'CSeasonalEventForeignInvasion'
* April 12, 2005 18:42 ReyBrujo
*     Updated code of method 'CSeasonalEventForeignInvasion'
* April 12, 2005 18:40 ReyBrujo
*     Updated code of method 'CSeasonalEventForeignInvasion'
* April 12, 2005 18:23 ReyBrujo
*     Updated code of method 'CSeasonalEventForeignInvasion'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeasonalEventForeignInvasion'
*     Updated code of method 'CSeasonalEventForeignInvasion'
*     Updated inheritance 'CSeasonalEvent'
* April 11, 2005 01:59 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonalEventForeignInvasion'
*     Added method 'CSeasonalEventForeignInvasion'
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




/*@NOTE_554
Constructor method.
*/
CSeasonalEventForeignInvasion::CSeasonalEventForeignInvasion() //@INIT_554
    : CSeasonalEvent()
{//@CODE_554
    ConstructorInclude();

    // Put in your own code
    SetType(enEVENTTYPE_SEASONAL_FOREIGN_INVASION);

    m_pModifier->SetCityHealthModifier(CONST_FOREIGN_INVASION_HEALTH_MODIFIER);
    m_pModifier->SetCityGoldModifier(CONST_FOREIGN_INVASION_GOLD_MODIFIER);
    m_pModifier->SetCityFoodModifier(CONST_FOREIGN_INVASION_FOOD_MODIFIER);
    m_pModifier->SetCityPopulationModifier(CONST_FOREIGN_INVASION_POPULATION_MODIFIER);
    m_pModifier->SetCityCropValueModifier(CONST_FOREIGN_INVASION_CROP_VALUE_MODIFIER);
    m_pModifier->SetCityDefenseModifier(CONST_FOREIGN_INVASION_DEFENSE_MODIFIER);
    m_pModifier->SetUnitSoldierModifier(CONST_FOREIGN_INVASION_SOLDIER_MODIFIER);
}//@CODE_554


/*@NOTE_549
Destructor method.
*/
CSeasonalEventForeignInvasion::~CSeasonalEventForeignInvasion()
{//@CODE_549
    DestructorInclude();

    // Put in your own code
}//@CODE_549


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_550
Method which must be called first in a constructor.
*/
void CSeasonalEventForeignInvasion::ConstructorInclude()
{
}


/*@NOTE_551
Method which must be called first in a destructor.
*/
void CSeasonalEventForeignInvasion::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

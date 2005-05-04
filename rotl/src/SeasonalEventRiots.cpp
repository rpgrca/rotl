/******************************************************************************\
*
* File:          ../../src/SeasonalEventRiots.cpp
* Creation date: April 11, 2005 01:59
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CSeasonalEventRiots'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:06 ReyBrujo, 2005
*     Updated code of method '~CSeasonalEventRiots'
*     Updated code of method 'CSeasonalEventRiots'
* April 12, 2005 18:40 ReyBrujo
*     Updated code of method 'CSeasonalEventRiots'
* April 12, 2005 18:23 ReyBrujo
*     Updated code of method 'CSeasonalEventRiots'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeasonalEventRiots'
*     Updated code of method 'CSeasonalEventRiots'
*     Updated inheritance 'CSeasonalEvent'
* April 11, 2005 01:59 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonalEventRiots'
*     Added method 'CSeasonalEventRiots'
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




/*@NOTE_561
Constructor method.
*/
CSeasonalEventRiots::CSeasonalEventRiots() //@INIT_561
    : CSeasonalEvent()
{//@CODE_561
    ConstructorInclude();

    // Put in your own code
    SetType(enEVENTTYPE_SEASONAL_RIOTS);

    m_pModifier->SetCityHealthModifier(CONST_RIOTS_HEALTH_MODIFIER);
    m_pModifier->SetCityGoldModifier(CONST_RIOTS_GOLD_MODIFIER);
    m_pModifier->SetCityPopulationModifier(CONST_RIOTS_POPULATION_MODIFIER);
    m_pModifier->SetCityCropValueModifier(CONST_RIOTS_CROP_VALUE_MODIFIER);
    m_pModifier->SetCityDefenseModifier(CONST_RIOTS_DEFENSE_MODIFIER);
    m_pModifier->SetUnitSoldierModifier(CONST_RIOTS_SOLDIER_MODIFIER);
    m_pModifier->SetUnitSpiritModifier(CONST_RIOTS_SPIRIT_MODIFIER);
}//@CODE_561


/*@NOTE_556
Destructor method.
*/
CSeasonalEventRiots::~CSeasonalEventRiots()
{//@CODE_556
    DestructorInclude();

    // Put in your own code
}//@CODE_556


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_557
Method which must be called first in a constructor.
*/
void CSeasonalEventRiots::ConstructorInclude()
{
}


/*@NOTE_558
Method which must be called first in a destructor.
*/
void CSeasonalEventRiots::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

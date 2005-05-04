/******************************************************************************\
*
* File:          ../../src/SeasonalEventEarthquake.cpp
* Creation date: April 11, 2005 01:59
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CSeasonalEventEarthquake'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:06 ReyBrujo, 2005
*     Updated code of method '~CSeasonalEventEarthquake'
*     Updated code of method 'CSeasonalEventEarthquake'
* April 12, 2005 18:40 ReyBrujo
*     Updated code of method 'CSeasonalEventEarthquake'
* April 12, 2005 18:01 ReyBrujo
*     Updated code of method 'CSeasonalEventEarthquake'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeasonalEventEarthquake'
*     Updated code of method 'CSeasonalEventEarthquake'
*     Updated inheritance 'CSeasonalEvent'
* April 11, 2005 01:59 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonalEventEarthquake'
*     Added method 'CSeasonalEventEarthquake'
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




/*@NOTE_575
Constructor method.
*/
CSeasonalEventEarthquake::CSeasonalEventEarthquake() //@INIT_575
    : CSeasonalEvent()
{//@CODE_575
    ConstructorInclude();

    // Put in your own code
    SetType(enEVENTTYPE_SEASONAL_EARTHQUAKE);

    m_pModifier->SetCityHealthModifier(CONST_EARTHQUAKE_HEALTH_MODIFIER);
    m_pModifier->SetCityPopulationModifier(CONST_EARTHQUAKE_POPULATION_MODIFIER);
    m_pModifier->SetCityCropValueModifier(CONST_EARTHQUAKE_CROP_VALUE_MODIFIER);
    m_pModifier->SetCityDefenseModifier(CONST_EARTHQUAKE_DEFENSE_MODIFIER);
    m_pModifier->SetUnitSoldierModifier(CONST_EARTHQUAKE_SOLDIER_MODIFIER);
    m_pModifier->SetUnitSpiritModifier(CONST_EARTHQUAKE_SPIRIT_MODIFIER);
}//@CODE_575


/*@NOTE_570
Destructor method.
*/
CSeasonalEventEarthquake::~CSeasonalEventEarthquake()
{//@CODE_570
    DestructorInclude();

    // Put in your own code
}//@CODE_570


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_571
Method which must be called first in a constructor.
*/
void CSeasonalEventEarthquake::ConstructorInclude()
{
}


/*@NOTE_572
Method which must be called first in a destructor.
*/
void CSeasonalEventEarthquake::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

/******************************************************************************\
*
* File:          ../../src/SeasonalEventPlague.cpp
* Creation date: April 11, 2005 01:59
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CSeasonalEventPlague'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:06 ReyBrujo, 2005
*     Updated code of method '~CSeasonalEventPlague'
*     Updated code of method 'CSeasonalEventPlague'
* April 12, 2005 18:40 ReyBrujo
*     Updated code of method 'CSeasonalEventPlague'
* April 12, 2005 18:23 ReyBrujo
*     Updated code of method 'CSeasonalEventPlague'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeasonalEventPlague'
*     Updated code of method 'CSeasonalEventPlague'
*     Updated inheritance 'CSeasonalEvent'
* April 11, 2005 01:59 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonalEventPlague'
*     Added method 'CSeasonalEventPlague'
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




/*@NOTE_568
Constructor method.
*/
CSeasonalEventPlague::CSeasonalEventPlague() //@INIT_568
    : CSeasonalEvent()
{//@CODE_568
    ConstructorInclude();

    // Put in your own code
    SetType(enEVENTTYPE_SEASONAL_PLAGUE);

    m_pModifier->SetCityHealthModifier(CONST_PLAGUE_HEALTH_MODIFIER);
    m_pModifier->SetCityPopulationModifier(CONST_PLAGUE_POPULATION_MODIFIER);
    m_pModifier->SetUnitSoldierModifier(CONST_PLAGUE_SOLDIER_MODIFIER);
    m_pModifier->SetPersonStaminaModifier(CONST_PLAGUE_STAMINA_MODIFIER);
}//@CODE_568


/*@NOTE_563
Destructor method.
*/
CSeasonalEventPlague::~CSeasonalEventPlague()
{//@CODE_563
    DestructorInclude();

    // Put in your own code
}//@CODE_563


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_564
Method which must be called first in a constructor.
*/
void CSeasonalEventPlague::ConstructorInclude()
{
}


/*@NOTE_565
Method which must be called first in a destructor.
*/
void CSeasonalEventPlague::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

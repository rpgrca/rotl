/******************************************************************************\
*
* File:          ../../src/Modifier.cpp
* Creation date: April 12, 2005 17:39
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CModifier'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 23:05 ReyBrujo, 2005
*     Added method 'SetCityMaximunCropValue'
*     Added method 'GetCityMaximunCropValue'
*     Added inheritance 'CBase'
*     Added member 'm_fCityMaximunCropValue'
* April 12, 2005 22:41 ReyBrujo, 2005
*     Added method 'SetUnitGoldModifier'
*     Added method 'GetUnitGoldModifier'
*     Added method 'SetUnitFoodModifier'
*     Added method 'GetUnitFoodModifier'
*     Added method 'SetUnitArmsModifier'
*     Added method 'GetUnitArmsModifier'
*     Added method 'SetPersonExperienceModifier'
*     Added method 'GetPersonExperienceModifier'
*     Added method 'SetCitySupportModifier'
*     Added method 'GetCitySupportModifier'
*     Added method 'SetCityLoyaltyModifier'
*     Added method 'GetCityLoyaltyModifier'
*     Added member 'm_fPersonExperienceModifier'
*     Added member 'm_fUnitArmsModifier'
*     Added member 'm_fUnitFoodModifier'
*     Added member 'm_fUnitGoldModifier'
*     Added member 'm_fCitySupportModifier'
*     Added member 'm_fCityLoyaltyModifier'
*     Updated interface of method 'SetUnitSpiritModifier'
*     Updated code of method 'GetUnitSpiritModifier'
*     Updated interface of method 'SetUnitSoldierModifier'
*     Updated code of method 'GetUnitSoldierModifier'
*     Updated interface of method 'SetUnitDamageModifier'
*     Updated code of method 'GetUnitDamageModifier'
*     Updated interface of method 'SetUnitAttackModifier'
*     Updated code of method 'GetUnitAttackModifier'
*     Updated interface of method 'SetPersonStaminaModifier'
*     Updated code of method 'GetPersonStaminaModifier'
*     Updated interface of method 'SetCityPopulationModifier'
*     Updated code of method 'GetCityPopulationModifier'
*     Updated interface of method 'SetCityHealthModifier'
*     Updated code of method 'GetCityHealthModifier'
*     Updated interface of method 'SetCityGoldModifier'
*     Updated code of method 'GetCityGoldModifier'
*     Updated interface of method 'SetCityFoodModifier'
*     Updated code of method 'GetCityFoodModifier'
*     Updated interface of method 'SetCityDefenseModifier'
*     Updated code of method 'GetCityDefenseModifier'
*     Updated interface of method 'SetCityCropValueModifier'
*     Updated code of method 'GetCityCropValueModifier'
*     Updated member 'm_fUnitDamageModifier'
*     Updated member 'm_fUnitAttackModifier'
*     Updated member 'm_fPersonStaminaModifier'
*     Updated member 'm_fUnitSpiritModifier'
*     Updated member 'm_fUnitSoldierModifier'
*     Updated member 'm_fCityPopulationModifier'
*     Updated member 'm_fCityHealthModifier'
*     Updated member 'm_fCityGoldModifier'
*     Updated member 'm_fCityFoodModifier'
*     Updated member 'm_fCityDefenseModifier'
*     Updated member 'm_fCityCropValueModifier'
* April 12, 2005 18:15 ReyBrujo
*     Added method 'SetDamageModifier'
*     Added method 'GetDamageModifier'
*     Added member 'm_fDamageModifier'
* April 12, 2005 18:06 ReyBrujo
*     Added method 'SetAttackModifier'
*     Added method 'GetAttackModifier'
*     Added member 'm_fAttackModifier'
* April 12, 2005 17:39 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'GetStaminaModifier'
*     Added method 'GetSpiritModifier'
*     Added method 'GetSoldierModifier'
*     Added method 'GetPopulationModifier'
*     Added method 'GetHealthModifier'
*     Added method 'GetGoldModifier'
*     Added method 'GetFoodModifier'
*     Added method 'GetDefenseModifier'
*     Added method 'GetCropValueModifier'
*     Added method '~CModifier'
*     Added method 'CModifier'
*     Added member 'm_fStaminaModifier'
*     Added member 'm_fSpiritModifier'
*     Added member 'm_fSoldierModifier'
*     Added member 'm_fPopulationModifier'
*     Added member 'm_fHealthModifier'
*     Added member 'm_fGoldModifier'
*     Added member 'm_fFoodModifier'
*     Added member 'm_fDefenseModifier'
*     Added member 'm_fCropValueModifier'
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




/*@NOTE_1005
Constructor method.
*/
CModifier::CModifier() //@INIT_1005
    : m_fCityCropValueModifier(1.0)
    , m_fCityDefenseModifier(1.0)
    , m_fCityFoodModifier(1.0)
    , m_fCityGoldModifier(1.0)
    , m_fCityHealthModifier(1.0)
    , m_fCityPopulationModifier(1.0)
    , m_fUnitSoldierModifier(1.0)
    , m_fUnitSpiritModifier(1.0)
    , m_fPersonStaminaModifier(1.0)
    , m_fUnitAttackModifier(1.0)
    , m_fUnitDamageModifier(1.0)
    , m_fCityLoyaltyModifier(1.0)
    , m_fCitySupportModifier(1.0)
    , m_fUnitGoldModifier(1.0)
    , m_fUnitFoodModifier(1.0)
    , m_fUnitArmsModifier(1.0)
    , m_fPersonExperienceModifier(1.0)
    , m_fCityMaximunCropValue(1.0)
{//@CODE_1005
    ConstructorInclude();

    // Put in your own code
}//@CODE_1005


/*@NOTE_1001
Destructor method.
*/
CModifier::~CModifier()
{//@CODE_1001
    DestructorInclude();

    // Put in your own code
}//@CODE_1001


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1002
Method which must be called first in a constructor.
*/
void CModifier::ConstructorInclude()
{
}


/*@NOTE_1003
Method which must be called first in a destructor.
*/
void CModifier::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

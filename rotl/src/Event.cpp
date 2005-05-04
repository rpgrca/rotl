/******************************************************************************\
*
* File:          ../../src/Event.cpp
* Creation date: April 10, 2005 21:54
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CEvent'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 18:41 ReyBrujo
*     Updated code of method 'CEvent'
* April 12, 2005 18:40 ReyBrujo
*     Added method 'SetType'
*     Added method 'GetType'
*     Added member 'm_eType'
* April 12, 2005 18:00 ReyBrujo
*     Updated code of method 'CEvent'
* April 12, 2005 17:51 ReyBrujo
*     Updated code of method 'GetModifier'
*     Updated code of method '~CEvent'
* April 12, 2005 17:45 ReyBrujo
*     Updated code of method '~CEvent'
* April 12, 2005 17:39 ReyBrujo
*     Deleted method 'GetCropValueModifier'
*     Deleted member 'm_fCropValueModifier'
*     Deleted method 'GetDefenseModifier'
*     Deleted member 'm_fDefenseModifier'
*     Deleted method 'GetFoodModifier'
*     Deleted member 'm_fFoodModifier'
*     Deleted method 'GetGoldModifier'
*     Deleted member 'm_fGoldModifier'
*     Deleted method 'GetHealthModifier'
*     Deleted member 'm_fHealthModifier'
*     Deleted method 'GetPopulationModifier'
*     Deleted member 'm_fPopulationModifier'
*     Deleted method 'GetSoldierModifier'
*     Deleted member 'm_fSoldierModifier'
*     Deleted method 'GetSpiritModifier'
*     Deleted member 'm_fSpiritModifier'
*     Deleted method 'GetStaminaModifier'
*     Deleted member 'm_fStaminaModifier'
*     Added method 'GetModifier'
*     Added member 'm_pModifier'
*     Updated code of method 'CEvent'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method 'GetStaminaModifier'
*     Updated code of method 'GetSpiritModifier'
*     Updated code of method 'GetSoldierModifier'
*     Updated code of method 'GetPopulationModifier'
*     Updated code of method 'GetHealthModifier'
*     Updated code of method 'GetGoldModifier'
*     Updated code of method 'GetFoodModifier'
*     Updated code of method 'GetDefenseModifier'
*     Updated code of method 'GetCropValueModifier'
*     Updated code of method '~CEvent'
*     Updated code of method 'CEvent'
*     Updated inheritance 'CBase'
*     Updated member 'm_fStaminaModifier'
*     Updated member 'm_fFoodModifier'
*     Updated member 'm_fGoldModifier'
*     Updated member 'm_fSoldierModifier'
*     Updated member 'm_fDefenseModifier'
*     Updated member 'm_fCropValueModifier'
*     Updated member 'm_fHealthModifier'
*     Updated member 'm_fPopulationModifier'
*     Updated member 'm_fSpiritModifier'
* April 11, 2005 01:30 ReyBrujo, 2005
*     Added method 'GetStaminaModifier'
*     Added method 'GetSoldierModifier'
*     Added method 'GetPopulationModifier'
*     Added method 'GetHealthModifier'
*     Added method 'GetGoldModifier'
*     Added method 'GetFoodModifier'
*     Added method 'GetDefenseModifier'
*     Added method 'GetCropValueModifier'
*     Added member 'm_fStaminaModifier'
*     Added member 'm_fFoodModifier'
*     Added member 'm_fGoldModifier'
*     Added member 'm_fSoldierModifier'
*     Added member 'm_fDefenseModifier'
*     Added member 'm_fCropValueModifier'
*     Added member 'm_fHealthModifier'
*     Added member 'm_fPopulationModifier'
* April 11, 2005 00:09 ReyBrujo, 2005
*     Added method 'GetSpiritModifier'
*     Updated member 'm_fSpiritModifier'
* April 10, 2005 21:54 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CEvent'
*     Added method 'CEvent'
*     Added inheritance 'CBase'
*     Added member 'm_fSpirit'
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




/*@NOTE_389
Constructor method.
*/
CEvent::CEvent() //@INIT_389
    : CBase()
    , m_eType(enEVENTTYPE_SEASONAL_BLIZZARD)
    , m_pModifier(NULL)
{//@CODE_389
    ConstructorInclude();

    // Put in your own code
    m_pModifier = new CModifier;
}//@CODE_389


/*@NOTE_385
Destructor method.
*/
CEvent::~CEvent()
{//@CODE_385
    DestructorInclude();

    // Put in your own code
    if (m_pModifier != NULL) {
        delete m_pModifier;
        m_pModifier = NULL;
    }
}//@CODE_385


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_386
Method which must be called first in a constructor.
*/
void CEvent::ConstructorInclude()
{
}


/*@NOTE_387
Method which must be called first in a destructor.
*/
void CEvent::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

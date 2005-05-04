/******************************************************************************\
*
* File:          ../../src/SeasonalEventHarvest.cpp
* Creation date: April 11, 2005 01:59
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CSeasonalEventHarvest'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:06 ReyBrujo, 2005
*     Updated code of method '~CSeasonalEventHarvest'
*     Updated code of method 'CSeasonalEventHarvest'
* April 12, 2005 18:40 ReyBrujo
*     Updated code of method 'CSeasonalEventHarvest'
* April 12, 2005 18:23 ReyBrujo
*     Updated code of method 'CSeasonalEventHarvest'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeasonalEventHarvest'
*     Updated code of method 'CSeasonalEventHarvest'
*     Updated inheritance 'CSeasonalEvent'
* April 11, 2005 01:59 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonalEventHarvest'
*     Added method 'CSeasonalEventHarvest'
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




/*@NOTE_540
Constructor method.
*/
CSeasonalEventHarvest::CSeasonalEventHarvest() //@INIT_540
    : CSeasonalEvent()
{//@CODE_540
    ConstructorInclude();

    // Put in your own code
    SetType(enEVENTTYPE_SEASONAL_HARVEST);

    m_pModifier->SetCityGoldModifier(CONST_HARVEST_GOLD_MODIFIER);
    m_pModifier->SetCityFoodModifier(CONST_HARVEST_FOOD_MODIFIER);
}//@CODE_540


/*@NOTE_535
Destructor method.
*/
CSeasonalEventHarvest::~CSeasonalEventHarvest()
{//@CODE_535
    DestructorInclude();

    // Put in your own code
}//@CODE_535


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_536
Method which must be called first in a constructor.
*/
void CSeasonalEventHarvest::ConstructorInclude()
{
}


/*@NOTE_537
Method which must be called first in a destructor.
*/
void CSeasonalEventHarvest::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

/******************************************************************************\
*
* File:          ../../src/SeasonalEventSandStorm.cpp
* Creation date: April 11, 2005 01:39
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CSeasonalEventSandStorm'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:06 ReyBrujo, 2005
*     Updated code of method '~CSeasonalEventSandStorm'
*     Updated code of method 'CSeasonalEventSandStorm'
* April 12, 2005 18:43 ReyBrujo
*     Updated code of method 'CSeasonalEventSandStorm'
* April 12, 2005 18:40 ReyBrujo
*     Updated code of method 'CSeasonalEventSandStorm'
* April 12, 2005 18:23 ReyBrujo
*     Updated code of method 'CSeasonalEventSandStorm'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeasonalEventSandStorm'
*     Updated code of method 'CSeasonalEventSandStorm'
*     Updated inheritance 'CSeasonalEvent'
* April 11, 2005 02:00 ReyBrujo, 2005
*     Updated code of method 'CSeasonalEventSandStorm'
* April 11, 2005 01:39 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonalEventSandStorm'
*     Added method 'CSeasonalEventSandStorm'
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




/*@NOTE_511
Constructor method.
*/
CSeasonalEventSandStorm::CSeasonalEventSandStorm() //@INIT_511
    : CSeasonalEvent()
{//@CODE_511
    ConstructorInclude();

    // Put in your own code
    SetType(enEVENTTYPE_SEASONAL_SAND_STORM);

    m_pModifier->SetCityPopulationModifier(CONST_SAND_STORM_POPULATION_MODIFIER);
    m_pModifier->SetUnitSpiritModifier(CONST_SAND_STORM_SPIRIT_MODIFIER);
}//@CODE_511


/*@NOTE_507
Destructor method.
*/
CSeasonalEventSandStorm::~CSeasonalEventSandStorm()
{//@CODE_507
    DestructorInclude();

    // Put in your own code
}//@CODE_507


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_508
Method which must be called first in a constructor.
*/
void CSeasonalEventSandStorm::ConstructorInclude()
{
}


/*@NOTE_509
Method which must be called first in a destructor.
*/
void CSeasonalEventSandStorm::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

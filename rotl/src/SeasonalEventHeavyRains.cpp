/******************************************************************************\
*
* File:          ../../src/SeasonalEventHeavyRains.cpp
* Creation date: April 11, 2005 01:39
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CSeasonalEventHeavyRains'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:06 ReyBrujo, 2005
*     Updated code of method '~CSeasonalEventHeavyRains'
*     Updated code of method 'CSeasonalEventHeavyRains'
* April 12, 2005 18:43 ReyBrujo
*     Updated code of method 'CSeasonalEventHeavyRains'
* April 12, 2005 18:40 ReyBrujo
*     Updated code of method 'CSeasonalEventHeavyRains'
* April 12, 2005 18:23 ReyBrujo
*     Updated code of method 'CSeasonalEventHeavyRains'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeasonalEventHeavyRains'
*     Updated code of method 'CSeasonalEventHeavyRains'
*     Updated inheritance 'CSeasonalEvent'
* April 11, 2005 01:39 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonalEventHeavyRains'
*     Added method 'CSeasonalEventHeavyRains'
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




/*@NOTE_518
Constructor method.
*/
CSeasonalEventHeavyRains::CSeasonalEventHeavyRains() //@INIT_518
    : CSeasonalEvent()
{//@CODE_518
    ConstructorInclude();

    // Put in your own code
    SetType(enEVENTTYPE_SEASONAL_HEAVY_RAINS);

    m_pModifier->SetUnitSpiritModifier(CONST_HEAVY_RAINS_SPIRIT_MODIFIER);
}//@CODE_518


/*@NOTE_514
Destructor method.
*/
CSeasonalEventHeavyRains::~CSeasonalEventHeavyRains()
{//@CODE_514
    DestructorInclude();

    // Put in your own code
}//@CODE_514


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_515
Method which must be called first in a constructor.
*/
void CSeasonalEventHeavyRains::ConstructorInclude()
{
}


/*@NOTE_516
Method which must be called first in a destructor.
*/
void CSeasonalEventHeavyRains::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

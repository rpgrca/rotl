/******************************************************************************\
*
* File:          ../../src/SeasonalEventDrought.cpp
* Creation date: April 11, 2005 01:59
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CSeasonalEventDrought'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:06 ReyBrujo, 2005
*     Updated code of method '~CSeasonalEventDrought'
*     Updated code of method 'CSeasonalEventDrought'
* April 12, 2005 18:40 ReyBrujo
*     Updated code of method 'CSeasonalEventDrought'
* April 12, 2005 18:00 ReyBrujo
*     Updated code of method 'CSeasonalEventDrought'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeasonalEventDrought'
*     Updated code of method 'CSeasonalEventDrought'
*     Updated inheritance 'CSeasonalEvent'
* April 11, 2005 01:59 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonalEventDrought'
*     Added method 'CSeasonalEventDrought'
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




/*@NOTE_533
Constructor method.
*/
CSeasonalEventDrought::CSeasonalEventDrought() //@INIT_533
    : CSeasonalEvent()
{//@CODE_533
    ConstructorInclude();

    // Put in your own code
    SetType(enEVENTTYPE_SEASONAL_DROUGHT);

    m_pModifier->SetUnitSpiritModifier(CONST_DROUGHT_SPIRIT_MODIFIER);
    m_pModifier->SetCityCropValueModifier(CONST_DROUGHT_CROP_VALUE_MODIFIER);
}//@CODE_533


/*@NOTE_528
Destructor method.
*/
CSeasonalEventDrought::~CSeasonalEventDrought()
{//@CODE_528
    DestructorInclude();

    // Put in your own code
}//@CODE_528


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_529
Method which must be called first in a constructor.
*/
void CSeasonalEventDrought::ConstructorInclude()
{
}


/*@NOTE_530
Method which must be called first in a destructor.
*/
void CSeasonalEventDrought::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

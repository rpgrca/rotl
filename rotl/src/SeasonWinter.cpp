/******************************************************************************\
*
* File:          ../../src/SeasonWinter.cpp
* Creation date: April 11, 2005 16:55
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CSeasonWinter'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 23:20 ReyBrujo, 2005
*     Updated code of method 'CSeasonWinter'
* April 17, 2005 11:31 ReyBrujo, 2005
*     Updated code of method 'CSeasonWinter'
* April 16, 2005 02:11 ReyBrujo, 2005
*     Updated code of method '~CSeasonWinter'
*     Updated code of method 'CSeasonWinter'
* April 13, 2005 17:12 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeasonWinter'
*     Updated code of method 'CSeasonWinter'
*     Updated inheritance 'CSeason'
* April 12, 2005 23:05 ReyBrujo, 2005
*     Updated code of method 'CSeasonWinter'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeasonWinter'
*     Updated code of method 'CSeasonWinter'
*     Updated inheritance 'CSeason'
* April 11, 2005 16:55 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonWinter'
*     Added method 'CSeasonWinter'
*     Added inheritance 'CSeason'
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




/*@NOTE_746
Constructor method.
*/
CSeasonWinter::CSeasonWinter() //@INIT_746
    : CSeason()
{//@CODE_746
    ConstructorInclude();

    // Put in your own code
    SetName("Winter");
    SetType(enSEASONTYPE_WINTER);
    SetWeekendGoldModifier(CONST_SEASON_WINTER_GOLD_MODIFIER);
    SetWeekendFoodModifier(CONST_SEASON_WINTER_FOOD_MODIFIER);

    m_nWeatherProbability[enWEATHERTYPE_SUNNY] = 10;
    m_nWeatherProbability[enWEATHERTYPE_RAIN] = 30;
    m_nWeatherProbability[enWEATHERTYPE_SNOW] = 60;
}//@CODE_746


/*@NOTE_741
Destructor method.
*/
CSeasonWinter::~CSeasonWinter()
{//@CODE_741
    DestructorInclude();

    // Put in your own code
}//@CODE_741


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_742
Method which must be called first in a constructor.
*/
void CSeasonWinter::ConstructorInclude()
{
}


/*@NOTE_743
Method which must be called first in a destructor.
*/
void CSeasonWinter::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

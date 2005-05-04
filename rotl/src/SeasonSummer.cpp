/******************************************************************************\
*
* File:          ../../src/SeasonSummer.cpp
* Creation date: April 11, 2005 16:55
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CSeasonSummer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 23:20 ReyBrujo, 2005
*     Updated code of method 'CSeasonSummer'
* April 17, 2005 11:31 ReyBrujo, 2005
*     Updated code of method 'CSeasonSummer'
* April 16, 2005 02:11 ReyBrujo, 2005
*     Updated code of method '~CSeasonSummer'
*     Updated code of method 'CSeasonSummer'
* April 13, 2005 17:12 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeasonSummer'
*     Updated code of method 'CSeasonSummer'
*     Updated inheritance 'CSeason'
* April 12, 2005 23:05 ReyBrujo, 2005
*     Updated code of method 'CSeasonSummer'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeasonSummer'
*     Updated code of method 'CSeasonSummer'
*     Updated inheritance 'CSeason'
* April 11, 2005 16:55 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonSummer'
*     Added method 'CSeasonSummer'
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




/*@NOTE_732
Constructor method.
*/
CSeasonSummer::CSeasonSummer() //@INIT_732
    : CSeason()
{//@CODE_732
    ConstructorInclude();

    // Put in your own code
    SetName("Summer");
    SetType(enSEASONTYPE_SUMMER);
    SetWeekendGoldModifier(CONST_SEASON_SUMMER_GOLD_MODIFIER);
    SetWeekendFoodModifier(CONST_SEASON_SUMMER_FOOD_MODIFIER);

    m_nWeatherProbability[enWEATHERTYPE_SUNNY] = 95;
    m_nWeatherProbability[enWEATHERTYPE_RAIN] = 5;
    m_nWeatherProbability[enWEATHERTYPE_SNOW] = 0;
}//@CODE_732


/*@NOTE_727
Destructor method.
*/
CSeasonSummer::~CSeasonSummer()
{//@CODE_727
    DestructorInclude();

    // Put in your own code
}//@CODE_727


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_728
Method which must be called first in a constructor.
*/
void CSeasonSummer::ConstructorInclude()
{
}


/*@NOTE_729
Method which must be called first in a destructor.
*/
void CSeasonSummer::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

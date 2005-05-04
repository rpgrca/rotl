/******************************************************************************\
*
* File:          ../../src/SeasonAutumn.cpp
* Creation date: April 11, 2005 16:55
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CSeasonAutumn'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 23:20 ReyBrujo, 2005
*     Updated code of method 'CSeasonAutumn'
* April 17, 2005 11:31 ReyBrujo, 2005
*     Updated code of method 'CSeasonAutumn'
* April 16, 2005 02:11 ReyBrujo, 2005
*     Updated code of method '~CSeasonAutumn'
*     Updated code of method 'CSeasonAutumn'
* April 13, 2005 17:12 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeasonAutumn'
*     Updated code of method 'CSeasonAutumn'
*     Updated inheritance 'CSeason'
* April 12, 2005 23:05 ReyBrujo, 2005
*     Updated code of method 'CSeasonAutumn'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeasonAutumn'
*     Updated code of method 'CSeasonAutumn'
*     Updated inheritance 'CSeason'
* April 11, 2005 16:55 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonAutumn'
*     Added method 'CSeasonAutumn'
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




/*@NOTE_739
Constructor method.
*/
CSeasonAutumn::CSeasonAutumn() //@INIT_739
    : CSeason()
{//@CODE_739
    ConstructorInclude();

    // Put in your own code
    SetName("Autumn");
    SetType(enSEASONTYPE_AUTUMN);
    SetWeekendGoldModifier(CONST_SEASON_AUTUMN_GOLD_MODIFIER);
    SetWeekendFoodModifier(CONST_SEASON_AUTUMN_FOOD_MODIFIER);

    m_nWeatherProbability[enWEATHERTYPE_SUNNY] = 20;
    m_nWeatherProbability[enWEATHERTYPE_RAIN] = 75;
    m_nWeatherProbability[enWEATHERTYPE_SNOW] = 5;
}//@CODE_739


/*@NOTE_734
Destructor method.
*/
CSeasonAutumn::~CSeasonAutumn()
{//@CODE_734
    DestructorInclude();

    // Put in your own code
}//@CODE_734


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_735
Method which must be called first in a constructor.
*/
void CSeasonAutumn::ConstructorInclude()
{
}


/*@NOTE_736
Method which must be called first in a destructor.
*/
void CSeasonAutumn::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

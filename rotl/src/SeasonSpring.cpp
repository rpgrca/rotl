/******************************************************************************\
*
* File:          ../../src/SeasonSpring.cpp
* Creation date: April 11, 2005 16:55
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CSeasonSpring'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 23:20 ReyBrujo, 2005
*     Updated code of method 'CSeasonSpring'
* April 17, 2005 11:31 ReyBrujo, 2005
*     Updated code of method 'CSeasonSpring'
* April 16, 2005 02:11 ReyBrujo, 2005
*     Updated code of method '~CSeasonSpring'
*     Updated code of method 'CSeasonSpring'
* April 13, 2005 17:12 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeasonSpring'
*     Updated code of method 'CSeasonSpring'
*     Updated inheritance 'CSeason'
* April 12, 2005 23:05 ReyBrujo, 2005
*     Updated code of method 'CSeasonSpring'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeasonSpring'
*     Updated code of method 'CSeasonSpring'
*     Updated inheritance 'CSeason'
* April 11, 2005 16:55 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonSpring'
*     Added method 'CSeasonSpring'
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




/*@NOTE_753
Constructor method.
*/
CSeasonSpring::CSeasonSpring() //@INIT_753
    : CSeason()
{//@CODE_753
    ConstructorInclude();

    // Put in your own code
    SetName("Spring");
    SetType(enSEASONTYPE_SPRING);
    SetWeekendGoldModifier(CONST_SEASON_SPRING_GOLD_MODIFIER);
    SetWeekendFoodModifier(CONST_SEASON_SPRING_FOOD_MODIFIER);

    m_nWeatherProbability[enWEATHERTYPE_SUNNY] = 80;
    m_nWeatherProbability[enWEATHERTYPE_RAIN] = 19;
    m_nWeatherProbability[enWEATHERTYPE_SNOW] = 1;
}//@CODE_753


/*@NOTE_748
Destructor method.
*/
CSeasonSpring::~CSeasonSpring()
{//@CODE_748
    DestructorInclude();

    // Put in your own code
}//@CODE_748


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_749
Method which must be called first in a constructor.
*/
void CSeasonSpring::ConstructorInclude()
{
}


/*@NOTE_750
Method which must be called first in a destructor.
*/
void CSeasonSpring::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

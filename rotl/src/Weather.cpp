/******************************************************************************\
*
* File:          ../../src/Weather.cpp
* Creation date: April 10, 2005 21:24
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CWeather'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 23:08 ReyBrujo, 2005
*     Updated code of method 'CWeather'
* April 12, 2005 23:05 ReyBrujo, 2005
*     Added method 'SetType'
*     Added method 'GetType'
*     Added member 'm_eType'
* April 12, 2005 18:26 ReyBrujo
*     Added method 'GetModifier'
*     Added member 'm_pModifier'
*     Updated code of method '~CWeather'
*     Updated code of method 'CWeather'
* April 12, 2005 17:45 ReyBrujo
*     Deleted inheritance 'CEnvironment'
*     Added inheritance 'CBase'
* April 11, 2005 03:15 ReyBrujo, 2005
*     Updated code of method 'CWeather'
* April 10, 2005 21:54 ReyBrujo
*     Updated code of method 'ConstructorInclude'
*     Updated code of method 'CWeather'
* April 10, 2005 21:42 ReyBrujo
*     Updated code of method 'CWeather'
* April 10, 2005 21:38 ReyBrujo
*     Updated code of method 'CWeather'
* April 10, 2005 21:24 ReyBrujo
*     Added method 'CWeather'
* April 10, 2005 21:24 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CWeather'
*     Added inheritance 'CEnvironment'
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




/*@NOTE_343
Constructor method.
*/
CWeather::CWeather() //@INIT_343
    : m_eType(enWEATHERTYPE_RAIN)
    , m_pModifier(NULL)
{//@CODE_343
    ConstructorInclude();

    m_pModifier = new CModifier;
}//@CODE_343


/*@NOTE_304
Destructor method.
*/
CWeather::~CWeather()
{//@CODE_304
    DestructorInclude();

    // Put in your own code
    if (m_pModifier != NULL) {
        delete m_pModifier;
        m_pModifier = NULL;
    }
}//@CODE_304


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_305
Method which must be called first in a constructor.
*/
void CWeather::ConstructorInclude()
{
}


/*@NOTE_306
Method which must be called first in a destructor.
*/
void CWeather::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

/******************************************************************************\
*
* File:          ../../src/WeatherRenderer.cpp
* Creation date: April 17, 2005 11:56
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CWeatherRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 16:56 ReyBrujo, 2005
*     Updated code of method '~CWeatherRenderer'
* April 17, 2005 11:56 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetWeather'
*     Added method '~CWeatherRenderer'
*     Added method 'CWeatherRenderer'
*     Added inheritance 'CRenderer'
*     Added member 'm_pWeather'
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




/*@NOTE_2276
Constructor method.
*/
CWeatherRenderer::CWeatherRenderer() //@INIT_2276
    : m_pWeather(NULL)
{//@CODE_2276
    ConstructorInclude();

    // Put in your own code
}//@CODE_2276


/*@NOTE_2269
Destructor method.
*/
CWeatherRenderer::~CWeatherRenderer()
{//@CODE_2269
    DestructorInclude();

    // Put in your own code
    m_pWeather = NULL;
}//@CODE_2269


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_2270
Method which must be called first in a constructor.
*/
void CWeatherRenderer::ConstructorInclude()
{
}


/*@NOTE_2271
Method which must be called first in a destructor.
*/
void CWeatherRenderer::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

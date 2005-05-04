/******************************************************************************\
*
* File:          ../../src/WeatherTextRenderer.cpp
* Creation date: April 17, 2005 11:56
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CWeatherTextRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 23:20 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 17, 2005 11:56 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Draw'
*     Added method '~CWeatherTextRenderer'
*     Added method 'CWeatherTextRenderer'
*     Added inheritance 'CWeatherRenderer'
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




/*@NOTE_2284
Constructor method.
*/
CWeatherTextRenderer::CWeatherTextRenderer() //@INIT_2284
    : CWeatherRenderer()
{//@CODE_2284
    ConstructorInclude();

    // Put in your own code
}//@CODE_2284


/*@NOTE_2279
Destructor method.
*/
CWeatherTextRenderer::~CWeatherTextRenderer()
{//@CODE_2279
    DestructorInclude();

    // Put in your own code
}//@CODE_2279


/*@NOTE_2285
This method must be overloaded in derived classes in order to draw onto screen.
*/
void CWeatherTextRenderer::Draw()
{//@CODE_2285
    enWeatherType eType;
    const char *weather_to_string[] = {
        "raining",
        "snowing",
        "sunny"
    };

    eType = m_pWeather->GetType();
    printf("It is currently a %s day.\n\n", weather_to_string[eType]);
}//@CODE_2285


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_2280
Method which must be called first in a constructor.
*/
void CWeatherTextRenderer::ConstructorInclude()
{
}


/*@NOTE_2281
Method which must be called first in a destructor.
*/
void CWeatherTextRenderer::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

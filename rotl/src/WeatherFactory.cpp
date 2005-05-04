/******************************************************************************\
*
* File:          ../../src/WeatherFactory.cpp
* Creation date: April 10, 2005 21:54
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CWeatherFactory'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 10, 2005 23:00 ReyBrujo
*     Updated code of method 'Create'
* April 10, 2005 21:54 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Generate'
*     Added method '~CWeatherFactory'
*     Added method 'CWeatherFactory'
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




/*@NOTE_383
Constructor method.
*/
CWeatherFactory::CWeatherFactory() //@INIT_383
{//@CODE_383
    ConstructorInclude();

    // Put in your own code
}//@CODE_383


/*@NOTE_376
Destructor method.
*/
CWeatherFactory::~CWeatherFactory()
{//@CODE_376
    DestructorInclude();

    // Put in your own code
}//@CODE_376


/*@NOTE_380
Generates the asked weather.
*/
CWeather* CWeatherFactory::Create(const enWeatherType eWeather) const
{//@CODE_380
    CWeather* pWeather = NULL;

    switch (eWeather) {
        case enWEATHERTYPE_RAIN:
            pWeather = new CWeatherRain;
            break;

        case enWEATHERTYPE_SNOW:
            pWeather = new CWeatherSnow;
            break;

        case enWEATHERTYPE_SUNNY:
            pWeather = new CWeatherSunny;
            break;
    }

    return (pWeather);
}//@CODE_380


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_377
Method which must be called first in a constructor.
*/
void CWeatherFactory::ConstructorInclude()
{
}


/*@NOTE_378
Method which must be called first in a destructor.
*/
void CWeatherFactory::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

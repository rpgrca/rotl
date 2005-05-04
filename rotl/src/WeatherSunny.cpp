/******************************************************************************\
*
* File:          ../../src/WeatherSunny.cpp
* Creation date: April 10, 2005 21:24
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CWeatherSunny'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:11 ReyBrujo, 2005
*     Updated code of method '~CWeatherSunny'
*     Updated code of method 'CWeatherSunny'
* April 12, 2005 23:05 ReyBrujo, 2005
*     Updated code of method 'CWeatherSunny'
* April 12, 2005 22:50 ReyBrujo, 2005
*     Updated code of method 'CWeatherSunny'
* April 12, 2005 18:26 ReyBrujo
*     Updated code of method 'CWeatherSunny'
* April 11, 2005 03:15 ReyBrujo, 2005
*     Updated code of method 'CWeatherSunny'
* April 10, 2005 21:38 ReyBrujo
*     Updated code of method 'CWeatherSunny'
* April 10, 2005 21:24 ReyBrujo
*     Added method 'CWeatherSunny'
* April 10, 2005 21:24 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'GetDefenseModifier'
*     Added method 'GetAttackModifier'
*     Added method '~CWeatherSunny'
*     Added inheritance 'CWeather'
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




/*@NOTE_346
Constructor method.
*/
CWeatherSunny::CWeatherSunny() //@INIT_346
    : CWeather()
{//@CODE_346
    ConstructorInclude();

    // Put in your own code
    SetName("Sunny day");
    SetType(enWEATHERTYPE_SUNNY);

    m_pModifier->SetUnitAttackModifier(CONST_WEATHER_ATTACK_MODIFIER_SUNNY);
    m_pModifier->SetCityDefenseModifier(CONST_WEATHER_DEFENSE_MODIFIER_SUNNY);
}//@CODE_346


/*@NOTE_338
Destructor method.
*/
CWeatherSunny::~CWeatherSunny()
{//@CODE_338
    DestructorInclude();

    // Put in your own code
}//@CODE_338


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_339
Method which must be called first in a constructor.
*/
void CWeatherSunny::ConstructorInclude()
{
}


/*@NOTE_340
Method which must be called first in a destructor.
*/
void CWeatherSunny::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

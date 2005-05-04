/******************************************************************************\
*
* File:          ../../src/WeatherRain.cpp
* Creation date: April 10, 2005 21:24
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CWeatherRain'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:11 ReyBrujo, 2005
*     Updated code of method '~CWeatherRain'
*     Updated code of method 'CWeatherRain'
* April 12, 2005 23:05 ReyBrujo, 2005
*     Updated code of method 'CWeatherRain'
* April 12, 2005 22:48 ReyBrujo, 2005
*     Updated code of method 'CWeatherRain'
* April 12, 2005 18:26 ReyBrujo
*     Updated code of method 'CWeatherRain'
* April 11, 2005 03:15 ReyBrujo, 2005
*     Updated code of method 'CWeatherRain'
* April 10, 2005 21:38 ReyBrujo
*     Updated code of method 'CWeatherRain'
* April 10, 2005 21:24 ReyBrujo
*     Added method 'CWeatherRain'
* April 10, 2005 21:24 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'GetDefenseModifier'
*     Added method 'GetAttackModifier'
*     Added method '~CWeatherRain'
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




/*@NOTE_344
Constructor method.
*/
CWeatherRain::CWeatherRain() //@INIT_344
    : CWeather()
{//@CODE_344
    ConstructorInclude();

    // Put in your own code
    SetName("Rainy day");
    SetType(enWEATHERTYPE_RAIN);

    m_pModifier->SetUnitAttackModifier(CONST_WEATHER_ATTACK_MODIFIER_RAIN);
    m_pModifier->SetCityDefenseModifier(CONST_WEATHER_DEFENSE_MODIFIER_RAIN);
}//@CODE_344


/*@NOTE_309
Destructor method.
*/
CWeatherRain::~CWeatherRain()
{//@CODE_309
    DestructorInclude();

    // Put in your own code
}//@CODE_309


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_310
Method which must be called first in a constructor.
*/
void CWeatherRain::ConstructorInclude()
{
}


/*@NOTE_311
Method which must be called first in a destructor.
*/
void CWeatherRain::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

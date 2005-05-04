/******************************************************************************\
*
* File:          ../../src/WeatherSnow.cpp
* Creation date: April 10, 2005 21:24
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CWeatherSnow'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:11 ReyBrujo, 2005
*     Updated code of method '~CWeatherSnow'
*     Updated code of method 'CWeatherSnow'
* April 12, 2005 23:05 ReyBrujo, 2005
*     Updated code of method 'CWeatherSnow'
* April 12, 2005 22:49 ReyBrujo, 2005
*     Updated code of method 'CWeatherSnow'
* April 12, 2005 18:26 ReyBrujo
*     Updated code of method 'CWeatherSnow'
* April 11, 2005 03:15 ReyBrujo, 2005
*     Updated code of method 'CWeatherSnow'
* April 10, 2005 21:54 ReyBrujo
*     Updated code of method 'CWeatherSnow'
* April 10, 2005 21:38 ReyBrujo
*     Updated code of method 'CWeatherSnow'
* April 10, 2005 21:24 ReyBrujo
*     Added method 'CWeatherSnow'
* April 10, 2005 21:24 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'GetDefenseModifier'
*     Added method 'GetAttackModifier'
*     Added method '~CWeatherSnow'
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




/*@NOTE_345
Constructor method.
*/
CWeatherSnow::CWeatherSnow() //@INIT_345
    : CWeather()
{//@CODE_345
    ConstructorInclude();

    // Put in your own code
    SetName("Snow day");
    SetType(enWEATHERTYPE_SNOW);

    m_pModifier->SetUnitAttackModifier(CONST_WEATHER_ATTACK_MODIFIER_SNOW);
    m_pModifier->SetCityDefenseModifier(CONST_WEATHER_DEFENSE_MODIFIER_SNOW);
}//@CODE_345


/*@NOTE_332
Destructor method.
*/
CWeatherSnow::~CWeatherSnow()
{//@CODE_332
    DestructorInclude();

    // Put in your own code
}//@CODE_332


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_333
Method which must be called first in a constructor.
*/
void CWeatherSnow::ConstructorInclude()
{
}


/*@NOTE_334
Method which must be called first in a destructor.
*/
void CWeatherSnow::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

/******************************************************************************\
*
* File:          ../../include/WeatherSunny.h
* Creation date: April 10, 2005 21:24
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CWeatherSunny'
*
* Modifications: @INSERT_MODIFICATIONS(* )
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
#ifndef _WEATHERSUNNY_H
#define _WEATHERSUNNY_H

//@START_USER1
//@END_USER1


/*@NOTE_337
Sunny days offer no advantages to attack nor defense, but can modify positively a city status.
*/

class CWeatherSunny
    : public CWeather
{

//@START_USER2
//@END_USER2

//
// Group: ClassBuilder methods
//

private:
    void ConstructorInclude();
    void DestructorInclude();

//
// Non-Grouped Members
//

//
// Non-Grouped Methods
//

public:
    CWeatherSunny();
    virtual ~CWeatherSunny();
};

#endif


#ifdef CB_INLINES
#ifndef _WEATHERSUNNY_H_INLINES
#define _WEATHERSUNNY_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

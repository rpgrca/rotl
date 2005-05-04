/******************************************************************************\
*
* File:          ../../include/WeatherRain.h
* Creation date: April 10, 2005 21:24
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CWeatherRain'
*
* Modifications: @INSERT_MODIFICATIONS(* )
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
#ifndef _WEATHERRAIN_H
#define _WEATHERRAIN_H

//@START_USER1
//@END_USER1


/*@NOTE_308
Rain.
When raining, the attack power is decreased.
*/

class CWeatherRain
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
    CWeatherRain();
    virtual ~CWeatherRain();
};

#endif


#ifdef CB_INLINES
#ifndef _WEATHERRAIN_H_INLINES
#define _WEATHERRAIN_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

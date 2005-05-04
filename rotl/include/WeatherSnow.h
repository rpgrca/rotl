/******************************************************************************\
*
* File:          ../../include/WeatherSnow.h
* Creation date: April 10, 2005 21:24
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CWeatherSnow'
*
* Modifications: @INSERT_MODIFICATIONS(* )
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
#ifndef _WEATHERSNOW_H
#define _WEATHERSNOW_H

//@START_USER1
//@END_USER1


/*@NOTE_331
Snows modifies negatively the values of a battle and a city.
*/

class CWeatherSnow
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
    CWeatherSnow();
    virtual ~CWeatherSnow();
};

#endif


#ifdef CB_INLINES
#ifndef _WEATHERSNOW_H_INLINES
#define _WEATHERSNOW_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

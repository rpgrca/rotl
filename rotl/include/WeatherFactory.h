/******************************************************************************\
*
* File:          ../../include/WeatherFactory.h
* Creation date: April 10, 2005 21:54
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CWeatherFactory'
*
* Modifications: @INSERT_MODIFICATIONS(* )
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
#ifndef _WEATHERFACTORY_H
#define _WEATHERFACTORY_H

//@START_USER1
//@END_USER1


/*@NOTE_375
The weather factory will construct and return asked weathers.
*/

class CWeatherFactory
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
    CWeatherFactory();
    virtual ~CWeatherFactory();
    CWeather* Create(const enWeatherType eWeather) const;
};

#endif


#ifdef CB_INLINES
#ifndef _WEATHERFACTORY_H_INLINES
#define _WEATHERFACTORY_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

/******************************************************************************\
*
* File:          ../../include/WeatherTextRenderer.h
* Creation date: April 17, 2005 11:56
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CWeatherTextRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
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
#ifndef _WEATHERTEXTRENDERER_H
#define _WEATHERTEXTRENDERER_H

//@START_USER1
//@END_USER1


/*@NOTE_2278
The text extension of the weather renderer.
*/

class CWeatherTextRenderer
    : public CWeatherRenderer
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
    CWeatherTextRenderer();
    virtual ~CWeatherTextRenderer();
    virtual void Draw();
};

#endif


#ifdef CB_INLINES
#ifndef _WEATHERTEXTRENDERER_H_INLINES
#define _WEATHERTEXTRENDERER_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

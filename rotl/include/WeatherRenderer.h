/******************************************************************************\
*
* File:          ../../include/WeatherRenderer.h
* Creation date: April 17, 2005 11:56
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CWeatherRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 11:56 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetWeather'
*     Added method '~CWeatherRenderer'
*     Added method 'CWeatherRenderer'
*     Added inheritance 'CRenderer'
*     Added member 'm_pWeather'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _WEATHERRENDERER_H
#define _WEATHERRENDERER_H

//@START_USER1
//@END_USER1


/*@NOTE_2268
The basic weather renderer.
*/

class CWeatherRenderer
    : public CRenderer
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

protected:
    CWeather* m_pWeather;

//
// Non-Grouped Methods
//

public:
    CWeatherRenderer();
    virtual ~CWeatherRenderer();
    void SetWeather(CWeather* pWeather);
};

#endif


#ifdef CB_INLINES
#ifndef _WEATHERRENDERER_H_INLINES
#define _WEATHERRENDERER_H_INLINES

/*@NOTE_2274
Set the value of member 'm_pWeather' to 'pWeather'.
*/
inline void CWeatherRenderer::SetWeather(CWeather* pWeather)
{//@CODE_2274
    m_pWeather = pWeather;
}//@CODE_2274



//@START_USER3
//@END_USER3

#endif
#endif

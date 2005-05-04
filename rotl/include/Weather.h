/******************************************************************************\
*
* File:          ../../include/Weather.h
* Creation date: April 10, 2005 21:24
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CWeather'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 23:05 ReyBrujo, 2005
*     Added method 'SetType'
*     Added method 'GetType'
*     Added member 'm_eType'
* April 12, 2005 18:26 ReyBrujo
*     Added method 'GetModifier'
*     Added member 'm_pModifier'
* April 12, 2005 17:45 ReyBrujo
*     Deleted inheritance 'CEnvironment'
*     Added inheritance 'CBase'
* April 10, 2005 21:24 ReyBrujo
*     Added method 'CWeather'
* April 10, 2005 21:24 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CWeather'
*     Added inheritance 'CEnvironment'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _WEATHER_H
#define _WEATHER_H
//  No modifications for sunny days
const float CONST_WEATHER_ATTACK_MODIFIER_SUNNY = 1.0;
const float CONST_WEATHER_DAMAGE_MODIFIER_SUNNY = 1.0;
const float CONST_WEATHER_DEFENSE_MODIFIER_SUNNY = 1.0;
const float CONST_WEATHER_CROP_MODIFIER_SUNNY = 1.0;

// Rain gives some advantages while defending and to crops
const float CONST_WEATHER_ATTACK_MODIFIER_RAIN = 0.9;
const float CONST_WEATHER_DAMAGE_MODIFIER_RAIN = 1.0;
const float CONST_WEATHER_DEFENSE_MODIFIER_RAIN = 1.1;
const float CONST_WEATHER_CROP_MODIFIER_RAIN = 1.1;

// Snow decreases attack, defense and crop values
const float CONST_WEATHER_ATTACK_MODIFIER_SNOW = 0.6;
const float CONST_WEATHER_DAMAGE_MODIFIER_SNOW = 0.75;
const float CONST_WEATHER_DEFENSE_MODIFIER_SNOW = 1.3;
const float CONST_WEATHER_CROP_MODIFIER_SNOW = 0.75;

//@START_USER1
//@END_USER1


/*@NOTE_303
The weather.
*/

class CWeather
    : public CBase
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

private:
    enWeatherType m_eType;

protected:
    CModifier* m_pModifier;

//
// Non-Grouped Methods
//

protected:
    void SetType(const enWeatherType eType);

public:
    CWeather();
    virtual ~CWeather();
    enWeatherType GetType() const;
    CModifier* GetModifier() const;
};

#endif


#ifdef CB_INLINES
#ifndef _WEATHER_H_INLINES
#define _WEATHER_H_INLINES

/*@NOTE_1118
Returns the value of member 'm_eType'.
*/
inline enWeatherType CWeather::GetType() const
{//@CODE_1118
    return m_eType;
}//@CODE_1118



/*@NOTE_1119
Set the value of member 'm_eType' to 'eType'.
*/
inline void CWeather::SetType(const enWeatherType eType)
{//@CODE_1119
    m_eType = eType;
}//@CODE_1119



/*@NOTE_1063
Returns the value of member 'm_pModifier'.
*/
inline CModifier* CWeather::GetModifier() const
{//@CODE_1063
    return m_pModifier;
}//@CODE_1063



//@START_USER3
//@END_USER3

#endif
#endif

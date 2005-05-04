/******************************************************************************\
*
* File:          ../../include/Season.h
* Creation date: April 11, 2005 16:55
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CSeason'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 23:20 ReyBrujo, 2005
*     Added method 'SetWeekendGoldModifier'
*     Added method 'GetWeekendGoldModifier'
*     Added method 'SetWeekendFoodModifier'
*     Added method 'GetWeekendFoodModifier'
*     Added member 'm_fWeekendFoodModifier'
*     Added member 'm_fWeekendGoldModifier'
* April 17, 2005 11:34 ReyBrujo, 2005
*     Updated member 'm_nWeatherProbability'
* April 17, 2005 11:31 ReyBrujo, 2005
*     Added method 'GetWeather'
*     Added member 'm_WeatherProbability'
* April 12, 2005 23:05 ReyBrujo, 2005
*     Added method 'SetType'
*     Added method 'GetType'
*     Added member 'm_eType'
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CBase'
* April 11, 2005 16:57 ReyBrujo
*     Deleted method 'CSeason'
* April 11, 2005 16:55 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeason'
*     Added method 'CSeason'
*     Added method 'CSeason'
*     Added inheritance 'CBase'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _SEASON_H
#define _SEASON_H
const float CONST_SEASON_SUMMER_GOLD_MODIFIER = 1.5;
const float CONST_SEASON_SUMMER_FOOD_MODIFIER = 0.9;
const float CONST_SEASON_AUTUMN_GOLD_MODIFIER = 1.0;
const float CONST_SEASON_AUTUMN_FOOD_MODIFIER = 0.9;
const float CONST_SEASON_WINTER_GOLD_MODIFIER = 1.5;
const float CONST_SEASON_WINTER_FOOD_MODIFIER = 1.4;
const float CONST_SEASON_SPRING_GOLD_MODIFIER = 1.2;
const float CONST_SEASON_SPRING_FOOD_MODIFIER = 1.0;

//@START_USER1
//@END_USER1


/*@NOTE_709
There are four seasons per year. Each season modifies the factors for armies and cities.
*/

class CSeason
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
    enSeasonType m_eType;
    float m_fWeekendGoldModifier;
    float m_fWeekendFoodModifier;

protected:
    int m_nWeatherProbability[D_MAXIMUN_WEATHER_COUNT];

//
// Non-Grouped Methods
//

protected:
    void SetType(const enSeasonType eType);
    void SetWeekendFoodModifier(float fWeekendFoodModifier);
    void SetWeekendGoldModifier(float fWeekendGoldModifier);

public:
    CSeason();
    virtual ~CSeason();
    enWeatherType GetWeather();
    enSeasonType GetType() const;
    float GetWeekendFoodModifier() const;
    float GetWeekendGoldModifier() const;
};

#endif


#ifdef CB_INLINES
#ifndef _SEASON_H_INLINES
#define _SEASON_H_INLINES

/*@NOTE_1112
Returns the value of member 'm_eType'.
*/
inline enSeasonType CSeason::GetType() const
{//@CODE_1112
    return m_eType;
}//@CODE_1112



/*@NOTE_1113
Set the value of member 'm_eType' to 'eType'.
*/
inline void CSeason::SetType(const enSeasonType eType)
{//@CODE_1113
    m_eType = eType;
}//@CODE_1113



/*@NOTE_2385
Returns the value of member 'm_fWeekendFoodModifier'.
*/
inline float CSeason::GetWeekendFoodModifier() const
{//@CODE_2385
    return m_fWeekendFoodModifier;
}//@CODE_2385



/*@NOTE_2386
Set the value of member 'm_fWeekendFoodModifier' to 'fWeekendFoodModifier'.
*/
inline void CSeason::SetWeekendFoodModifier(float fWeekendFoodModifier)
{//@CODE_2386
    m_fWeekendFoodModifier = fWeekendFoodModifier;
}//@CODE_2386



/*@NOTE_2381
Returns the value of member 'm_fWeekendGoldModifier'.
*/
inline float CSeason::GetWeekendGoldModifier() const
{//@CODE_2381
    return m_fWeekendGoldModifier;
}//@CODE_2381



/*@NOTE_2382
Set the value of member 'm_fWeekendGoldModifier' to 'fWeekendGoldModifier'.
*/
inline void CSeason::SetWeekendGoldModifier(float fWeekendGoldModifier)
{//@CODE_2382
    m_fWeekendGoldModifier = fWeekendGoldModifier;
}//@CODE_2382



//@START_USER3
//@END_USER3

#endif
#endif

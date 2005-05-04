/******************************************************************************\
*
* File:          ../../src/Season.cpp
* Creation date: April 11, 2005 16:55
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CSeason'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 23:20 ReyBrujo, 2005
*     Added method 'SetWeekendGoldModifier'
*     Added method 'GetWeekendGoldModifier'
*     Added method 'SetWeekendFoodModifier'
*     Added method 'GetWeekendFoodModifier'
*     Added member 'm_fWeekendFoodModifier'
*     Added member 'm_fWeekendGoldModifier'
* April 17, 2005 14:21 ReyBrujo, 2005
*     Updated code of method 'GetWeather'
* April 17, 2005 14:20 ReyBrujo, 2005
*     Updated code of method 'GetWeather'
* April 17, 2005 14:17 ReyBrujo, 2005
*     Updated code of method 'GetWeather'
* April 17, 2005 14:16 ReyBrujo, 2005
*     Updated code of method 'GetWeather'
* April 17, 2005 13:56 ReyBrujo, 2005
*     Updated code of method 'GetWeather'
* April 17, 2005 11:40 ReyBrujo, 2005
*     Updated code of method 'GetWeather'
* April 17, 2005 11:31 ReyBrujo, 2005
*     Added method 'GetWeather'
*     Added member 'm_WeatherProbability'
*     Updated code of method 'CSeason'
* April 12, 2005 23:05 ReyBrujo, 2005
*     Added method 'SetType'
*     Added method 'GetType'
*     Added member 'm_eType'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeason'
*     Updated code of method 'CSeason'
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
//@START_USER1
//@END_USER1


// Master include file
#include "rotl.h"


//@START_USER2
//@END_USER2




/*@NOTE_725
Constructor method.
*/
CSeason::CSeason() //@INIT_725
    : CBase()
    , m_eType(enSEASONTYPE_SUMMER)
    , m_fWeekendGoldModifier(1.0)
    , m_fWeekendFoodModifier(1.0)
{//@CODE_725
    ConstructorInclude();

    // Put in your own code
    unsigned int uIndex;

    for (uIndex = 0; uIndex < (sizeof(m_nWeatherProbability) / sizeof(*m_nWeatherProbability)); uIndex++)
        m_nWeatherProbability[uIndex] = 0;
}//@CODE_725


/*@NOTE_710
Destructor method.
*/
CSeason::~CSeason()
{//@CODE_710
    DestructorInclude();

    // Put in your own code
}//@CODE_710


/*@NOTE_2266
Randomly chooses one of the available weathers for this season and returns it.
*/
enWeatherType CSeason::GetWeather()
{//@CODE_2266
    //  TODO: Add modifiers (so southern or northern sections have more
    //  probability of snowing on winter, etc.
    unsigned int uIndex;
    int nRandom  = 0;
    int nMinimun = 0;
    int nMaximun = 0;
    bool bResult = false;
    enWeatherType eResult;

    //  TODO: Change random.
    nRandom = rand() % 100;

    nMinimun = 0;
    for (uIndex = 0; uIndex < (sizeof(m_nWeatherProbability) / sizeof(*m_nWeatherProbability)); uIndex++) {
        nMaximun = nMinimun + m_nWeatherProbability[uIndex];

        if (nRandom >= nMinimun && nRandom < nMaximun) {
            bResult = true;
            eResult = static_cast<enWeatherType>(uIndex);
            break;
        }
        else
            nMinimun = nMaximun;
    }

    if (! bResult)
        printf("Error");

#if 0
    nMinimun = 0;
    nMaximun = m_nWeatherProbability[enWEATHERTYPE_RAIN];
    if (nRandom >= nMinimun && nRandom < nMaximun)
        eResult = enWEATHERTYPE_RAIN;
    else {
        nMinimun = m_nWeatherProbability[enWEATHERTYPE_RAIN];
        nMaximun = nMinimun + m_nWeatherProbability[enWEATHERTYPE_SNOW];
        if (nRandom >= nMinimun && nRandom < nMaximun)
            eResult = enWEATHERTYPE_SNOW;
        else {
            nMinimun = m_nWeatherProbability[enWEATHERTYPE_SNOW];
            nMaximun = nMinimun + m_nWeatherProbability[enWEATHERTYPE_SUNNY];
            if (nRandom >= nMinimun && nRandom < nMaximun)
                eResult = enWEATHERTYPE_SUNNY;
            else
                printf("Error\n");
        }
    }
#endif

    return (eResult);
}//@CODE_2266


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_711
Method which must be called first in a constructor.
*/
void CSeason::ConstructorInclude()
{
}


/*@NOTE_712
Method which must be called first in a destructor.
*/
void CSeason::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

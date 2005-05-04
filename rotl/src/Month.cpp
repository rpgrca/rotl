/******************************************************************************\
*
* File:          ../../src/Month.cpp
* Creation date: April 11, 2005 15:38
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMonth'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 20, 2005 00:49 ReyBrujo, 2005
*     Updated code of method '~CMonth'
* April 18, 2005 00:49 ReyBrujo, 2005
*     Updated code of method 'GetWeekType'
*     Updated code of method 'GetWeather'
*     Updated code of method 'AdvanceWeek'
*     Updated code of method 'AddEvent'
* April 17, 2005 17:52 ReyBrujo, 2005
*     Updated code of method 'GetWeekType'
*     Updated return type of method 'GetWeekType'
* April 17, 2005 17:47 ReyBrujo, 2005
*     Updated code of method 'GetWeekObject'
* April 17, 2005 17:43 ReyBrujo, 2005
*     Added method 'GetWeek'
* April 17, 2005 11:56 ReyBrujo, 2005
*     Added method 'GetWeather'
*     Updated code of method 'SetForecast'
* April 17, 2005 11:31 ReyBrujo, 2005
*     Added method 'SetForecast'
*     Updated code of method 'CMonth'
* April 17, 2005 03:03 ReyBrujo, 2005
*     Added method 'AdvanceWeek'
* April 17, 2005 02:27 ReyBrujo, 2005
*     Updated member 'm_aWeeks'
* April 17, 2005 02:25 ReyBrujo, 2005
*     Added method 'GetWeek'
*     Added member 'm_nWeek'
* April 13, 2005 00:25 ReyBrujo, 2005
*     Updated code of method 'CMonth'
* April 13, 2005 00:14 ReyBrujo, 2005
*     Updated code of method 'AddEvent'
*     Updated member 'm_pEvent'
* April 13, 2005 00:14 ReyBrujo, 2005
*     Updated code of method 'AddEvent'
* April 13, 2005 00:13 ReyBrujo, 2005
*     Updated code of method '~CMonth'
*     Updated code of method 'CMonth'
* April 13, 2005 00:12 ReyBrujo, 2005
*     Updated code of method 'CMonth'
* April 13, 2005 00:11 ReyBrujo, 2005
*     Updated code of method 'CMonth'
* April 13, 2005 00:11 ReyBrujo, 2005
*     Updated code of method '~CMonth'
* April 13, 2005 00:10 ReyBrujo, 2005
*     Updated code of method '~CMonth'
* April 13, 2005 00:08 ReyBrujo, 2005
*     Added method 'AddEvent'
*     Added member 'm_pEvent'
*     Updated code of method 'CMonth'
* April 12, 2005 18:51 ReyBrujo
*     Added method 'SetType'
*     Added method 'GetType'
*     Added member 'm_eType'
*     Updated interface of method 'SetSeason'
*     Updated code of method 'GetSeason'
*     Updated code of method '~CMonth'
*     Updated member 'm_pSeason'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated interface of method 'SetSeason'
*     Updated code of method 'GetSeason'
*     Updated interface of method 'SetSeason'
*     Updated code of method '~CMonth'
*     Updated code of method 'CMonth'
*     Updated inheritance 'CBase'
*     Updated member 'm_pSeason'
*     Updated member 'm_aWeek'
* April 11, 2005 18:10 ReyBrujo
*     Added method 'SetSeason'
* April 11, 2005 17:26 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated interface of method 'SetSeason'
*     Updated code of method 'GetSeason'
*     Updated code of method '~CMonth'
*     Updated code of method 'CMonth'
*     Updated inheritance 'CBase'
*     Updated member 'm_pSeason'
*     Updated member 'm_aWeek'
* April 11, 2005 16:55 ReyBrujo
*     Added method 'SetSeason'
*     Added method 'GetSeason'
*     Added member 'm_pSeason'
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CMonth'
*     Updated code of method 'CMonth'
*     Updated inheritance 'CBase'
*     Updated member 'm_aWeek'
* April 11, 2005 15:39 ReyBrujo
*     Updated code of method '~CMonth'
* April 11, 2005 15:38 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMonth'
*     Added method 'CMonth'
*     Added inheritance 'CBase'
*     Added member 'm_aWeek'
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




/*@NOTE_699
Constructor method.
*/
CMonth::CMonth() //@INIT_699
    : CBase()
    , m_pSeason(NULL)
    , m_eType(enMONTHTYPE_JANUARY)
    , m_nWeek(0)
{//@CODE_699
    ConstructorInclude();

    // Put in your own code
    CWeekFactory *pWeekFactory = NULL;

    pWeekFactory = new CWeekFactory;
    for (int nIndex = CONST_MINIMUN_WEEK_NUMBER; nIndex <= CONST_MAXIMUN_WEEK_NUMBER; nIndex++)
        m_aWeeks[nIndex] = pWeekFactory->Create(nIndex);

    delete pWeekFactory;

    for (unsigned int uIndex = 0; uIndex < (sizeof(m_pEvent) / sizeof(*m_pEvent)); uIndex++)
        m_pEvent[uIndex] = NULL;
}//@CODE_699


/*@NOTE_694
Destructor method.
*/
CMonth::~CMonth()
{//@CODE_694
    DestructorInclude();

    // Put in your own code
    for (int nIndex = CONST_MINIMUN_WEEK_NUMBER; nIndex <= CONST_MAXIMUN_WEEK_NUMBER; nIndex++) {
        delete m_aWeeks[nIndex];
        m_aWeeks[nIndex] = NULL;
    }

    for (unsigned int uIndex = 0; uIndex < (sizeof(m_pEvent) / sizeof(*m_pEvent)); uIndex++)
        if (m_pEvent[uIndex] != NULL) {
            delete m_pEvent[uIndex];
            m_pEvent[uIndex] = NULL;
        }

    if (m_pSeason != NULL) {
        delete m_pSeason;
        m_pSeason = NULL;
    }
}//@CODE_694


/*@NOTE_2267
Sets the forecast for the month.
This function must be called after having set the season.
*/
void CMonth::SetForecast()
{//@CODE_2267
    CWeather *pWeather = NULL;
    CWeatherFactory *pWeatherFactory = NULL;

    pWeatherFactory = new CWeatherFactory;
    if (m_pSeason != NULL)
        for (int nIndex = CONST_MINIMUN_WEEK_NUMBER; nIndex <= CONST_MAXIMUN_WEEK_NUMBER; nIndex++) {
            pWeather = pWeatherFactory->Create(m_pSeason->GetWeather());
            m_aWeeks[nIndex]->SetWeather(pWeather);
        }

    delete pWeatherFactory;
}//@CODE_2267


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_695
Method which must be called first in a constructor.
*/
void CMonth::ConstructorInclude()
{
}


/*@NOTE_696
Method which must be called first in a destructor.
*/
void CMonth::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

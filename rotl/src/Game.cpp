/******************************************************************************\
*
* File:          ../../src/Game.cpp
* Creation date: April 16, 2005 17:08
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CGame'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 19, 2005 01:31 ReyBrujo, 2005
*     Added method 'Initialize'
*     Updated return type of method 'Initialize'
* April 19, 2005 01:07 ReyBrujo, 2005
*     Updated code of method 'SetCityRenderer'
* April 18, 2005 00:04 ReyBrujo, 2005
*     Updated code of method 'SpendResources'
* April 18, 2005 00:02 ReyBrujo, 2005
*     Updated code of method 'SpendResources'
* April 17, 2005 23:55 ReyBrujo, 2005
*     Updated code of method 'SpendResources'
* April 17, 2005 23:20 ReyBrujo, 2005
*     Added method 'SpendResources'
*     Updated code of method 'AdvanceTimeline'
* April 17, 2005 22:00 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 17, 2005 21:51 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 17, 2005 21:19 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 17, 2005 21:17 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 17, 2005 21:16 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 17, 2005 19:29 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 17, 2005 18:28 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 17, 2005 17:53 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 17, 2005 17:52 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 17, 2005 17:48 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 17, 2005 17:43 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 17, 2005 17:02 ReyBrujo, 2005
*     Added method 'SetPlayerRenderer'
*     Added member 'm_pPlayerRenderer'
*     Updated code of method '~CGame'
* April 17, 2005 16:56 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 17, 2005 16:27 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 17, 2005 15:40 ReyBrujo, 2005
*     Added method 'AddCity'
*     Updated code of method 'CGame'
* April 17, 2005 15:31 ReyBrujo, 2005
*     Updated code of method 'CGame'
* April 17, 2005 12:06 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 17, 2005 11:56 ReyBrujo, 2005
*     Added method 'SetWeatherRenderer'
*     Added member 'm_pWeatherRenderer'
*     Updated code of method 'Run'
*     Updated code of method '~CGame'
* April 17, 2005 03:26 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 17, 2005 03:22 ReyBrujo, 2005
*     Added method 'SetTimelineRenderer'
*     Added member 'm_pTimelineRenderer'
*     Updated code of method 'Run'
*     Updated code of method '~CGame'
* April 17, 2005 03:03 ReyBrujo, 2005
*     Added method 'AdvanceTimeline'
*     Updated code of method 'Run'
* April 17, 2005 02:39 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 17, 2005 02:34 ReyBrujo, 2005
*     Updated code of method '~CGame'
* April 17, 2005 02:33 ReyBrujo, 2005
*     Deleted method 'SetTimeline'
*     Added method 'SetTimeline'
*     Updated code of method '~CGame'
*     Updated member 'm_pTimeline'
* April 17, 2005 02:29 ReyBrujo, 2005
*     Added method 'SetTimeline'
*     Added member 'm_pTimeline'
*     Updated code of method 'CGame'
* April 17, 2005 02:27 ReyBrujo, 2005
*     Updated member 'm_aPlayers'
* April 17, 2005 02:13 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 17, 2005 00:01 ReyBrujo, 2005
*     Added method 'SetCityRenderer'
*     Added member 'm_pCityRenderer'
*     Updated code of method 'SetUnitRenderer'
*     Updated code of method 'Run'
*     Updated code of method '~CGame'
* April 16, 2005 23:23 ReyBrujo, 2005
*     Updated code of method '~CGame'
* April 16, 2005 20:52 ReyBrujo, 2005
*     Deleted method 'SetMapRenderer'
*     Added method 'SetUnitRenderer'
*     Added method 'SetMapRenderer'
*     Added member 'm_pUnitRenderer'
*     Updated code of method 'Run'
*     Updated code of method '~CGame'
*     Updated member 'm_pMapRenderer'
* April 16, 2005 20:21 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 16, 2005 20:02 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 16, 2005 19:57 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 16, 2005 19:34 ReyBrujo, 2005
*     Updated code of method 'AddPlayer'
* April 16, 2005 19:32 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 16, 2005 19:16 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 16, 2005 19:16 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 16, 2005 19:15 ReyBrujo, 2005
*     Updated code of method 'Run'
* April 16, 2005 19:15 ReyBrujo, 2005
*     Added method 'AddPlayer'
* April 16, 2005 19:04 ReyBrujo, 2005
*     Added method 'Run'
* April 16, 2005 18:43 ReyBrujo, 2005
*     Updated code of method '~CGame'
* April 16, 2005 18:37 ReyBrujo, 2005
*     Updated code of method 'CGame'
* April 16, 2005 18:36 ReyBrujo, 2005
*     Deleted member 'm_pRulers'
*     Added method 'SetYear'
*     Added method 'SetMapRenderer'
*     Added method 'SetMap'
*     Added member 'm_pPlayer'
*     Added member 'm_pMapRenderer'
*     Updated member 'm_pYear'
*     Updated member 'm_pMap'
* April 16, 2005 17:08 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CGame'
*     Added method 'CGame'
*     Added member 'm_pRulers'
*     Added member 'm_pYear'
*     Added member 'm_pMap'
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




/*@NOTE_2123
Constructor method.
*/
CGame::CGame() //@INIT_2123
    : m_pMap(NULL)
    , m_pMapRenderer(NULL)
    , m_pUnitRenderer(NULL)
    , m_pCityRenderer(NULL)
    , m_pTimeline(NULL)
    , m_pTimelineRenderer(NULL)
    , m_pWeatherRenderer(NULL)
    , m_pPlayerRenderer(NULL)
{//@CODE_2123
    ConstructorInclude();

    // Put in your own code
    unsigned int uIndex;

    for (uIndex = 0; uIndex < (sizeof(m_aPlayers) / sizeof(*m_aPlayers)); uIndex++)
        m_aPlayers[uIndex] = NULL;
}//@CODE_2123


/*@NOTE_2118
Destructor method.
*/
CGame::~CGame()
{//@CODE_2118
    DestructorInclude();

    // Put in your own code
    unsigned int uIndex;

    for (uIndex = 0; uIndex < (sizeof(m_aPlayers) / sizeof(*m_aPlayers)); uIndex++)
        if (m_aPlayers[uIndex] != NULL) {
            delete m_aPlayers[uIndex];
            m_aPlayers[uIndex] = NULL;
        }

    delete m_pTimeline;
    delete m_pMap;

    delete m_pUnitRenderer;
    delete m_pMapRenderer;
    delete m_pCityRenderer;
    delete m_pTimelineRenderer;
    delete m_pWeatherRenderer;
    delete m_pPlayerRenderer;
}//@CODE_2118


/*@NOTE_2300
Adds a new city to the game.
*/
bool CGame::AddCity(CCity* pCity, const bool bDestroy)
{//@CODE_2300
    //  CMap::AddCity checks everything.
    return (m_pMap->AddCity(pCity, bDestroy));
}//@CODE_2300


/*@NOTE_2144
Adds a new player into the game.
*/
bool CGame::AddPlayer(CPlayer* pPlayer, const bool bDestroy)
{//@CODE_2144
    unsigned int uIndex;
    if (pPlayer != NULL) {
        for (uIndex = 0; uIndex < (sizeof(m_aPlayers) / sizeof(*m_aPlayers)); uIndex++)
            if (m_aPlayers[uIndex] == NULL) {
                m_aPlayers[uIndex] = pPlayer;
                return (true);
            }

        if (bDestroy)
            delete pPlayer;
    }

    return (false);
}//@CODE_2144


/*@NOTE_2227
Advances a week in the timeline.
*/
void CGame::AdvanceTimeline()
{//@CODE_2227
    bool bResult = false;
    int nYear = 0;

    bResult = m_pTimeline->AdvanceWeek();
    if (bResult) {
        nYear = m_pTimeline->GetYear() + 1;

        delete m_pTimeline;
        m_pTimeline = new CTimeline(nYear);
    }

    SpendResources();
}//@CODE_2227


/*@NOTE_2512
Initializes the game, by preparing the renderers.
*/
bool CGame::Initialize()
{//@CODE_2512
    m_pMapRenderer->SetCityRenderer(m_pCityRenderer);
    return (true);
}//@CODE_2512


/*@NOTE_2143
Runs the game.
*/
bool CGame::Run()
{//@CODE_2143
    unsigned int uIndex;
    int nSubIndex;
    int nMaximun = 0;
    bool bResult = true;

    //  Adjust map date
    m_pMap->SetCurrentYear (m_pTimeline->GetYear() );
    m_pMap->SetCurrentMonth(m_pTimeline->GetMonth());
    m_pMap->SetCurrentWeek (m_pTimeline->GetWeek() );

    //  Initialize global renderers
    m_pMapRenderer->SetMap(m_pMap);
    m_pTimelineRenderer->SetTimeline(m_pTimeline);
    m_pWeatherRenderer->SetWeather(m_pTimeline->GetWeather());

    for (uIndex = 0; uIndex < (sizeof(m_aPlayers) / sizeof(*m_aPlayers)); uIndex++) {
        if (m_aPlayers[uIndex] != NULL) {
            m_pPlayerRenderer->SetPlayer(m_aPlayers[uIndex]);

            m_pPlayerRenderer->Draw();
            m_pTimelineRenderer->Draw();
            m_pWeatherRenderer->Draw();

            nMaximun = m_aPlayers[uIndex]->GetUnitCount();
            for (nSubIndex = 0; nSubIndex < nMaximun; nSubIndex++) {
                m_pUnitRenderer->SetUnit(m_aPlayers[uIndex]->GetUnit(nSubIndex));
                m_pUnitRenderer->Draw();

                m_aPlayers[uIndex]->GetInput()->PollCommand(m_pTimeline->GetWeekType(), m_aPlayers[uIndex], m_pMap);
                bResult = m_aPlayers[uIndex]->ExecuteCommand(m_pMap);
            }

            //  Render the scene
            m_pMapRenderer->Draw();
        }
    }

    AdvanceTimeline();
    return (bResult);
}//@CODE_2143


/*@NOTE_2371
Spends resources for a week.
*/
void CGame::SpendResources()
{//@CODE_2371
    int nMaximun = 0;
    int nSubIndex = 0;
    CUnit *pUnit = NULL;
    unsigned int uIndex;

    for (uIndex = 0; uIndex < (sizeof(m_aPlayers) / sizeof(*m_aPlayers)); uIndex++) {
        if (m_aPlayers[uIndex] != NULL) {
            nMaximun = m_aPlayers[uIndex]->GetUnitCount();

            for (nSubIndex = 0; nSubIndex < nMaximun; nSubIndex++) {
                pUnit = m_aPlayers[uIndex]->GetUnit(nSubIndex);
                pUnit->SpendResources(m_pTimeline->GetWeather(), m_pTimeline->GetSeason());
            }
        }
    }

    m_pMap->SpendResources(m_pTimeline->GetWeather(), m_pTimeline->GetSeason());
}//@CODE_2371


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_2119
Method which must be called first in a constructor.
*/
void CGame::ConstructorInclude()
{
}


/*@NOTE_2120
Method which must be called first in a destructor.
*/
void CGame::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

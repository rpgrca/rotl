/******************************************************************************\
*
* File:          ../../include/Game.h
* Creation date: April 16, 2005 17:08
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CGame'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 19, 2005 01:31 ReyBrujo, 2005
*     Added method 'Initialize'
*     Updated return type of method 'Initialize'
* April 17, 2005 23:20 ReyBrujo, 2005
*     Added method 'SpendResources'
* April 17, 2005 17:02 ReyBrujo, 2005
*     Added method 'SetPlayerRenderer'
*     Added member 'm_pPlayerRenderer'
* April 17, 2005 15:40 ReyBrujo, 2005
*     Added method 'AddCity'
* April 17, 2005 11:56 ReyBrujo, 2005
*     Added method 'SetWeatherRenderer'
*     Added member 'm_pWeatherRenderer'
* April 17, 2005 03:22 ReyBrujo, 2005
*     Added method 'SetTimelineRenderer'
*     Added member 'm_pTimelineRenderer'
* April 17, 2005 03:03 ReyBrujo, 2005
*     Added method 'AdvanceTimeline'
* April 17, 2005 02:33 ReyBrujo, 2005
*     Deleted method 'SetTimeline'
*     Added method 'SetTimeline'
*     Updated member 'm_pTimeline'
* April 17, 2005 02:29 ReyBrujo, 2005
*     Added method 'SetTimeline'
*     Added member 'm_pTimeline'
* April 17, 2005 02:27 ReyBrujo, 2005
*     Updated member 'm_aPlayers'
* April 17, 2005 00:01 ReyBrujo, 2005
*     Added method 'SetCityRenderer'
*     Added member 'm_pCityRenderer'
* April 16, 2005 20:52 ReyBrujo, 2005
*     Deleted method 'SetMapRenderer'
*     Added method 'SetUnitRenderer'
*     Added method 'SetMapRenderer'
*     Added member 'm_pUnitRenderer'
*     Updated member 'm_pMapRenderer'
* April 16, 2005 19:15 ReyBrujo, 2005
*     Added method 'AddPlayer'
* April 16, 2005 19:04 ReyBrujo, 2005
*     Added method 'Run'
* April 16, 2005 18:37 ReyBrujo, 2005
*     Updated member 'm_pPlayers'
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
#ifndef _GAME_H
#define _GAME_H

//@START_USER1
//@END_USER1


/*@NOTE_2117
Manages the game.
*/

class CGame
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
    CMap* m_pMap;
    CMapRenderer* m_pMapRenderer;
    CPlayer* m_aPlayers[CONST_MAXIMUN_RULER_COUNT];
    CUnitRenderer* m_pUnitRenderer;
    CCityRenderer* m_pCityRenderer;
    CTimeline* m_pTimeline;
    CTimelineRenderer* m_pTimelineRenderer;
    CWeatherRenderer* m_pWeatherRenderer;
    CPlayerRenderer* m_pPlayerRenderer;

//
// Non-Grouped Methods
//

private:
    void SpendResources();

public:
    CGame();
    virtual ~CGame();
    bool AddCity(CCity* pCity, const bool bDestroy = false);
    bool AddPlayer(CPlayer* pPlayer, const bool bDestroy = false);
    void AdvanceTimeline();
    bool Initialize();
    bool Run();
    void SetCityRenderer(CCityRenderer* pCityRenderer);
    void SetMap(CMap* pMap);
    void SetMapRenderer(CMapRenderer* pMapRenderer);
    void SetPlayerRenderer(CPlayerRenderer* pPlayerRenderer);
    void SetTimeline(CTimeline* pTimeline);
    void SetTimelineRenderer(CTimelineRenderer* pTimelineRenderer);
    void SetUnitRenderer(CUnitRenderer* pUnitRenderer);
    void SetWeatherRenderer(CWeatherRenderer* pWeatherRenderer);
};

#endif


#ifdef CB_INLINES
#ifndef _GAME_H_INLINES
#define _GAME_H_INLINES

/*@NOTE_2200
Set the value of member 'm_pCityRenderer' to 'pCityRenderer'.
*/
inline void CGame::SetCityRenderer(CCityRenderer* pCityRenderer)
{//@CODE_2200
    delete m_pCityRenderer;
    m_pCityRenderer = pCityRenderer;
}//@CODE_2200



/*@NOTE_2124
Set the value of member 'm_pMap' to 'pMap'.
*/
inline void CGame::SetMap(CMap* pMap)
{//@CODE_2124
    delete m_pMap;
    m_pMap = pMap;
}//@CODE_2124



/*@NOTE_2187
Set the value of member 'm_pMapRenderer' to 'pMapRenderer'.
*/
inline void CGame::SetMapRenderer(CMapRenderer* pMapRenderer)
{//@CODE_2187
    delete m_pMapRenderer;
    m_pMapRenderer = pMapRenderer;
}//@CODE_2187



/*@NOTE_2338
Set the value of member 'm_pPlayerRenderer' to 'pPlayerRenderer'.
*/
inline void CGame::SetPlayerRenderer(CPlayerRenderer* pPlayerRenderer)
{//@CODE_2338
    delete m_pPlayerRenderer;
    m_pPlayerRenderer = pPlayerRenderer;
}//@CODE_2338



/*@NOTE_2223
Set the value of member 'm_pTimeline' to 'pTimeline'.
*/
inline void CGame::SetTimeline(CTimeline* pTimeline)
{//@CODE_2223
    delete m_pTimeline;
    m_pTimeline = pTimeline;
}//@CODE_2223



/*@NOTE_2254
Set the value of member 'm_pTimelineRenderer' to 'pTimelineRenderer'.
*/
inline void CGame::SetTimelineRenderer(CTimelineRenderer* pTimelineRenderer)
{//@CODE_2254
    delete m_pTimelineRenderer;
    m_pTimelineRenderer = pTimelineRenderer;
}//@CODE_2254



/*@NOTE_2189
Set the value of member 'm_pUnitRenderer' to 'pUnitRenderer'.
*/
inline void CGame::SetUnitRenderer(CUnitRenderer* pUnitRenderer)
{//@CODE_2189
    delete m_pUnitRenderer;
    m_pUnitRenderer = pUnitRenderer;
}//@CODE_2189



/*@NOTE_2290
Set the value of member 'm_pWeatherRenderer' to 'pWeatherRenderer'.
*/
inline void CGame::SetWeatherRenderer(CWeatherRenderer* pWeatherRenderer)
{//@CODE_2290
    delete m_pWeatherRenderer;
    m_pWeatherRenderer = pWeatherRenderer;
}//@CODE_2290



//@START_USER3
//@END_USER3

#endif
#endif

/******************************************************************************\
*
* File:          ../../include/Timeline.h
* Creation date: April 17, 2005 02:23
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CTimeline'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 19:48 ReyBrujo, 2005
*     Updated return type of method 'GetSeason'
*     Updated return type of method 'GetWeekType'
* April 17, 2005 17:52 ReyBrujo, 2005
*     Updated return type of method 'GetSeason'
*     Updated return type of method 'GetWeekType'
* April 17, 2005 17:47 ReyBrujo, 2005
*     Updated return type of method 'GetSeason'
* April 17, 2005 17:47 ReyBrujo, 2005
*     Updated return type of method 'GetSeason'
* April 17, 2005 17:43 ReyBrujo, 2005
*     Added method 'GetWeek'
*     Updated return type of method 'GetSeason'
* April 17, 2005 11:56 ReyBrujo, 2005
*     Added method 'GetWeather'
*     Updated return type of method 'GetSeason'
* April 17, 2005 07:23 ReyBrujo, 2005
*     Added method 'GetSeason'
*     Updated return type of method 'GetSeason'
* April 17, 2005 03:03 ReyBrujo, 2005
*     Added method 'AdvanceWeek'
* April 17, 2005 02:27 ReyBrujo, 2005
*     Updated member 'm_aMonths'
* April 17, 2005 02:23 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'GetYear'
*     Added method 'GetMonth'
*     Added method 'GetWeek'
*     Added method '~CTimeline'
*     Added method 'CTimeline'
*     Added inheritance 'CBase'
*     Added member 'm_nMonth'
*     Added member 'm_aMonth'
*     Added member 'm_nYear'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _TIMELINE_H
#define _TIMELINE_H

//@START_USER1
//@END_USER1


/*@NOTE_2209
This class generates the timeline of the game, and keeps track of the time.
*/

class CTimeline
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
    int m_nYear;
    CMonth* m_aMonths[12];
    int m_nMonth;

//
// Non-Grouped Methods
//

public:
    CTimeline(int nYear);
    virtual ~CTimeline();
    bool AdvanceWeek();
    CSeason* GetSeason() const;
    CWeather* GetWeather() const;
    int GetWeek() const;
    enWeekType GetWeekType() const;
    int GetMonth() const;
    int GetYear() const;
};

#endif


#ifdef CB_INLINES
#ifndef _TIMELINE_H_INLINES
#define _TIMELINE_H_INLINES

/*@NOTE_2226
Advances the timeline to the next week.
Returns true if the year ended (telling the Game to create a new timeline).
*/
inline bool CTimeline::AdvanceWeek()
{//@CODE_2226
    bool bResult = false;

    if (m_aMonths[m_nMonth]->AdvanceWeek()) {
        m_nMonth++;
        if (m_nMonth >= 12)
            bResult = true;
    }

    return (bResult);
}//@CODE_2226



/*@NOTE_2256
Returns the current season.
*/
inline CSeason* CTimeline::GetSeason() const
{//@CODE_2256
    return (m_aMonths[m_nMonth]->GetSeason());
}//@CODE_2256



/*@NOTE_2292
Returns the current weather.
*/
inline CWeather* CTimeline::GetWeather() const
{//@CODE_2292
    return (m_aMonths[m_nMonth]->GetWeather());
}//@CODE_2292



/*@NOTE_2216
Returns the current week in the game.
*/
inline int CTimeline::GetWeek() const
{//@CODE_2216
    return (m_aMonths[m_nMonth]->GetWeek());
}//@CODE_2216



/*@NOTE_2343
Returns the type of the current week.
*/
inline enWeekType CTimeline::GetWeekType() const
{//@CODE_2343
    return (m_aMonths[m_nMonth]->GetWeekType());
}//@CODE_2343



/*@NOTE_2218
Returns the value of member 'm_nMonth'.
*/
inline int CTimeline::GetMonth() const
{//@CODE_2218
    return m_nMonth;
}//@CODE_2218



/*@NOTE_926
Returns the value of member 'm_nYear'.
*/
inline int CTimeline::GetYear() const
{//@CODE_926
    return m_nYear;
}//@CODE_926



//@START_USER3
//@END_USER3

#endif
#endif

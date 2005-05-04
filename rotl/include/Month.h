/******************************************************************************\
*
* File:          ../../include/Month.h
* Creation date: April 11, 2005 15:38
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CMonth'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 17:52 ReyBrujo, 2005
*     Updated return type of method 'GetWeekType'
* April 17, 2005 17:43 ReyBrujo, 2005
*     Added method 'GetWeek'
* April 17, 2005 11:56 ReyBrujo, 2005
*     Added method 'GetWeather'
* April 17, 2005 11:31 ReyBrujo, 2005
*     Added method 'SetForecast'
* April 17, 2005 03:03 ReyBrujo, 2005
*     Added method 'AdvanceWeek'
* April 17, 2005 02:27 ReyBrujo, 2005
*     Updated member 'm_aWeeks'
* April 17, 2005 02:25 ReyBrujo, 2005
*     Added method 'GetWeek'
*     Added member 'm_nWeek'
* April 13, 2005 00:08 ReyBrujo, 2005
*     Added method 'AddEvent'
*     Added member 'm_pEvent'
* April 12, 2005 18:51 ReyBrujo
*     Added method 'SetType'
*     Added method 'GetType'
*     Added member 'm_eType'
*     Updated interface of method 'SetSeason'
*     Updated member 'm_pSeason'
* April 12, 2005 15:01 ReyBrujo
*     Updated interface of method 'SetSeason'
*     Updated interface of method 'SetSeason'
*     Updated inheritance 'CBase'
*     Updated member 'm_pSeason'
*     Updated member 'm_aWeek'
* April 11, 2005 18:10 ReyBrujo
*     Added method 'SetSeason'
* April 11, 2005 17:26 ReyBrujo
*     Updated interface of method 'SetSeason'
*     Updated inheritance 'CBase'
*     Updated member 'm_pSeason'
*     Updated member 'm_aWeek'
* April 11, 2005 16:55 ReyBrujo
*     Added method 'SetSeason'
*     Added method 'GetSeason'
*     Added member 'm_pSeason'
*     Updated inheritance 'CBase'
*     Updated member 'm_aWeek'
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
#ifndef _MONTH_H
#define _MONTH_H

//@START_USER1
//@END_USER1


/*@NOTE_693
A month has 4 weeks, a movement, a planning, a movement and a planning.
*/

class CMonth
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
    CWeek* m_aWeeks[CONST_WEEK_DAYS_PER_MONTH];
    CSeason* m_pSeason;
    enMonthType m_eType;
    CEvent* m_pEvent[4];
    int m_nWeek;

//
// Non-Grouped Methods
//

protected:
    bool AddEvent(CEvent* pEvent);
    void SetForecast();
    void SetType(const enMonthType eType);
    void SetSeason(CSeason* pSeason);

public:
    CMonth();
    virtual ~CMonth();
    bool AdvanceWeek();
    CWeather* GetWeather();
    enWeekType GetWeekType() const;
    enMonthType GetType() const;
    int GetWeek() const;
    CSeason* GetSeason() const;
};

#endif


#ifdef CB_INLINES
#ifndef _MONTH_H_INLINES
#define _MONTH_H_INLINES

/*@NOTE_1130
Adds a new event to the month list.
Returns true if it could be added, false if it failed (no more room).
*/
inline bool CMonth::AddEvent(CEvent* pEvent)
{//@CODE_1130
    //  TODO: Replace the array for a dynamic array.

    unsigned int nIndex;

    for (nIndex = 0; nIndex < (sizeof(m_pEvent) / sizeof(*m_pEvent)); nIndex++)
        if (m_pEvent[nIndex] == NULL) {
            m_pEvent[nIndex] = pEvent;
            return (true);
        }

    return (false);
}//@CODE_1130



/*@NOTE_2228
Advances to the following week.
Returns true if the month finished.
*/
inline bool CMonth::AdvanceWeek()
{//@CODE_2228
    m_nWeek++;

    return (m_nWeek >= 4);
}//@CODE_2228



/*@NOTE_2293
The current weather.
*/
inline CWeather* CMonth::GetWeather()
{//@CODE_2293
    return (m_aWeeks[m_nWeek]->GetWeather());
}//@CODE_2293



/*@NOTE_2344
Returns the type of the current week.
*/
inline enWeekType CMonth::GetWeekType() const
{//@CODE_2344
    return (m_aWeeks[m_nWeek]->GetType());
}//@CODE_2344



/*@NOTE_1072
Returns the value of member 'm_eType'.
*/
inline enMonthType CMonth::GetType() const
{//@CODE_1072
    return m_eType;
}//@CODE_1072



/*@NOTE_1073
Set the value of member 'm_eType' to 'eType'.
*/
inline void CMonth::SetType(const enMonthType eType)
{//@CODE_1073
    m_eType = eType;
}//@CODE_1073



/*@NOTE_2221
Returns the value of member 'm_nWeek'.
*/
inline int CMonth::GetWeek() const
{//@CODE_2221
    return m_nWeek;
}//@CODE_2221



/*@NOTE_722
Returns the value of member 'm_pSeason'.
*/
inline CSeason* CMonth::GetSeason() const
{//@CODE_722
    return m_pSeason;
}//@CODE_722



/*@NOTE_723
Set the value of member 'm_pSeason' to 'pSeason'.
*/
inline void CMonth::SetSeason(CSeason* pSeason)
{//@CODE_723
    m_pSeason = pSeason;
}//@CODE_723



//@START_USER3
//@END_USER3

#endif
#endif

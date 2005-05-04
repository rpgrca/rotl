/******************************************************************************\
*
* File:          ../../include/Week.h
* Creation date: April 11, 2005 14:15
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CWeek'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 07:26 ReyBrujo, 2005
*     Added method 'SetWeather'
*     Added method 'GetWeather'
*     Added member 'm_pWeather'
* April 12, 2005 23:05 ReyBrujo, 2005
*     Added method 'SetType'
*     Added method 'GetType'
*     Added member 'm_eType'
* April 12, 2005 15:01 ReyBrujo
*     Updated interface of method 'SetWeek'
*     Updated inheritance 'CBase'
*     Updated member 'm_nWeek'
* April 11, 2005 14:15 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetWeek'
*     Added method 'GetWeek'
*     Added method '~CWeek'
*     Added method 'CWeek'
*     Added inheritance 'CBase'
*     Added member 'm_nWeek'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _WEEK_H
#define _WEEK_H
const int CONST_MINIMUN_WEEK_NUMBER = 0;
const int CONST_MAXIMUN_WEEK_NUMBER = 3;

#define M_IS_VALID_WEEK_NUMBER(_x) (((_x) >= CONST_MINIMUN_WEEK_NUMBER) && ((_x) <= CONST_MAXIMUN_WEEK_NUMBER))
#define M_IS_VALID_MOVEMENT_WEEK_NUMBER(_x) (((_x) == 0) || ((_x) == 2))
#define M_IS_VALID_PLANNING_WEEK_NUMBER(_x) (((_x) == 1) || ((_x) == 3))

const int CONST_WEEK_DAYS_PER_MONTH = 4;

//@START_USER1
//@END_USER1


/*@NOTE_662
A month has 4 weeks, two of them are moving phases, two are planning phases.
*/

class CWeek
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
    int m_nWeek;
    enWeekType m_eType;
    CWeather* m_pWeather;

//
// Non-Grouped Methods
//

protected:
    void SetType(const enWeekType eType);

public:
    CWeek();
    virtual ~CWeek();
    enWeekType GetType() const;
    virtual int GetWeek() const;
    virtual void SetWeek(const int nWeek);
    CWeather* GetWeather() const;
    void SetWeather(CWeather* pWeather);
};

#endif


#ifdef CB_INLINES
#ifndef _WEEK_H_INLINES
#define _WEEK_H_INLINES

/*@NOTE_1126
Returns the value of member 'm_eType'.
*/
inline enWeekType CWeek::GetType() const
{//@CODE_1126
    return m_eType;
}//@CODE_1126



/*@NOTE_1127
Set the value of member 'm_eType' to 'eType'.
*/
inline void CWeek::SetType(const enWeekType eType)
{//@CODE_1127
    m_eType = eType;
}//@CODE_1127



/*@NOTE_2261
Returns the value of member 'm_pWeather'.
*/
inline CWeather* CWeek::GetWeather() const
{//@CODE_2261
    return m_pWeather;
}//@CODE_2261



/*@NOTE_2262
Set the value of member 'm_pWeather' to 'pWeather'.
*/
inline void CWeek::SetWeather(CWeather* pWeather)
{//@CODE_2262
    delete m_pWeather;
    m_pWeather = pWeather;
}//@CODE_2262



//@START_USER3
//@END_USER3

#endif
#endif

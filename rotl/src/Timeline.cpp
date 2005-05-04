/******************************************************************************\
*
* File:          ../../src/Timeline.cpp
* Creation date: April 17, 2005 02:23
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CTimeline'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 19:48 ReyBrujo, 2005
*     Updated return type of method 'GetSeason'
*     Updated return type of method 'GetWeekType'
* April 17, 2005 02:42 ReyBrujo, 2005
*     Updated code of method '~CTimeline'
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
//@START_USER1
//@END_USER1


// Master include file
#include "rotl.h"


//@START_USER2
//@END_USER2




/*@NOTE_2215
Constructor method.
*/
CTimeline::CTimeline(int nYear) //@INIT_2215
    : CBase()
    , m_nYear(nYear)
    , m_nMonth(0)
{//@CODE_2215
    ConstructorInclude();

    // Put in your own code
    m_aMonths[enMONTHTYPE_JANUARY]   = new CMonthJanuary;
    m_aMonths[enMONTHTYPE_FEBRUARY]  = new CMonthFebruary;
    m_aMonths[enMONTHTYPE_MARCH]     = new CMonthMarch;
    m_aMonths[enMONTHTYPE_APRIL]     = new CMonthApril;
    m_aMonths[enMONTHTYPE_MAY]       = new CMonthMay;
    m_aMonths[enMONTHTYPE_JUNE]      = new CMonthJune;
    m_aMonths[enMONTHTYPE_JULY]      = new CMonthJuly;
    m_aMonths[enMONTHTYPE_AUGUST]    = new CMonthAugust;
    m_aMonths[enMONTHTYPE_SEPTEMBER] = new CMonthSeptember;
    m_aMonths[enMONTHTYPE_OCTOBER]   = new CMonthOctober;
    m_aMonths[enMONTHTYPE_NOVEMBER]  = new CMonthNovember;
    m_aMonths[enMONTHTYPE_DECEMBER]  = new CMonthDecember;
}//@CODE_2215


/*@NOTE_2210
Destructor method.
*/
CTimeline::~CTimeline()
{//@CODE_2210
    DestructorInclude();

    // Put in your own code
    unsigned int uIndex;

    for (uIndex = 0; uIndex < (sizeof(m_aMonths) / sizeof(*m_aMonths)); uIndex++) {
        if (m_aMonths[uIndex] != NULL) {
            delete m_aMonths[uIndex];
            m_aMonths[uIndex] = NULL;
        }
    }
}//@CODE_2210


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_2211
Method which must be called first in a constructor.
*/
void CTimeline::ConstructorInclude()
{
}


/*@NOTE_2212
Method which must be called first in a destructor.
*/
void CTimeline::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

/******************************************************************************\
*
* File:          ../../src/TimelineCursesRenderer.cpp
* Creation date: April 19, 2005 23:55
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CTimelineCursesRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 20, 2005 00:05 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 19, 2005 23:55 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Draw'
*     Added method '~CTimelineCursesRenderer'
*     Added method 'CTimelineCursesRenderer'
*     Added inheritance 'CTimelineRenderer'
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




/*@NOTE_2561
Constructor method.
*/
CTimelineCursesRenderer::CTimelineCursesRenderer() //@INIT_2561
    : CTimelineRenderer()
{//@CODE_2561
    ConstructorInclude();

    // Put in your own code
}//@CODE_2561


/*@NOTE_2556
Destructor method.
*/
CTimelineCursesRenderer::~CTimelineCursesRenderer()
{//@CODE_2556
    DestructorInclude();

    // Put in your own code
}//@CODE_2556


/*@NOTE_2562
This method must be overloaded in derived classes in order to draw onto screen.
*/
void CTimelineCursesRenderer::Draw()
{//@CODE_2562
    char strBuffer[512];

    const char *number_to_string[] = {
        "first", "second", "third"   , "fourth",
        "fifth", "sixth" , "seventh" , "eighth",
        "ninth", "tenth" , "eleventh", "twelfth"
    };

    const char *weektype_to_string[] = {
        "movement", "planning"
    };

    const char *season_to_string[] = {
        "summer", "autumn",
        "winter", "spring"
    };

    mvaddstr(1, 0, "-------------------------------------------------------------------------------");
    snprintf(strBuffer, sizeof(strBuffer), "We are in the %s week (%s) of the %s month of the year %d",
             number_to_string[m_pTimeline->GetWeek()],
             weektype_to_string[m_pTimeline->GetWeekType()],
             number_to_string[m_pTimeline->GetMonth()],
             m_pTimeline->GetYear());
    mvaddstr(2, 0, strBuffer);
    snprintf(strBuffer, sizeof(strBuffer), "It is %s.", season_to_string[m_pTimeline->GetSeason()->GetType()]);
    mvaddstr(3, 0, strBuffer);
    refresh();
}//@CODE_2562


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_2557
Method which must be called first in a constructor.
*/
void CTimelineCursesRenderer::ConstructorInclude()
{
}


/*@NOTE_2558
Method which must be called first in a destructor.
*/
void CTimelineCursesRenderer::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

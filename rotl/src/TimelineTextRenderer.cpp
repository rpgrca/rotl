/******************************************************************************\
*
* File:          ../../src/TimelineTextRenderer.cpp
* Creation date: April 17, 2005 03:22
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CTimelineTextRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 20:06 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 17, 2005 14:32 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 17, 2005 07:26 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 17, 2005 07:23 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 17, 2005 07:13 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 17, 2005 03:27 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 17, 2005 03:24 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 17, 2005 03:22 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Draw'
*     Added method '~CTimelineTextRenderer'
*     Added method 'CTimelineTextRenderer'
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




/*@NOTE_2246
Constructor method.
*/
CTimelineTextRenderer::CTimelineTextRenderer() //@INIT_2246
    : CTimelineRenderer()
{//@CODE_2246
    ConstructorInclude();

    // Put in your own code
}//@CODE_2246


/*@NOTE_2241
Destructor method.
*/
CTimelineTextRenderer::~CTimelineTextRenderer()
{//@CODE_2241
    DestructorInclude();

    // Put in your own code
}//@CODE_2241


/*@NOTE_2247
This method must be overloaded in derived classes in order to draw onto screen.
*/
void CTimelineTextRenderer::Draw()
{//@CODE_2247
    const char *to_string[] = {
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

    printf("-------------------------------------------------------------------------------\n");
    printf("We are in the %s week (%s) of the %s month of the year %d\n",
            to_string[m_pTimeline->GetWeek()],
            weektype_to_string[m_pTimeline->GetWeekType()],
            to_string[m_pTimeline->GetMonth()],
            m_pTimeline->GetYear());
    printf("It is %s.\n", season_to_string[m_pTimeline->GetSeason()->GetType()]);
}//@CODE_2247


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_2242
Method which must be called first in a constructor.
*/
void CTimelineTextRenderer::ConstructorInclude()
{
}


/*@NOTE_2243
Method which must be called first in a destructor.
*/
void CTimelineTextRenderer::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

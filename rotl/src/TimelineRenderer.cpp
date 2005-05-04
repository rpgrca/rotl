/******************************************************************************\
*
* File:          ../../src/TimelineRenderer.cpp
* Creation date: April 17, 2005 03:22
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CTimelineRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 16:56 ReyBrujo, 2005
*     Updated code of method '~CTimelineRenderer'
* April 17, 2005 03:22 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetTimeline'
*     Added method 'GetTimeline'
*     Added method '~CTimelineRenderer'
*     Added method 'CTimelineRenderer'
*     Added inheritance 'CRenderer'
*     Added member 'm_pTimeline'
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




/*@NOTE_2239
Constructor method.
*/
CTimelineRenderer::CTimelineRenderer() //@INIT_2239
    : CRenderer()
    , m_pTimeline(NULL)
{//@CODE_2239
    ConstructorInclude();

    // Put in your own code
}//@CODE_2239


/*@NOTE_2230
Destructor method.
*/
CTimelineRenderer::~CTimelineRenderer()
{//@CODE_2230
    DestructorInclude();

    // Put in your own code
    m_pTimeline = NULL;
}//@CODE_2230


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_2231
Method which must be called first in a constructor.
*/
void CTimelineRenderer::ConstructorInclude()
{
}


/*@NOTE_2232
Method which must be called first in a destructor.
*/
void CTimelineRenderer::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

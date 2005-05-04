/******************************************************************************\
*
* File:          ../../include/TimelineCursesRenderer.h
* Creation date: April 19, 2005 23:55
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CTimelineCursesRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
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
#ifndef _TIMELINECURSESRENDERER_H
#define _TIMELINECURSESRENDERER_H

//@START_USER1
//@END_USER1


/*@NOTE_2555
The PDCurses renderer of the timeline.
*/

class CTimelineCursesRenderer
    : public CTimelineRenderer
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

//
// Non-Grouped Methods
//

public:
    CTimelineCursesRenderer();
    virtual ~CTimelineCursesRenderer();
    virtual void Draw();
};

#endif


#ifdef CB_INLINES
#ifndef _TIMELINECURSESRENDERER_H_INLINES
#define _TIMELINECURSESRENDERER_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

/******************************************************************************\
*
* File:          ../../include/TimelineTextRenderer.h
* Creation date: April 17, 2005 03:22
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CTimelineTextRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
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
#ifndef _TIMELINETEXTRENDERER_H
#define _TIMELINETEXTRENDERER_H

//@START_USER1
//@END_USER1


/*@NOTE_2240
The basic text renderer of the timeline.
*/

class CTimelineTextRenderer
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
    CTimelineTextRenderer();
    virtual ~CTimelineTextRenderer();
    virtual void Draw();
};

#endif


#ifdef CB_INLINES
#ifndef _TIMELINETEXTRENDERER_H_INLINES
#define _TIMELINETEXTRENDERER_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

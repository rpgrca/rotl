/******************************************************************************\
*
* File:          ../../include/TimelineRenderer.h
* Creation date: April 17, 2005 03:22
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CTimelineRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
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
#ifndef _TIMELINERENDERER_H
#define _TIMELINERENDERER_H

//@START_USER1
//@END_USER1


/*@NOTE_2229
The basic timeline renderer.
*/

class CTimelineRenderer
    : public CRenderer
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

protected:
    CTimeline* m_pTimeline;

//
// Non-Grouped Methods
//

public:
    CTimelineRenderer();
    virtual ~CTimelineRenderer();
    CTimeline* GetTimeline() const;
    void SetTimeline(CTimeline* pTimeline);
};

#endif


#ifdef CB_INLINES
#ifndef _TIMELINERENDERER_H_INLINES
#define _TIMELINERENDERER_H_INLINES

/*@NOTE_2236
Returns the value of member 'm_pTimeline'.
*/
inline CTimeline* CTimelineRenderer::GetTimeline() const
{//@CODE_2236
    return m_pTimeline;
}//@CODE_2236



/*@NOTE_2237
Set the value of member 'm_pTimeline' to 'pTimeline'.
*/
inline void CTimelineRenderer::SetTimeline(CTimeline* pTimeline)
{//@CODE_2237
    m_pTimeline = pTimeline;
}//@CODE_2237



//@START_USER3
//@END_USER3

#endif
#endif

/******************************************************************************\
*
* File:          ../../include/TimelineFactory.h
* Creation date: April 11, 2005 18:26
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CTimelineFactory'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 11, 2005 18:26 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Create'
*     Added method '~CTimelineFactory'
*     Added method 'CTimelineFactory'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _TIMELINEFACTORY_H
#define _TIMELINEFACTORY_H

//@START_USER1
//@END_USER1


/*@NOTE_927
This factory creates the storyline for a given year.
*/

class CTimelineFactory
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
    CTimelineFactory();
    virtual ~CTimelineFactory();
};

#endif


#ifdef CB_INLINES
#ifndef _TIMELINEFACTORY_H_INLINES
#define _TIMELINEFACTORY_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

/******************************************************************************\
*
* File:          ../../include/SeasonalEventHeavyRains.h
* Creation date: April 11, 2005 01:39
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CSeasonalEventHeavyRains'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CSeasonalEvent'
* April 11, 2005 01:39 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonalEventHeavyRains'
*     Added method 'CSeasonalEventHeavyRains'
*     Added inheritance 'CSeasonalEvent'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _SEASONALEVENTHEAVYRAINS_H
#define _SEASONALEVENTHEAVYRAINS_H

//@START_USER1
//@END_USER1


/*@NOTE_513
Continuous heavy rain for several days or weeks.
*/

class CSeasonalEventHeavyRains
    : public CSeasonalEvent
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
    CSeasonalEventHeavyRains();
    virtual ~CSeasonalEventHeavyRains();
};

#endif


#ifdef CB_INLINES
#ifndef _SEASONALEVENTHEAVYRAINS_H_INLINES
#define _SEASONALEVENTHEAVYRAINS_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

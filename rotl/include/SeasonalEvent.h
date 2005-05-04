/******************************************************************************\
*
* File:          ../../include/SeasonalEvent.h
* Creation date: April 10, 2005 21:54
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CSeasonalEvent'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 13, 2005 17:12 ReyBrujo, 2005
*     Updated inheritance 'CEvent'
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CEvent'
* April 10, 2005 21:54 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonalEvent'
*     Added method 'CSeasonalEvent'
*     Added inheritance 'CEvent'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _SEASONALEVENT_H
#define _SEASONALEVENT_H

//@START_USER1
//@END_USER1


/*@NOTE_390
Seasonal Events can occur randomly in the game.
These events happen in the map, and applies modifiers to cities and/or armies in affected squares.
*/

class CSeasonalEvent
    : public CEvent
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
    CSeasonalEvent();
    virtual ~CSeasonalEvent();
};

#endif


#ifdef CB_INLINES
#ifndef _SEASONALEVENT_H_INLINES
#define _SEASONALEVENT_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

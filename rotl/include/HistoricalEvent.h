/******************************************************************************\
*
* File:          ../../include/HistoricalEvent.h
* Creation date: April 11, 2005 02:05
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CHistoricalEvent'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 13, 2005 17:12 ReyBrujo, 2005
*     Updated inheritance 'CEvent'
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CEvent'
* April 11, 2005 02:05 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CHistoricalEvent'
*     Added method 'CHistoricalEvent'
*     Added inheritance 'CEvent'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _HISTORICALEVENT_H
#define _HISTORICALEVENT_H

//@START_USER1
//@END_USER1


/*@NOTE_576
Various events based on the history of the region can occur throughout the game.
*/

class CHistoricalEvent
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
    CHistoricalEvent();
    virtual ~CHistoricalEvent();
};

#endif


#ifdef CB_INLINES
#ifndef _HISTORICALEVENT_H_INLINES
#define _HISTORICALEVENT_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

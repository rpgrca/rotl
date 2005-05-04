/******************************************************************************\
*
* File:          ../../include/SeasonalEventSandStorm.h
* Creation date: April 11, 2005 01:39
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CSeasonalEventSandStorm'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CSeasonalEvent'
* April 11, 2005 01:39 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonalEventSandStorm'
*     Added method 'CSeasonalEventSandStorm'
*     Added inheritance 'CSeasonalEvent'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _SEASONALEVENTSANDSTORM_H
#define _SEASONALEVENTSANDSTORM_H

//@START_USER1
//@END_USER1


/*@NOTE_506
Harsh winds cause swirls of blinding sand in desert areas.
*/

class CSeasonalEventSandStorm
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
    CSeasonalEventSandStorm();
    virtual ~CSeasonalEventSandStorm();
};

#endif


#ifdef CB_INLINES
#ifndef _SEASONALEVENTSANDSTORM_H_INLINES
#define _SEASONALEVENTSANDSTORM_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

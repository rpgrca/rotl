/******************************************************************************\
*
* File:          ../../include/SeasonalEventBlizzard.h
* Creation date: April 10, 2005 23:58
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CSeasonalEventBlizzard'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 13, 2005 17:12 ReyBrujo, 2005
*     Updated inheritance 'CSeasonalEvent'
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CSeasonalEvent'
* April 11, 2005 00:10 ReyBrujo, 2005
*     Added method 'CSeasonalEventBlizzard'
* April 10, 2005 23:58 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonalEventBlizzard'
*     Added inheritance 'CSeasonalEvent'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _SEASONALEVENTBLIZZARD_H
#define _SEASONALEVENTBLIZZARD_H

//@START_USER1
//@END_USER1


/*@NOTE_446
Heavy snowfall.
*/

class CSeasonalEventBlizzard
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
    CSeasonalEventBlizzard();
    virtual ~CSeasonalEventBlizzard();
};

#endif


#ifdef CB_INLINES
#ifndef _SEASONALEVENTBLIZZARD_H_INLINES
#define _SEASONALEVENTBLIZZARD_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

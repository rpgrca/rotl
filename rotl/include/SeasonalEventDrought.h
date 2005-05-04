/******************************************************************************\
*
* File:          ../../include/SeasonalEventDrought.h
* Creation date: April 11, 2005 01:59
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CSeasonalEventDrought'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CSeasonalEvent'
* April 11, 2005 01:59 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonalEventDrought'
*     Added method 'CSeasonalEventDrought'
*     Added inheritance 'CSeasonalEvent'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _SEASONALEVENTDROUGHT_H
#define _SEASONALEVENTDROUGHT_H

//@START_USER1
//@END_USER1


/*@NOTE_527
Days without rain endanger the city's crops.
*/

class CSeasonalEventDrought
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
    CSeasonalEventDrought();
    virtual ~CSeasonalEventDrought();
};

#endif


#ifdef CB_INLINES
#ifndef _SEASONALEVENTDROUGHT_H_INLINES
#define _SEASONALEVENTDROUGHT_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

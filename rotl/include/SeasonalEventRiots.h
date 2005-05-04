/******************************************************************************\
*
* File:          ../../include/SeasonalEventRiots.h
* Creation date: April 11, 2005 01:59
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CSeasonalEventRiots'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CSeasonalEvent'
* April 11, 2005 01:59 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonalEventRiots'
*     Added method 'CSeasonalEventRiots'
*     Added inheritance 'CSeasonalEvent'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _SEASONALEVENTRIOTS_H
#define _SEASONALEVENTRIOTS_H

//@START_USER1
//@END_USER1


/*@NOTE_555
People rebel against the established rule and raise arms.
*/

class CSeasonalEventRiots
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
    CSeasonalEventRiots();
    virtual ~CSeasonalEventRiots();
};

#endif


#ifdef CB_INLINES
#ifndef _SEASONALEVENTRIOTS_H_INLINES
#define _SEASONALEVENTRIOTS_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

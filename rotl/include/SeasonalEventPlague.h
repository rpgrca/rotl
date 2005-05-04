/******************************************************************************\
*
* File:          ../../include/SeasonalEventPlague.h
* Creation date: April 11, 2005 01:59
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CSeasonalEventPlague'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CSeasonalEvent'
* April 11, 2005 01:59 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonalEventPlague'
*     Added method 'CSeasonalEventPlague'
*     Added inheritance 'CSeasonalEvent'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _SEASONALEVENTPLAGUE_H
#define _SEASONALEVENTPLAGUE_H

//@START_USER1
//@END_USER1


/*@NOTE_562
Diseases spread throughout the land.
*/

class CSeasonalEventPlague
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
    CSeasonalEventPlague();
    virtual ~CSeasonalEventPlague();
};

#endif


#ifdef CB_INLINES
#ifndef _SEASONALEVENTPLAGUE_H_INLINES
#define _SEASONALEVENTPLAGUE_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

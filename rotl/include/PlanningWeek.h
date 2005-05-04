/******************************************************************************\
*
* File:          ../../include/PlanningWeek.h
* Creation date: April 11, 2005 14:23
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CPlanningWeek'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated interface of method 'SetWeek'
*     Updated inheritance 'CWeek'
* April 11, 2005 14:23 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetWeek'
*     Added method '~CPlanningWeek'
*     Added method 'CPlanningWeek'
*     Added inheritance 'CWeek'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _PLANNINGWEEK_H
#define _PLANNINGWEEK_H

//@START_USER1
//@END_USER1


/*@NOTE_684
Planning weeks allow the player to do things other than moving and attacking.
*/

class CPlanningWeek
    : public CWeek
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
    CPlanningWeek();
    virtual ~CPlanningWeek();
    virtual void SetWeek(const int nWeek);
};

#endif


#ifdef CB_INLINES
#ifndef _PLANNINGWEEK_H_INLINES
#define _PLANNINGWEEK_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

/******************************************************************************\
*
* File:          MovementWeek.h
* Creation date: April 11, 2005 14:15
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CMovementWeek'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated interface of method 'SetWeek'
*     Updated inheritance 'CWeek'
* April 11, 2005 14:23 ReyBrujo
*     Deleted inheritance 'CWeather'
*     Added method 'SetWeek'
*     Added inheritance 'CWeek'
* April 11, 2005 14:15 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMovementWeek'
*     Added method 'CMovementWeek'
*     Added inheritance 'CWeather'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _MOVEMENTWEEK_H
#define _MOVEMENTWEEK_H

//@START_USER1
//@END_USER1


/*@NOTE_669
Movement weeks let the units move through the map.
*/

class CMovementWeek
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
    CMovementWeek();
    virtual ~CMovementWeek();
    virtual void SetWeek(const int nWeek);
};

#endif


#ifdef CB_INLINES
#ifndef _MOVEMENTWEEK_H_INLINES
#define _MOVEMENTWEEK_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

/******************************************************************************\
*
* File:          ../../include/ArmyActionMarchRush.h
* Creation date: April 14, 2005 01:33
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CArmyActionMarchRush'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 01:50 ReyBrujo, 2005
*     Updated inheritance 'CArmyActionMarch'
* April 14, 2005 01:33 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CArmyActionMarchRush'
*     Added method 'CArmyActionMarchRush'
*     Added inheritance 'CActionMovement'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _ARMYACTIONMARCHRUSH_H
#define _ARMYACTIONMARCHRUSH_H

//@START_USER1
//@END_USER1


/*@NOTE_1280
In one command, you can move up to 4 squares, or 5 squares for divisions with Intelligence levels 80 and above.
The division's Spirit and Stamina, however, will decrease.
*/

class CArmyActionMarchRush
    : public CArmyActionMarch
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
    CArmyActionMarchRush();
    virtual ~CArmyActionMarchRush();
};

#endif


#ifdef CB_INLINES
#ifndef _ARMYACTIONMARCHRUSH_H_INLINES
#define _ARMYACTIONMARCHRUSH_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

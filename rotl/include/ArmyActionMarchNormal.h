/******************************************************************************\
*
* File:          ../../include/ArmyActionMarchNormal.h
* Creation date: April 14, 2005 01:33
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CArmyActionMarchNormal'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 19:02 ReyBrujo, 2005
*     Added method 'Execute'
* April 14, 2005 01:50 ReyBrujo, 2005
*     Updated inheritance 'CArmyActionMarch'
* April 14, 2005 01:33 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CArmyActionMarchNormal'
*     Added method 'CArmyActionMarchNormal'
*     Added inheritance 'CActionMovement'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _ARMYACTIONMARCHNORMAL_H
#define _ARMYACTIONMARCHNORMAL_H

//@START_USER1
//@END_USER1


/*@NOTE_1266
Move a division within the mobility range, designated by the highlighted areas.
The mobility range is 4 squares for divisions with generals of Intelligence levels 80 and above, and 3 squares for other divisions.
A division mauy join other divisions, when it moves to a square occupied by another division under the same ruler.
When you combine divisions, you must fire generals if the total number of generals exceeds five.
You can continue to wage an attack after you move, if you MARCH to a square that is next to an enemy division.
*/

class CArmyActionMarchNormal
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
    CArmyActionMarchNormal();
    virtual ~CArmyActionMarchNormal();
    virtual bool Execute();
};

#endif


#ifdef CB_INLINES
#ifndef _ARMYACTIONMARCHNORMAL_H_INLINES
#define _ARMYACTIONMARCHNORMAL_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

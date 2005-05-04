/******************************************************************************\
*
* File:          ../../include/ArmyActionMarchSneak.h
* Creation date: April 14, 2005 01:33
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CArmyActionMarchSneak'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 01:50 ReyBrujo, 2005
*     Updated inheritance 'CArmyActionMarch'
* April 14, 2005 01:33 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CArmyActionMarchSneak'
*     Added method 'CArmyActionMarchSneak'
*     Added inheritance 'CActionMovement'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _ARMYACTIONMARCHSNEAK_H
#define _ARMYACTIONMARCHSNEAK_H

//@START_USER1
//@END_USER1


/*@NOTE_1273
March with your division in hiding.
The mobility range is 3 squares per divisions with generals of Intelligence levels 80 and above, and 2 squares for all remaining divisions.
If an enemy moves to a square occupied by a division under the SNEAK command, the hiding division may launch a surprise attack on the enemy.
The division under the SNEAK command will incur almost no damages, while the division under attack will be hurt significantly.
*/

class CArmyActionMarchSneak
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
    CArmyActionMarchSneak();
    virtual ~CArmyActionMarchSneak();
};

#endif


#ifdef CB_INLINES
#ifndef _ARMYACTIONMARCHSNEAK_H_INLINES
#define _ARMYACTIONMARCHSNEAK_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

/******************************************************************************\
*
* File:          ../../include/ArmyActionHide.h
* Creation date: April 14, 2005 02:03
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CArmyActionHide'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:03 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CArmyActionHide'
*     Added method 'CArmyActionHide'
*     Added inheritance 'CArmyAction'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _ARMYACTIONHIDE_H
#define _ARMYACTIONHIDE_H

//@START_USER1
//@END_USER1


/*@NOTE_1429
This command allows you to conceal your divisions from enemies, or cancel the HIDE command.
*/

class CArmyActionHide
    : public CArmyAction
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
    CArmyActionHide();
    virtual ~CArmyActionHide();
};

#endif


#ifdef CB_INLINES
#ifndef _ARMYACTIONHIDE_H_INLINES
#define _ARMYACTIONHIDE_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

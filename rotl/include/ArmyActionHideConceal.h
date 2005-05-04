/******************************************************************************\
*
* File:          ../../include/ArmyActionHideConceal.h
* Creation date: April 14, 2005 02:14
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CArmyActionHideConceal'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:14 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CArmyActionHideConceal'
*     Added method 'CArmyActionHideConceal'
*     Added inheritance 'CArmyActionHide'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _ARMYACTIONHIDECONCEAL_H
#define _ARMYACTIONHIDECONCEAL_H

//@START_USER1
//@END_USER1


/*@NOTE_1436
Your division's movements will be hidden from the enemy, but the stress of hiding will decrease your soldier's Spirit.
The HIDE command allows you to wage surprise attacks on enemy divisions.
*/

class CArmyActionHideConceal
    : public CArmyActionHide
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
    CArmyActionHideConceal();
    virtual ~CArmyActionHideConceal();
};

#endif


#ifdef CB_INLINES
#ifndef _ARMYACTIONHIDECONCEAL_H_INLINES
#define _ARMYACTIONHIDECONCEAL_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

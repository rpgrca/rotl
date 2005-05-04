/******************************************************************************\
*
* File:          ../../include/CombatGround.h
* Creation date: April 13, 2005 19:00
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCombatGround'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 13, 2005 19:00 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCombatGround'
*     Added method 'CCombatGround'
*     Added inheritance 'CCombat'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _COMBATGROUND_H
#define _COMBATGROUND_H

//@START_USER1
//@END_USER1


/*@NOTE_1213
This class gives support for combat in the open field.
*/

class CCombatGround
    : public CCombat
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
    CCombatGround();
    virtual ~CCombatGround();
};

#endif


#ifdef CB_INLINES
#ifndef _COMBATGROUND_H_INLINES
#define _COMBATGROUND_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

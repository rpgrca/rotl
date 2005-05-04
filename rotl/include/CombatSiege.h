/******************************************************************************\
*
* File:          ../../include/CombatSiege.h
* Creation date: April 13, 2005 19:00
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCombatSiege'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 13, 2005 19:00 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCombatSiege'
*     Added method 'CCombatSiege'
*     Added inheritance 'CCombat'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _COMBATSIEGE_H
#define _COMBATSIEGE_H

//@START_USER1
//@END_USER1


/*@NOTE_1219
Support for combat inside the castle.
*/

class CCombatSiege
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
    CCombatSiege();
    virtual ~CCombatSiege();
};

#endif


#ifdef CB_INLINES
#ifndef _COMBATSIEGE_H_INLINES
#define _COMBATSIEGE_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

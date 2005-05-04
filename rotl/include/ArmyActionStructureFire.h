/******************************************************************************\
*
* File:          ../../include/ArmyActionStructureFire.h
* Creation date: April 14, 2005 02:14
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CArmyActionStructureFire'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:14 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CArmyActionStructureFire'
*     Added method 'CArmyActionStructureFire'
*     Added inheritance 'CArmyActionStructure'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _ARMYACTIONSTRUCTUREFIRE_H
#define _ARMYACTIONSTRUCTUREFIRE_H

//@START_USER1
//@END_USER1


/*@NOTE_1485
FIRE generals from a division.
*/

class CArmyActionStructureFire
    : public CArmyActionStructure
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
    CArmyActionStructureFire();
    virtual ~CArmyActionStructureFire();
};

#endif


#ifdef CB_INLINES
#ifndef _ARMYACTIONSTRUCTUREFIRE_H_INLINES
#define _ARMYACTIONSTRUCTUREFIRE_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

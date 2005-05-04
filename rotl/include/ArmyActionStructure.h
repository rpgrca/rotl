/******************************************************************************\
*
* File:          ../../include/ArmyActionStructure.h
* Creation date: April 14, 2005 02:14
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CArmyActionStructure'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:14 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CArmyActionStructure'
*     Added method 'CArmyActionStructure'
*     Added inheritance 'CArmyAction'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _ARMYACTIONSTRUCTURE_H
#define _ARMYACTIONSTRUCTURE_H

//@START_USER1
//@END_USER1



class CArmyActionStructure
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
    CArmyActionStructure();
    virtual ~CArmyActionStructure();
};

#endif


#ifdef CB_INLINES
#ifndef _ARMYACTIONSTRUCTURE_H_INLINES
#define _ARMYACTIONSTRUCTURE_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

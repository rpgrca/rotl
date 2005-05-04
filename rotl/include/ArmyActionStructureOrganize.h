/******************************************************************************\
*
* File:          ../../include/ArmyActionStructureOrganize.h
* Creation date: April 14, 2005 02:14
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CArmyActionStructureOrganize'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:14 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CArmyActionStructureOrganize'
*     Added method 'CArmyActionStructureOrganize'
*     Added inheritance 'CArmyActionStructure'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _ARMYACTIONSTRUCTUREORGANIZE_H
#define _ARMYACTIONSTRUCTUREORGANIZE_H

//@START_USER1
//@END_USER1


/*@NOTE_1478
REORGANIZE the Gold, Provisions, Soldiers and generals of the division.
Any item and soldier left at the bottom of the screen will be thrown away or dismissed when you end the command.
*/

class CArmyActionStructureOrganize
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
    CArmyActionStructureOrganize();
    virtual ~CArmyActionStructureOrganize();
};

#endif


#ifdef CB_INLINES
#ifndef _ARMYACTIONSTRUCTUREORGANIZE_H_INLINES
#define _ARMYACTIONSTRUCTUREORGANIZE_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

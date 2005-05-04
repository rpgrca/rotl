/******************************************************************************\
*
* File:          ../../src/ArmyActionStructureOrganize.cpp
* Creation date: April 14, 2005 02:14
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CArmyActionStructureOrganize'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:23 ReyBrujo, 2005
*     Updated code of method '~CArmyActionStructureOrganize'
*     Updated code of method 'CArmyActionStructureOrganize'
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
//@START_USER1
//@END_USER1


// Master include file
#include "rotl.h"


//@START_USER2
//@END_USER2




/*@NOTE_1484
Constructor method.
*/
CArmyActionStructureOrganize::CArmyActionStructureOrganize() //@INIT_1484
    : CArmyActionStructure()
{//@CODE_1484
    ConstructorInclude();

    // Put in your own code
    SetType(enACTIONTYPE_ARMY_STRUCTURE_ORGANIZE);
}//@CODE_1484


/*@NOTE_1479
Destructor method.
*/
CArmyActionStructureOrganize::~CArmyActionStructureOrganize()
{//@CODE_1479
    DestructorInclude();

    // Put in your own code
}//@CODE_1479


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1480
Method which must be called first in a constructor.
*/
void CArmyActionStructureOrganize::ConstructorInclude()
{
}


/*@NOTE_1481
Method which must be called first in a destructor.
*/
void CArmyActionStructureOrganize::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

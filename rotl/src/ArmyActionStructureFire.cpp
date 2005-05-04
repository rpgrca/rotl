/******************************************************************************\
*
* File:          ../../src/ArmyActionStructureFire.cpp
* Creation date: April 14, 2005 02:14
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CArmyActionStructureFire'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:23 ReyBrujo, 2005
*     Updated code of method 'CArmyActionStructureFire'
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
//@START_USER1
//@END_USER1


// Master include file
#include "rotl.h"


//@START_USER2
//@END_USER2




/*@NOTE_1491
Constructor method.
*/
CArmyActionStructureFire::CArmyActionStructureFire() //@INIT_1491
    : CArmyActionStructure()
{//@CODE_1491
    ConstructorInclude();

    // Put in your own code
    SetType(enACTIONTYPE_ARMY_STRUCTURE_FIRE);
}//@CODE_1491


/*@NOTE_1486
Destructor method.
*/
CArmyActionStructureFire::~CArmyActionStructureFire()
{//@CODE_1486
    DestructorInclude();

    // Put in your own code
}//@CODE_1486


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1487
Method which must be called first in a constructor.
*/
void CArmyActionStructureFire::ConstructorInclude()
{
}


/*@NOTE_1488
Method which must be called first in a destructor.
*/
void CArmyActionStructureFire::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

/******************************************************************************\
*
* File:          ../../src/ArmyActionStructure.cpp
* Creation date: April 14, 2005 02:14
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CArmyActionStructure'
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
//@START_USER1
//@END_USER1


// Master include file
#include "rotl.h"


//@START_USER2
//@END_USER2




/*@NOTE_1477
Constructor method.
*/
CArmyActionStructure::CArmyActionStructure() //@INIT_1477
    : CArmyAction()
{//@CODE_1477
    ConstructorInclude();

    // Put in your own code
}//@CODE_1477


/*@NOTE_1472
Destructor method.
*/
CArmyActionStructure::~CArmyActionStructure()
{//@CODE_1472
    DestructorInclude();

    // Put in your own code
}//@CODE_1472


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1473
Method which must be called first in a constructor.
*/
void CArmyActionStructure::ConstructorInclude()
{
}


/*@NOTE_1474
Method which must be called first in a destructor.
*/
void CArmyActionStructure::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

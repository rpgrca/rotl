/******************************************************************************\
*
* File:          ../../src/ArmyActionHideConceal.cpp
* Creation date: April 14, 2005 02:14
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CArmyActionHideConceal'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:23 ReyBrujo, 2005
*     Updated code of method 'CArmyActionHideConceal'
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
//@START_USER1
//@END_USER1


// Master include file
#include "rotl.h"


//@START_USER2
//@END_USER2




/*@NOTE_1442
Constructor method.
*/
CArmyActionHideConceal::CArmyActionHideConceal() //@INIT_1442
    : CArmyActionHide()
{//@CODE_1442
    ConstructorInclude();

    // Put in your own code
    SetType(enACTIONTYPE_ARMY_HIDE_CONCEAL);
}//@CODE_1442


/*@NOTE_1437
Destructor method.
*/
CArmyActionHideConceal::~CArmyActionHideConceal()
{//@CODE_1437
    DestructorInclude();

    // Put in your own code
}//@CODE_1437


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1438
Method which must be called first in a constructor.
*/
void CArmyActionHideConceal::ConstructorInclude()
{
}


/*@NOTE_1439
Method which must be called first in a destructor.
*/
void CArmyActionHideConceal::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

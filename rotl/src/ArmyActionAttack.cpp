/******************************************************************************\
*
* File:          ../../src/ArmyActionAttack.cpp
* Creation date: April 14, 2005 01:50
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CArmyActionAttack'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:23 ReyBrujo, 2005
*     Updated code of method 'CArmyActionAttack'
* April 14, 2005 01:50 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CArmyActionAttack'
*     Added method 'CArmyActionAttack'
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




/*@NOTE_1321
Constructor method.
*/
CArmyActionAttack::CArmyActionAttack() //@INIT_1321
    : CArmyAction()
{//@CODE_1321
    ConstructorInclude();

    // Put in your own code
    SetType(enACTIONTYPE_ARMY_ATTACK);
}//@CODE_1321


/*@NOTE_1317
Destructor method.
*/
CArmyActionAttack::~CArmyActionAttack()
{//@CODE_1317
    DestructorInclude();

    // Put in your own code
}//@CODE_1317


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1318
Method which must be called first in a constructor.
*/
void CArmyActionAttack::ConstructorInclude()
{
}


/*@NOTE_1319
Method which must be called first in a destructor.
*/
void CArmyActionAttack::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

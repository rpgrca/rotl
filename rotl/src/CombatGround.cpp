/******************************************************************************\
*
* File:          ../../src/CombatGround.cpp
* Creation date: April 13, 2005 19:00
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCombatGround'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 13, 2005 19:04 ReyBrujo, 2005
*     Updated code of method '~CCombatGround'
*     Updated code of method 'CCombatGround'
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
//@START_USER1
//@END_USER1


// Master include file
#include "rotl.h"


//@START_USER2
//@END_USER2




/*@NOTE_1226
Constructor method.
*/
CCombatGround::CCombatGround() //@INIT_1226
    : CCombat()
{//@CODE_1226
    ConstructorInclude();

    // Put in your own code
}//@CODE_1226


/*@NOTE_1214
Destructor method.
*/
CCombatGround::~CCombatGround()
{//@CODE_1214
    DestructorInclude();

    // Put in your own code
}//@CODE_1214


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1215
Method which must be called first in a constructor.
*/
void CCombatGround::ConstructorInclude()
{
}


/*@NOTE_1216
Method which must be called first in a destructor.
*/
void CCombatGround::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

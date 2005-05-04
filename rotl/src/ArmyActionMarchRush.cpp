/******************************************************************************\
*
* File:          ../../src/ArmyActionMarchRush.cpp
* Creation date: April 14, 2005 01:33
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CArmyActionMarchRush'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:23 ReyBrujo, 2005
*     Updated code of method 'CArmyActionMarchRush'
* April 14, 2005 01:50 ReyBrujo, 2005
*     Updated code of method '~CArmyActionMarchRush'
*     Updated code of method 'CArmyActionMarchRush'
*     Updated inheritance 'CArmyActionMarch'
* April 14, 2005 01:33 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CArmyActionMarchRush'
*     Added method 'CArmyActionMarchRush'
*     Added inheritance 'CActionMovement'
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




/*@NOTE_1286
Constructor method.
*/
CArmyActionMarchRush::CArmyActionMarchRush() //@INIT_1286
    : CArmyActionMarch()
{//@CODE_1286
    ConstructorInclude();

    // Put in your own code
    SetType(enACTIONTYPE_ARMY_MARCH_RUSH);
}//@CODE_1286


/*@NOTE_1281
Destructor method.
*/
CArmyActionMarchRush::~CArmyActionMarchRush()
{//@CODE_1281
    DestructorInclude();

    // Put in your own code
}//@CODE_1281


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1282
Method which must be called first in a constructor.
*/
void CArmyActionMarchRush::ConstructorInclude()
{
}


/*@NOTE_1283
Method which must be called first in a destructor.
*/
void CArmyActionMarchRush::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

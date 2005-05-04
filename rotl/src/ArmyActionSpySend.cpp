/******************************************************************************\
*
* File:          ../../src/ArmyActionSpySend.cpp
* Creation date: April 14, 2005 02:14
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CArmyActionSpySend'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:23 ReyBrujo, 2005
*     Updated code of method 'CArmyActionSpySend'
* April 14, 2005 02:14 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CArmyActionSpySend'
*     Added method 'CArmyActionSpySend'
*     Added inheritance 'CArmyActionSpy'
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




/*@NOTE_1463
Constructor method.
*/
CArmyActionSpySend::CArmyActionSpySend() //@INIT_1463
    : CArmyActionSpy()
{//@CODE_1463
    ConstructorInclude();

    // Put in your own code
    SetType(enACTIONTYPE_ARMY_SPY_SEND);
}//@CODE_1463


/*@NOTE_1458
Destructor method.
*/
CArmyActionSpySend::~CArmyActionSpySend()
{//@CODE_1458
    DestructorInclude();

    // Put in your own code
}//@CODE_1458


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1459
Method which must be called first in a constructor.
*/
void CArmyActionSpySend::ConstructorInclude()
{
}


/*@NOTE_1460
Method which must be called first in a destructor.
*/
void CArmyActionSpySend::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

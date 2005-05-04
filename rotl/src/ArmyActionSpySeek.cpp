/******************************************************************************\
*
* File:          ../../src/ArmyActionSpySeek.cpp
* Creation date: April 14, 2005 02:14
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CArmyActionSpySeek'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:23 ReyBrujo, 2005
*     Updated code of method 'CArmyActionSpySeek'
* April 14, 2005 02:14 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CArmyActionSpySeek'
*     Added method 'CArmyActionSpySeek'
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




/*@NOTE_1470
Constructor method.
*/
CArmyActionSpySeek::CArmyActionSpySeek() //@INIT_1470
    : CArmyActionSpy()
{//@CODE_1470
    ConstructorInclude();

    // Put in your own code
    SetType(enACTIONTYPE_ARMY_SPY_SEEK);
}//@CODE_1470


/*@NOTE_1465
Destructor method.
*/
CArmyActionSpySeek::~CArmyActionSpySeek()
{//@CODE_1465
    DestructorInclude();

    // Put in your own code
}//@CODE_1465


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1466
Method which must be called first in a constructor.
*/
void CArmyActionSpySeek::ConstructorInclude()
{
}


/*@NOTE_1467
Method which must be called first in a destructor.
*/
void CArmyActionSpySeek::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

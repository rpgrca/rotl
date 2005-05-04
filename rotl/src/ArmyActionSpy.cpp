/******************************************************************************\
*
* File:          ../../src/ArmyActionSpy.cpp
* Creation date: April 14, 2005 02:14
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CArmyActionSpy'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 15, 2005 12:00 ReyBrujo, 2005
*     Added method 'SetMap'
*     Added member 'm_pMap'
* April 14, 2005 02:14 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CArmyActionSpy'
*     Added method 'CArmyActionSpy'
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




/*@NOTE_1456
Constructor method.
*/
CArmyActionSpy::CArmyActionSpy() //@INIT_1456
    : CArmyAction()
    , m_pMap(NULL)
{//@CODE_1456
    ConstructorInclude();

    // Put in your own code
}//@CODE_1456


/*@NOTE_1451
Destructor method.
*/
CArmyActionSpy::~CArmyActionSpy()
{//@CODE_1451
    DestructorInclude();

    // Put in your own code
}//@CODE_1451


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1452
Method which must be called first in a constructor.
*/
void CArmyActionSpy::ConstructorInclude()
{
}


/*@NOTE_1453
Method which must be called first in a destructor.
*/
void CArmyActionSpy::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

/******************************************************************************\
*
* File:          ../../src/Temporal.cpp
* Creation date: April 18, 2005 00:53
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CTemporal'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 18, 2005 00:54 ReyBrujo, 2005
*     Added method 'CTemporal'
* April 18, 2005 00:53 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetRounds'
*     Added method 'GetRounds'
*     Added method '~CTemporal'
*     Added member 'm_nRounds'
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




/*@NOTE_2456
Constructor method.
*/
CTemporal::CTemporal() //@INIT_2456
    : m_nRounds(0)
{//@CODE_2456
    ConstructorInclude();

    // Put in your own code
}//@CODE_2456


/*@NOTE_2448
Destructor method.
*/
CTemporal::~CTemporal()
{//@CODE_2448
    DestructorInclude();

    // Put in your own code
}//@CODE_2448


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_2449
Method which must be called first in a constructor.
*/
void CTemporal::ConstructorInclude()
{
}


/*@NOTE_2450
Method which must be called first in a destructor.
*/
void CTemporal::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

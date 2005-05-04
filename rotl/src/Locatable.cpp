/******************************************************************************\
*
* File:          ../../src/Locatable.cpp
* Creation date: April 18, 2005 00:42
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CLocatable'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 18, 2005 00:42 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetLocationY'
*     Added method 'GetLocationY'
*     Added method 'SetLocationX'
*     Added method 'GetLocationX'
*     Added method '~CLocatable'
*     Added method 'CLocatable'
*     Added member 'm_nLocationY'
*     Added member 'm_nLocationX'
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




/*@NOTE_2425
Constructor method.
*/
CLocatable::CLocatable() //@INIT_2425
    : m_nLocationX(0)
    , m_nLocationY(0)
{//@CODE_2425
    ConstructorInclude();

    // Put in your own code
}//@CODE_2425


/*@NOTE_2413
Destructor method.
*/
CLocatable::~CLocatable()
{//@CODE_2413
    DestructorInclude();

    // Put in your own code
}//@CODE_2413


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_2414
Method which must be called first in a constructor.
*/
void CLocatable::ConstructorInclude()
{
}


/*@NOTE_2415
Method which must be called first in a destructor.
*/
void CLocatable::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

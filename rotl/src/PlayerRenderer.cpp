/******************************************************************************\
*
* File:          ../../src/PlayerRenderer.cpp
* Creation date: April 17, 2005 16:56
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CPlayerRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 16:56 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetPlayer'
*     Added method '~CPlayerRenderer'
*     Added method 'CPlayerRenderer'
*     Added inheritance 'CRenderer'
*     Added member 'm_pPlayer'
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




/*@NOTE_2324
Constructor method.
*/
CPlayerRenderer::CPlayerRenderer() //@INIT_2324
    : CRenderer()
    , m_pPlayer(NULL)
{//@CODE_2324
    ConstructorInclude();

    // Put in your own code
}//@CODE_2324


/*@NOTE_2311
Destructor method.
*/
CPlayerRenderer::~CPlayerRenderer()
{//@CODE_2311
    DestructorInclude();

    // Put in your own code
}//@CODE_2311


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_2312
Method which must be called first in a constructor.
*/
void CPlayerRenderer::ConstructorInclude()
{
}


/*@NOTE_2313
Method which must be called first in a destructor.
*/
void CPlayerRenderer::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

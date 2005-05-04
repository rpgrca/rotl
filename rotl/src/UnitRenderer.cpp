/******************************************************************************\
*
* File:          ../../src/UnitRenderer.cpp
* Creation date: April 16, 2005 20:37
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CUnitRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 20:37 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetUnit'
*     Added method 'GetUnit'
*     Added method '~CUnitRenderer'
*     Added method 'CUnitRenderer'
*     Added inheritance 'CRenderer'
*     Added member 'm_pUnit'
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




/*@NOTE_2173
Constructor method.
*/
CUnitRenderer::CUnitRenderer() //@INIT_2173
    : CRenderer()
    , m_pUnit(NULL)
{//@CODE_2173
    ConstructorInclude();

    // Put in your own code
}//@CODE_2173


/*@NOTE_2164
Destructor method.
*/
CUnitRenderer::~CUnitRenderer()
{//@CODE_2164
    DestructorInclude();

    // Put in your own code
    m_pUnit = NULL;
}//@CODE_2164


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_2165
Method which must be called first in a constructor.
*/
void CUnitRenderer::ConstructorInclude()
{
}


/*@NOTE_2166
Method which must be called first in a destructor.
*/
void CUnitRenderer::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

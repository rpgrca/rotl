/******************************************************************************\
*
* File:          ../../src/CityCursesRenderer.cpp
* Creation date: April 19, 2005 01:31
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCityCursesRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 19, 2005 01:35 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 19, 2005 01:31 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Draw'
*     Added method '~CCityCursesRenderer'
*     Added method 'CCityCursesRenderer'
*     Added inheritance 'CCityRenderer'
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




/*@NOTE_2520
Constructor method.
*/
CCityCursesRenderer::CCityCursesRenderer() //@INIT_2520
    : CCityRenderer()
{//@CODE_2520
    ConstructorInclude();

    // Put in your own code
}//@CODE_2520


/*@NOTE_2515
Destructor method.
*/
CCityCursesRenderer::~CCityCursesRenderer()
{//@CODE_2515
    DestructorInclude();

    // Put in your own code
}//@CODE_2515


/*@NOTE_2521
This method must be overloaded in derived classes in order to draw onto screen.
*/
void CCityCursesRenderer::Draw()
{//@CODE_2521
    mvaddch(m_pCity->GetLocationY(), m_pCity->GetLocationX(), static_cast<chtype>('*'));
}//@CODE_2521


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_2516
Method which must be called first in a constructor.
*/
void CCityCursesRenderer::ConstructorInclude()
{
}


/*@NOTE_2517
Method which must be called first in a destructor.
*/
void CCityCursesRenderer::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

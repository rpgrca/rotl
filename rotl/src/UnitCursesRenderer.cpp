/******************************************************************************\
*
* File:          ../../src/UnitCursesRenderer.cpp
* Creation date: April 19, 2005 01:47
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CUnitCursesRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 20, 2005 00:47 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 20, 2005 00:44 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 19, 2005 02:12 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 19, 2005 01:47 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Draw'
*     Added method '~CUnitCursesRenderer'
*     Added method 'CUnitCursesRenderer'
*     Added inheritance 'CUnitRenderer'
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




/*@NOTE_2534
Constructor method.
*/
CUnitCursesRenderer::CUnitCursesRenderer() //@INIT_2534
    : CUnitRenderer()
{//@CODE_2534
    ConstructorInclude();

    // Put in your own code
}//@CODE_2534


/*@NOTE_2529
Destructor method.
*/
CUnitCursesRenderer::~CUnitCursesRenderer()
{//@CODE_2529
    DestructorInclude();

    // Put in your own code
}//@CODE_2529


/*@NOTE_2535
This method must be overloaded in derived classes in order to draw onto screen.
*/
void CUnitCursesRenderer::Draw()
{//@CODE_2535
    chtype chLetter;

    chLetter = m_pUnit->GetDivision() + 49;

    //  FIXME: +2 is the offset from the (0,0) to where the map is being
    //  drawn. This is a hack until finding out how to pass the Map window
    //  to this function.
    mvaddch(m_pUnit->GetLocationY() + 2, m_pUnit->GetLocationX(), chLetter);
}//@CODE_2535


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_2530
Method which must be called first in a constructor.
*/
void CUnitCursesRenderer::ConstructorInclude()
{
}


/*@NOTE_2531
Method which must be called first in a destructor.
*/
void CUnitCursesRenderer::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

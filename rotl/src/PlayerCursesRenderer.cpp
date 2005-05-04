/******************************************************************************\
*
* File:          ../../src/PlayerCursesRenderer.cpp
* Creation date: April 19, 2005 02:09
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CPlayerCursesRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 19, 2005 02:11 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 19, 2005 02:09 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Draw'
*     Added method '~CPlayerCursesRenderer'
*     Added method 'CPlayerCursesRenderer'
*     Added inheritance 'CPlayerRenderer'
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




/*@NOTE_2542
Constructor method.
*/
CPlayerCursesRenderer::CPlayerCursesRenderer() //@INIT_2542
    : CPlayerRenderer()
{//@CODE_2542
    ConstructorInclude();

    // Put in your own code
}//@CODE_2542


/*@NOTE_2537
Destructor method.
*/
CPlayerCursesRenderer::~CPlayerCursesRenderer()
{//@CODE_2537
    DestructorInclude();

    // Put in your own code
}//@CODE_2537


/*@NOTE_2543
This method must be overloaded in derived classes in order to draw onto screen.
*/
void CPlayerCursesRenderer::Draw()
{//@CODE_2543
    CPersonRuler *pPersonRuler = NULL;
    char strBuffer[512];
    int nIndex = 0;

    pPersonRuler = m_pPlayer->GetRuler();

    memset(strBuffer, '\0', sizeof(strBuffer));
    strcpy(strBuffer, "Current ruler: ");
    nIndex = strlen(strBuffer);

    pPersonRuler->GetName(&strBuffer[nIndex], sizeof(strBuffer)-nIndex);
    mvaddstr(0, (COLS - nIndex) / 2, strBuffer);
}//@CODE_2543


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_2538
Method which must be called first in a constructor.
*/
void CPlayerCursesRenderer::ConstructorInclude()
{
}


/*@NOTE_2539
Method which must be called first in a destructor.
*/
void CPlayerCursesRenderer::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

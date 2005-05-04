/******************************************************************************\
*
* File:          ../../src/PlayerTextRenderer.cpp
* Creation date: April 17, 2005 16:56
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CPlayerTextRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 21:51 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 17, 2005 17:06 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 17, 2005 16:56 ReyBrujo, 2005
*     Added method 'CPlayerTextRenderer'
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method 'Draw'
*     Updated code of method '~CPlayerTextRenderer'
*     Updated inheritance 'CPlayerRenderer'
* April 17, 2005 16:56 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Draw'
*     Added method '~CPlayerTextRenderer'
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




/*@NOTE_2332
Constructor method.
*/
CPlayerTextRenderer::CPlayerTextRenderer() //@INIT_2332
    : CPlayerRenderer()
{//@CODE_2332
    ConstructorInclude();

    // Put in your own code
}//@CODE_2332


/*@NOTE_2326
Destructor method.
*/
CPlayerTextRenderer::~CPlayerTextRenderer()
{//@CODE_2326
    DestructorInclude();

    // Put in your own code
}//@CODE_2326


/*@NOTE_2331
This method must be overloaded in derived classes in order to draw onto screen.
*/
void CPlayerTextRenderer::Draw()
{//@CODE_2331
    CPersonRuler *pPersonRuler = NULL;
    char strBuffer[512];

    pPersonRuler = m_pPlayer->GetRuler();
    printf("\n\nCurrent ruler: %s\n", pPersonRuler->GetName(strBuffer, sizeof(strBuffer)));
}//@CODE_2331


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_2327
Method which must be called first in a constructor.
*/
void CPlayerTextRenderer::ConstructorInclude()
{
}


/*@NOTE_2328
Method which must be called first in a destructor.
*/
void CPlayerTextRenderer::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

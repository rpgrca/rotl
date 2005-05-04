/******************************************************************************\
*
* File:          ../../src/PersonRenderer.cpp
* Creation date: April 13, 2005 00:39
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CPersonRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 15, 2005 15:18 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated interface of method 'SetPerson'
*     Updated code of method 'GetPerson'
*     Updated code of method '~CPersonRenderer'
*     Updated code of method 'CPersonRenderer'
*     Updated inheritance 'CRenderer'
*     Updated member 'm_pPerson'
* April 13, 2005 18:19 ReyBrujo, 2005
*     Deleted method 'Draw'
* April 13, 2005 01:39 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated interface of method 'SetPerson'
*     Updated code of method 'GetPerson'
*     Updated code of method 'Draw'
*     Updated code of method '~CPersonRenderer'
*     Updated code of method 'CPersonRenderer'
*     Updated inheritance 'CRenderer'
*     Updated member 'm_pPerson'
* April 13, 2005 00:39 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetPerson'
*     Added method 'GetPerson'
*     Added method 'Draw'
*     Added method '~CPersonRenderer'
*     Added method 'CPersonRenderer'
*     Added inheritance 'CRenderer'
*     Added member 'm_pPerson'
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




/*@NOTE_1142
Constructor method.
*/
CPersonRenderer::CPersonRenderer() //@INIT_1142
    : CRenderer()
    , m_pPerson(NULL)
{//@CODE_1142
    ConstructorInclude();

    // Put in your own code
}//@CODE_1142


/*@NOTE_1133
Destructor method.
*/
CPersonRenderer::~CPersonRenderer()
{//@CODE_1133
    DestructorInclude();

    // Put in your own code
    m_pPerson = NULL;
}//@CODE_1133


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1134
Method which must be called first in a constructor.
*/
void CPersonRenderer::ConstructorInclude()
{
}


/*@NOTE_1135
Method which must be called first in a destructor.
*/
void CPersonRenderer::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

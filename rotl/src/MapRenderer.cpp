/******************************************************************************\
*
* File:          ../../src/MapRenderer.cpp
* Creation date: April 12, 2005 15:01
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMapRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 19, 2005 01:07 ReyBrujo, 2005
*     Added method 'SetCityRenderer'
*     Added method 'GetCityRenderer'
*     Added member 'm_pCityRenderer'
*     Updated code of method '~CMapRenderer'
* April 15, 2005 15:18 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated interface of method 'SetMap'
*     Updated code of method 'GetMap'
*     Updated code of method '~CMapRenderer'
*     Updated code of method 'CMapRenderer'
*     Updated inheritance 'CRenderer'
*     Updated member 'm_pMap'
* April 13, 2005 18:28 ReyBrujo, 2005
*     Deleted method 'Draw'
* April 13, 2005 01:39 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated interface of method 'SetMap'
*     Updated code of method 'GetMap'
*     Updated code of method 'Draw'
*     Updated code of method '~CMapRenderer'
*     Updated code of method 'CMapRenderer'
*     Updated inheritance 'CRenderer'
*     Updated member 'm_pMap'
* April 12, 2005 15:17 ReyBrujo
*     Added method 'SetMap'
*     Added method 'GetMap'
*     Added method 'Draw'
*     Added member 'm_pMap'
*     Updated code of method '~CMapRenderer'
* April 12, 2005 15:07 ReyBrujo
*     Added method 'CMapRenderer'
*     Added inheritance 'CRenderer'
* April 12, 2005 15:01 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMapRenderer'
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




/*@NOTE_977
Constructor method.
*/
CMapRenderer::CMapRenderer() //@INIT_977
    : CRenderer()
    , m_pMap(NULL)
    , m_pCityRenderer(NULL)
{//@CODE_977
    ConstructorInclude();

    // Put in your own code
}//@CODE_977


/*@NOTE_943
Destructor method.
*/
CMapRenderer::~CMapRenderer()
{//@CODE_943
    DestructorInclude();

    // Put in your own code
    delete m_pCityRenderer;
    m_pMap = NULL;
}//@CODE_943


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_944
Method which must be called first in a constructor.
*/
void CMapRenderer::ConstructorInclude()
{
}


/*@NOTE_945
Method which must be called first in a destructor.
*/
void CMapRenderer::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

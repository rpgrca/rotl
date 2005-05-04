/******************************************************************************\
*
* File:          ../../src/CityRenderer.cpp
* Creation date: April 13, 2005 18:19
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCityRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:01 ReyBrujo, 2005
*     Updated interface of method 'SetCity'
*     Updated code of method 'GetCity'
*     Updated member 'm_pCity'
* April 15, 2005 15:18 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated interface of method 'SetCity'
*     Updated code of method 'GetCity'
*     Updated code of method '~CCityRenderer'
*     Updated code of method 'CCityRenderer'
*     Updated inheritance 'CRenderer'
*     Updated member 'm_pCity'
* April 14, 2005 00:36 ReyBrujo, 2005
*     Deleted method 'Draw'
* April 13, 2005 18:19 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetCity'
*     Added method 'GetCity'
*     Added method 'Draw'
*     Added method '~CCityRenderer'
*     Added method 'CCityRenderer'
*     Added inheritance 'CRenderer'
*     Added member 'm_pCity'
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




/*@NOTE_1189
Constructor method.
*/
CCityRenderer::CCityRenderer() //@INIT_1189
    : CRenderer()
    , m_pCity(NULL)
{//@CODE_1189
    ConstructorInclude();

    // Put in your own code
}//@CODE_1189


/*@NOTE_1185
Destructor method.
*/
CCityRenderer::~CCityRenderer()
{//@CODE_1185
    DestructorInclude();

    // Put in your own code
    m_pCity = NULL;
}//@CODE_1185


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1186
Method which must be called first in a constructor.
*/
void CCityRenderer::ConstructorInclude()
{
}


/*@NOTE_1187
Method which must be called first in a destructor.
*/
void CCityRenderer::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

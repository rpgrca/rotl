/******************************************************************************\
*
* File:          ../../src/CityActionMaterial.cpp
* Creation date: April 14, 2005 02:03
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCityActionMaterial'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:03 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionMaterial'
*     Added method 'CCityActionMaterial'
*     Added inheritance 'CCityAction'
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




/*@NOTE_1414
Constructor method.
*/
CCityActionMaterial::CCityActionMaterial() //@INIT_1414
    : CCityAction()
{//@CODE_1414
    ConstructorInclude();

    // Put in your own code
}//@CODE_1414


/*@NOTE_1409
Destructor method.
*/
CCityActionMaterial::~CCityActionMaterial()
{//@CODE_1409
    DestructorInclude();

    // Put in your own code
}//@CODE_1409


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1410
Method which must be called first in a constructor.
*/
void CCityActionMaterial::ConstructorInclude()
{
}


/*@NOTE_1411
Method which must be called first in a destructor.
*/
void CCityActionMaterial::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

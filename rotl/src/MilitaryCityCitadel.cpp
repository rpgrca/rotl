/******************************************************************************\
*
* File:          ../../src/MilitaryCityCitadel.cpp
* Creation date: April 10, 2005 20:10
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMilitaryCityCitadel'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:01 ReyBrujo, 2005
*     Updated code of method '~CMilitaryCityCitadel'
*     Updated code of method 'CMilitaryCityCitadel'
* April 12, 2005 17:56 ReyBrujo
*     Updated code of method 'CMilitaryCityCitadel'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CMilitaryCityCitadel'
*     Updated code of method 'CMilitaryCityCitadel'
*     Updated inheritance 'CMilitaryCity'
* April 10, 2005 20:11 ReyBrujo
*     Added method 'CMilitaryCityCitadel'
* April 10, 2005 20:10 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMilitaryCityCitadel'
*     Added inheritance 'CMilitaryCity'
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




/*@NOTE_219
Constructor method.
*/
CMilitaryCityCitadel::CMilitaryCityCitadel() //@INIT_219
    : CMilitaryCity()
{//@CODE_219
    ConstructorInclude();

    // Put in your own code
    SetType(enCITYTYPE_MILITARY_CITADEL);
}//@CODE_219


/*@NOTE_121
Destructor method.
*/
CMilitaryCityCitadel::~CMilitaryCityCitadel()
{//@CODE_121
    DestructorInclude();

    // Put in your own code
}//@CODE_121


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_122
Method which must be called first in a constructor.
*/
void CMilitaryCityCitadel::ConstructorInclude()
{
}


/*@NOTE_123
Method which must be called first in a destructor.
*/
void CMilitaryCityCitadel::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

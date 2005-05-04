/******************************************************************************\
*
* File:          ../../src/MilitaryCityCastle.cpp
* Creation date: April 10, 2005 20:10
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMilitaryCityCastle'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:01 ReyBrujo, 2005
*     Updated code of method '~CMilitaryCityCastle'
*     Updated code of method 'CMilitaryCityCastle'
* April 12, 2005 17:56 ReyBrujo
*     Updated code of method 'CMilitaryCityCastle'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CMilitaryCityCastle'
*     Updated code of method 'CMilitaryCityCastle'
*     Updated inheritance 'CMilitaryCity'
* April 10, 2005 20:11 ReyBrujo
*     Added method 'CMilitaryCityCastle'
* April 10, 2005 20:10 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMilitaryCityCastle'
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




/*@NOTE_221
Constructor method.
*/
CMilitaryCityCastle::CMilitaryCityCastle() //@INIT_221
    : CMilitaryCity()
{//@CODE_221
    ConstructorInclude();

    // Put in your own code
    SetType(enCITYTYPE_MILITARY_CASTLE);
}//@CODE_221


/*@NOTE_133
Destructor method.
*/
CMilitaryCityCastle::~CMilitaryCityCastle()
{//@CODE_133
    DestructorInclude();

    // Put in your own code
}//@CODE_133


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_134
Method which must be called first in a constructor.
*/
void CMilitaryCityCastle::ConstructorInclude()
{
}


/*@NOTE_135
Method which must be called first in a destructor.
*/
void CMilitaryCityCastle::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

/******************************************************************************\
*
* File:          ../../src/MilitaryCityGranary.cpp
* Creation date: April 10, 2005 20:10
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMilitaryCityGranary'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:01 ReyBrujo, 2005
*     Updated code of method '~CMilitaryCityGranary'
*     Updated code of method 'CMilitaryCityGranary'
* April 12, 2005 17:56 ReyBrujo
*     Updated code of method 'CMilitaryCityGranary'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CMilitaryCityGranary'
*     Updated code of method 'CMilitaryCityGranary'
*     Updated inheritance 'CMilitaryCity'
* April 10, 2005 20:11 ReyBrujo
*     Added method 'CMilitaryCityGranary'
* April 10, 2005 20:10 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMilitaryCityGranary'
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




/*@NOTE_218
Constructor method.
*/
CMilitaryCityGranary::CMilitaryCityGranary() //@INIT_218
    : CMilitaryCity()
{//@CODE_218
    ConstructorInclude();

    // Put in your own code
    SetType(enCITYTYPE_MILITARY_GRANARY);
}//@CODE_218


/*@NOTE_114
Destructor method.
*/
CMilitaryCityGranary::~CMilitaryCityGranary()
{//@CODE_114
    DestructorInclude();

    // Put in your own code
}//@CODE_114


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_115
Method which must be called first in a constructor.
*/
void CMilitaryCityGranary::ConstructorInclude()
{
}


/*@NOTE_116
Method which must be called first in a destructor.
*/
void CMilitaryCityGranary::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

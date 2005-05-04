/******************************************************************************\
*
* File:          ../../src/CommercialCity.cpp
* Creation date: April 10, 2005 19:45
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCommercialCity'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:01 ReyBrujo, 2005
*     Updated inheritance 'CCity'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CCommercialCity'
*     Updated code of method 'CCommercialCity'
*     Updated inheritance 'CCityBase'
* April 10, 2005 20:11 ReyBrujo
*     Added method 'CCommercialCity'
* April 10, 2005 20:10 ReyBrujo
*     Updated code of method '~CCommercialCity'
* April 10, 2005 19:45 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCommercialCity'
*     Added inheritance 'CCityBase'
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




/*@NOTE_212
Constructor method.
*/
CCommercialCity::CCommercialCity() //@INIT_212
    : CCity()
{//@CODE_212
    ConstructorInclude();

    // Put in your own code
}//@CODE_212


/*@NOTE_79
Destructor method.
*/
CCommercialCity::~CCommercialCity()
{//@CODE_79
    DestructorInclude();

    // Put in your own code
}//@CODE_79


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_80
Method which must be called first in a constructor.
*/
void CCommercialCity::ConstructorInclude()
{
}


/*@NOTE_81
Method which must be called first in a destructor.
*/
void CCommercialCity::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

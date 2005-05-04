/******************************************************************************\
*
* File:          ../../src/CommercialCityTown.cpp
* Creation date: April 10, 2005 19:45
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCommercialCityTown'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:01 ReyBrujo, 2005
*     Updated code of method '~CCommercialCityTown'
*     Updated code of method 'CCommercialCityTown'
* April 12, 2005 17:56 ReyBrujo
*     Updated code of method 'CCommercialCityTown'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CCommercialCityTown'
*     Updated code of method 'CCommercialCityTown'
*     Updated inheritance 'CCommercialCity'
* April 10, 2005 20:11 ReyBrujo
*     Added method 'CCommercialCityTown'
* April 10, 2005 20:10 ReyBrujo
*     Updated inheritance 'CCommercialCity'
* April 10, 2005 19:45 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCommercialCityTown'
*     Added inheritance 'CCommercialCity'
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




/*@NOTE_214
Constructor method.
*/
CCommercialCityTown::CCommercialCityTown() //@INIT_214
    : CCommercialCity()
{//@CODE_214
    ConstructorInclude();

    // Put in your own code
    SetType(enCITYTYPE_COMMERCIAL_TOWN);
}//@CODE_214


/*@NOTE_90
Destructor method.
*/
CCommercialCityTown::~CCommercialCityTown()
{//@CODE_90
    DestructorInclude();

    // Put in your own code
}//@CODE_90


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_91
Method which must be called first in a constructor.
*/
void CCommercialCityTown::ConstructorInclude()
{
}


/*@NOTE_92
Method which must be called first in a destructor.
*/
void CCommercialCityTown::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

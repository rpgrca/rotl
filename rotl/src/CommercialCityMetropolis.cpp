/******************************************************************************\
*
* File:          ../../src/CommercialCityMetropolis.cpp
* Creation date: April 10, 2005 19:45
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCommercialCityMetropolis'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:01 ReyBrujo, 2005
*     Updated code of method '~CCommercialCityMetropolis'
*     Updated code of method 'CCommercialCityMetropolis'
* April 12, 2005 17:56 ReyBrujo
*     Updated code of method 'CCommercialCityMetropolis'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CCommercialCityMetropolis'
*     Updated code of method 'CCommercialCityMetropolis'
*     Updated inheritance 'CCommercialCity'
* April 10, 2005 20:11 ReyBrujo
*     Added method 'CCommercialCityMetropolis'
* April 10, 2005 20:10 ReyBrujo
*     Updated inheritance 'CCommercialCity'
* April 10, 2005 19:45 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCommercialCityMetropolis'
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




/*@NOTE_216
Constructor method.
*/
CCommercialCityMetropolis::CCommercialCityMetropolis() //@INIT_216
    : CCommercialCity()
{//@CODE_216
    ConstructorInclude();

    // Put in your own code
    SetType(enCITYTYPE_COMMERCIAL_METROPOLIS);
}//@CODE_216


/*@NOTE_103
Destructor method.
*/
CCommercialCityMetropolis::~CCommercialCityMetropolis()
{//@CODE_103
    DestructorInclude();

    // Put in your own code
}//@CODE_103


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_104
Method which must be called first in a constructor.
*/
void CCommercialCityMetropolis::ConstructorInclude()
{
}


/*@NOTE_105
Method which must be called first in a destructor.
*/
void CCommercialCityMetropolis::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

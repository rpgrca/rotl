/******************************************************************************\
*
* File:          ../../src/CommercialCityCity.cpp
* Creation date: April 10, 2005 19:45
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCommercialCityCity'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:01 ReyBrujo, 2005
*     Updated code of method '~CCommercialCityCity'
*     Updated code of method 'CCommercialCityCity'
* April 12, 2005 17:56 ReyBrujo
*     Updated code of method 'CCommercialCityCity'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CCommercialCityCity'
*     Updated code of method 'CCommercialCityCity'
*     Updated inheritance 'CCommercialCity'
* April 10, 2005 20:11 ReyBrujo
*     Added method 'CCommercialCityCity'
* April 10, 2005 20:10 ReyBrujo
*     Updated inheritance 'CCommercialCity'
* April 10, 2005 19:45 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCommercialCityCity'
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




/*@NOTE_215
Constructor method.
*/
CCommercialCityCity::CCommercialCityCity() //@INIT_215
    : CCommercialCity()
{//@CODE_215
    ConstructorInclude();

    // Put in your own code
    SetType(enCITYTYPE_COMMERCIAL_CITY);
}//@CODE_215


/*@NOTE_97
Destructor method.
*/
CCommercialCityCity::~CCommercialCityCity()
{//@CODE_97
    DestructorInclude();

    // Put in your own code
}//@CODE_97


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_98
Method which must be called first in a constructor.
*/
void CCommercialCityCity::ConstructorInclude()
{
}


/*@NOTE_99
Method which must be called first in a destructor.
*/
void CCommercialCityCity::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

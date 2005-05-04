/******************************************************************************\
*
* File:          ../../src/CommercialCityVillage.cpp
* Creation date: April 10, 2005 19:45
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCommercialCityVillage'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:01 ReyBrujo, 2005
*     Updated code of method '~CCommercialCityVillage'
*     Updated code of method 'CCommercialCityVillage'
* April 12, 2005 17:56 ReyBrujo
*     Updated code of method 'CCommercialCityVillage'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CCommercialCityVillage'
*     Updated code of method 'CCommercialCityVillage'
*     Updated inheritance 'CCommercialCity'
* April 10, 2005 20:11 ReyBrujo
*     Added method 'CCommercialCityVillage'
* April 10, 2005 20:10 ReyBrujo
*     Updated inheritance 'CCommercialCity'
* April 10, 2005 19:45 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCommercialCityVillage'
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




/*@NOTE_213
Constructor method.
*/
CCommercialCityVillage::CCommercialCityVillage() //@INIT_213
    : CCommercialCity()
{//@CODE_213
    ConstructorInclude();

    // Put in your own code
    SetType(enCITYTYPE_COMMERCIAL_VILLAGE);
}//@CODE_213


/*@NOTE_85
Destructor method.
*/
CCommercialCityVillage::~CCommercialCityVillage()
{//@CODE_85
    DestructorInclude();

    // Put in your own code
}//@CODE_85


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_86
Method which must be called first in a constructor.
*/
void CCommercialCityVillage::ConstructorInclude()
{
}


/*@NOTE_87
Method which must be called first in a destructor.
*/
void CCommercialCityVillage::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

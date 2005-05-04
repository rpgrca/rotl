/******************************************************************************\
*
* File:          ../../src/CityActionMaterialStock.cpp
* Creation date: April 14, 2005 02:03
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCityActionMaterialStock'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:23 ReyBrujo, 2005
*     Updated code of method 'CCityActionMaterialStock'
* April 14, 2005 02:03 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionMaterialStock'
*     Added method 'CCityActionMaterialStock'
*     Added inheritance 'CCityActionMaterial'
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




/*@NOTE_1421
Constructor method.
*/
CCityActionMaterialStock::CCityActionMaterialStock() //@INIT_1421
    : CCityActionMaterial()
{//@CODE_1421
    ConstructorInclude();

    // Put in your own code
    SetType(enACTIONTYPE_CITY_MATERIAL_STOCK);
}//@CODE_1421


/*@NOTE_1416
Destructor method.
*/
CCityActionMaterialStock::~CCityActionMaterialStock()
{//@CODE_1416
    DestructorInclude();

    // Put in your own code
}//@CODE_1416


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1417
Method which must be called first in a constructor.
*/
void CCityActionMaterialStock::ConstructorInclude()
{
}


/*@NOTE_1418
Method which must be called first in a destructor.
*/
void CCityActionMaterialStock::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

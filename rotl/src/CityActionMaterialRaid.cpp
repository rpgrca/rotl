/******************************************************************************\
*
* File:          ../../src/CityActionMaterialRaid.cpp
* Creation date: April 14, 2005 02:03
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCityActionMaterialRaid'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:23 ReyBrujo, 2005
*     Updated code of method 'CCityActionMaterialRaid'
* April 14, 2005 02:03 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionMaterialRaid'
*     Added method 'CCityActionMaterialRaid'
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




/*@NOTE_1428
Constructor method.
*/
CCityActionMaterialRaid::CCityActionMaterialRaid() //@INIT_1428
    : CCityActionMaterial()
{//@CODE_1428
    ConstructorInclude();

    // Put in your own code
    SetType(enACTIONTYPE_CITY_MATERIAL_RAID);
}//@CODE_1428


/*@NOTE_1423
Destructor method.
*/
CCityActionMaterialRaid::~CCityActionMaterialRaid()
{//@CODE_1423
    DestructorInclude();

    // Put in your own code
}//@CODE_1423


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1424
Method which must be called first in a constructor.
*/
void CCityActionMaterialRaid::ConstructorInclude()
{
}


/*@NOTE_1425
Method which must be called first in a destructor.
*/
void CCityActionMaterialRaid::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

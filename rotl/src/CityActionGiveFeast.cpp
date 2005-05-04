/******************************************************************************\
*
* File:          ../../src/CityActionGiveFeast.cpp
* Creation date: April 14, 2005 01:50
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCityActionGiveFeast'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:23 ReyBrujo, 2005
*     Updated code of method 'CCityActionGiveFeast'
* April 14, 2005 01:51 ReyBrujo, 2005
*     Added method 'CCityActionGiveFeast'
* April 14, 2005 01:50 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionGiveFeast'
*     Added inheritance 'CCityActionGive'
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




/*@NOTE_1361
Constructor method.
*/
CCityActionGiveFeast::CCityActionGiveFeast() //@INIT_1361
{//@CODE_1361
    ConstructorInclude();

    // Put in your own code
    SetType(enACTIONTYPE_CITY_GIVE_FEAST);
}//@CODE_1361


/*@NOTE_1349
Destructor method.
*/
CCityActionGiveFeast::~CCityActionGiveFeast()
{//@CODE_1349
    DestructorInclude();

    // Put in your own code
}//@CODE_1349


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1350
Method which must be called first in a constructor.
*/
void CCityActionGiveFeast::ConstructorInclude()
{
}


/*@NOTE_1351
Method which must be called first in a destructor.
*/
void CCityActionGiveFeast::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

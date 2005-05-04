/******************************************************************************\
*
* File:          ../../src/CityActionEnlistHire.cpp
* Creation date: April 14, 2005 02:03
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCityActionEnlistHire'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:23 ReyBrujo, 2005
*     Updated code of method 'CCityActionEnlistHire'
* April 14, 2005 02:03 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionEnlistHire'
*     Added method 'CCityActionEnlistHire'
*     Added inheritance 'CCityActionEnlist'
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




/*@NOTE_1381
Constructor method.
*/
CCityActionEnlistHire::CCityActionEnlistHire() //@INIT_1381
    : CCityActionEnlist()
{//@CODE_1381
    ConstructorInclude();

    // Put in your own code
    SetType(enACTIONTYPE_CITY_ENLIST_HIRE);
}//@CODE_1381


/*@NOTE_1377
Destructor method.
*/
CCityActionEnlistHire::~CCityActionEnlistHire()
{//@CODE_1377
    DestructorInclude();

    // Put in your own code
}//@CODE_1377


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1378
Method which must be called first in a constructor.
*/
void CCityActionEnlistHire::ConstructorInclude()
{
}


/*@NOTE_1379
Method which must be called first in a destructor.
*/
void CCityActionEnlistHire::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

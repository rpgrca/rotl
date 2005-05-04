/******************************************************************************\
*
* File:          ../../src/CityActionEnlistDraft.cpp
* Creation date: April 14, 2005 02:03
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCityActionEnlistDraft'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:23 ReyBrujo, 2005
*     Updated code of method 'CCityActionEnlistDraft'
* April 14, 2005 02:03 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionEnlistDraft'
*     Added method 'CCityActionEnlistDraft'
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




/*@NOTE_1374
Constructor method.
*/
CCityActionEnlistDraft::CCityActionEnlistDraft() //@INIT_1374
    : CCityActionEnlist()
{//@CODE_1374
    ConstructorInclude();

    // Put in your own code
    SetType(enACTIONTYPE_CITY_ENLIST_DRAFT);
}//@CODE_1374


/*@NOTE_1370
Destructor method.
*/
CCityActionEnlistDraft::~CCityActionEnlistDraft()
{//@CODE_1370
    DestructorInclude();

    // Put in your own code
}//@CODE_1370


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1371
Method which must be called first in a constructor.
*/
void CCityActionEnlistDraft::ConstructorInclude()
{
}


/*@NOTE_1372
Method which must be called first in a destructor.
*/
void CCityActionEnlistDraft::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

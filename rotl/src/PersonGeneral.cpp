/******************************************************************************\
*
* File:          ../../src/PersonGeneral.cpp
* Creation date: April 10, 2005 19:26
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CPersonGeneral'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 15, 2005 13:28 ReyBrujo, 2005
*     Updated code of method '~CPersonGeneral'
*     Updated code of method 'CPersonGeneral'
* April 12, 2005 23:05 ReyBrujo, 2005
*     Updated code of method 'CPersonGeneral'
* April 11, 2005 03:15 ReyBrujo, 2005
*     Deleted method 'GetDivision'
*     Deleted method 'SetDivision'
*     Deleted member 'm_nDivision'
*     Updated code of method 'CPersonGeneral'
* April 10, 2005 20:10 ReyBrujo
*     Updated code of method 'SetDivision'
* April 10, 2005 19:28 ReyBrujo
*     Added method 'SetDivision'
*     Added method 'GetDivision'
*     Added method 'CPersonGeneral'
*     Added member 'm_nDivision'
* April 10, 2005 19:26 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CPersonGeneral'
*     Added inheritance 'CPerson'
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




/*@NOTE_64
Constructor method.
*/
CPersonGeneral::CPersonGeneral() //@INIT_64
    : CPerson()
{//@CODE_64
    ConstructorInclude();

    // Put in your own code
    SetType(enPERSONTYPE_GENERAL);
}//@CODE_64


/*@NOTE_58
Destructor method.
*/
CPersonGeneral::~CPersonGeneral()
{//@CODE_58
    DestructorInclude();

    // Put in your own code
}//@CODE_58


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_59
Method which must be called first in a constructor.
*/
void CPersonGeneral::ConstructorInclude()
{
}


/*@NOTE_60
Method which must be called first in a destructor.
*/
void CPersonGeneral::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

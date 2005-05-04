/******************************************************************************\
*
* File:          ../../src/MilitaryCity.cpp
* Creation date: April 10, 2005 20:10
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMilitaryCity'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:01 ReyBrujo, 2005
*     Updated inheritance 'CCity'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CMilitaryCity'
*     Updated code of method 'CMilitaryCity'
*     Updated inheritance 'CCityBase'
* April 10, 2005 20:11 ReyBrujo
*     Added method 'CMilitaryCity'
* April 10, 2005 20:10 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMilitaryCity'
*     Added inheritance 'CCityBase'
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




/*@NOTE_217
Constructor method.
*/
CMilitaryCity::CMilitaryCity() //@INIT_217
    : CCity()
{//@CODE_217
    ConstructorInclude();

    // Put in your own code
}//@CODE_217


/*@NOTE_109
Destructor method.
*/
CMilitaryCity::~CMilitaryCity()
{//@CODE_109
    DestructorInclude();

    // Put in your own code
}//@CODE_109


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_110
Method which must be called first in a constructor.
*/
void CMilitaryCity::ConstructorInclude()
{
}


/*@NOTE_111
Method which must be called first in a destructor.
*/
void CMilitaryCity::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

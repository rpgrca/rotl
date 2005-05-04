/******************************************************************************\
*
* File:          ../../src/MilitaryCityFortress.cpp
* Creation date: April 10, 2005 20:10
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMilitaryCityFortress'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:01 ReyBrujo, 2005
*     Updated code of method '~CMilitaryCityFortress'
*     Updated code of method 'CMilitaryCityFortress'
* April 12, 2005 17:56 ReyBrujo
*     Updated code of method 'CMilitaryCityFortress'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CMilitaryCityFortress'
*     Updated code of method 'CMilitaryCityFortress'
*     Updated inheritance 'CMilitaryCity'
* April 10, 2005 20:11 ReyBrujo
*     Added method 'CMilitaryCityFortress'
* April 10, 2005 20:10 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMilitaryCityFortress'
*     Added inheritance 'CMilitaryCity'
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




/*@NOTE_220
Constructor method.
*/
CMilitaryCityFortress::CMilitaryCityFortress() //@INIT_220
    : CMilitaryCity()
{//@CODE_220
    ConstructorInclude();

    // Put in your own code
    SetType(enCITYTYPE_MILITARY_FORTRESS);
}//@CODE_220


/*@NOTE_127
Destructor method.
*/
CMilitaryCityFortress::~CMilitaryCityFortress()
{//@CODE_127
    DestructorInclude();

    // Put in your own code
}//@CODE_127


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_128
Method which must be called first in a constructor.
*/
void CMilitaryCityFortress::ConstructorInclude()
{
}


/*@NOTE_129
Method which must be called first in a destructor.
*/
void CMilitaryCityFortress::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

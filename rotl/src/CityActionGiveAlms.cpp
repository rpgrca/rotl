/******************************************************************************\
*
* File:          ../../src/CityActionGiveAlms.cpp
* Creation date: April 14, 2005 01:50
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCityActionGiveAlms'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:23 ReyBrujo, 2005
*     Updated code of method 'CCityActionGiveAlms'
* April 14, 2005 01:50 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionGiveAlms'
*     Added method 'CCityActionGiveAlms'
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




/*@NOTE_1359
Constructor method.
*/
CCityActionGiveAlms::CCityActionGiveAlms() //@INIT_1359
{//@CODE_1359
    ConstructorInclude();

    // Put in your own code
    SetType(enACTIONTYPE_CITY_GIVE_ALMS);
}//@CODE_1359


/*@NOTE_1355
Destructor method.
*/
CCityActionGiveAlms::~CCityActionGiveAlms()
{//@CODE_1355
    DestructorInclude();

    // Put in your own code
}//@CODE_1355


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1356
Method which must be called first in a constructor.
*/
void CCityActionGiveAlms::ConstructorInclude()
{
}


/*@NOTE_1357
Method which must be called first in a destructor.
*/
void CCityActionGiveAlms::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

/******************************************************************************\
*
* File:          ../../src/CityActionBuy.cpp
* Creation date: April 14, 2005 02:03
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCityActionBuy'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:23 ReyBrujo, 2005
*     Updated code of method 'CCityActionBuy'
* April 14, 2005 02:03 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionBuy'
*     Added method 'CCityActionBuy'
*     Added inheritance 'CCityAction'
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




/*@NOTE_1389
Constructor method.
*/
CCityActionBuy::CCityActionBuy() //@INIT_1389
    : CCityAction()
{//@CODE_1389
    ConstructorInclude();

    // Put in your own code
    SetType(enACTIONTYPE_CITY_BUY);
}//@CODE_1389


/*@NOTE_1384
Destructor method.
*/
CCityActionBuy::~CCityActionBuy()
{//@CODE_1384
    DestructorInclude();

    // Put in your own code
}//@CODE_1384


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1385
Method which must be called first in a constructor.
*/
void CCityActionBuy::ConstructorInclude()
{
}


/*@NOTE_1386
Method which must be called first in a destructor.
*/
void CCityActionBuy::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

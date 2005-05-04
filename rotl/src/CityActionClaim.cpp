/******************************************************************************\
*
* File:          ../../src/CityActionClaim.cpp
* Creation date: April 17, 2005 18:32
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCityActionClaim'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 18, 2005 01:36 ReyBrujo, 2005
*     Deleted method 'Execute'
*     Added method 'Execute'
* April 18, 2005 01:35 ReyBrujo, 2005
*     Updated code of method 'Execute'
* April 17, 2005 18:42 ReyBrujo, 2005
*     Added method 'Execute'
* April 17, 2005 18:32 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionClaim'
*     Added method 'CCityActionClaim'
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




/*@NOTE_2354
Constructor method.
*/
CCityActionClaim::CCityActionClaim() //@INIT_2354
    : CCityAction()
{//@CODE_2354
    ConstructorInclude();

    // Put in your own code
}//@CODE_2354


/*@NOTE_2349
Destructor method.
*/
CCityActionClaim::~CCityActionClaim()
{//@CODE_2349
    DestructorInclude();

    // Put in your own code
}//@CODE_2349


/*@NOTE_2491
Executes the action.
Must be reimplemented in order to have the action executed.
*/
bool CCityActionClaim::Execute()
{//@CODE_2491
    bool value;

    return value;
}//@CODE_2491


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_2350
Method which must be called first in a constructor.
*/
void CCityActionClaim::ConstructorInclude()
{
}


/*@NOTE_2351
Method which must be called first in a destructor.
*/
void CCityActionClaim::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

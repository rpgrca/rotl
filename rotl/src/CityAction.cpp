/******************************************************************************\
*
* File:          ../../src/CityAction.cpp
* Creation date: April 14, 2005 01:50
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCityAction'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:01 ReyBrujo, 2005
*     Updated interface of method 'SetCity'
*     Updated code of method 'GetCity'
*     Updated member 'm_pCity'
* April 14, 2005 02:03 ReyBrujo, 2005
*     Added method 'SetUnit'
*     Added method 'GetUnit'
*     Added member 'm_pUnit'
* April 14, 2005 01:50 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetCity'
*     Added method 'GetCity'
*     Added method '~CCityAction'
*     Added method 'CCityAction'
*     Added inheritance 'CAction'
*     Added member 'm_pCity'
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




/*@NOTE_1343
Constructor method.
*/
CCityAction::CCityAction() //@INIT_1343
    : CAction()
    , m_pCity(NULL)
    , m_pUnit(NULL)
{//@CODE_1343
    ConstructorInclude();

    // Put in your own code
}//@CODE_1343


/*@NOTE_1336
Destructor method.
*/
CCityAction::~CCityAction()
{//@CODE_1336
    DestructorInclude();

    // Put in your own code
}//@CODE_1336


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1337
Method which must be called first in a constructor.
*/
void CCityAction::ConstructorInclude()
{
}


/*@NOTE_1338
Method which must be called first in a destructor.
*/
void CCityAction::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

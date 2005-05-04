/******************************************************************************\
*
* File:          ../../src/Action.cpp
* Creation date: April 14, 2005 01:33
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CAction'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:23 ReyBrujo, 2005
*     Added method 'SetType'
*     Added method 'GetType'
*     Added member 'm_eType'
* April 14, 2005 01:33 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'GetRunning'
*     Added method 'Execute'
*     Added method '~CAction'
*     Added method 'CAction'
*     Added member 'm_bRunning'
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




/*@NOTE_1257
Constructor method.
*/
CAction::CAction() //@INIT_1257
    : m_bRunning(false)
    , m_eType(enACTIONTYPE_NONE)
{//@CODE_1257
    ConstructorInclude();

    // Put in your own code
}//@CODE_1257


/*@NOTE_1253
Destructor method.
*/
CAction::~CAction()
{//@CODE_1253
    DestructorInclude();

    // Put in your own code
}//@CODE_1253


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1254
Method which must be called first in a constructor.
*/
void CAction::ConstructorInclude()
{
}


/*@NOTE_1255
Method which must be called first in a destructor.
*/
void CAction::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

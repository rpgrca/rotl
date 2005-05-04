/******************************************************************************\
*
* File:          ../../src/ArmyAction.cpp
* Creation date: April 14, 2005 01:50
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CArmyAction'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 01:50 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetUnit'
*     Added method 'GetUnit'
*     Added method '~CArmyAction'
*     Added method 'CArmyAction'
*     Added inheritance 'CAction'
*     Added member 'm_pUnit'
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




/*@NOTE_1334
Constructor method.
*/
CArmyAction::CArmyAction() //@INIT_1334
    : CAction()
    , m_pUnit(NULL)
{//@CODE_1334
    ConstructorInclude();

    // Put in your own code
}//@CODE_1334


/*@NOTE_1328
Destructor method.
*/
CArmyAction::~CArmyAction()
{//@CODE_1328
    DestructorInclude();

    // Put in your own code
    m_pUnit = NULL;
}//@CODE_1328


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1329
Method which must be called first in a constructor.
*/
void CArmyAction::ConstructorInclude()
{
}


/*@NOTE_1330
Method which must be called first in a destructor.
*/
void CArmyAction::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

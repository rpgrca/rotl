/******************************************************************************\
*
* File:          ../../src/CombatSiege.cpp
* Creation date: April 13, 2005 19:00
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCombatSiege'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 13, 2005 19:00 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCombatSiege'
*     Added method 'CCombatSiege'
*     Added inheritance 'CCombat'
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




/*@NOTE_1225
Constructor method.
*/
CCombatSiege::CCombatSiege() //@INIT_1225
    : CCombat()
{//@CODE_1225
    ConstructorInclude();

    // Put in your own code
}//@CODE_1225


/*@NOTE_1220
Destructor method.
*/
CCombatSiege::~CCombatSiege()
{//@CODE_1220
    DestructorInclude();

    // Put in your own code
}//@CODE_1220


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1221
Method which must be called first in a constructor.
*/
void CCombatSiege::ConstructorInclude()
{
}


/*@NOTE_1222
Method which must be called first in a destructor.
*/
void CCombatSiege::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

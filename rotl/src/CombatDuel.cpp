/******************************************************************************\
*
* File:          ../../src/CombatDuel.cpp
* Creation date: April 13, 2005 19:00
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCombatDuel'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 18, 2005 00:49 ReyBrujo, 2005
*     Updated code of method 'AddDefender'
*     Updated code of method 'AddAttacker'
* April 15, 2005 19:53 ReyBrujo, 2005
*     Added method 'Execute'
*     Added method 'AddDefender'
*     Added method 'AddAttacker'
*     Updated code of method '~CCombatDuel'
*     Updated code of method 'CCombatDuel'
* April 13, 2005 19:00 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCombatDuel'
*     Added method 'CCombatDuel'
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




/*@NOTE_1233
Constructor method.
*/
CCombatDuel::CCombatDuel() //@INIT_1233
    : CCombat()
{//@CODE_1233
    ConstructorInclude();

    // Put in your own code
}//@CODE_1233


/*@NOTE_1229
Destructor method.
*/
CCombatDuel::~CCombatDuel()
{//@CODE_1229
    DestructorInclude();

    // Put in your own code
}//@CODE_1229


/*@NOTE_1723
Executes a round of combat between the warriors or armies.
*/
bool CCombatDuel::Execute()
{//@CODE_1723
    bool value;

    return value;
}//@CODE_1723


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1230
Method which must be called first in a constructor.
*/
void CCombatDuel::ConstructorInclude()
{
}


/*@NOTE_1231
Method which must be called first in a destructor.
*/
void CCombatDuel::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

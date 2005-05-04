/******************************************************************************\
*
* File:          ../../src/ArmyActionMarchNormal.cpp
* Creation date: April 14, 2005 01:33
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CArmyActionMarchNormal'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 19:35 ReyBrujo, 2005
*     Updated code of method 'Execute'
* April 17, 2005 19:23 ReyBrujo, 2005
*     Updated code of method 'Execute'
* April 17, 2005 19:23 ReyBrujo, 2005
*     Updated code of method 'Execute'
* April 17, 2005 19:20 ReyBrujo, 2005
*     Updated code of method 'Execute'
* April 17, 2005 19:02 ReyBrujo, 2005
*     Added method 'Execute'
* April 14, 2005 02:23 ReyBrujo, 2005
*     Updated code of method 'CArmyActionMarchNormal'
* April 14, 2005 01:50 ReyBrujo, 2005
*     Updated code of method '~CArmyActionMarchNormal'
*     Updated code of method 'CArmyActionMarchNormal'
*     Updated inheritance 'CArmyActionMarch'
* April 14, 2005 01:33 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CArmyActionMarchNormal'
*     Added method 'CArmyActionMarchNormal'
*     Added inheritance 'CActionMovement'
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




/*@NOTE_1272
Constructor method.
*/
CArmyActionMarchNormal::CArmyActionMarchNormal() //@INIT_1272
    : CArmyActionMarch()
{//@CODE_1272
    ConstructorInclude();

    // Put in your own code
    SetType(enACTIONTYPE_ARMY_MARCH_NORMAL);
}//@CODE_1272


/*@NOTE_1267
Destructor method.
*/
CArmyActionMarchNormal::~CArmyActionMarchNormal()
{//@CODE_1267
    DestructorInclude();

    // Put in your own code
}//@CODE_1267


/*@NOTE_2356
Executes the action.
Must be reimplemented in order to have the action executed.
*/
bool CArmyActionMarchNormal::Execute()
{//@CODE_2356
    return (m_pUnit->Move(m_eDirection, m_pMap));
}//@CODE_2356


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1268
Method which must be called first in a constructor.
*/
void CArmyActionMarchNormal::ConstructorInclude()
{
}


/*@NOTE_1269
Method which must be called first in a destructor.
*/
void CArmyActionMarchNormal::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

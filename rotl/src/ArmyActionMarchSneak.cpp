/******************************************************************************\
*
* File:          ../../src/ArmyActionMarchSneak.cpp
* Creation date: April 14, 2005 01:33
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CArmyActionMarchSneak'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:23 ReyBrujo, 2005
*     Updated code of method 'CArmyActionMarchSneak'
* April 14, 2005 01:50 ReyBrujo, 2005
*     Updated code of method '~CArmyActionMarchSneak'
*     Updated code of method 'CArmyActionMarchSneak'
*     Updated inheritance 'CArmyActionMarch'
* April 14, 2005 01:33 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CArmyActionMarchSneak'
*     Added method 'CArmyActionMarchSneak'
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




/*@NOTE_1279
Constructor method.
*/
CArmyActionMarchSneak::CArmyActionMarchSneak() //@INIT_1279
    : CArmyActionMarch()
{//@CODE_1279
    ConstructorInclude();

    // Put in your own code
    SetType(enACTIONTYPE_ARMY_MARCH_SNEAK);
}//@CODE_1279


/*@NOTE_1274
Destructor method.
*/
CArmyActionMarchSneak::~CArmyActionMarchSneak()
{//@CODE_1274
    DestructorInclude();

    // Put in your own code
}//@CODE_1274


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1275
Method which must be called first in a constructor.
*/
void CArmyActionMarchSneak::ConstructorInclude()
{
}


/*@NOTE_1276
Method which must be called first in a destructor.
*/
void CArmyActionMarchSneak::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

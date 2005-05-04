/******************************************************************************\
*
* File:          ../../src/ArmyActionHideShow.cpp
* Creation date: April 14, 2005 02:14
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CArmyActionHideShow'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:23 ReyBrujo, 2005
*     Updated code of method 'CArmyActionHideShow'
* April 14, 2005 02:14 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CArmyActionHideShow'
*     Added method 'CArmyActionHideShow'
*     Added inheritance 'CArmyActionHide'
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




/*@NOTE_1449
Constructor method.
*/
CArmyActionHideShow::CArmyActionHideShow() //@INIT_1449
    : CArmyActionHide()
{//@CODE_1449
    ConstructorInclude();

    // Put in your own code
    SetType(enACTIONTYPE_ARMY_HIDE_SHOW);
}//@CODE_1449


/*@NOTE_1444
Destructor method.
*/
CArmyActionHideShow::~CArmyActionHideShow()
{//@CODE_1444
    DestructorInclude();

    // Put in your own code
}//@CODE_1444


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1445
Method which must be called first in a constructor.
*/
void CArmyActionHideShow::ConstructorInclude()
{
}


/*@NOTE_1446
Method which must be called first in a destructor.
*/
void CArmyActionHideShow::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

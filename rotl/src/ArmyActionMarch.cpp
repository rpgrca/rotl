/******************************************************************************\
*
* File:          ../../src/ArmyActionMarch.cpp
* Creation date: April 14, 2005 01:33
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CArmyActionMarch'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 19:48 ReyBrujo, 2005
*     Deleted method 'GetDirection'
* April 17, 2005 19:20 ReyBrujo, 2005
*     Deleted member 'm_nTargetX'
*     Deleted member 'm_nTargetY'
*     Added method 'SetDirection'
*     Added method 'GetDirection'
*     Added member 'm_eDirection'
* April 17, 2005 18:58 ReyBrujo, 2005
*     Deleted method 'Execute'
* April 15, 2005 12:00 ReyBrujo, 2005
*     Added method 'SetMap'
*     Added member 'm_pMap'
*     Updated code of method '~CArmyActionMarch'
* April 14, 2005 01:52 ReyBrujo, 2005
*     Updated code of method 'CArmyActionMarch'
* April 14, 2005 01:50 ReyBrujo, 2005
*     Deleted inheritance 'CAction'
*     Added inheritance 'CArmyAction'
*     Updated interface of method 'SetTargetY'
*     Updated code of method 'GetTargetY'
*     Updated interface of method 'SetTargetX'
*     Updated code of method 'GetTargetX'
*     Updated code of method '~CArmyActionMarch'
*     Updated code of method 'CArmyActionMarch'
*     Updated member 'm_nTargetY'
*     Updated member 'm_nTargetX'
* April 14, 2005 01:33 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetUnit'
*     Added method 'GetUnit'
*     Added method 'SetTargetY'
*     Added method 'GetTargetY'
*     Added method 'SetTargetX'
*     Added method 'GetTargetX'
*     Added method 'Execute'
*     Added method '~CArmyActionMarch'
*     Added method 'CArmyActionMarch'
*     Added inheritance 'CAction'
*     Added member 'm_nTargetY'
*     Added member 'm_nTargetX'
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




/*@NOTE_1263
Constructor method.
*/
CArmyActionMarch::CArmyActionMarch() //@INIT_1263
    : CArmyAction()
    , m_pMap(NULL)
    , m_eDirection(enDIRECTIONTYPE_NORTH)
{//@CODE_1263
    ConstructorInclude();

    // Put in your own code
}//@CODE_1263


/*@NOTE_1259
Destructor method.
*/
CArmyActionMarch::~CArmyActionMarch()
{//@CODE_1259
    DestructorInclude();

    // Put in your own code
    m_pMap = NULL;
}//@CODE_1259


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1260
Method which must be called first in a constructor.
*/
void CArmyActionMarch::ConstructorInclude()
{
}


/*@NOTE_1261
Method which must be called first in a destructor.
*/
void CArmyActionMarch::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

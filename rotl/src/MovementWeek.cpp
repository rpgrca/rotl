/******************************************************************************\
*
* File:          MovementWeek.cpp
* Creation date: April 11, 2005 14:15
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMovementWeek'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 23:05 ReyBrujo, 2005
*     Updated code of method 'CMovementWeek'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated interface of method 'SetWeek'
*     Updated code of method '~CMovementWeek'
*     Updated code of method 'CMovementWeek'
*     Updated inheritance 'CWeek'
* April 11, 2005 14:24 ReyBrujo
*     Updated code of method 'CMovementWeek'
* April 11, 2005 14:23 ReyBrujo
*     Updated code of method '~CMovementWeek'
*     Updated code of method 'CMovementWeek'
* April 11, 2005 14:23 ReyBrujo
*     Deleted inheritance 'CWeather'
*     Added method 'SetWeek'
*     Added inheritance 'CWeek'
* April 11, 2005 14:15 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMovementWeek'
*     Added method 'CMovementWeek'
*     Added inheritance 'CWeather'
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




/*@NOTE_674
Constructor method.
*/
CMovementWeek::CMovementWeek() //@INIT_674
    : CWeek()
{//@CODE_674
    ConstructorInclude();

    // Put in your own code
    SetType(enWEEKTYPE_MOVEMENT);
}//@CODE_674


/*@NOTE_670
Destructor method.
*/
CMovementWeek::~CMovementWeek()
{//@CODE_670
    DestructorInclude();

    // Put in your own code
}//@CODE_670


/*@NOTE_681
Set the value of member 'm_nWeek' to 'nWeek'.
*/
void CMovementWeek::SetWeek(const int nWeek)
{//@CODE_681
    if (M_IS_VALID_MOVEMENT_WEEK_NUMBER(nWeek))
        CWeek::SetWeek(nWeek);
}//@CODE_681


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_671
Method which must be called first in a constructor.
*/
void CMovementWeek::ConstructorInclude()
{
}


/*@NOTE_672
Method which must be called first in a destructor.
*/
void CMovementWeek::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

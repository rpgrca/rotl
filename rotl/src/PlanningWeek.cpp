/******************************************************************************\
*
* File:          ../../src/PlanningWeek.cpp
* Creation date: April 11, 2005 14:23
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CPlanningWeek'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 23:05 ReyBrujo, 2005
*     Updated code of method 'CPlanningWeek'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated interface of method 'SetWeek'
*     Updated code of method '~CPlanningWeek'
*     Updated code of method 'CPlanningWeek'
*     Updated inheritance 'CWeek'
* April 11, 2005 14:23 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetWeek'
*     Added method '~CPlanningWeek'
*     Added method 'CPlanningWeek'
*     Added inheritance 'CWeek'
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




/*@NOTE_689
Constructor method.
*/
CPlanningWeek::CPlanningWeek() //@INIT_689
    : CWeek()
{//@CODE_689
    ConstructorInclude();

    // Put in your own code
    SetType(enWEEKTYPE_PLANNING);
}//@CODE_689


/*@NOTE_685
Destructor method.
*/
CPlanningWeek::~CPlanningWeek()
{//@CODE_685
    DestructorInclude();

    // Put in your own code
}//@CODE_685


/*@NOTE_691
Set the value of member 'm_nWeek' to 'nWeek'.
*/
void CPlanningWeek::SetWeek(const int nWeek)
{//@CODE_691
    if (M_IS_VALID_PLANNING_WEEK_NUMBER(nWeek))
        CWeek::SetWeek(nWeek);
}//@CODE_691


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_686
Method which must be called first in a constructor.
*/
void CPlanningWeek::ConstructorInclude()
{
}


/*@NOTE_687
Method which must be called first in a destructor.
*/
void CPlanningWeek::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

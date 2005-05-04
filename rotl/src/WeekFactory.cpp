/******************************************************************************\
*
* File:          WeekFactory.cpp
* Creation date: April 11, 2005 15:38
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CWeekFactory'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated interface of method 'Create'
*     Updated code of method '~CWeekFactory'
*     Updated code of method 'CWeekFactory'
* April 11, 2005 15:39 ReyBrujo
*     Updated code of method '~CWeekFactory'
*     Updated code of method 'CWeekFactory'
* April 11, 2005 15:38 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Create'
*     Added method '~CWeekFactory'
*     Added method 'CWeekFactory'
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




/*@NOTE_706
Constructor method.
*/
CWeekFactory::CWeekFactory() //@INIT_706
{//@CODE_706
    ConstructorInclude();

    // Put in your own code
}//@CODE_706


/*@NOTE_702
Destructor method.
*/
CWeekFactory::~CWeekFactory()
{//@CODE_702
    DestructorInclude();

    // Put in your own code
}//@CODE_702


/*@NOTE_707
Creates a new week of the given type.
*/
CWeek* CWeekFactory::Create(const int nWeekNumber)
{//@CODE_707
    CWeek *pWeek = NULL;

    if (M_IS_VALID_WEEK_NUMBER(nWeekNumber)) {
        if (M_IS_VALID_MOVEMENT_WEEK_NUMBER(nWeekNumber))
            pWeek = new CMovementWeek;
        else
        if (M_IS_VALID_PLANNING_WEEK_NUMBER(nWeekNumber))
            pWeek = new CPlanningWeek;
    }

    return (pWeek);
}//@CODE_707


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_703
Method which must be called first in a constructor.
*/
void CWeekFactory::ConstructorInclude()
{
}


/*@NOTE_704
Method which must be called first in a destructor.
*/
void CWeekFactory::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

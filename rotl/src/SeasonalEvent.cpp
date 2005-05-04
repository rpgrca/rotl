/******************************************************************************\
*
* File:          ../../src/SeasonalEvent.cpp
* Creation date: April 10, 2005 21:54
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CSeasonalEvent'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 13, 2005 17:12 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeasonalEvent'
*     Updated code of method 'CSeasonalEvent'
*     Updated inheritance 'CEvent'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CSeasonalEvent'
*     Updated code of method 'CSeasonalEvent'
*     Updated inheritance 'CEvent'
* April 10, 2005 21:54 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonalEvent'
*     Added method 'CSeasonalEvent'
*     Added inheritance 'CEvent'
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




/*@NOTE_399
Constructor method.
*/
CSeasonalEvent::CSeasonalEvent() //@INIT_399
    : CEvent()
{//@CODE_399
    ConstructorInclude();

    // Put in your own code
}//@CODE_399


/*@NOTE_391
Destructor method.
*/
CSeasonalEvent::~CSeasonalEvent()
{//@CODE_391
    DestructorInclude();

    // Put in your own code
}//@CODE_391


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_392
Method which must be called first in a constructor.
*/
void CSeasonalEvent::ConstructorInclude()
{
}


/*@NOTE_393
Method which must be called first in a destructor.
*/
void CSeasonalEvent::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

/******************************************************************************\
*
* File:          ../../src/HistoricalEvent.cpp
* Creation date: April 11, 2005 02:05
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CHistoricalEvent'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 13, 2005 17:12 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CHistoricalEvent'
*     Updated code of method 'CHistoricalEvent'
*     Updated inheritance 'CEvent'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CHistoricalEvent'
*     Updated code of method 'CHistoricalEvent'
*     Updated inheritance 'CEvent'
* April 11, 2005 02:05 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CHistoricalEvent'
*     Added method 'CHistoricalEvent'
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




/*@NOTE_582
Constructor method.
*/
CHistoricalEvent::CHistoricalEvent() //@INIT_582
    : CEvent()
{//@CODE_582
    ConstructorInclude();

    // Put in your own code
}//@CODE_582


/*@NOTE_577
Destructor method.
*/
CHistoricalEvent::~CHistoricalEvent()
{//@CODE_577
    DestructorInclude();

    // Put in your own code
}//@CODE_577


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_578
Method which must be called first in a constructor.
*/
void CHistoricalEvent::ConstructorInclude()
{
}


/*@NOTE_579
Method which must be called first in a destructor.
*/
void CHistoricalEvent::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

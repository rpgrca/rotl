/******************************************************************************\
*
* File:          ../../src/TimelineFactory.cpp
* Creation date: April 11, 2005 18:26
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CTimelineFactory'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 02:23 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CTimelineFactory'
*     Updated code of method 'CTimelineFactory'
* April 11, 2005 18:26 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Create'
*     Added method '~CTimelineFactory'
*     Added method 'CTimelineFactory'
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




/*@NOTE_932
Constructor method.
*/
CTimelineFactory::CTimelineFactory() //@INIT_932
{//@CODE_932
    ConstructorInclude();

    // Put in your own code
}//@CODE_932


/*@NOTE_928
Destructor method.
*/
CTimelineFactory::~CTimelineFactory()
{//@CODE_928
    DestructorInclude();

    // Put in your own code
}//@CODE_928


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_929
Method which must be called first in a constructor.
*/
void CTimelineFactory::ConstructorInclude()
{
}


/*@NOTE_930
Method which must be called first in a destructor.
*/
void CTimelineFactory::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

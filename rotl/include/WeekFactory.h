/******************************************************************************\
*
* File:          WeekFactory.h
* Creation date: April 11, 2005 15:38
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CWeekFactory'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated interface of method 'Create'
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
#ifndef _WEEKFACTORY_H
#define _WEEKFACTORY_H

//@START_USER1
//@END_USER1


/*@NOTE_701
The week factory creates weeks according to the number of week you want.
*/

class CWeekFactory
{

//@START_USER2
//@END_USER2

//
// Group: ClassBuilder methods
//

private:
    void ConstructorInclude();
    void DestructorInclude();

//
// Non-Grouped Members
//

//
// Non-Grouped Methods
//

public:
    CWeekFactory();
    virtual ~CWeekFactory();
    CWeek* Create(const int nWeekNumber);
};

#endif


#ifdef CB_INLINES
#ifndef _WEEKFACTORY_H_INLINES
#define _WEEKFACTORY_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

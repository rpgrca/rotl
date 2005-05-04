/******************************************************************************\
*
* File:          ../../include/EventFactory.h
* Creation date: April 11, 2005 02:15
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CEventFactory'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 23:15 ReyBrujo, 2005
*     Deleted method 'CreateRandomSeasonalEvent'
* April 12, 2005 15:01 ReyBrujo
*     Updated interface of method 'Create'
* April 11, 2005 02:34 ReyBrujo, 2005
*     Updated return type of method 'CreateRandomSeasonalEvent'
* April 11, 2005 02:24 ReyBrujo, 2005
*     Added method 'CreateRandomSeasonalEvent'
*     Updated interface of method 'Create'
* April 11, 2005 02:15 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Create'
*     Added method '~CEventFactory'
*     Added method 'CEventFactory'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _EVENTFACTORY_H
#define _EVENTFACTORY_H

//@START_USER1
//@END_USER1


/*@NOTE_584
This factory creates an event of the given type.
*/

class CEventFactory
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
    CEventFactory();
    virtual ~CEventFactory();
    CEvent* Create(const enEventType eEvent) const;
};

#endif


#ifdef CB_INLINES
#ifndef _EVENTFACTORY_H_INLINES
#define _EVENTFACTORY_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

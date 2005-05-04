/******************************************************************************\
*
* File:          ../../include/MonthFactory.h
* Creation date: April 11, 2005 17:58
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CMonthFactory'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated interface of method 'Create'
* April 11, 2005 17:58 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Create'
*     Added method '~CMonthFactory'
*     Added method 'CMonthFactory'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _MONTHFACTORY_H
#define _MONTHFACTORY_H

//@START_USER1
//@END_USER1


/*@NOTE_914
Generates the asked month.
*/

class CMonthFactory
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
    CMonthFactory();
    virtual ~CMonthFactory();
    CMonth* Create(const enMonthType eMonth);
};

#endif


#ifdef CB_INLINES
#ifndef _MONTHFACTORY_H_INLINES
#define _MONTHFACTORY_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

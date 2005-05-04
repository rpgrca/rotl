/******************************************************************************\
*
* File:          ../../include/PersonFactory.h
* Creation date: April 10, 2005 23:00
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CPersonFactory'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 13, 2005 01:29 ReyBrujo, 2005
*     Added method 'Load'
* April 10, 2005 23:00 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Create'
*     Added method '~CPersonFactory'
*     Added method 'CPersonFactory'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _PERSONFACTORY_H
#define _PERSONFACTORY_H

//@START_USER1
//@END_USER1


/*@NOTE_408
The person factory generates a person of the asked type.
*/

class CPersonFactory
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
    CPersonFactory();
    virtual ~CPersonFactory();
    CPerson* Create(const enPersonType ePerson) const;
    CPerson* Load(const char* strFileName) const;
};

#endif


#ifdef CB_INLINES
#ifndef _PERSONFACTORY_H_INLINES
#define _PERSONFACTORY_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

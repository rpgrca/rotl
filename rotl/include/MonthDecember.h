/******************************************************************************\
*
* File:          ../../include/CMonthDecember.h
* Creation date: April 11, 2005 17:26
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CMonthDecember'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CMonth'
* April 11, 2005 17:26 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMonthDecember'
*     Added method 'CMonthDecember'
*     Added inheritance 'CMonth'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _MONTHDECEMBER_H
#define _MONTHDECEMBER_H

//@START_USER1
//@END_USER1



class CMonthDecember
    : public CMonth
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
    CMonthDecember();
    virtual ~CMonthDecember();
};

#endif


#ifdef CB_INLINES
#ifndef _MONTHDECEMBER_H_INLINES
#define _MONTHDECEMBER_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

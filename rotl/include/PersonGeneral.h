/******************************************************************************\
*
* File:          ../../include/PersonGeneral.h
* Creation date: April 10, 2005 19:26
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CPersonGeneral'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 11, 2005 03:15 ReyBrujo, 2005
*     Deleted method 'GetDivision'
*     Deleted method 'SetDivision'
*     Deleted member 'm_nDivision'
* April 10, 2005 19:28 ReyBrujo
*     Added method 'SetDivision'
*     Added method 'GetDivision'
*     Added method 'CPersonGeneral'
*     Added member 'm_nDivision'
* April 10, 2005 19:26 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CPersonGeneral'
*     Added inheritance 'CPerson'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _PERSONGENERAL_H
#define _PERSONGENERAL_H

//@START_USER1
//@END_USER1


/*@NOTE_57
The CPersonGeneral class inherits from CPerson.
A general is someone who can be hired to lead an army.
*/

class CPersonGeneral
    : public CPerson
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
    CPersonGeneral();
    virtual ~CPersonGeneral();
};

#endif


#ifdef CB_INLINES
#ifndef _PERSONGENERAL_H_INLINES
#define _PERSONGENERAL_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

/******************************************************************************\
*
* File:          ../../include/SeasonWinter.h
* Creation date: April 11, 2005 16:55
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CSeasonWinter'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 13, 2005 17:12 ReyBrujo, 2005
*     Updated inheritance 'CSeason'
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CSeason'
* April 11, 2005 16:55 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonWinter'
*     Added method 'CSeasonWinter'
*     Added inheritance 'CSeason'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _SEASONWINTER_H
#define _SEASONWINTER_H

//@START_USER1
//@END_USER1


/*@NOTE_740
Winter is the death season. Depending on the area, different disasters strike.
*/

class CSeasonWinter
    : public CSeason
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
    CSeasonWinter();
    virtual ~CSeasonWinter();
};

#endif


#ifdef CB_INLINES
#ifndef _SEASONWINTER_H_INLINES
#define _SEASONWINTER_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

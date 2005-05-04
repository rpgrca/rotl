/******************************************************************************\
*
* File:          ../../include/CityActionEnlistHire.h
* Creation date: April 14, 2005 02:03
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCityActionEnlistHire'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:03 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionEnlistHire'
*     Added method 'CCityActionEnlistHire'
*     Added inheritance 'CCityActionEnlist'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _CITYACTIONENLISTHIRE_H
#define _CITYACTIONENLISTHIRE_H

//@START_USER1
//@END_USER1


/*@NOTE_1376
Appoint generals who are staying in a city.
Each division may have up to CONST_MAXIMUN_UNIT_GENERALS (5) generals.
*/

class CCityActionEnlistHire
    : public CCityActionEnlist
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
    CCityActionEnlistHire();
    virtual ~CCityActionEnlistHire();
};

#endif


#ifdef CB_INLINES
#ifndef _CITYACTIONENLISTHIRE_H_INLINES
#define _CITYACTIONENLISTHIRE_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

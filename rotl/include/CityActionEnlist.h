/******************************************************************************\
*
* File:          ../../include/CityActionEnlist.h
* Creation date: April 14, 2005 01:52
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCityActionEnlist'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 01:52 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionEnlist'
*     Added method 'CCityActionEnlist'
*     Added inheritance 'CCityAction'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _CITYACTIONENLIST_H
#define _CITYACTIONENLIST_H

//@START_USER1
//@END_USER1


/*@NOTE_1362
ENLIST soldiers and generals for your army.
*/

class CCityActionEnlist
    : public CCityAction
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
    CCityActionEnlist();
    virtual ~CCityActionEnlist();
};

#endif


#ifdef CB_INLINES
#ifndef _CITYACTIONENLIST_H_INLINES
#define _CITYACTIONENLIST_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

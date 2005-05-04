/******************************************************************************\
*
* File:          ../../include/CityActionGive.h
* Creation date: April 14, 2005 01:50
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCityActionGive'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 15, 2005 12:01 ReyBrujo, 2005
*     Added method 'CCityActionGive'
* April 14, 2005 01:50 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionGive'
*     Added inheritance 'CCityAction'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _CITYACTIONGIVE_H
#define _CITYACTIONGIVE_H

//@START_USER1
//@END_USER1


/*@NOTE_1322
GIVE to the city and/or the elders to increase your Loyalty and Respect levels.
*/

class CCityActionGive
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
    CCityActionGive();
    virtual ~CCityActionGive();
};

#endif


#ifdef CB_INLINES
#ifndef _CITYACTIONGIVE_H_INLINES
#define _CITYACTIONGIVE_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

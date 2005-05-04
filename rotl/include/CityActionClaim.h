/******************************************************************************\
*
* File:          ../../include/CityActionClaim.h
* Creation date: April 17, 2005 18:32
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCityActionClaim'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 18:42 ReyBrujo, 2005
*     Added method 'Execute'
* April 17, 2005 18:32 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionClaim'
*     Added method 'CCityActionClaim'
*     Added inheritance 'CCityAction'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _CITYACTIONCLAIM_H
#define _CITYACTIONCLAIM_H

//@START_USER1
//@END_USER1


/*@NOTE_2348
Claims a city for the current ruler.
*/

class CCityActionClaim
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
    CCityActionClaim();
    virtual ~CCityActionClaim();
    virtual bool Execute();
};

#endif


#ifdef CB_INLINES
#ifndef _CITYACTIONCLAIM_H_INLINES
#define _CITYACTIONCLAIM_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

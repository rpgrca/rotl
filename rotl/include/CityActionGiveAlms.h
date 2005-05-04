/******************************************************************************\
*
* File:          ../../include/CityActionGiveAlms.h
* Creation date: April 14, 2005 01:50
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCityActionGiveAlms'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 01:50 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionGiveAlms'
*     Added method 'CCityActionGiveAlms'
*     Added inheritance 'CCityActionGive'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _CITYACTIONGIVEALMS_H
#define _CITYACTIONGIVEALMS_H

//@START_USER1
//@END_USER1


/*@NOTE_1354
Distribute food from the division's supply to the residents of the city.
*/

class CCityActionGiveAlms
    : public CCityActionGive
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
    CCityActionGiveAlms();
    virtual ~CCityActionGiveAlms();
};

#endif


#ifdef CB_INLINES
#ifndef _CITYACTIONGIVEALMS_H_INLINES
#define _CITYACTIONGIVEALMS_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

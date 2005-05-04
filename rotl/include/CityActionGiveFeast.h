/******************************************************************************\
*
* File:          ../../include/CityActionGiveFeast.h
* Creation date: April 14, 2005 01:50
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCityActionGiveFeast'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 01:51 ReyBrujo, 2005
*     Added method 'CCityActionGiveFeast'
* April 14, 2005 01:50 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionGiveFeast'
*     Added inheritance 'CCityActionGive'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _CITYACTIONGIVEFEAST_H
#define _CITYACTIONGIVEFEAST_H

//@START_USER1
//@END_USER1


/*@NOTE_1348
Host a FEAST in the city and entertain the elders.
A FEAST requires Gold, and the amount depends on the city's Population, Loyalty, and Respect levels.
This command is possible only from the ruler's division and is more effective in raising Loyalty and Respect than the ALMS command.
*/

class CCityActionGiveFeast
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
    CCityActionGiveFeast();
    virtual ~CCityActionGiveFeast();
};

#endif


#ifdef CB_INLINES
#ifndef _CITYACTIONGIVEFEAST_H_INLINES
#define _CITYACTIONGIVEFEAST_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

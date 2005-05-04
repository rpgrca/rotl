/******************************************************************************\
*
* File:          ../../include/CityActionBuild.h
* Creation date: April 14, 2005 02:03
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCityActionBuild'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 15, 2005 13:23 ReyBrujo, 2005
*     Added method 'Execute'
* April 14, 2005 02:03 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionBuild'
*     Added method 'CCityActionBuild'
*     Added inheritance 'CCityAction'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _CITYACTIONBUILD_H
#define _CITYACTIONBUILD_H

//@START_USER1
//@END_USER1


/*@NOTE_1397
Fortify your city by building up the city walls.
The price to BUILD depends on the number of soldiers in the division.
It increases the Defense level of the city, and Loyalty and Respect of the ruler.
*/

class CCityActionBuild
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
    CCityActionBuild();
    virtual ~CCityActionBuild();
    virtual bool Execute();
};

#endif


#ifdef CB_INLINES
#ifndef _CITYACTIONBUILD_H_INLINES
#define _CITYACTIONBUILD_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

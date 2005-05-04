/******************************************************************************\
*
* File:          ../../include/MilitaryCity.h
* Creation date: April 10, 2005 20:10
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CMilitaryCity'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:01 ReyBrujo, 2005
*     Updated inheritance 'CCity'
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CCityBase'
* April 10, 2005 20:11 ReyBrujo
*     Added method 'CMilitaryCity'
* April 10, 2005 20:10 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMilitaryCity'
*     Added inheritance 'CCityBase'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _MILITARYCITY_H
#define _MILITARYCITY_H

//@START_USER1
//@END_USER1


/*@NOTE_108
Military cities focus on defenses.
Generals with high Battle Skills can be enlisted from these kind of cities.
*/

class CMilitaryCity
    : public CCity
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
    CMilitaryCity();
    virtual ~CMilitaryCity();
};

#endif


#ifdef CB_INLINES
#ifndef _MILITARYCITY_H_INLINES
#define _MILITARYCITY_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

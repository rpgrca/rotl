/******************************************************************************\
*
* File:          ../../include/CommercialCity.h
* Creation date: April 10, 2005 19:45
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCommercialCity'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:01 ReyBrujo, 2005
*     Updated inheritance 'CCity'
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CCityBase'
* April 10, 2005 20:11 ReyBrujo
*     Added method 'CCommercialCity'
* April 10, 2005 19:45 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCommercialCity'
*     Added inheritance 'CCityBase'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _COMMERCIALCITY_H
#define _COMMERCIALCITY_H

//@START_USER1
//@END_USER1


/*@NOTE_78
A commercial city focuses on farming.
Generals with high intelligence can be enlisted from these cities.
*/

class CCommercialCity
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
    CCommercialCity();
    virtual ~CCommercialCity();
};

#endif


#ifdef CB_INLINES
#ifndef _COMMERCIALCITY_H_INLINES
#define _COMMERCIALCITY_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

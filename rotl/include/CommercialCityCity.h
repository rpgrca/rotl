/******************************************************************************\
*
* File:          ../../include/CommercialCityCity.h
* Creation date: April 10, 2005 19:45
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCommercialCityCity'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CCommercialCity'
* April 10, 2005 20:11 ReyBrujo
*     Added method 'CCommercialCityCity'
* April 10, 2005 20:10 ReyBrujo
*     Updated inheritance 'CCommercialCity'
* April 10, 2005 19:45 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCommercialCityCity'
*     Added inheritance 'CCommercialCity'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _COMMERCIALCITYCITY_H
#define _COMMERCIALCITYCITY_H

//@START_USER1
//@END_USER1


/*@NOTE_96
The city is a big town.
It has less than CONST_POPULATION_CITY and less than CONST_DEFENSE_CITY defense.
*/

class CCommercialCityCity
    : public CCommercialCity
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
    CCommercialCityCity();
    virtual ~CCommercialCityCity();
};

#endif


#ifdef CB_INLINES
#ifndef _COMMERCIALCITYCITY_H_INLINES
#define _COMMERCIALCITYCITY_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

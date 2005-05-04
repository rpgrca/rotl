/******************************************************************************\
*
* File:          ../../include/CommercialCityTown.h
* Creation date: April 10, 2005 19:45
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCommercialCityTown'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CCommercialCity'
* April 10, 2005 20:11 ReyBrujo
*     Added method 'CCommercialCityTown'
* April 10, 2005 20:10 ReyBrujo
*     Updated inheritance 'CCommercialCity'
* April 10, 2005 19:45 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCommercialCityTown'
*     Added inheritance 'CCommercialCity'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _COMMERCIALCITYTOWN_H
#define _COMMERCIALCITYTOWN_H

//@START_USER1
//@END_USER1


/*@NOTE_89
The town is an average city.
It has less than CONST_POPULATION_TOWN and less than CONST_DEFENSE_TOWN defense.
*/

class CCommercialCityTown
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
    CCommercialCityTown();
    virtual ~CCommercialCityTown();
};

#endif


#ifdef CB_INLINES
#ifndef _COMMERCIALCITYTOWN_H_INLINES
#define _COMMERCIALCITYTOWN_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

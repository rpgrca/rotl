/******************************************************************************\
*
* File:          ../../include/CommercialCityVillage.h
* Creation date: April 10, 2005 19:45
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCommercialCityVillage'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CCommercialCity'
* April 10, 2005 20:11 ReyBrujo
*     Added method 'CCommercialCityVillage'
* April 10, 2005 20:10 ReyBrujo
*     Updated inheritance 'CCommercialCity'
* April 10, 2005 19:45 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCommercialCityVillage'
*     Added inheritance 'CCommercialCity'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _COMMERCIALCITYVILLAGE_H
#define _COMMERCIALCITYVILLAGE_H

//@START_USER1
//@END_USER1


/*@NOTE_84
The village is the smallest commercial city.
It has less than CONST_POPULATION_VILLAGE inhabitants, and less than CONST_DEFENSE_VILLAGE defense.
*/

class CCommercialCityVillage
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
    CCommercialCityVillage();
    virtual ~CCommercialCityVillage();
};

#endif


#ifdef CB_INLINES
#ifndef _COMMERCIALCITYVILLAGE_H_INLINES
#define _COMMERCIALCITYVILLAGE_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

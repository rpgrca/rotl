/******************************************************************************\
*
* File:          ../../include/CommercialCityMetropolis.h
* Creation date: April 10, 2005 19:45
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCommercialCityMetropolis'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CCommercialCity'
* April 10, 2005 20:11 ReyBrujo
*     Added method 'CCommercialCityMetropolis'
* April 10, 2005 20:10 ReyBrujo
*     Updated inheritance 'CCommercialCity'
* April 10, 2005 19:45 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCommercialCityMetropolis'
*     Added inheritance 'CCommercialCity'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _COMMERCIALCITYMETROPOLIS_H
#define _COMMERCIALCITYMETROPOLIS_H

//@START_USER1
//@END_USER1


/*@NOTE_102
The metropolis is the largest commercial city available in the game.
It has over CONST_POPULATION_CITY inhabitants and CONST_DEFENSE_CITY defenses.
*/

class CCommercialCityMetropolis
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
    CCommercialCityMetropolis();
    virtual ~CCommercialCityMetropolis();
};

#endif


#ifdef CB_INLINES
#ifndef _COMMERCIALCITYMETROPOLIS_H_INLINES
#define _COMMERCIALCITYMETROPOLIS_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

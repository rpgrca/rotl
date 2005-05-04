/******************************************************************************\
*
* File:          ../../include/CityActionMaterialRaid.h
* Creation date: April 14, 2005 02:03
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCityActionMaterialRaid'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:03 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionMaterialRaid'
*     Added method 'CCityActionMaterialRaid'
*     Added inheritance 'CCityActionMaterial'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _CITYACTIONMATERIALRAID_H
#define _CITYACTIONMATERIALRAID_H

//@START_USER1
//@END_USER1


/*@NOTE_1422
Obtain Gold and Food by force.
You can RAID all cities except for Barrier cities.
You may discover hidden stashes of Gold and Food which will increase your soldier's Spirit, but decrease your ruler's Loyalty, Respect, Popularity, and the city's Defense, Crop Value, and Health.
*/

class CCityActionMaterialRaid
    : public CCityActionMaterial
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
    CCityActionMaterialRaid();
    virtual ~CCityActionMaterialRaid();
};

#endif


#ifdef CB_INLINES
#ifndef _CITYACTIONMATERIALRAID_H_INLINES
#define _CITYACTIONMATERIALRAID_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

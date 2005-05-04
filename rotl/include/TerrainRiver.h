/******************************************************************************\
*
* File:          ../../include/TerrainRiver.h
* Creation date: April 10, 2005 20:56
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CTerrainRiver'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 13, 2005 17:12 ReyBrujo, 2005
*     Updated inheritance 'CTerrain'
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CTerrain'
* April 10, 2005 21:07 ReyBrujo
*     Added method 'GetDefenseModifier'
*     Added method 'GetAttackModifier'
* April 10, 2005 20:56 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CTerrainRiver'
*     Added method 'CTerrainRiver'
*     Added inheritance 'CTerrain'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _TERRAINRIVER_H
#define _TERRAINRIVER_H

//@START_USER1
//@END_USER1


/*@NOTE_288
The environment known as river.
There is a penalty for the unit combatting from a river.
*/

class CTerrainRiver
    : public CTerrain
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
    CTerrainRiver();
    virtual ~CTerrainRiver();
};

#endif


#ifdef CB_INLINES
#ifndef _TERRAINRIVER_H_INLINES
#define _TERRAINRIVER_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

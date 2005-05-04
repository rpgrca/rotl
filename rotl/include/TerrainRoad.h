/******************************************************************************\
*
* File:          ../../include/TerrainRoad.h
* Creation date: April 10, 2005 20:56
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CTerrainRoad'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CTerrain'
* April 10, 2005 21:07 ReyBrujo
*     Added method 'GetDefenseModifier'
*     Added method 'GetAttackModifier'
* April 10, 2005 20:56 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CTerrainRoad'
*     Added method 'CTerrainRoad'
*     Added inheritance 'CTerrain'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _TERRAINROAD_H
#define _TERRAINROAD_H

//@START_USER1
//@END_USER1


/*@NOTE_294
The environment known as road.
The road gives advantage to both attack and defense.
*/

class CTerrainRoad
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
    CTerrainRoad();
    virtual ~CTerrainRoad();
};

#endif


#ifdef CB_INLINES
#ifndef _TERRAINROAD_H_INLINES
#define _TERRAINROAD_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

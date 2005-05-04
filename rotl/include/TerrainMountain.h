/******************************************************************************\
*
* File:          ../../include/TerrainMountain.h
* Creation date: April 10, 2005 20:53
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CTerrainMountain'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 13, 2005 17:12 ReyBrujo, 2005
*     Updated inheritance 'CTerrain'
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CTerrain'
* April 10, 2005 21:07 ReyBrujo
*     Deleted method 'CTerrainMountain'
*     Added method 'GetDefenseModifier'
*     Added method 'GetAttackModifier'
* April 10, 2005 20:56 ReyBrujo
*     Added method 'CTerrainMountain'
*     Added method 'CTerrainMountain'
* April 10, 2005 20:53 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CTerrainMountain'
*     Added inheritance 'CTerrain'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _TERRAINMOUNTAIN_H
#define _TERRAINMOUNTAIN_H

//@START_USER1
//@END_USER1


/*@NOTE_274
A mountainous region.
These kind of regions give a poor crop value.
*/

class CTerrainMountain
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
    CTerrainMountain();
    virtual ~CTerrainMountain();
};

#endif


#ifdef CB_INLINES
#ifndef _TERRAINMOUNTAIN_H_INLINES
#define _TERRAINMOUNTAIN_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

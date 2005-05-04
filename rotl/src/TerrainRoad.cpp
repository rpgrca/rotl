/******************************************************************************\
*
* File:          ../../src/TerrainRoad.cpp
* Creation date: April 10, 2005 20:56
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CTerrainRoad'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 22:58 ReyBrujo, 2005
*     Updated code of method 'CTerrainRoad'
* April 16, 2005 22:54 ReyBrujo, 2005
*     Updated code of method 'CTerrainRoad'
* April 16, 2005 02:11 ReyBrujo, 2005
*     Updated code of method '~CTerrainRoad'
*     Updated code of method 'CTerrainRoad'
* April 12, 2005 23:05 ReyBrujo, 2005
*     Updated code of method 'CTerrainRoad'
* April 12, 2005 22:48 ReyBrujo, 2005
*     Updated code of method 'CTerrainRoad'
* April 12, 2005 18:12 ReyBrujo
*     Updated code of method 'CTerrainRoad'
* April 12, 2005 16:36 ReyBrujo
*     Updated code of method 'CTerrainRoad'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CTerrainRoad'
*     Updated code of method 'CTerrainRoad'
*     Updated inheritance 'CTerrain'
* April 11, 2005 03:15 ReyBrujo, 2005
*     Updated code of method 'CTerrainRoad'
* April 10, 2005 21:42 ReyBrujo
*     Updated code of method 'CTerrainRoad'
* April 10, 2005 21:38 ReyBrujo
*     Updated code of method 'CTerrainRoad'
* April 10, 2005 21:24 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method 'GetDefenseModifier'
*     Updated code of method 'GetAttackModifier'
*     Updated code of method '~CTerrainRoad'
*     Updated code of method 'CTerrainRoad'
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
//@START_USER1
//@END_USER1


// Master include file
#include "rotl.h"


//@START_USER2
//@END_USER2




/*@NOTE_300
Constructor method.
*/
CTerrainRoad::CTerrainRoad() //@INIT_300
    : CTerrain()
{//@CODE_300
    ConstructorInclude();

    // Put in your own code
    SetName("Road terrain");
    SetType(enTERRAINTYPE_ROAD);
    SetObstacle(enOBSTACLETYPE_FREE);

    m_pModifier->SetUnitAttackModifier(CONST_TERRAIN_ATTACK_MODIFIER_ROAD);
    m_pModifier->SetCityCropValueModifier(CONST_TERRAIN_CROP_MODIFIER_ROAD);
}//@CODE_300


/*@NOTE_295
Destructor method.
*/
CTerrainRoad::~CTerrainRoad()
{//@CODE_295
    DestructorInclude();

    // Put in your own code
}//@CODE_295


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_296
Method which must be called first in a constructor.
*/
void CTerrainRoad::ConstructorInclude()
{
}


/*@NOTE_297
Method which must be called first in a destructor.
*/
void CTerrainRoad::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

/******************************************************************************\
*
* File:          ../../src/TerrainMountain.cpp
* Creation date: April 10, 2005 20:53
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CTerrainMountain'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 22:54 ReyBrujo, 2005
*     Updated code of method 'CTerrainMountain'
* April 16, 2005 02:11 ReyBrujo, 2005
*     Updated code of method '~CTerrainMountain'
*     Updated code of method 'CTerrainMountain'
* April 13, 2005 17:12 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CTerrainMountain'
*     Updated code of method 'CTerrainMountain'
*     Updated inheritance 'CTerrain'
* April 12, 2005 23:05 ReyBrujo, 2005
*     Updated code of method 'CTerrainMountain'
* April 12, 2005 22:47 ReyBrujo, 2005
*     Updated code of method 'CTerrainMountain'
* April 12, 2005 18:12 ReyBrujo
*     Updated code of method 'CTerrainMountain'
* April 12, 2005 16:54 ReyBrujo
*     Updated code of method 'CTerrainMountain'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CTerrainMountain'
*     Updated code of method 'CTerrainMountain'
*     Updated inheritance 'CTerrain'
* April 11, 2005 03:15 ReyBrujo, 2005
*     Updated code of method 'CTerrainMountain'
* April 10, 2005 21:42 ReyBrujo
*     Updated code of method 'CTerrainMountain'
* April 10, 2005 21:38 ReyBrujo
*     Updated code of method 'CTerrainMountain'
* April 10, 2005 21:24 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method 'GetDefenseModifier'
*     Updated code of method 'GetAttackModifier'
*     Updated code of method '~CTerrainMountain'
*     Updated code of method 'CTerrainMountain'
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
//@START_USER1
//@END_USER1


// Master include file
#include "rotl.h"


//@START_USER2
//@END_USER2




/*@NOTE_281
Constructor method.
*/
CTerrainMountain::CTerrainMountain() //@INIT_281
    : CTerrain()
{//@CODE_281
    ConstructorInclude();

    // Put in your own code
    SetName("Mountainous terrain");
    SetType(enTERRAINTYPE_MOUNTAIN);
    SetObstacle(enOBSTACLETYPE_BLOCK);

    m_pModifier->SetUnitAttackModifier(CONST_TERRAIN_ATTACK_MODIFIER_MOUNTAIN);
    m_pModifier->SetCityDefenseModifier(CONST_TERRAIN_DEFENSE_MODIFIER_MOUNTAIN);
    m_pModifier->SetCityCropValueModifier(CONST_TERRAIN_CROP_MODIFIER_MOUNTAIN);
}//@CODE_281


/*@NOTE_275
Destructor method.
*/
CTerrainMountain::~CTerrainMountain()
{//@CODE_275
    DestructorInclude();

    // Put in your own code
}//@CODE_275


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_276
Method which must be called first in a constructor.
*/
void CTerrainMountain::ConstructorInclude()
{
}


/*@NOTE_277
Method which must be called first in a destructor.
*/
void CTerrainMountain::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

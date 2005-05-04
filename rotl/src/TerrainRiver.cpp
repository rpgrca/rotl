/******************************************************************************\
*
* File:          ../../src/TerrainRiver.cpp
* Creation date: April 10, 2005 20:56
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CTerrainRiver'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 22:57 ReyBrujo, 2005
*     Updated code of method 'CTerrainRiver'
* April 16, 2005 22:54 ReyBrujo, 2005
*     Updated code of method 'CTerrainRiver'
* April 16, 2005 02:11 ReyBrujo, 2005
*     Updated code of method '~CTerrainRiver'
*     Updated code of method 'CTerrainRiver'
* April 13, 2005 17:12 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CTerrainRiver'
*     Updated code of method 'CTerrainRiver'
*     Updated inheritance 'CTerrain'
* April 12, 2005 23:05 ReyBrujo, 2005
*     Updated code of method 'CTerrainRiver'
* April 12, 2005 22:48 ReyBrujo, 2005
*     Updated code of method 'CTerrainRiver'
* April 12, 2005 18:12 ReyBrujo
*     Updated code of method 'CTerrainRiver'
* April 12, 2005 16:36 ReyBrujo
*     Updated code of method 'CTerrainRiver'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CTerrainRiver'
*     Updated code of method 'CTerrainRiver'
*     Updated inheritance 'CTerrain'
* April 11, 2005 03:15 ReyBrujo, 2005
*     Updated code of method 'CTerrainRiver'
* April 10, 2005 21:42 ReyBrujo
*     Updated code of method 'CTerrainRiver'
* April 10, 2005 21:38 ReyBrujo
*     Updated code of method 'CTerrainRiver'
* April 10, 2005 21:24 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method 'GetDefenseModifier'
*     Updated code of method 'GetAttackModifier'
*     Updated code of method '~CTerrainRiver'
*     Updated code of method 'CTerrainRiver'
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
//@START_USER1
//@END_USER1


// Master include file
#include "rotl.h"


//@START_USER2
//@END_USER2




/*@NOTE_301
Constructor method.
*/
CTerrainRiver::CTerrainRiver() //@INIT_301
    : CTerrain()
{//@CODE_301
    ConstructorInclude();

    // Put in your own code
    SetName("River terrain");
    SetType(enTERRAINTYPE_RIVER);
    SetObstacle(enOBSTACLETYPE_BLOCK);

    m_pModifier->SetUnitAttackModifier(CONST_TERRAIN_ATTACK_MODIFIER_RIVER);
    m_pModifier->SetCityCropValueModifier(CONST_TERRAIN_CROP_MODIFIER_RIVER);
}//@CODE_301


/*@NOTE_289
Destructor method.
*/
CTerrainRiver::~CTerrainRiver()
{//@CODE_289
    DestructorInclude();

    // Put in your own code
}//@CODE_289


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_290
Method which must be called first in a constructor.
*/
void CTerrainRiver::ConstructorInclude()
{
}


/*@NOTE_291
Method which must be called first in a destructor.
*/
void CTerrainRiver::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

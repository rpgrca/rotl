/******************************************************************************\
*
* File:          ../../src/TerrainField.cpp
* Creation date: April 10, 2005 20:56
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CTerrainField'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 22:54 ReyBrujo, 2005
*     Updated code of method 'CTerrainField'
* April 16, 2005 02:11 ReyBrujo, 2005
*     Updated code of method '~CTerrainField'
*     Updated code of method 'CTerrainField'
* April 13, 2005 17:12 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CTerrainField'
*     Updated code of method 'CTerrainField'
*     Updated inheritance 'CTerrain'
* April 12, 2005 23:05 ReyBrujo, 2005
*     Updated code of method 'CTerrainField'
* April 12, 2005 22:42 ReyBrujo, 2005
*     Updated code of method 'CTerrainField'
* April 12, 2005 18:12 ReyBrujo
*     Updated code of method 'CTerrainField'
* April 12, 2005 16:36 ReyBrujo
*     Updated code of method 'CTerrainField'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CTerrainField'
*     Updated code of method 'CTerrainField'
*     Updated inheritance 'CTerrain'
* April 11, 2005 03:15 ReyBrujo, 2005
*     Updated code of method 'CTerrainField'
* April 10, 2005 22:44 ReyBrujo
*     Updated code of method 'CTerrainField'
* April 10, 2005 21:42 ReyBrujo
*     Updated code of method 'CTerrainField'
* April 10, 2005 21:38 ReyBrujo
*     Updated code of method 'CTerrainField'
* April 10, 2005 21:24 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method 'GetDefenseModifier'
*     Updated code of method 'GetAttackModifier'
*     Updated code of method '~CTerrainField'
*     Updated code of method 'CTerrainField'
*     Updated inheritance 'CTerrain'
* April 10, 2005 21:07 ReyBrujo
*     Added method 'GetDefenseModifier'
*     Added method 'GetAttackModifier'
* April 10, 2005 20:56 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CTerrainField'
*     Added method 'CTerrainField'
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




/*@NOTE_302
Constructor method.
*/
CTerrainField::CTerrainField() //@INIT_302
    : CTerrain()
{//@CODE_302
    ConstructorInclude();

    // Put in your own code
    SetName("Plain terrain");
    SetType(enTERRAINTYPE_FIELD);
    SetObstacle(enOBSTACLETYPE_FREE);

    m_pModifier->SetUnitAttackModifier(CONST_TERRAIN_ATTACK_MODIFIER_FIELD);
    m_pModifier->SetUnitDamageModifier(CONST_TERRAIN_DAMAGE_MODIFIER_FIELD);
    m_pModifier->SetCityCropValueModifier(CONST_TERRAIN_CROP_MODIFIER_FIELD);
}//@CODE_302


/*@NOTE_283
Destructor method.
*/
CTerrainField::~CTerrainField()
{//@CODE_283
    DestructorInclude();

    // Put in your own code
}//@CODE_283


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_284
Method which must be called first in a constructor.
*/
void CTerrainField::ConstructorInclude()
{
}


/*@NOTE_285
Method which must be called first in a destructor.
*/
void CTerrainField::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

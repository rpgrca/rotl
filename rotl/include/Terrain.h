/******************************************************************************\
*
* File:          ../../include/Terrain.h
* Creation date: April 10, 2005 20:53
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CTerrain'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 22:53 ReyBrujo, 2005
*     Added method 'SetObstacle'
*     Added method 'GetObstacle'
*     Added member 'm_eObstacle'
* April 13, 2005 17:12 ReyBrujo, 2005
*     Updated interface of method 'SetType'
*     Updated inheritance 'CBase'
*     Updated member 'm_pModifier'
*     Updated member 'm_eType'
* April 12, 2005 23:05 ReyBrujo, 2005
*     Added method 'SetType'
*     Updated member 'm_eType'
* April 12, 2005 18:14 ReyBrujo
*     Updated member 'm_pModifier'
* April 12, 2005 18:12 ReyBrujo
*     Added method 'GetModifier'
*     Added member 'm_pModifier'
* April 12, 2005 17:45 ReyBrujo
*     Deleted inheritance 'CEnvironment'
*     Added inheritance 'CBase'
* April 12, 2005 16:36 ReyBrujo
*     Added method 'GetType'
*     Added member 'm_eType'
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CEnvironment'
* April 10, 2005 21:24 ReyBrujo
*     Deleted inheritance 'CEnvironment'
*     Deleted member 'm_eTerrain'
*     Added inheritance 'CEnvironment'
* April 10, 2005 21:01 ReyBrujo
*     Added inheritance 'CEnvironment'
* April 10, 2005 20:53 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetTerrain'
*     Added method 'GetTerrain'
*     Added method '~CTerrain'
*     Added method 'CTerrain'
*     Added inheritance 'CBase'
*     Added member 'm_eTerrain'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _TERRAIN_H
#define _TERRAIN_H
//  No modifications for fields
const float CONST_TERRAIN_ATTACK_MODIFIER_FIELD = 1.0;
const float CONST_TERRAIN_DAMAGE_MODIFIER_FIELD = 1.0;
const float CONST_TERRAIN_CROP_MODIFIER_FIELD = 1;

// Road gives some advantages while attacking.
const float CONST_TERRAIN_ATTACK_MODIFIER_ROAD = 1.2;
const float CONST_TERRAIN_DAMAGE_MODIFIER_ROAD = 1.2;
const float CONST_TERRAIN_CROP_MODIFIER_ROAD = 1;

// River gives advantages to the attacker
const float CONST_TERRAIN_ATTACK_MODIFIER_RIVER = 1.0;
const float CONST_TERRAIN_DAMAGE_MODIFIER_RIVER = 1.5;
const float CONST_TERRAIN_CROP_MODIFIER_RIVER = 1.2;

// Mountain gives advantages to the defending side
const float CONST_TERRAIN_ATTACK_MODIFIER_MOUNTAIN = 1.1;
const float CONST_TERRAIN_DAMAGE_MODIFIER_MOUNTAIN = 1.0;
const float CONST_TERRAIN_CROP_MODIFIER_MOUNTAIN = 0.8;
const float CONST_TERRAIN_DEFENSE_MODIFIER_MOUNTAIN = 1.1;

//@START_USER1
//@END_USER1


/*@NOTE_268
The terrain environment defines a surrounding area.
It is used to set the environment of a city or an army in a battle.
*/

class CTerrain
    : public CBase
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

private:
    enTerrainType m_eType;
    enObstacleType m_eObstacle;

protected:
    CModifier* m_pModifier;

//
// Non-Grouped Methods
//

protected:
    void SetObstacle(const enObstacleType eObstacle);
    void SetType(const enTerrainType eType);

public:
    CTerrain();
    virtual ~CTerrain();
    enObstacleType GetObstacle() const;
    enTerrainType GetType() const;
    CModifier* GetModifier() const;
};

#endif


#ifdef CB_INLINES
#ifndef _TERRAIN_H_INLINES
#define _TERRAIN_H_INLINES

/*@NOTE_2193
Returns the value of member 'm_eObstacle'.
*/
inline enObstacleType CTerrain::GetObstacle() const
{//@CODE_2193
    return m_eObstacle;
}//@CODE_2193



/*@NOTE_2194
Set the value of member 'm_eObstacle' to 'eObstacle'.
*/
inline void CTerrain::SetObstacle(const enObstacleType eObstacle)
{//@CODE_2194
    m_eObstacle = eObstacle;
}//@CODE_2194



/*@NOTE_991
Returns the value of member 'm_eType'.
*/
inline enTerrainType CTerrain::GetType() const
{//@CODE_991
    return m_eType;
}//@CODE_991



/*@NOTE_1115
Set the value of member 'm_eType' to 'eType'.
*/
inline void CTerrain::SetType(const enTerrainType eType)
{//@CODE_1115
    m_eType = eType;
}//@CODE_1115



/*@NOTE_1056
Returns the value of member 'm_pModifier'.
*/
inline CModifier* CTerrain::GetModifier() const
{//@CODE_1056
    return m_pModifier;
}//@CODE_1056



//@START_USER3
//@END_USER3

#endif
#endif

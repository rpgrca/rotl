/******************************************************************************\
*
* File:          ../../include/TerrainField.h
* Creation date: April 10, 2005 20:56
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CTerrainField'
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
*     Added method '~CTerrainField'
*     Added method 'CTerrainField'
*     Added inheritance 'CTerrain'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _TERRAINFIELD_H
#define _TERRAINFIELD_H

//@START_USER1
//@END_USER1


/*@NOTE_282
The environment known as field.
The field is part of the plains, where the units can move easily, and there are no attack nor defense advantages.
*/

class CTerrainField
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
    CTerrainField();
    virtual ~CTerrainField();
};

#endif


#ifdef CB_INLINES
#ifndef _TERRAINFIELD_H_INLINES
#define _TERRAINFIELD_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

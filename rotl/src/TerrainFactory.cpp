/******************************************************************************\
*
* File:          ../../src/TerrainFactory.cpp
* Creation date: April 10, 2005 21:38
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CTerrainFactory'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated interface of method 'Create'
*     Updated code of method '~CTerrainFactory'
*     Updated code of method 'CTerrainFactory'
* April 11, 2005 02:08 ReyBrujo, 2005
*     Updated code of method 'Create'
* April 11, 2005 02:07 ReyBrujo, 2005
*     Updated code of method 'Create'
* April 11, 2005 02:06 ReyBrujo, 2005
*     Updated code of method 'Create'
* April 10, 2005 23:00 ReyBrujo
*     Updated interface of method 'Generate'
* April 10, 2005 21:54 ReyBrujo
*     Updated code of method 'Generate'
* April 10, 2005 21:38 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Generate'
*     Added method '~CTerrainFactory'
*     Added method 'CTerrainFactory'
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




/*@NOTE_352
Constructor method.
*/
CTerrainFactory::CTerrainFactory() //@INIT_352
{//@CODE_352
    ConstructorInclude();

    // Put in your own code
}//@CODE_352


/*@NOTE_348
Destructor method.
*/
CTerrainFactory::~CTerrainFactory()
{//@CODE_348
    DestructorInclude();

    // Put in your own code
}//@CODE_348


/*@NOTE_353
Generates a terrain of the asked type.
*/
CTerrain* CTerrainFactory::Create(const enTerrainType eTerrain) const
{//@CODE_353
    CTerrain* pTerrain = NULL;

    switch (eTerrain) {
        case enTERRAINTYPE_FIELD:
            pTerrain = new CTerrainField;
            break;

        case enTERRAINTYPE_MOUNTAIN:
            pTerrain = new CTerrainMountain;
            break;

        case enTERRAINTYPE_RIVER:
            pTerrain = new CTerrainRiver;
            break;

        case enTERRAINTYPE_ROAD:
            pTerrain = new CTerrainRoad;
            break;
    }

    return (pTerrain);
}//@CODE_353


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_349
Method which must be called first in a constructor.
*/
void CTerrainFactory::ConstructorInclude()
{
}


/*@NOTE_350
Method which must be called first in a destructor.
*/
void CTerrainFactory::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

/******************************************************************************\
*
* File:          ../../include/TerrainFactory.h
* Creation date: April 10, 2005 21:38
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CTerrainFactory'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated interface of method 'Create'
* April 10, 2005 23:00 ReyBrujo
*     Updated interface of method 'Generate'
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
#ifndef _TERRAINFACTORY_H
#define _TERRAINFACTORY_H

//@START_USER1
//@END_USER1


/*@NOTE_347
The terrain factory will generate a terrain object of the asked type.
*/

class CTerrainFactory
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
    CTerrainFactory();
    virtual ~CTerrainFactory();
    CTerrain* Create(const enTerrainType eTerrain) const;
};

#endif


#ifdef CB_INLINES
#ifndef _TERRAINFACTORY_H_INLINES
#define _TERRAINFACTORY_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

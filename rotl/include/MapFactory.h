/******************************************************************************\
*
* File:          ../../include/MapFactory.h
* Creation date: April 13, 2005 01:39
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CMapFactory'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 13, 2005 01:41 ReyBrujo, 2005
*     Added method 'Load'
* April 13, 2005 01:39 ReyBrujo, 2005
*     Added method 'CMapFactory'
* April 13, 2005 01:39 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMapFactory'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _MAPFACTORY_H
#define _MAPFACTORY_H

//@START_USER1
//@END_USER1


/*@NOTE_1164
The map factory takes care of creating maps, either creating them on the fly or loading them from a file.
*/

class CMapFactory
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
    CMapFactory();
    virtual ~CMapFactory();
    CMap* Load(const char* strFileName);
};

#endif


#ifdef CB_INLINES
#ifndef _MAPFACTORY_H_INLINES
#define _MAPFACTORY_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

/******************************************************************************\
*
* File:          ../../include/MapCursesRenderer.h
* Creation date: April 18, 2005 01:35
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CMapCursesRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 19, 2005 01:31 ReyBrujo, 2005
*     Updated inheritance 'CMapRenderer'
* April 18, 2005 01:40 ReyBrujo, 2005
*     Updated inheritance 'CMapRenderer'
*     Updated member 'm_pWindow'
* April 18, 2005 01:35 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Draw'
*     Added method '~CMapCursesRenderer'
*     Added method 'CMapCursesRenderer'
*     Added inheritance 'CMapRenderer'
*     Added member 'm_pWINDOW'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _MAPCURSESRENDERER_H
#define _MAPCURSESRENDERER_H

//@START_USER1
#include <curses.h>
//@END_USER1


/*@NOTE_2479
The PDCurses renderer of the map.
*/

class CMapCursesRenderer
    : public CMapRenderer
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
    CMapCursesRenderer();
    virtual ~CMapCursesRenderer();
    virtual void Draw();
};

#endif


#ifdef CB_INLINES
#ifndef _MAPCURSESRENDERER_H_INLINES
#define _MAPCURSESRENDERER_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

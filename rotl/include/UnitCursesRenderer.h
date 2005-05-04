/******************************************************************************\
*
* File:          ../../include/UnitCursesRenderer.h
* Creation date: April 19, 2005 01:47
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CUnitCursesRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 19, 2005 01:47 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Draw'
*     Added method '~CUnitCursesRenderer'
*     Added method 'CUnitCursesRenderer'
*     Added inheritance 'CUnitRenderer'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _UNITCURSESRENDERER_H
#define _UNITCURSESRENDERER_H

//@START_USER1
//@END_USER1


/*@NOTE_2528
The curses renderer for the units.
*/

class CUnitCursesRenderer
    : public CUnitRenderer
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
    CUnitCursesRenderer();
    virtual ~CUnitCursesRenderer();
    virtual void Draw();
};

#endif


#ifdef CB_INLINES
#ifndef _UNITCURSESRENDERER_H_INLINES
#define _UNITCURSESRENDERER_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

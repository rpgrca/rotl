/******************************************************************************\
*
* File:          ../../include/CityCursesRenderer.h
* Creation date: April 19, 2005 01:31
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCityCursesRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 19, 2005 01:31 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Draw'
*     Added method '~CCityCursesRenderer'
*     Added method 'CCityCursesRenderer'
*     Added inheritance 'CCityRenderer'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _CITYCURSESRENDERER_H
#define _CITYCURSESRENDERER_H

//@START_USER1
//@END_USER1


/*@NOTE_2514
The city renderer, using the PDCurses library.
*/

class CCityCursesRenderer
    : public CCityRenderer
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
    CCityCursesRenderer();
    virtual ~CCityCursesRenderer();
    virtual void Draw();
};

#endif


#ifdef CB_INLINES
#ifndef _CITYCURSESRENDERER_H_INLINES
#define _CITYCURSESRENDERER_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

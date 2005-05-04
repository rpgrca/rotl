/******************************************************************************\
*
* File:          ../../include/Renderer.h
* Creation date: April 12, 2005 15:01
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:07 ReyBrujo
*     Added method 'Draw'
*     Added method 'CRenderer'
* April 12, 2005 15:01 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CRenderer'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _RENDERER_H
#define _RENDERER_H

//@START_USER1
//@END_USER1


/*@NOTE_937
The base renderer class.
This class provides the interface needed to draw the objects on screen.
*/

class CRenderer
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
    CRenderer();
    virtual ~CRenderer();
    virtual void Draw() = 0;
};

#endif


#ifdef CB_INLINES
#ifndef _RENDERER_H_INLINES
#define _RENDERER_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

/******************************************************************************\
*
* File:          ../../include/PlayerCursesRenderer.h
* Creation date: April 19, 2005 02:09
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CPlayerCursesRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 19, 2005 02:09 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Draw'
*     Added method '~CPlayerCursesRenderer'
*     Added method 'CPlayerCursesRenderer'
*     Added inheritance 'CPlayerRenderer'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _PLAYERCURSESRENDERER_H
#define _PLAYERCURSESRENDERER_H

//@START_USER1
//@END_USER1


/*@NOTE_2536
The PDCurses renderer for the player object.
*/

class CPlayerCursesRenderer
    : public CPlayerRenderer
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
    CPlayerCursesRenderer();
    virtual ~CPlayerCursesRenderer();
    virtual void Draw();
};

#endif


#ifdef CB_INLINES
#ifndef _PLAYERCURSESRENDERER_H_INLINES
#define _PLAYERCURSESRENDERER_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

/******************************************************************************\
*
* File:          ../../include/PlayerTextRenderer.h
* Creation date: April 17, 2005 16:56
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CPlayerTextRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 16:56 ReyBrujo, 2005
*     Added method 'CPlayerTextRenderer'
*     Updated inheritance 'CPlayerRenderer'
* April 17, 2005 16:56 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Draw'
*     Added method '~CPlayerTextRenderer'
*     Added inheritance 'CPlayerRenderer'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _PLAYERTEXTRENDERER_H
#define _PLAYERTEXTRENDERER_H

//@START_USER1
//@END_USER1


/*@NOTE_2325
The basic renderer for the player class, using plain text.
*/

class CPlayerTextRenderer
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
    CPlayerTextRenderer();
    virtual ~CPlayerTextRenderer();
    virtual void Draw();
};

#endif


#ifdef CB_INLINES
#ifndef _PLAYERTEXTRENDERER_H_INLINES
#define _PLAYERTEXTRENDERER_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

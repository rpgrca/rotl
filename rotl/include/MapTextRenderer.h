/******************************************************************************\
*
* File:          ../../include/MapTextRenderer.h
* Creation date: April 12, 2005 15:17
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CMapTextRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 15, 2005 15:18 ReyBrujo, 2005
*     Updated inheritance 'CMapRenderer'
* April 13, 2005 01:39 ReyBrujo, 2005
*     Updated inheritance 'CMapRenderer'
* April 12, 2005 15:17 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Draw'
*     Added method '~CMapTextRenderer'
*     Added method 'CMapTextRenderer'
*     Added inheritance 'CMapRenderer'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _MAPTEXTRENDERER_H
#define _MAPTEXTRENDERER_H

//@START_USER1
//@END_USER1


/*@NOTE_982
The text map renderer.
This class implements the text rendering of a map onto screen.
Useful for debugging purposes.
*/

class CMapTextRenderer
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
    CMapTextRenderer();
    virtual ~CMapTextRenderer();
    virtual void Draw();
};

#endif


#ifdef CB_INLINES
#ifndef _MAPTEXTRENDERER_H_INLINES
#define _MAPTEXTRENDERER_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

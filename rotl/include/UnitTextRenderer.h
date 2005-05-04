/******************************************************************************\
*
* File:          ../../include/UnitTextRenderer.h
* Creation date: April 16, 2005 20:37
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CUnitTextRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 20:37 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Draw'
*     Added method '~CUnitTextRenderer'
*     Added method 'CUnitTextRenderer'
*     Added inheritance 'CUnitRenderer'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _UNITTEXTRENDERER_H
#define _UNITTEXTRENDERER_H

//@START_USER1
//@END_USER1


/*@NOTE_2174
The text renderer of the units.
*/

class CUnitTextRenderer
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
    CUnitTextRenderer();
    virtual ~CUnitTextRenderer();
    virtual void Draw();
};

#endif


#ifdef CB_INLINES
#ifndef _UNITTEXTRENDERER_H_INLINES
#define _UNITTEXTRENDERER_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

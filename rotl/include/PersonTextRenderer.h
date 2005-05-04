/******************************************************************************\
*
* File:          ../../include/PersonTextRenderer.h
* Creation date: April 13, 2005 00:39
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CPersonTextRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 15, 2005 15:18 ReyBrujo, 2005
*     Updated inheritance 'CPersonRenderer'
* April 13, 2005 00:39 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Draw'
*     Added method '~CPersonTextRenderer'
*     Added method 'CPersonTextRenderer'
*     Added inheritance 'CPersonRenderer'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _PERSONTEXTRENDERER_H
#define _PERSONTEXTRENDERER_H

//@START_USER1
//@END_USER1


/*@NOTE_1143
The text version of the person class renderer.
*/

class CPersonTextRenderer
    : public CPersonRenderer
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
    CPersonTextRenderer();
    virtual ~CPersonTextRenderer();
    virtual void Draw();
};

#endif


#ifdef CB_INLINES
#ifndef _PERSONTEXTRENDERER_H_INLINES
#define _PERSONTEXTRENDERER_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

/******************************************************************************\
*
* File:          ../../include/CityTextRenderer.h
* Creation date: April 13, 2005 18:28
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCityTextRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 15, 2005 15:18 ReyBrujo, 2005
*     Updated inheritance 'CCityRenderer'
* April 13, 2005 18:29 ReyBrujo, 2005
*     Added inheritance 'CCityRenderer'
* April 13, 2005 18:28 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Draw'
*     Added method '~CCityTextRenderer'
*     Added method 'CCityTextRenderer'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _CITYTEXTRENDERER_H
#define _CITYTEXTRENDERER_H

//@START_USER1
//@END_USER1


/*@NOTE_1195
The city renderer for text output.
*/

class CCityTextRenderer
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
    CCityTextRenderer();
    virtual ~CCityTextRenderer();
    virtual void Draw();
};

#endif


#ifdef CB_INLINES
#ifndef _CITYTEXTRENDERER_H_INLINES
#define _CITYTEXTRENDERER_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

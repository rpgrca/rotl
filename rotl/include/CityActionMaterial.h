/******************************************************************************\
*
* File:          ../../include/CityActionMaterial.h
* Creation date: April 14, 2005 02:03
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCityActionMaterial'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:03 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionMaterial'
*     Added method 'CCityActionMaterial'
*     Added inheritance 'CCityAction'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _CITYACTIONMATERIAL_H
#define _CITYACTIONMATERIAL_H

//@START_USER1
//@END_USER1



class CCityActionMaterial
    : public CCityAction
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
    CCityActionMaterial();
    virtual ~CCityActionMaterial();
};

#endif


#ifdef CB_INLINES
#ifndef _CITYACTIONMATERIAL_H_INLINES
#define _CITYACTIONMATERIAL_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

/******************************************************************************\
*
* File:          ../../include/CityActionMaterialStock.h
* Creation date: April 14, 2005 02:03
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCityActionMaterialStock'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:03 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionMaterialStock'
*     Added method 'CCityActionMaterialStock'
*     Added inheritance 'CCityActionMaterial'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _CITYACTIONMATERIALSTOCK_H
#define _CITYACTIONMATERIALSTOCK_H

//@START_USER1
//@END_USER1


/*@NOTE_1415
Supply your division with Gold and Food from a city.
You can stock only in cities that are under your control, or an ally ruler.
*/

class CCityActionMaterialStock
    : public CCityActionMaterial
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
    CCityActionMaterialStock();
    virtual ~CCityActionMaterialStock();
};

#endif


#ifdef CB_INLINES
#ifndef _CITYACTIONMATERIALSTOCK_H_INLINES
#define _CITYACTIONMATERIALSTOCK_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

/******************************************************************************\
*
* File:          ../../include/CityActionBuy.h
* Creation date: April 14, 2005 02:03
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCityActionBuy'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:03 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionBuy'
*     Added method 'CCityActionBuy'
*     Added inheritance 'CCityAction'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _CITYACTIONBUY_H
#define _CITYACTIONBUY_H

//@START_USER1
//@END_USER1


/*@NOTE_1383
Purchase weapons to raise the Arms level of your division.
The higher the Arms level, the more times your archers can attack in battle.
*/

class CCityActionBuy
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
    CCityActionBuy();
    virtual ~CCityActionBuy();
};

#endif


#ifdef CB_INLINES
#ifndef _CITYACTIONBUY_H_INLINES
#define _CITYACTIONBUY_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

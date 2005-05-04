/******************************************************************************\
*
* File:          ../../include/CityActionEnlistDraft.h
* Creation date: April 14, 2005 02:03
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCityActionEnlistDraft'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:03 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionEnlistDraft'
*     Added method 'CCityActionEnlistDraft'
*     Added inheritance 'CCityActionEnlist'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _CITYACTIONENLISTDRAFT_H
#define _CITYACTIONENLISTDRAFT_H

//@START_USER1
//@END_USER1


/*@NOTE_1369
DRAFT soldiers from residents of a city.
The number of your soldiers will increase, but your Loyalty and Respect levels in that city will decrease.
*/

class CCityActionEnlistDraft
    : public CCityActionEnlist
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
    CCityActionEnlistDraft();
    virtual ~CCityActionEnlistDraft();
};

#endif


#ifdef CB_INLINES
#ifndef _CITYACTIONENLISTDRAFT_H_INLINES
#define _CITYACTIONENLISTDRAFT_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

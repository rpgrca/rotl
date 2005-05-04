/******************************************************************************\
*
* File:          ../../include/SeasonAutumn.h
* Creation date: April 11, 2005 16:55
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CSeasonAutumn'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 13, 2005 17:12 ReyBrujo, 2005
*     Updated inheritance 'CSeason'
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CSeason'
* April 11, 2005 16:55 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CSeasonAutumn'
*     Added method 'CSeasonAutumn'
*     Added inheritance 'CSeason'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _SEASONAUTUMN_H
#define _SEASONAUTUMN_H

//@START_USER1
//@END_USER1


/*@NOTE_733
Autum is known as fall. Crops are harvested, and people prepare for the winter.
*/

class CSeasonAutumn
    : public CSeason
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
    CSeasonAutumn();
    virtual ~CSeasonAutumn();
};

#endif


#ifdef CB_INLINES
#ifndef _SEASONAUTUMN_H_INLINES
#define _SEASONAUTUMN_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

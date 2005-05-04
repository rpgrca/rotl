/******************************************************************************\
*
* File:          ../../include/ArmyActionHideShow.h
* Creation date: April 14, 2005 02:14
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CArmyActionHideShow'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:14 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CArmyActionHideShow'
*     Added method 'CArmyActionHideShow'
*     Added inheritance 'CArmyActionHide'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _ARMYACTIONHIDESHOW_H
#define _ARMYACTIONHIDESHOW_H

//@START_USER1
//@END_USER1


/*@NOTE_1443
Cancel the HIDE command.
*/

class CArmyActionHideShow
    : public CArmyActionHide
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
    CArmyActionHideShow();
    virtual ~CArmyActionHideShow();
};

#endif


#ifdef CB_INLINES
#ifndef _ARMYACTIONHIDESHOW_H_INLINES
#define _ARMYACTIONHIDESHOW_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

/******************************************************************************\
*
* File:          ../../include/ArmyActionSpySend.h
* Creation date: April 14, 2005 02:14
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CArmyActionSpySend'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:14 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CArmyActionSpySend'
*     Added method 'CArmyActionSpySend'
*     Added inheritance 'CArmyActionSpy'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _ARMYACTIONSPYSEND_H
#define _ARMYACTIONSPYSEND_H

//@START_USER1
//@END_USER1


/*@NOTE_1457
Review the information of an enemy army.
This command is possible only for the ruler's division and when there is an enemy division within the spying area.
The scale of a spying area depends on the Intelligence level of the generals in that division.
The amount of Gold necessary for spying depends on the distance the spy must travel.
*/

class CArmyActionSpySend
    : public CArmyActionSpy
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
    CArmyActionSpySend();
    virtual ~CArmyActionSpySend();
};

#endif


#ifdef CB_INLINES
#ifndef _ARMYACTIONSPYSEND_H_INLINES
#define _ARMYACTIONSPYSEND_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

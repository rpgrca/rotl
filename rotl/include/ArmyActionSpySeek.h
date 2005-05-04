/******************************************************************************\
*
* File:          ../../include/ArmyActionSpySeek.h
* Creation date: April 14, 2005 02:14
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CArmyActionSpySeek'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:14 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CArmyActionSpySeek'
*     Added method 'CArmyActionSpySeek'
*     Added inheritance 'CArmyActionSpy'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _ARMYACTIONSPYSEEK_H
#define _ARMYACTIONSPYSEEK_H

//@START_USER1
//@END_USER1


/*@NOTE_1464
Search your surroundings for enemies in hiding.
If you discover a hiding division, the HIDE command will be cancelled.
You can only discover one hiding division per search.
*/

class CArmyActionSpySeek
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
    CArmyActionSpySeek();
    virtual ~CArmyActionSpySeek();
};

#endif


#ifdef CB_INLINES
#ifndef _ARMYACTIONSPYSEEK_H_INLINES
#define _ARMYACTIONSPYSEEK_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

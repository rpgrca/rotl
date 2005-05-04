/******************************************************************************\
*
* File:          ../../include/ArmyActionSpy.h
* Creation date: April 14, 2005 02:14
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CArmyActionSpy'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 15, 2005 12:03 ReyBrujo, 2005
*     Updated interface of method 'SetMap'
* April 15, 2005 12:00 ReyBrujo, 2005
*     Added method 'SetMap'
*     Added member 'm_pMap'
* April 14, 2005 02:14 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CArmyActionSpy'
*     Added method 'CArmyActionSpy'
*     Added inheritance 'CArmyAction'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _ARMYACTIONSPY_H
#define _ARMYACTIONSPY_H

//@START_USER1
//@END_USER1


/*@NOTE_1450
Z
*/

class CArmyActionSpy
    : public CArmyAction
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

private:
    CMap* m_pMap;

//
// Non-Grouped Methods
//

public:
    CArmyActionSpy();
    virtual ~CArmyActionSpy();
    void SetMap(CMap* pMap);
};

#endif


#ifdef CB_INLINES
#ifndef _ARMYACTIONSPY_H_INLINES
#define _ARMYACTIONSPY_H_INLINES

/*@NOTE_1505
Set the value of member 'm_pMap' to 'pMap'.
*/
inline void CArmyActionSpy::SetMap(CMap* pMap)
{//@CODE_1505
    m_pMap = pMap;
}//@CODE_1505



//@START_USER3
//@END_USER3

#endif
#endif

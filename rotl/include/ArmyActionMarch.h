/******************************************************************************\
*
* File:          ../../include/ArmyActionMarch.h
* Creation date: April 14, 2005 01:33
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CArmyActionMarch'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 19:48 ReyBrujo, 2005
*     Deleted method 'GetDirection'
* April 17, 2005 19:24 ReyBrujo, 2005
*     Deleted method 'GetDirection'
*     Updated interface of method 'SetMap'
*     Updated interface of method 'SetDirection'
*     Updated member 'm_eDirection'
*     Updated member 'm_pMap'
* April 17, 2005 19:20 ReyBrujo, 2005
*     Deleted member 'm_nTargetX'
*     Deleted member 'm_nTargetY'
*     Added method 'SetDirection'
*     Added method 'GetDirection'
*     Added member 'm_eDirection'
* April 17, 2005 18:58 ReyBrujo, 2005
*     Deleted method 'Execute'
* April 15, 2005 12:02 ReyBrujo, 2005
*     Updated interface of method 'SetMap'
* April 15, 2005 12:00 ReyBrujo, 2005
*     Added method 'SetMap'
*     Added member 'm_pMap'
* April 14, 2005 01:50 ReyBrujo, 2005
*     Deleted inheritance 'CAction'
*     Added inheritance 'CArmyAction'
*     Updated interface of method 'SetTargetY'
*     Updated interface of method 'SetTargetX'
*     Updated member 'm_nTargetY'
*     Updated member 'm_nTargetX'
* April 14, 2005 01:33 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetUnit'
*     Added method 'GetUnit'
*     Added method 'SetTargetY'
*     Added method 'GetTargetY'
*     Added method 'SetTargetX'
*     Added method 'GetTargetX'
*     Added method 'Execute'
*     Added method '~CArmyActionMarch'
*     Added method 'CArmyActionMarch'
*     Added inheritance 'CAction'
*     Added member 'm_nTargetY'
*     Added member 'm_nTargetX'
*     Added member 'm_pUnit'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _ARMYACTIONMARCH_H
#define _ARMYACTIONMARCH_H

//@START_USER1
//@END_USER1


/*@NOTE_1258
Support for moving an army from one spot to another.
*/

class CArmyActionMarch
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

protected:
    CMap* m_pMap;
    enDirectionType m_eDirection;

//
// Non-Grouped Methods
//

public:
    CArmyActionMarch();
    virtual ~CArmyActionMarch();
    void SetDirection(enDirectionType eDirection);
    void SetMap(CMap* pMap);
};

#endif


#ifdef CB_INLINES
#ifndef _ARMYACTIONMARCH_H_INLINES
#define _ARMYACTIONMARCH_H_INLINES

/*@NOTE_2361
Set the value of member 'm_eDirection' to 'eDirection'.
*/
inline void CArmyActionMarch::SetDirection(enDirectionType eDirection)
{//@CODE_2361
    m_eDirection = eDirection;
}//@CODE_2361



/*@NOTE_1502
Set the value of member 'm_pMap' to 'pMap'.
*/
inline void CArmyActionMarch::SetMap(CMap* pMap)
{//@CODE_1502
    m_pMap = pMap;
}//@CODE_1502



//@START_USER3
//@END_USER3

#endif
#endif

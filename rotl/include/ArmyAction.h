/******************************************************************************\
*
* File:          ../../include/ArmyAction.h
* Creation date: April 14, 2005 01:50
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CArmyAction'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 15, 2005 13:26 ReyBrujo, 2005
*     Updated interface of method 'SetUnit'
*     Updated member 'm_pUnit'
* April 14, 2005 01:50 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetUnit'
*     Added method 'GetUnit'
*     Added method '~CArmyAction'
*     Added method 'CArmyAction'
*     Added inheritance 'CAction'
*     Added member 'm_pUnit'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _ARMYACTION_H
#define _ARMYACTION_H

//@START_USER1
//@END_USER1


/*@NOTE_1327
Basic support for actions executed by the army for the army.
*/

class CArmyAction
    : public CAction
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
    CUnit* m_pUnit;

//
// Non-Grouped Methods
//

public:
    CArmyAction();
    virtual ~CArmyAction();
    CUnit* GetUnit() const;
    void SetUnit(CUnit* pUnit);
};

#endif


#ifdef CB_INLINES
#ifndef _ARMYACTION_H_INLINES
#define _ARMYACTION_H_INLINES

/*@NOTE_1288
Returns the value of member 'm_pUnit'.
*/
inline CUnit* CArmyAction::GetUnit() const
{//@CODE_1288
    return m_pUnit;
}//@CODE_1288



/*@NOTE_1289
Set the value of member 'm_pUnit' to 'pUnit'.
*/
inline void CArmyAction::SetUnit(CUnit* pUnit)
{//@CODE_1289
    m_pUnit = pUnit;
}//@CODE_1289



//@START_USER3
//@END_USER3

#endif
#endif

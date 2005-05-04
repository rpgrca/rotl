/******************************************************************************\
*
* File:          ../../include/CombatDuel.h
* Creation date: April 13, 2005 19:00
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCombatDuel'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 15, 2005 19:53 ReyBrujo, 2005
*     Added method 'Execute'
*     Added method 'AddDefender'
*     Added method 'AddAttacker'
* April 13, 2005 19:00 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCombatDuel'
*     Added method 'CCombatDuel'
*     Added inheritance 'CCombat'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _COMBATDUEL_H
#define _COMBATDUEL_H

//@START_USER1
//@END_USER1


/*@NOTE_1228
This class gives support for duels between generals.
TODO: This is currently uninplemented.
*/

class CCombatDuel
    : public CCombat
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
    CCombatDuel();
    virtual ~CCombatDuel();
    virtual bool AddAttacker(CUnit* pUnit);
    virtual bool AddDefender(CUnit* pUnit);
    virtual bool Execute();
};

#endif


#ifdef CB_INLINES
#ifndef _COMBATDUEL_H_INLINES
#define _COMBATDUEL_H_INLINES

/*@NOTE_1719
Adds a new attacker to the combatants.
In a duel, there is a maximun of 1 attacker.
*/
inline bool CCombatDuel::AddAttacker(CUnit* pUnit)
{//@CODE_1719
    if (m_aAttackers[0] == NULL) {
        m_aAttackers[0] = pUnit;
        return (true);
    }

    return (false);
}//@CODE_1719



/*@NOTE_1721
Adds a new defender  to the combatants.
In a duel, there is a maximun of 1 defender.
*/
inline bool CCombatDuel::AddDefender(CUnit* pUnit)
{//@CODE_1721
    if (m_aDefenders[0] == NULL) {
        m_aDefenders[0] = pUnit;
        return (true);
    }

    return (false);
}//@CODE_1721



//@START_USER3
//@END_USER3

#endif
#endif

/******************************************************************************\
*
* File:          ../../include/Combat.h
* Creation date: April 13, 2005 19:00
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCombat'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 02:27 ReyBrujo, 2005
*     Updated member 'm_aDefenders'
*     Updated member 'm_aAttackers'
* April 15, 2005 19:53 ReyBrujo, 2005
*     Added method 'GetRunning'
*     Added method 'GetDefenderCount'
*     Added method 'GetAttackerCount'
*     Added method 'Execute'
*     Added member 'm_bRunning'
*     Updated member 'm_pDefender'
*     Updated member 'm_pAttacker'
* April 13, 2005 19:11 ReyBrujo, 2005
*     Added method 'SetWeather'
*     Added method 'GetWeather'
*     Added method 'SetTerrain'
*     Added method 'GetTerrain'
*     Added member 'm_pTerrain'
*     Added member 'm_pWeather'
*     Updated member 'm_pDefender'
*     Updated member 'm_pAttacker'
* April 13, 2005 19:00 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'AddDefender'
*     Added method 'AddAttacker'
*     Added method '~CCombat'
*     Added method 'CCombat'
*     Added member 'm_pDefender'
*     Added member 'm_pAttacker'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _COMBAT_H
#define _COMBAT_H
const int CONST_COMBAT_MAXIMUN_ARMY_ASSISTANT = 4;

//@START_USER1
//@END_USER1


/*@NOTE_1208
Base support for game combat.
*/

class CCombat
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
    CWeather* m_pWeather;
    CTerrain* m_pTerrain;

protected:
    CUnit* m_aAttackers[CONST_COMBAT_MAXIMUN_ARMY_ASSISTANT + 1];
    CUnit* m_aDefenders[CONST_COMBAT_MAXIMUN_ARMY_ASSISTANT + 1];
    bool m_bRunning;

//
// Non-Grouped Methods
//

public:
    CCombat();
    virtual ~CCombat();
    virtual bool AddAttacker(CUnit* pUnit);
    virtual bool AddDefender(CUnit* pUnit);
    virtual bool Execute() = 0;
    int GetAttackerCount() const;
    int GetDefenderCount() const;
    bool GetRunning() const;
    CTerrain* GetTerrain() const;
    void SetTerrain(CTerrain* pTerrain);
    CWeather* GetWeather() const;
    void SetWeather(CWeather* pWeather);
};

#endif


#ifdef CB_INLINES
#ifndef _COMBAT_H_INLINES
#define _COMBAT_H_INLINES

/*@NOTE_1239
Adds a new attacker to the combatants.
*/
inline bool CCombat::AddAttacker(CUnit* pUnit)
{//@CODE_1239
    unsigned int uIndex;

    for (uIndex = 0; uIndex < (sizeof(m_aAttackers) / sizeof(*m_aAttackers)); uIndex++)
        if (m_aAttackers[uIndex] == NULL) {
            m_aAttackers[uIndex] = pUnit;
            return (true);
        }

    return (false);
}//@CODE_1239



/*@NOTE_1241
Adds a new defender  to the combatants.
*/
inline bool CCombat::AddDefender(CUnit* pUnit)
{//@CODE_1241
    unsigned int uIndex;

    for (uIndex = 0; uIndex < (sizeof(m_aDefenders) / sizeof(*m_aDefenders)); uIndex++)
        if (m_aDefenders[uIndex] == NULL) {
            m_aDefenders[uIndex] = pUnit;
            return (true);
        }

    return (false);
}//@CODE_1241



/*@NOTE_1717
Returns the number of attackers in the current combat scene.
*/
inline int CCombat::GetAttackerCount() const
{//@CODE_1717
    unsigned int uIndex = 0;

    for (uIndex = 0; uIndex < (sizeof(m_aAttackers) / sizeof(*m_aAttackers)); uIndex++)
        if (m_aAttackers[uIndex] == NULL)
            break;

    return (uIndex);
}//@CODE_1717



/*@NOTE_1718
Gets the number of defenders in the current round of battle.
*/
inline int CCombat::GetDefenderCount() const
{//@CODE_1718
    unsigned int uIndex = 0;

    for (uIndex = 0; uIndex < (sizeof(m_aDefenders) / sizeof(*m_aDefenders)); uIndex++)
        if (m_aDefenders[uIndex] == NULL)
            break;

    return (uIndex);
}//@CODE_1718



/*@NOTE_1716
Returns the value of member 'm_bRunning'.
*/
inline bool CCombat::GetRunning() const
{//@CODE_1716
    return m_bRunning;
}//@CODE_1716



/*@NOTE_1248
Returns the value of member 'm_pTerrain'.
*/
inline CTerrain* CCombat::GetTerrain() const
{//@CODE_1248
    return m_pTerrain;
}//@CODE_1248



/*@NOTE_1249
Set the value of member 'm_pTerrain' to 'pTerrain'.
*/
inline void CCombat::SetTerrain(CTerrain* pTerrain)
{//@CODE_1249
    m_pTerrain = pTerrain;
}//@CODE_1249



/*@NOTE_1244
Returns the value of member 'm_pWeather'.
*/
inline CWeather* CCombat::GetWeather() const
{//@CODE_1244
    return m_pWeather;
}//@CODE_1244



/*@NOTE_1245
Set the value of member 'm_pWeather' to 'pWeather'.
*/
inline void CCombat::SetWeather(CWeather* pWeather)
{//@CODE_1245
    m_pWeather = pWeather;
}//@CODE_1245



//@START_USER3
//@END_USER3

#endif
#endif

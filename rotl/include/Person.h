/******************************************************************************\
*
* File:          ../../include/CPerson.h
* Creation date: April 10, 2005 18:17
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CPerson'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 23:55 ReyBrujo, 2005
*     Added method 'SetLoyalty'
*     Added method 'GetLoyalty'
*     Added member 'm_nLoyalty'
* April 13, 2005 00:39 ReyBrujo, 2005
*     Added method 'GetTypeString'
* April 12, 2005 23:05 ReyBrujo, 2005
*     Added method 'SetType'
*     Added method 'GetType'
*     Added member 'm_nType'
* April 11, 2005 00:42 ReyBrujo, 2005
*     Updated interface of method 'SetStamina'
*     Updated interface of method 'SetMaximunStamina'
*     Updated interface of method 'SetIntelligence'
*     Updated interface of method 'SetExperience'
*     Updated interface of method 'SetCharm'
*     Updated interface of method 'SetBattleSkill'
*     Updated interface of method 'SetAge'
*     Updated member 'm_nIntelligence'
*     Updated member 'm_nBattleSkill'
*     Updated member 'm_nCharm'
*     Updated member 'm_nExperience'
*     Updated member 'm_nMaximunStamina'
*     Updated member 'm_nStamina'
*     Updated member 'm_nAge'
* April 10, 2005 20:10 ReyBrujo
*     Deleted member 'm_strName'
*     Added inheritance 'CBase'
* April 10, 2005 19:26 ReyBrujo
*     Updated interface of method 'SetName'
*     Updated interface of method 'SetStamina'
*     Updated interface of method 'SetMaximunStamina'
*     Updated interface of method 'SetIntelligence'
*     Updated interface of method 'SetExperience'
*     Updated interface of method 'SetCharm'
*     Updated interface of method 'SetBattleSkill'
*     Updated interface of method 'SetAge'
*     Updated interface of method 'GetName'
*     Updated member 'm_nIntelligence'
*     Updated member 'm_nBattleSkill'
*     Updated member 'm_nCharm'
*     Updated member 'm_nExperience'
*     Updated member 'm_nMaximunStamina'
*     Updated member 'm_nStamina'
*     Updated member 'm_strName'
*     Updated member 'm_nAge'
* April 10, 2005 19:18 ReyBrujo
*     Updated interface of method 'SetName'
*     Updated interface of method 'SetStamina'
*     Updated interface of method 'SetMaximunStamina'
*     Updated interface of method 'SetIntelligence'
*     Updated interface of method 'SetExperience'
*     Updated interface of method 'SetCharm'
*     Updated interface of method 'SetBattleSkill'
*     Updated interface of method 'SetAge'
*     Updated interface of method 'GetName'
*     Updated member 'm_nIntelligence'
*     Updated member 'm_nBattleSkill'
*     Updated member 'm_nCharm'
*     Updated member 'm_nExperience'
*     Updated member 'm_nMaximunStamina'
*     Updated member 'm_nStamina'
*     Updated member 'm_strName'
*     Updated member 'm_nAge'
* April 10, 2005 18:47 ReyBrujo
*     Added method 'SetIntelligence'
*     Added method 'GetIntelligence'
*     Added method 'SetBattleSkill'
*     Added method 'GetBattleSkill'
*     Added member 'm_nIntelligence'
*     Added member 'm_nBattleSkill'
* April 10, 2005 18:20 ReyBrujo
*     Added method 'CPerson'
* April 10, 2005 18:17 ReyBrujo
*     Updated interface of method 'SetName'
*     Updated interface of method 'SetStamina'
*     Updated interface of method 'SetMaximunStamina'
*     Updated interface of method 'SetExperience'
*     Updated interface of method 'SetCharm'
*     Updated interface of method 'SetAge'
*     Updated member 'm_nCharm'
*     Updated member 'm_nExperience'
*     Updated member 'm_nMaximunStamina'
*     Updated member 'm_nStamina'
*     Updated member 'm_strName'
*     Updated member 'm_nAge'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _PERSON_H
#define _PERSON_H
const int CONST_MINIMUN_PERSON_AGE = 18;
const int CONST_MINIMUN_PERSON_BATTLE_SKILL = 1;
const int CONST_MINIMUN_PERSON_CHARM = 1;
const int CONST_MINIMUN_PERSON_EXPERIENCE = 0;
const int CONST_MINIMUN_PERSON_INTELLIGENCE = 1;
const int CONST_MINIMUN_PERSON_NEGOTIATION = 0;
const int CONST_MINIMUN_PERSON_STAMINA = 1;
const int CONST_MINIMUN_PERSON_LOYALTY = 1;

const int CONST_MAXIMUN_PERSON_AGE = 99;
const int CONST_MAXIMUN_PERSON_BATTLE_SKILL = 100;
const int CONST_MAXIMUN_PERSON_CHARM = 100;
const int CONST_MAXIMUN_PERSON_EXPERIENCE = 100;
const int CONST_MAXIMUN_PERSON_INTELLIGENCE = 100;
const int CONST_MAXIMUN_PERSON_NEGOTIATION = 3;
const int CONST_MAXIMUN_PERSON_STAMINA = 100;
const int CONST_MAXIMUN_PERSON_LOYALTY = 100;

//@START_USER1
//@END_USER1


/*@NOTE_18
Basic person class.
*/

class CPerson
    : public CBase
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
    int m_nAge;
    int m_nStamina;
    int m_nMaximunStamina;
    int m_nExperience;
    int m_nCharm;
    int m_nBattleSkill;
    int m_nIntelligence;
    enPersonType m_nType;
    int m_nLoyalty;

//
// Non-Grouped Methods
//

protected:
    void SetType(const enPersonType nType);

public:
    CPerson();
    virtual ~CPerson();
    int GetAge() const;
    void SetAge(const int nAge);
    int GetBattleSkill() const;
    void SetBattleSkill(const int nBattleSkill);
    int GetCharm() const;
    void SetCharm(const int nCharm);
    int GetExperience() const;
    void SetExperience(const int nExperience);
    int GetIntelligence() const;
    void SetIntelligence(const int nIntelligence);
    int GetLoyalty() const;
    void SetLoyalty(const int nLoyalty);
    int GetMaximunStamina() const;
    void SetMaximunStamina(const int nMaximunStamina);
    int GetStamina() const;
    void SetStamina(const int nStamina);
    enPersonType GetType() const;
};

#endif


#ifdef CB_INLINES
#ifndef _PERSON_H_INLINES
#define _PERSON_H_INLINES

/*@NOTE_24
Returns the value of member 'm_nAge'.
*/
inline int CPerson::GetAge() const
{//@CODE_24
    return m_nAge;
}//@CODE_24



/*@NOTE_25
Set the value of member 'm_nAge' to 'nAge'.
*/
inline void CPerson::SetAge(const int nAge)
{//@CODE_25
    if (nAge < CONST_MINIMUN_PERSON_AGE)
        m_nAge = nAge;
    else
        if (nAge > CONST_MAXIMUN_PERSON_AGE)
            m_nAge = CONST_MAXIMUN_PERSON_AGE;
        else
            m_nAge = nAge;
}//@CODE_25



/*@NOTE_48
Returns the value of member 'm_nBattleSkill'.
*/
inline int CPerson::GetBattleSkill() const
{//@CODE_48
    return m_nBattleSkill;
}//@CODE_48



/*@NOTE_49
Set the value of member 'm_nBattleSkill' to 'nBattleSkill'.
*/
inline void CPerson::SetBattleSkill(const int nBattleSkill)
{//@CODE_49
    if (nBattleSkill < CONST_MINIMUN_PERSON_BATTLE_SKILL)
        m_nBattleSkill = CONST_MINIMUN_PERSON_BATTLE_SKILL;
    else
        if (nBattleSkill > CONST_MAXIMUN_PERSON_BATTLE_SKILL)
            m_nBattleSkill = CONST_MAXIMUN_PERSON_BATTLE_SKILL;
        else
            m_nBattleSkill = nBattleSkill;
    
}//@CODE_49



/*@NOTE_43
Returns the value of member 'm_nCharm'.
*/
inline int CPerson::GetCharm() const
{//@CODE_43
    return m_nCharm;
}//@CODE_43



/*@NOTE_44
Set the value of member 'm_nCharm' to 'nCharm'.
*/
inline void CPerson::SetCharm(const int nCharm)
{//@CODE_44
    if (nCharm < CONST_MINIMUN_PERSON_CHARM)
        m_nCharm = CONST_MINIMUN_PERSON_CHARM;
    else
        if (nCharm > CONST_MAXIMUN_PERSON_CHARM)
            m_nCharm = CONST_MAXIMUN_PERSON_CHARM;
        else
            m_nCharm = nCharm;
}//@CODE_44



/*@NOTE_39
Returns the value of member 'm_nExperience'.
*/
inline int CPerson::GetExperience() const
{//@CODE_39
    return m_nExperience;
}//@CODE_39



/*@NOTE_40
Set the value of member 'm_nExperience' to 'nExperience'.
*/
inline void CPerson::SetExperience(const int nExperience)
{//@CODE_40
    if (nExperience < CONST_MINIMUN_PERSON_EXPERIENCE)
        m_nExperience = CONST_MINIMUN_PERSON_EXPERIENCE;
    else
        if (nExperience > CONST_MAXIMUN_PERSON_EXPERIENCE)
            m_nExperience = CONST_MAXIMUN_PERSON_EXPERIENCE;
        else
            m_nExperience = nExperience;
}//@CODE_40



/*@NOTE_52
Returns the value of member 'm_nIntelligence'.
*/
inline int CPerson::GetIntelligence() const
{//@CODE_52
    return m_nIntelligence;
}//@CODE_52



/*@NOTE_53
Set the value of member 'm_nIntelligence' to 'nIntelligence'.
*/
inline void CPerson::SetIntelligence(const int nIntelligence)
{//@CODE_53
    if (nIntelligence < CONST_MINIMUN_PERSON_EXPERIENCE)
        m_nIntelligence = CONST_MINIMUN_PERSON_EXPERIENCE;
    else
        if (nIntelligence > CONST_MAXIMUN_PERSON_EXPERIENCE)
            m_nIntelligence = CONST_MAXIMUN_PERSON_EXPERIENCE;
        else
            m_nIntelligence = nIntelligence;
}//@CODE_53



/*@NOTE_2394
Returns the value of member 'm_nLoyalty'.
*/
inline int CPerson::GetLoyalty() const
{//@CODE_2394
    return m_nLoyalty;
}//@CODE_2394



/*@NOTE_2395
Set the value of member 'm_nLoyalty' to 'nLoyalty'.
*/
inline void CPerson::SetLoyalty(const int nLoyalty)
{//@CODE_2395
    m_nLoyalty = nLoyalty;
}//@CODE_2395



/*@NOTE_35
Returns the value of member 'm_nMaximunStamina'.
*/
inline int CPerson::GetMaximunStamina() const
{//@CODE_35
    return m_nMaximunStamina;
}//@CODE_35



/*@NOTE_36
Set the value of member 'm_nMaximunStamina' to 'nMaximunStamina'.
*/
inline void CPerson::SetMaximunStamina(const int nMaximunStamina)
{//@CODE_36
    if (nMaximunStamina < CONST_MINIMUN_PERSON_STAMINA)
        m_nMaximunStamina = CONST_MINIMUN_PERSON_STAMINA;
    else
        if (nMaximunStamina > CONST_MAXIMUN_PERSON_STAMINA)
            m_nMaximunStamina = CONST_MAXIMUN_PERSON_STAMINA;
        else
            m_nMaximunStamina = nMaximunStamina;
}//@CODE_36



/*@NOTE_31
Returns the value of member 'm_nStamina'.
*/
inline int CPerson::GetStamina() const
{//@CODE_31
    return m_nStamina;
}//@CODE_31



/*@NOTE_32
Set the value of member 'm_nStamina' to 'nStamina'.
*/
inline void CPerson::SetStamina(const int nStamina)
{//@CODE_32
    if (nStamina < CONST_MINIMUN_PERSON_STAMINA)
        m_nStamina = CONST_MINIMUN_PERSON_STAMINA;
    else
        if (nStamina > CONST_MAXIMUN_PERSON_STAMINA)
            m_nStamina = CONST_MAXIMUN_PERSON_STAMINA;
        else
            m_nStamina = nStamina;
}//@CODE_32



/*@NOTE_1105
Returns the value of member 'm_nType'.
*/
inline enPersonType CPerson::GetType() const
{//@CODE_1105
    return m_nType;
}//@CODE_1105



/*@NOTE_1106
Set the value of member 'm_nType' to 'nType'.
*/
inline void CPerson::SetType(const enPersonType nType)
{//@CODE_1106
    m_nType = nType;
}//@CODE_1106



//@START_USER3
//@END_USER3

#endif
#endif

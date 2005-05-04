/******************************************************************************\
*
* File:          ../../src/CPerson.cpp
* Creation date: April 10, 2005 18:17
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CPerson'
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
*     Updated code of method 'GetStamina'
*     Updated interface of method 'SetMaximunStamina'
*     Updated code of method 'GetMaximunStamina'
*     Updated interface of method 'SetIntelligence'
*     Updated code of method 'GetIntelligence'
*     Updated interface of method 'SetExperience'
*     Updated code of method 'GetExperience'
*     Updated interface of method 'SetCharm'
*     Updated code of method 'GetCharm'
*     Updated interface of method 'SetBattleSkill'
*     Updated code of method 'GetBattleSkill'
*     Updated interface of method 'SetAge'
*     Updated code of method 'GetAge'
*     Updated member 'm_nIntelligence'
*     Updated member 'm_nBattleSkill'
*     Updated member 'm_nCharm'
*     Updated member 'm_nExperience'
*     Updated member 'm_nMaximunStamina'
*     Updated member 'm_nStamina'
*     Updated member 'm_nAge'
* April 10, 2005 22:46 ReyBrujo
*     Updated code of method '~CPerson'
* April 10, 2005 22:46 ReyBrujo
*     Updated code of method 'CPerson'
* April 10, 2005 20:10 ReyBrujo
*     Deleted member 'm_strName'
*     Added inheritance 'CBase'
*     Updated code of method 'SetStamina'
*     Updated code of method 'SetMaximunStamina'
*     Updated code of method 'SetIntelligence'
*     Updated code of method 'SetExperience'
*     Updated code of method 'SetCharm'
*     Updated code of method 'SetBattleSkill'
*     Updated code of method 'SetAge'
* April 10, 2005 19:26 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated interface of method 'SetName'
*     Updated interface of method 'SetStamina'
*     Updated code of method 'GetStamina'
*     Updated interface of method 'SetMaximunStamina'
*     Updated code of method 'GetMaximunStamina'
*     Updated interface of method 'SetIntelligence'
*     Updated code of method 'GetIntelligence'
*     Updated interface of method 'SetExperience'
*     Updated code of method 'GetExperience'
*     Updated interface of method 'SetCharm'
*     Updated code of method 'GetCharm'
*     Updated interface of method 'SetBattleSkill'
*     Updated code of method 'GetBattleSkill'
*     Updated interface of method 'SetAge'
*     Updated code of method 'GetAge'
*     Updated interface of method 'GetName'
*     Updated code of method '~CPerson'
*     Updated code of method 'CPerson'
*     Updated member 'm_nIntelligence'
*     Updated member 'm_nBattleSkill'
*     Updated member 'm_nCharm'
*     Updated member 'm_nExperience'
*     Updated member 'm_nMaximunStamina'
*     Updated member 'm_nStamina'
*     Updated member 'm_strName'
*     Updated member 'm_nAge'
* April 10, 2005 19:18 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated interface of method 'SetName'
*     Updated interface of method 'SetStamina'
*     Updated code of method 'GetStamina'
*     Updated interface of method 'SetMaximunStamina'
*     Updated code of method 'GetMaximunStamina'
*     Updated interface of method 'SetIntelligence'
*     Updated code of method 'GetIntelligence'
*     Updated interface of method 'SetExperience'
*     Updated code of method 'GetExperience'
*     Updated interface of method 'SetCharm'
*     Updated code of method 'GetCharm'
*     Updated interface of method 'SetBattleSkill'
*     Updated code of method 'GetBattleSkill'
*     Updated interface of method 'SetAge'
*     Updated code of method 'GetAge'
*     Updated interface of method 'GetName'
*     Updated code of method '~CPerson'
*     Updated code of method 'CPerson'
*     Updated member 'm_nIntelligence'
*     Updated member 'm_nBattleSkill'
*     Updated member 'm_nCharm'
*     Updated member 'm_nExperience'
*     Updated member 'm_nMaximunStamina'
*     Updated member 'm_nStamina'
*     Updated member 'm_strName'
*     Updated member 'm_nAge'
* April 10, 2005 18:57 ReyBrujo
*     Updated code of method 'SetMaximunStamina'
* April 10, 2005 18:47 ReyBrujo
*     Added method 'SetIntelligence'
*     Added method 'GetIntelligence'
*     Added method 'SetBattleSkill'
*     Added method 'GetBattleSkill'
*     Added member 'm_nIntelligence'
*     Added member 'm_nBattleSkill'
*     Updated code of method 'SetStamina'
*     Updated code of method 'SetMaximunStamina'
*     Updated code of method 'SetExperience'
*     Updated code of method 'SetCharm'
* April 10, 2005 18:20 ReyBrujo
*     Added method 'CPerson'
*     Updated code of method '~CPerson'
* April 10, 2005 18:17 ReyBrujo
*     Updated interface of method 'SetName'
*     Updated interface of method 'SetStamina'
*     Updated code of method 'GetStamina'
*     Updated interface of method 'SetMaximunStamina'
*     Updated code of method 'GetMaximunStamina'
*     Updated interface of method 'SetExperience'
*     Updated code of method 'GetExperience'
*     Updated interface of method 'SetCharm'
*     Updated code of method 'GetCharm'
*     Updated interface of method 'SetAge'
*     Updated code of method 'GetAge'
*     Updated code of method '~CPerson'
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
//@START_USER1
//@END_USER1


// Master include file
#include "rotl.h"


//@START_USER2
//@END_USER2




/*@NOTE_46
Constructor method.
*/
CPerson::CPerson() //@INIT_46
    : m_nAge(CONST_MINIMUN_PERSON_AGE)
    , m_nStamina(CONST_MINIMUN_PERSON_STAMINA)
    , m_nMaximunStamina(CONST_MAXIMUN_PERSON_STAMINA)
    , m_nExperience(CONST_MINIMUN_PERSON_EXPERIENCE)
    , m_nCharm(CONST_MINIMUN_PERSON_CHARM)
    , m_nBattleSkill(CONST_MINIMUN_PERSON_BATTLE_SKILL)
    , m_nIntelligence(CONST_MINIMUN_PERSON_INTELLIGENCE)
    , m_nType(enPERSONTYPE_PERSON)
    , m_nLoyalty(CONST_MINIMUN_PERSON_LOYALTY)
{//@CODE_46
    ConstructorInclude();

    // Put in your own code
}//@CODE_46


/*@NOTE_19
Destructor method.
*/
CPerson::~CPerson()
{//@CODE_19
    DestructorInclude();

    // Put in your own code
}//@CODE_19


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_20
Method which must be called first in a constructor.
*/
void CPerson::ConstructorInclude()
{
}


/*@NOTE_21
Method which must be called first in a destructor.
*/
void CPerson::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

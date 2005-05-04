/******************************************************************************\
*
* File:          ../../src/Combat.cpp
* Creation date: April 13, 2005 19:00
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCombat'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 18, 2005 00:49 ReyBrujo, 2005
*     Updated code of method 'GetDefenderCount'
*     Updated code of method 'GetAttackerCount'
*     Updated code of method 'AddDefender'
*     Updated code of method 'AddAttacker'
* April 17, 2005 02:27 ReyBrujo, 2005
*     Updated member 'm_aDefenders'
*     Updated member 'm_aAttackers'
* April 15, 2005 19:53 ReyBrujo, 2005
*     Added method 'GetRunning'
*     Added method 'GetDefenderCount'
*     Added method 'GetAttackerCount'
*     Added method 'Execute'
*     Added member 'm_bRunning'
*     Updated code of method 'AddDefender'
*     Updated code of method 'AddAttacker'
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
* April 13, 2005 19:03 ReyBrujo, 2005
*     Updated code of method 'AddDefender'
*     Updated code of method 'AddAttacker'
* April 13, 2005 19:02 ReyBrujo, 2005
*     Updated code of method '~CCombat'
*     Updated code of method 'CCombat'
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
//@START_USER1
//@END_USER1


// Master include file
#include "rotl.h"


//@START_USER2
//@END_USER2




/*@NOTE_1227
Constructor method.
*/
CCombat::CCombat() //@INIT_1227
    : m_pWeather(NULL)
    , m_pTerrain(NULL)
    , m_bRunning(false)
{//@CODE_1227
    ConstructorInclude();

    // Put in your own code
    unsigned int uIndex;

    for (uIndex = 0; uIndex < (sizeof(m_aAttackers) / sizeof(*m_aAttackers)); uIndex++)
        m_aAttackers[uIndex] = NULL;

    for (uIndex = 0; uIndex < (sizeof(m_aDefenders) / sizeof(*m_aDefenders)); uIndex++)
        m_aDefenders[uIndex] = NULL;
}//@CODE_1227


/*@NOTE_1209
Destructor method.
*/
CCombat::~CCombat()
{//@CODE_1209
    DestructorInclude();

    // Put in your own code
    unsigned int uIndex;

    for (uIndex = 0; uIndex < (sizeof(m_aAttackers) / sizeof(*m_aAttackers)); uIndex++)
        m_aAttackers[uIndex] = NULL;

    for (uIndex = 0; uIndex < (sizeof(m_aDefenders) / sizeof(*m_aDefenders)); uIndex++)
        m_aDefenders[uIndex] = NULL;
}//@CODE_1209


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1210
Method which must be called first in a constructor.
*/
void CCombat::ConstructorInclude()
{
}


/*@NOTE_1211
Method which must be called first in a destructor.
*/
void CCombat::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

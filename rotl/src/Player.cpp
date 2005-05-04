/******************************************************************************\
*
* File:          ../../src/Player.cpp
* Creation date: April 16, 2005 18:36
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CPlayer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 18, 2005 00:32 ReyBrujo, 2005
*     Updated code of method 'ExecuteCommand'
* April 17, 2005 18:56 ReyBrujo, 2005
*     Updated code of method 'ExecuteCommand'
* April 17, 2005 18:52 ReyBrujo, 2005
*     Updated code of method 'ExecuteCommand'
* April 17, 2005 18:50 ReyBrujo, 2005
*     Updated code of method 'ExecuteCommand'
* April 17, 2005 18:46 ReyBrujo, 2005
*     Updated code of method 'ExecuteCommand'
* April 17, 2005 16:49 ReyBrujo, 2005
*     Added method 'SetCurentUnit'
*     Added method 'GetCurrentUnit'
*     Added member 'm_nCurrentUnit'
*     Updated code of method 'ExecuteCommand'
* April 17, 2005 16:27 ReyBrujo, 2005
*     Added method 'GetUnitCount'
*     Added method 'GetUnit'
*     Updated return type of method 'GetUnitCount'
* April 17, 2005 14:59 ReyBrujo, 2005
*     Updated code of method 'ExecuteCommand'
* April 17, 2005 02:56 ReyBrujo, 2005
*     Updated code of method 'ExecuteCommand'
* April 17, 2005 02:27 ReyBrujo, 2005
*     Updated member 'm_aUnits'
* April 16, 2005 20:52 ReyBrujo, 2005
*     Updated code of method 'ExecuteCommand'
* April 16, 2005 20:25 ReyBrujo, 2005
*     Updated code of method 'ExecuteCommand'
* April 16, 2005 20:21 ReyBrujo, 2005
*     Updated interface of method 'ExecuteCommand'
* April 16, 2005 20:19 ReyBrujo, 2005
*     Updated code of method 'ExecuteCommand'
* April 16, 2005 19:57 ReyBrujo, 2005
*     Added method 'ExecuteCommand'
*     Added method 'AddUnit'
*     Added member 'm_pUnits'
*     Updated code of method '~CPlayer'
*     Updated code of method 'CPlayer'
* April 16, 2005 18:36 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetRuler'
*     Added method 'GetRuler'
*     Added method 'SetInput'
*     Added method 'GetInput'
*     Added method '~CPlayer'
*     Added method 'CPlayer'
*     Added member 'm_pInput'
*     Added member 'm_pPersonRuler'
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




/*@NOTE_2141
Constructor method.
*/
CPlayer::CPlayer() //@INIT_2141
    : m_pPersonRuler(NULL)
    , m_pInput(NULL)
    , m_nCurrentUnit(0)
{//@CODE_2141
    ConstructorInclude();

    // Put in your own code
    unsigned int uIndex;

    for (uIndex = 0; uIndex < (sizeof(m_aUnits) / sizeof(*m_aUnits)); uIndex++)
        m_aUnits[uIndex] = NULL;
}//@CODE_2141


/*@NOTE_2128
Destructor method.
*/
CPlayer::~CPlayer()
{//@CODE_2128
    DestructorInclude();

    // Put in your own code
    unsigned int uIndex;

    for (uIndex = 0; uIndex < (sizeof(m_aUnits) / sizeof(*m_aUnits)); uIndex++)
        if (m_aUnits[uIndex] != NULL) {
            delete m_aUnits[uIndex];
            m_aUnits[uIndex] = NULL;
        }
}//@CODE_2128


/*@NOTE_2151
Adds a new unit to the player control.
*/
bool CPlayer::AddUnit(CUnit* pUnit, bool bDestroy)
{//@CODE_2151
    unsigned int uIndex;
    if (pUnit != NULL) {
        for (uIndex = 0; uIndex < (sizeof(m_aUnits) / sizeof(*m_aUnits)); uIndex++)
            if (m_aUnits[uIndex] == NULL) {
                m_aUnits[uIndex] = pUnit;
                return (true);
            }

        if (bDestroy)
            delete pUnit;
    }

    return (false);
}//@CODE_2151


/*@NOTE_2147
Executes the stored command.
*/
bool CPlayer::ExecuteCommand(CMap* pMap)
{//@CODE_2147
    CAction *pAction = NULL;
    bool bResult = true;

    pMap = pMap;

    //  TODO: Add support for multiple armies.
    //  TODO: Return the result of the movement.
    pAction = m_pInput->GetCommand();
    if (pAction != NULL) {
        bResult = pAction->Execute();
        //  TODO: Some actions don't end after executing.
        delete pAction;
    }

    return (bResult);
}//@CODE_2147


/*@NOTE_2304
Returns a unit controlled by the player.
*/
CUnit* CPlayer::GetUnit(const unsigned int uIndex) const
{//@CODE_2304
    if (uIndex < (sizeof(m_aUnits) / sizeof(*m_aUnits)))
        return (m_aUnits[uIndex]);
    else
        return (NULL);
}//@CODE_2304


/*@NOTE_2303
Returns the number of units the player is currently controlling.
*/
int CPlayer::GetUnitCount() const
{//@CODE_2303
    unsigned int uIndex;
    int nCount = 0;

    for (uIndex = 0; uIndex < (sizeof(m_aUnits) / sizeof(*m_aUnits)); uIndex++)
        if (m_aUnits[uIndex] != NULL)
            nCount++;

    return (nCount);
}//@CODE_2303


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_2129
Method which must be called first in a constructor.
*/
void CPlayer::ConstructorInclude()
{
}


/*@NOTE_2130
Method which must be called first in a destructor.
*/
void CPlayer::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

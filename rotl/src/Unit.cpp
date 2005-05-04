/******************************************************************************\
*
* File:          ../../src/Unit.cpp
* Creation date: April 10, 2005 23:58
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CUnit'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* May 04, 2005 00:56 ReyBrujo, 2005
*     Deleted inheritance 'CLocatable'
* April 18, 2005 00:46 ReyBrujo, 2005
*     Updated code of method 'Move'
* April 18, 2005 00:42 ReyBrujo, 2005
*     Deleted member 'm_nLocationX'
*     Deleted member 'm_nLocationY'
*     Added inheritance 'CLocatable'
* April 18, 2005 00:07 ReyBrujo, 2005
*     Updated code of method 'SpendResources'
* April 17, 2005 23:58 ReyBrujo, 2005
*     Updated code of method 'SpendResources'
* April 17, 2005 23:58 ReyBrujo, 2005
*     Updated code of method 'SpendResources'
* April 17, 2005 23:55 ReyBrujo, 2005
*     Added method 'SpendResources'
* April 17, 2005 20:00 ReyBrujo, 2005
*     Updated code of method 'Move'
* April 17, 2005 19:47 ReyBrujo, 2005
*     Updated code of method 'Move'
* April 17, 2005 19:32 ReyBrujo, 2005
*     Updated interface of method 'Move'
* April 17, 2005 19:02 ReyBrujo, 2005
*     Deleted method 'MoveNorth'
*     Deleted method 'MoveSouth'
*     Deleted method 'MoveWest'
*     Updated interface of method 'Move'
* April 16, 2005 23:02 ReyBrujo, 2005
*     Updated code of method 'MoveWest'
*     Updated code of method 'MoveSouth'
*     Updated code of method 'MoveNorth'
*     Updated code of method 'MoveEast'
* April 16, 2005 20:41 ReyBrujo, 2005
*     Added method 'SetArms'
*     Added method 'GetArms'
*     Added member 'm_nArms'
* April 16, 2005 20:37 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated interface of method 'SetRuler'
*     Updated code of method 'GetRuler'
*     Updated interface of method 'SetSpirit'
*     Updated code of method 'GetSpirit'
*     Updated interface of method 'SetSoldiers'
*     Updated code of method 'GetSoldiers'
*     Updated interface of method 'SetNumber'
*     Updated code of method 'GetNumber'
*     Updated interface of method 'SetLocationY'
*     Updated code of method 'GetLocationY'
*     Updated interface of method 'SetLocationX'
*     Updated code of method 'GetLocationX'
*     Updated interface of method 'SetGold'
*     Updated code of method 'GetGold'
*     Updated interface of method 'SetFood'
*     Updated code of method 'GetFood'
*     Updated interface of method 'SetDivision'
*     Updated code of method 'GetDivision'
*     Updated interface of method 'RemoveGeneral'
*     Updated interface of method 'RemoveGeneral'
*     Updated interface of method 'MoveWest'
*     Updated interface of method 'MoveSouth'
*     Updated interface of method 'MoveNorth'
*     Updated interface of method 'MoveEast'
*     Updated interface of method 'AddGeneral'
*     Updated code of method '~CUnit'
*     Updated code of method 'CUnit'
*     Updated inheritance 'CBase'
*     Updated member 'm_pRuler'
*     Updated member 'm_nLocationY'
*     Updated member 'm_nLocationX'
*     Updated member 'm_nDivision'
*     Updated member 'm_nNumber'
*     Updated member 'm_apGenerals'
*     Updated member 'm_nSpirit'
*     Updated member 'm_nSoldiers'
*     Updated member 'm_nFood'
*     Updated member 'm_nGold'
* April 16, 2005 20:19 ReyBrujo, 2005
*     Added method 'MoveWest'
*     Added method 'MoveSouth'
*     Added method 'MoveNorth'
*     Added method 'MoveEast'
* April 15, 2005 15:04 ReyBrujo, 2005
*     Updated code of method 'RemoveGeneral'
*     Updated code of method 'RemoveGeneral'
* April 15, 2005 15:02 ReyBrujo, 2005
*     Updated code of method 'RemoveGeneral'
*     Updated code of method 'RemoveGeneral'
*     Updated code of method 'AddGeneral'
* April 15, 2005 14:58 ReyBrujo, 2005
*     Updated interface of method 'AddGeneral'
*     Updated member 'm_apGenerals'
* April 15, 2005 14:51 ReyBrujo, 2005
*     Updated code of method 'RemoveGeneral'
*     Updated interface of method 'RemoveGeneral'
*     Updated code of method 'CUnit'
*     Updated member 'm_aGenerals'
*     Updated return type of method 'RemoveGeneralByIndex'
*     Updated return type of method 'RemoveGeneral'
* April 15, 2005 13:30 ReyBrujo, 2005
*     Added method 'SetRuler'
*     Added method 'GetRuler'
*     Added member 'm_pRuler'
* April 15, 2005 12:00 ReyBrujo, 2005
*     Added method 'SetLocationY'
*     Added method 'SetLocationX'
*     Updated code of method 'GetLocationY'
*     Updated code of method 'GetLocationX'
*     Updated member 'm_nLocationY'
*     Updated member 'm_nLocationX'
* April 14, 2005 01:33 ReyBrujo, 2005
*     Added method 'GetLocationY'
*     Added method 'GetLocationX'
*     Added member 'm_nLocationY'
*     Added member 'm_nLocationX'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated interface of method 'SetSpirit'
*     Updated code of method 'GetSpirit'
*     Updated interface of method 'SetSoldiers'
*     Updated code of method 'GetSoldiers'
*     Updated interface of method 'SetProvisions'
*     Updated code of method 'GetProvisions'
*     Updated interface of method 'SetNumber'
*     Updated code of method 'GetNumber'
*     Updated interface of method 'SetGold'
*     Updated code of method 'GetGold'
*     Updated interface of method 'SetDivision'
*     Updated code of method 'GetDivision'
*     Updated interface of method 'RemoveGeneralByIndex'
*     Updated interface of method 'RemoveGeneralByID'
*     Updated interface of method 'AddGeneral'
*     Updated code of method '~CUnit'
*     Updated code of method 'CUnit'
*     Updated inheritance 'CBase'
*     Updated member 'm_nDivision'
*     Updated member 'm_nNumber'
*     Updated member 'm_aGenerals'
*     Updated member 'm_nSpirit'
*     Updated member 'm_nSoldiers'
*     Updated member 'm_nProvisions'
*     Updated member 'm_nGold'
* April 11, 2005 12:24 ReyBrujo
*     Updated code of method 'SetSoldiers'
* April 11, 2005 03:15 ReyBrujo, 2005
*     Added method 'SetNumber'
*     Added method 'GetNumber'
*     Added method 'SetDivision'
*     Added method 'GetDivision'
*     Added member 'm_nDivision'
*     Added member 'm_nNumber'
*     Updated code of method 'SetSoldiers'
* April 11, 2005 00:35 ReyBrujo, 2005
*     Updated interface of method 'SetSpirit'
*     Updated code of method 'GetSpirit'
*     Updated interface of method 'SetSoldiers'
*     Updated code of method 'GetSoldiers'
*     Updated interface of method 'SetProvisions'
*     Updated code of method 'GetProvisions'
*     Updated interface of method 'SetGold'
*     Updated code of method 'GetGold'
*     Updated code of method 'CUnit'
*     Updated member 'm_nSpirit'
*     Updated member 'm_nSoldiers'
*     Updated member 'm_nProvisions'
*     Updated member 'm_nGold'
* April 11, 2005 00:33 ReyBrujo, 2005
*     Added method 'RemoveGeneralByIndex'
*     Added method 'RemoveGeneralByID'
*     Added method 'AddGeneral'
*     Added member 'm_aGenerals'
*     Updated return type of method 'RemoveGeneral'
* April 11, 2005 00:09 ReyBrujo, 2005
*     Deleted method 'SetDelegate'
*     Deleted member 'm_bitAct'
*     Added method 'SetSpirit'
*     Added method 'GetSpirit'
*     Added method 'SetSoldiers'
*     Added method 'GetSoldiers'
*     Added inheritance 'CBase'
*     Added member 'm_nSpirit'
*     Added member 'm_nSoldiers'
*     Updated code of method 'SetProvisions'
*     Updated code of method 'SetGold'
* April 10, 2005 23:58 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetProvisions'
*     Added method 'GetProvisions'
*     Added method 'SetGold'
*     Added method 'GetGold'
*     Added method 'GetAct'
*     Added method 'SetDelegate'
*     Added method '~CUnit'
*     Added method 'CUnit'
*     Added member 'm_bitAct'
*     Added member 'm_nProvisions'
*     Added member 'm_nGold'
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




/*@NOTE_458
Constructor method.
*/
CUnit::CUnit() //@INIT_458
    : m_nGold(CONST_MINIMUN_UNIT_GOLD)
    , m_nFood(CONST_MINIMUN_UNIT_FOOD)
    , m_nSoldiers(CONST_MINIMUN_UNIT_SOLDIERS)
    , m_nSpirit(CONST_MINIMUN_UNIT_SPIRIT)
    , m_nNumber(0)
    , m_pRuler(NULL)
    , m_nArms(CONST_MINIMUN_UNIT_ARMS)
{//@CODE_458
    ConstructorInclude();

    // Put in your own code
    int nIndex;

    for (nIndex = 0; nIndex < CONST_MAXIMUN_UNIT_GENERALS; nIndex++)
        m_apGenerals[nIndex] = NULL;
}//@CODE_458


/*@NOTE_454
Destructor method.
*/
CUnit::~CUnit()
{//@CODE_454
    DestructorInclude();

    // Put in your own code
}//@CODE_454


/*@NOTE_481
Adds a new general for the army.
*/
bool CUnit::AddGeneral(CPersonGeneral* pGeneral, const int nSuggestedIndex)
{//@CODE_481
    int nIndex = -1;

    if (nSuggestedIndex == -1)
        //  Find first empty spot in the unit array.
        for (nIndex = 0; (nIndex < CONST_MAXIMUN_UNIT_GENERALS) && (m_apGenerals[nIndex] == NULL); nIndex++)
            break;
    else
        nIndex = nSuggestedIndex;

    if (M_IS_VALID_GENERAL_INDEX(nIndex))
        if (m_apGenerals[nIndex] == NULL) {
            //  TODO: Check the general isn't being added twice.
            m_apGenerals[nIndex] = pGeneral;
            return (true);
        }

    return (false);
}//@CODE_481


/*@NOTE_2158
Moves the army in a requested direction.
Returns true if the movement was successful.
*/
bool CUnit::Move(const enDirectionType eDirection, CMap* pMap)
{//@CODE_2158
    CTerrain *pTerrain = NULL;
    bool bResult = false;
    int nOffsetX = 0;
    int nOffsetY = 0;

    if (pMap != NULL) {
        switch (eDirection) {
            case enDIRECTIONTYPE_NORTH: nOffsetY = -1; break;
            case enDIRECTIONTYPE_SOUTH: nOffsetY =  1; break;
            case enDIRECTIONTYPE_WEST : nOffsetX = -1; break;
            case enDIRECTIONTYPE_EAST : nOffsetX =  1; break;
        }

        pTerrain = pMap->GetTerrain(GetLocationX() + nOffsetX, GetLocationY() + nOffsetY);
        if (pTerrain != NULL) {
            if (pTerrain->GetObstacle() == enOBSTACLETYPE_FREE) {
                SetLocationX(GetLocationX() + nOffsetX);
                SetLocationY(GetLocationY() + nOffsetY);
                bResult = true;
            }
        }
    }

    return (bResult);
}//@CODE_2158


/*@NOTE_486
Removes a general from the list of generals in the unit.
Returns the object of the removed general, or NULL if there was none there.
*/
CPersonGeneral* CUnit::RemoveGeneral(CPersonGeneral* pGeneral)
{//@CODE_486
    int nIndex;

    if (pGeneral != NULL)
        for (nIndex = 0; nIndex < CONST_MAXIMUN_UNIT_GENERALS; nIndex++)
            if (m_apGenerals[nIndex] != NULL) {
                if (m_apGenerals[nIndex]->GetObjectID() == pGeneral->GetObjectID()) {
                    m_apGenerals[nIndex] = NULL;
                    return (pGeneral);
                }
            }

    return (NULL);
}//@CODE_486


/*@NOTE_484
Removes a general from the unit by the index.
Returns the object of the removed General, or NULL if there was none there.
*/
CPersonGeneral* CUnit::RemoveGeneral(const int nIndex)
{//@CODE_484
    CPersonGeneral *pGeneral = NULL;

    if (M_IS_VALID_GENERAL_INDEX(nIndex)) {
        pGeneral = m_apGenerals[nIndex];
        m_apGenerals[nIndex] = NULL;
    }

    return (pGeneral);
}//@CODE_484


/*@NOTE_2390
Spends resources for the weekend.
*/
void CUnit::SpendResources(const CWeather* pWeather, const CSeason* pSeason)
{//@CODE_2390
    unsigned int uIndex = 0;
    int nGold = 0;
    int nFood = 0;

    //  TODO: Weather should modify too.
    pWeather = pWeather;

    //  if the unit does not have food, 10% of the soldiers will leave.
    nFood = GetFood();
    if (nFood < 1) {
        SetSoldiers(static_cast<int>(GetSoldiers() * 0.9));
        SetSpirit(static_cast<int>(GetSpirit() * 0.95));
    }
    else {
        nFood = static_cast<int>(GetSoldiers() * 0.05 * pSeason->GetWeekendFoodModifier());
        SetFood(GetFood() - nFood);
    }

    //  if the unit does not have gold, 5% of the soldiers will leave, spirit will
    //  lower 5%, and the loyalty of the generals will lower another 5%.
    nGold = GetGold();
    if (nGold < 1) {
        SetSoldiers(static_cast<int>(GetSoldiers() * 0.95));
        SetSpirit(static_cast<int>(GetSpirit() * 0.95));

        for (uIndex = 0; uIndex < (sizeof(m_apGenerals) / sizeof(*m_apGenerals)); uIndex++)
            if (m_apGenerals[uIndex] != NULL) {
                nGold  = m_apGenerals[uIndex]->GetLoyalty();
                nGold -= static_cast<int>(nGold * 0.05);
                m_apGenerals[uIndex]->SetLoyalty(nGold);
            }
    }
    else {
        nFood = 0;
        for (uIndex = 0; uIndex < (sizeof(m_apGenerals) / sizeof(*m_apGenerals)); uIndex++) {
            if (m_apGenerals[uIndex] != NULL)
                nFood += (m_apGenerals[uIndex]->GetIntelligence() * 3);
        }

        SetGold(nGold - nFood);
    }
}//@CODE_2390


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_455
Method which must be called first in a constructor.
*/
void CUnit::ConstructorInclude()
{
}


/*@NOTE_456
Method which must be called first in a destructor.
*/
void CUnit::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

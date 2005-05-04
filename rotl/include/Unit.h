/******************************************************************************\
*
* File:          ../../include/Unit.h
* Creation date: April 10, 2005 23:58
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CUnit'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* May 04, 2005 00:56 ReyBrujo, 2005
*     Deleted inheritance 'CLocatable'
* April 18, 2005 00:59 ReyBrujo, 2005
*     Deleted inheritance 'CLocatable'
*     Added method 'SetLocationY'
*     Added method 'SetLocationX'
*     Added inheritance 'CLocatable'
* April 18, 2005 00:42 ReyBrujo, 2005
*     Deleted member 'm_nLocationX'
*     Deleted member 'm_nLocationY'
*     Added inheritance 'CLocatable'
* April 17, 2005 23:55 ReyBrujo, 2005
*     Added method 'SpendResources'
* April 17, 2005 19:32 ReyBrujo, 2005
*     Updated interface of method 'Move'
* April 17, 2005 19:02 ReyBrujo, 2005
*     Deleted method 'MoveNorth'
*     Deleted method 'MoveSouth'
*     Deleted method 'MoveWest'
*     Updated interface of method 'Move'
* April 16, 2005 20:41 ReyBrujo, 2005
*     Added method 'SetArms'
*     Added method 'GetArms'
*     Added member 'm_nArms'
* April 16, 2005 20:37 ReyBrujo, 2005
*     Updated interface of method 'SetRuler'
*     Updated interface of method 'SetSpirit'
*     Updated interface of method 'SetSoldiers'
*     Updated interface of method 'SetNumber'
*     Updated interface of method 'SetLocationY'
*     Updated interface of method 'SetLocationX'
*     Updated interface of method 'SetGold'
*     Updated interface of method 'SetFood'
*     Updated interface of method 'SetDivision'
*     Updated interface of method 'RemoveGeneral'
*     Updated interface of method 'RemoveGeneral'
*     Updated interface of method 'MoveWest'
*     Updated interface of method 'MoveSouth'
*     Updated interface of method 'MoveNorth'
*     Updated interface of method 'MoveEast'
*     Updated interface of method 'AddGeneral'
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
* April 15, 2005 14:58 ReyBrujo, 2005
*     Updated interface of method 'AddGeneral'
*     Updated member 'm_apGenerals'
* April 15, 2005 14:55 ReyBrujo, 2005
*     Updated member 'm_aGenerals'
* April 15, 2005 14:51 ReyBrujo, 2005
*     Updated interface of method 'RemoveGeneral'
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
*     Updated member 'm_nLocationY'
*     Updated member 'm_nLocationX'
* April 14, 2005 01:33 ReyBrujo, 2005
*     Added method 'GetLocationY'
*     Added method 'GetLocationX'
*     Added member 'm_nLocationY'
*     Added member 'm_nLocationX'
* April 12, 2005 15:01 ReyBrujo
*     Updated interface of method 'SetSpirit'
*     Updated interface of method 'SetSoldiers'
*     Updated interface of method 'SetProvisions'
*     Updated interface of method 'SetNumber'
*     Updated interface of method 'SetGold'
*     Updated interface of method 'SetDivision'
*     Updated interface of method 'RemoveGeneralByIndex'
*     Updated interface of method 'RemoveGeneralByID'
*     Updated interface of method 'AddGeneral'
*     Updated inheritance 'CBase'
*     Updated member 'm_nDivision'
*     Updated member 'm_nNumber'
*     Updated member 'm_aGenerals'
*     Updated member 'm_nSpirit'
*     Updated member 'm_nSoldiers'
*     Updated member 'm_nProvisions'
*     Updated member 'm_nGold'
* April 11, 2005 03:15 ReyBrujo, 2005
*     Added method 'SetNumber'
*     Added method 'GetNumber'
*     Added method 'SetDivision'
*     Added method 'GetDivision'
*     Added member 'm_nDivision'
*     Added member 'm_nNumber'
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
#ifndef _UNIT_H
#define _UNIT_H
const int CONST_MINIMUN_UNIT_SPIRIT = 0;
const int CONST_MINIMUN_UNIT_GOLD = 0;
const int CONST_MINIMUN_UNIT_FOOD = 0;
const int CONST_MINIMUN_UNIT_SOLDIERS = 1;
const int CONST_MINIMUN_UNIT_ARMS = 0;

const int CONST_MAXIMUN_UNIT_SPIRIT = 100;
const int CONST_MAXIMUN_UNIT_GOLD = 9999;
const int CONST_MAXIMUN_UNIT_FOOD = 9999;
const int CONST_MAXIMUN_UNIT_SOLDIERS = 9999;
const int CONST_MAXIMUN_UNIT_ARMS = 100;

const int CONST_MAXIMUN_UNIT_GENERALS = 5;

#define M_IS_VALID_GENERAL_INDEX(_n) ((_n) >= 0 && (_n) < CONST_MAXIMUN_UNIT_GENERALS)

//@START_USER1
#include <stdio.h>
//@END_USER1


/*@NOTE_453
Each of the military units the Ruler has through Generals.
*/

class CUnit
    : public CBase
    , public CLocatable
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
    int m_nGold;
    int m_nFood;
    int m_nSoldiers;
    int m_nSpirit;
    CPersonGeneral* m_apGenerals[CONST_MAXIMUN_UNIT_GENERALS];
    int m_nNumber;
    int m_nDivision;
    CPersonRuler* m_pRuler;
    int m_nArms;

//
// Non-Grouped Methods
//

public:
    CUnit();
    virtual ~CUnit();
    bool AddGeneral(CPersonGeneral* pGeneral, const int nSuggestedIndex = -1);
    bool Move(const enDirectionType eDirection, CMap* pMap);
    CPersonGeneral* RemoveGeneral(CPersonGeneral* pGeneral);
    CPersonGeneral* RemoveGeneral(const int nIndex);
    virtual void SetLocationX(const int nLocationX);
    virtual void SetLocationY(const int nLocationY);
    void SpendResources(const CWeather* pWeather, const CSeason* pSeason);
    int GetArms() const;
    void SetArms(const int nArms);
    int GetDivision() const;
    void SetDivision(const int nDivision);
    int GetFood() const;
    void SetFood(const int nFood);
    int GetGold() const;
    void SetGold(const int nGold);
    int GetNumber() const;
    void SetNumber(const int nNumber);
    int GetSoldiers() const;
    void SetSoldiers(const int nSoldiers);
    int GetSpirit() const;
    void SetSpirit(const int nSpirit);
    CPersonRuler* GetRuler() const;
    void SetRuler(CPersonRuler* pRuler);
};

#endif


#ifdef CB_INLINES
#ifndef _UNIT_H_INLINES
#define _UNIT_H_INLINES

/*@NOTE_2464
Set the value of member 'm_nLocationX' to 'nLocationX'.
*/
inline void CUnit::SetLocationX(const int nLocationX)
{//@CODE_2464
    CLocatable::SetLocationX(nLocationX);
}//@CODE_2464



/*@NOTE_2466
Set the value of member 'm_nLocationY' to 'nLocationY'.
*/
inline void CUnit::SetLocationY(const int nLocationY)
{//@CODE_2466
    CLocatable::SetLocationY(nLocationY);
}//@CODE_2466



/*@NOTE_2183
Returns the value of member 'm_nArms'.
*/
inline int CUnit::GetArms() const
{//@CODE_2183
    return m_nArms;
}//@CODE_2183



/*@NOTE_2184
Set the value of member 'm_nArms' to 'nArms'.
*/
inline void CUnit::SetArms(const int nArms)
{//@CODE_2184
    m_nArms = nArms;
}//@CODE_2184



/*@NOTE_66
Returns the value of member 'm_nDivision'.
*/
inline int CUnit::GetDivision() const
{//@CODE_66
    return m_nDivision;
}//@CODE_66



/*@NOTE_67
Set the value of member 'm_nDivision' to 'nDivision'.
*/
inline void CUnit::SetDivision(const int nDivision)
{//@CODE_67
    m_nDivision = nDivision;
}//@CODE_67



/*@NOTE_464
Returns the value of member 'm_nFood'.
*/
inline int CUnit::GetFood() const
{//@CODE_464
    return m_nFood;
}//@CODE_464



/*@NOTE_465
Set the value of member 'm_nFood' to 'nFood'.
*/
inline void CUnit::SetFood(const int nFood)
{//@CODE_465
    if (nFood < CONST_MINIMUN_UNIT_FOOD)
        m_nFood = CONST_MINIMUN_UNIT_FOOD;
    else
        if (nFood > CONST_MAXIMUN_UNIT_FOOD)
            m_nFood = CONST_MAXIMUN_UNIT_FOOD;
        else
            m_nFood = nFood;
}//@CODE_465



/*@NOTE_460
Returns the value of member 'm_nGold'.
*/
inline int CUnit::GetGold() const
{//@CODE_460
    return m_nGold;
}//@CODE_460



/*@NOTE_461
Set the value of member 'm_nGold' to 'nGold'.
*/
inline void CUnit::SetGold(const int nGold)
{//@CODE_461
    if (nGold < CONST_MINIMUN_UNIT_GOLD)
        m_nGold = CONST_MINIMUN_UNIT_GOLD;
    else
        if (nGold > CONST_MAXIMUN_UNIT_GOLD)
            m_nGold = CONST_MAXIMUN_UNIT_GOLD;
        else
            m_nGold = nGold;
}//@CODE_461



/*@NOTE_658
Returns the value of member 'm_nNumber'.
*/
inline int CUnit::GetNumber() const
{//@CODE_658
    return m_nNumber;
}//@CODE_658



/*@NOTE_659
Set the value of member 'm_nNumber' to 'nNumber'.
*/
inline void CUnit::SetNumber(const int nNumber)
{//@CODE_659
    m_nNumber = nNumber;
}//@CODE_659



/*@NOTE_469
Returns the value of member 'm_nSoldiers'.
*/
inline int CUnit::GetSoldiers() const
{//@CODE_469
    return m_nSoldiers;
}//@CODE_469



/*@NOTE_470
Set the value of member 'm_nSoldiers' to 'nSoldiers'.
*/
inline void CUnit::SetSoldiers(const int nSoldiers)
{//@CODE_470
    char *pName = "Scattered soldiers";
    char *pAbbrev = "th";
    char strBuffer[128];
    int nResult;


    if (nSoldiers < CONST_MINIMUN_UNIT_SOLDIERS)
        m_nSoldiers = CONST_MINIMUN_UNIT_SOLDIERS;
    else
        if (nSoldiers > CONST_MAXIMUN_UNIT_SOLDIERS)
            m_nSoldiers = CONST_MAXIMUN_UNIT_SOLDIERS;
        else
            m_nSoldiers = nSoldiers;

    if (m_nSoldiers >= 1 && m_nSoldiers < 4)
        pName = "Team";
    else
    if (m_nSoldiers >= 4 && m_nSoldiers < 8)
        pName = "Patrol";
    else
    if (m_nSoldiers >= 8 && m_nSoldiers < 12)
        pName = "Crew";
    else
    if (m_nSoldiers >= 12 && m_nSoldiers < 30)
        pName = "Section";
    else
    if (m_nSoldiers >= 30 && m_nSoldiers < 50)
        pName = "Troop";
    else
    if (m_nSoldiers >= 50 && m_nSoldiers < 100)
        pName = "Company";
    else
    if (m_nSoldiers >= 100 && m_nSoldiers < 300)
        pName = "Squadron";
    else
    if (m_nSoldiers >= 300 && m_nSoldiers < 500)
        pName = "Battalion";
    else
    if (m_nSoldiers >= 500 && m_nSoldiers < 1000)
        pName = "Group";
    else
    if (m_nSoldiers >= 1000 && m_nSoldiers < 2000)
        pName = "Regiment";
    else
    if (m_nSoldiers >= 2000 && m_nSoldiers < 5000)
        pName = "Brigade";
    else
    if (m_nSoldiers >= 5000 && m_nSoldiers < 10000)
        pName = "Division";
    else
    if (m_nSoldiers >= 10000 && m_nSoldiers < 20000)
        pName = "Corps";
    else
    if (m_nSoldiers >= 20000)
        pName = "Army";

    nResult = m_nDivision % 10;
    switch (nResult) {
        case 1 : pAbbrev = "st"; break;
        case 2 : pAbbrev = "nd"; break;
        case 3 : pAbbrev = "rd"; break;
        default: pAbbrev = "th"; break;
    }

    memset(strBuffer, '\0', sizeof(strBuffer));
    snprintf(strBuffer, sizeof(strBuffer), "%d%s %s", m_nDivision, pAbbrev, pName);
    SetName(strBuffer);
}//@CODE_470



/*@NOTE_473
Returns the value of member 'm_nSpirit'.
*/
inline int CUnit::GetSpirit() const
{//@CODE_473
    return m_nSpirit;
}//@CODE_473



/*@NOTE_474
Set the value of member 'm_nSpirit' to 'nSpirit'.
*/
inline void CUnit::SetSpirit(const int nSpirit)
{//@CODE_474
    if (nSpirit < CONST_MINIMUN_UNIT_SPIRIT)
        m_nSpirit = CONST_MINIMUN_UNIT_SPIRIT;
    else
        if (nSpirit > CONST_MAXIMUN_UNIT_SPIRIT)
            m_nSpirit = CONST_MAXIMUN_UNIT_SPIRIT;
        else
            m_nSpirit = nSpirit;
}//@CODE_474



/*@NOTE_1568
Returns the value of member 'm_pRuler'.
*/
inline CPersonRuler* CUnit::GetRuler() const
{//@CODE_1568
    return m_pRuler;
}//@CODE_1568



/*@NOTE_1569
Set the value of member 'm_pRuler' to 'pRuler'.
*/
inline void CUnit::SetRuler(CPersonRuler* pRuler)
{//@CODE_1569
    m_pRuler = pRuler;
}//@CODE_1569



//@START_USER3
//@END_USER3

#endif
#endif

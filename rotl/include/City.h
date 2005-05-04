/******************************************************************************\
*
* File:          ../../include/City.h
* Creation date: April 10, 2005 19:45
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCity'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 18, 2005 00:42 ReyBrujo, 2005
*     Added inheritance 'CLocatable'
* April 17, 2005 23:20 ReyBrujo, 2005
*     Added method 'SpendResources'
* April 16, 2005 14:48 ReyBrujo, 2005
*     Added method 'SetRuler'
*     Added method 'GetRuler'
*     Added member 'm_pRuler'
* April 16, 2005 02:01 ReyBrujo, 2005
*     Updated interface of method 'SetModifier'
*     Updated interface of method 'SetSupport'
*     Updated interface of method 'SetPopulation'
*     Updated interface of method 'SetMaximunCropValue'
*     Updated interface of method 'SetLoyalty'
*     Updated interface of method 'SetHealth'
*     Updated interface of method 'SetGold'
*     Updated interface of method 'SetFood'
*     Updated interface of method 'SetDefense'
*     Updated interface of method 'SetCropValue'
*     Updated interface of method 'SetType'
*     Updated member 'm_pModifier'
*     Updated member 'm_eType'
*     Updated member 'm_nMaximunCropValue'
*     Updated member 'm_nSupport'
*     Updated member 'm_nLoyalty'
*     Updated member 'm_nHealth'
*     Updated member 'm_nDefense'
*     Updated member 'm_nCropValue'
*     Updated member 'm_nPopulation'
*     Updated member 'm_nFood'
*     Updated member 'm_nGold'
* April 12, 2005 17:56 ReyBrujo
*     Deleted method 'CCity'
*     Added method 'SetType'
*     Added method 'GetType'
*     Updated member 'm_eType'
* April 12, 2005 17:54 ReyBrujo
*     Added method 'CCity'
*     Updated member 'm_eType'
* April 12, 2005 17:51 ReyBrujo
*     Added method 'GetModifier'
*     Updated interface of method 'SetModifier'
*     Updated member 'm_pModifier'
* April 12, 2005 17:45 ReyBrujo
*     Added method 'SetModifier'
*     Added member 'm_pModifier'
*     Added member 'm_eType'
*     Updated interface of method 'CCity'
* April 12, 2005 15:01 ReyBrujo
*     Updated interface of method 'SetSupport'
*     Updated interface of method 'SetPopulation'
*     Updated interface of method 'SetMaximunCropValue'
*     Updated interface of method 'SetLoyalty'
*     Updated interface of method 'SetHealth'
*     Updated interface of method 'SetGold'
*     Updated interface of method 'SetFood'
*     Updated interface of method 'SetDefense'
*     Updated interface of method 'SetCropValue'
*     Updated inheritance 'CBase'
*     Updated member 'm_nMaximunCropValue'
*     Updated member 'm_nSupport'
*     Updated member 'm_nLoyalty'
*     Updated member 'm_nHealth'
*     Updated member 'm_nDefense'
*     Updated member 'm_nCropValue'
*     Updated member 'm_nPopulation'
*     Updated member 'm_nFood'
*     Updated member 'm_nGold'
* April 10, 2005 20:53 ReyBrujo
*     Added method 'SetMaximunCropValue'
*     Added method 'GetMaximunCropValue'
*     Added member 'm_nMaximunCropValue'
* April 10, 2005 20:31 ReyBrujo
*     Deleted member 'm_strName'
*     Added method 'SetSupport'
*     Added method 'GetSupport'
*     Added method 'SetPopulation'
*     Added method 'GetPopulation'
*     Added method 'SetLoyalty'
*     Added method 'GetLoyalty'
*     Added method 'SetHealth'
*     Added method 'GetHealth'
*     Added method 'SetGold'
*     Added method 'GetGold'
*     Added method 'SetFood'
*     Added method 'GetFood'
*     Added method 'SetDefense'
*     Added method 'GetDefense'
*     Added method 'SetCropValue'
*     Added method 'GetCropValue'
*     Added member 'm_nSupport'
*     Added member 'm_nLoyalty'
*     Added member 'm_nHealth'
*     Added member 'm_nDefense'
*     Added member 'm_nCropValue'
*     Added member 'm_nPopulation'
*     Added member 'm_nFood'
*     Added member 'm_nGold'
* April 10, 2005 20:11 ReyBrujo
*     Added method 'CCity'
* April 10, 2005 20:10 ReyBrujo
*     Added method 'SetName'
*     Added inheritance 'CBase'
*     Added member 'm_strName'
* April 10, 2005 19:45 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCity'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _CITY_H
#define _CITY_H
const int CONST_MINIMUN_CITY_CROP_VALUE = 0;
const int CONST_MINIMUN_CITY_DEFENSE = 0;
const int CONST_MINIMUN_CITY_FOOD = 0;
const int CONST_MINIMUN_CITY_GOLD = 0;
const int CONST_MINIMUN_CITY_HEALTH = 0;
const int CONST_MINIMUN_CITY_LOYALTY = 0;
const int CONST_MINIMUN_CITY_POPULATION = 0;
const int CONST_MINIMUN_CITY_SUPPORT = 0;
const int CONST_MAXIMUN_CITY_CROP_VALUE = 100;
const int CONST_MAXIMUN_CITY_DEFENSE = 200;
const int CONST_MAXIMUN_CITY_FOOD = 9999;
const int CONST_MAXIMUN_CITY_GOLD = 9999;
const int CONST_MAXIMUN_CITY_HEALTH = 100;
const int CONST_MAXIMUN_CITY_LOYALTY = 100;
const int CONST_MAXIMUN_CITY_POPULATION = 9999;
const int CONST_MAXIMUN_CITY_SUPPORT = 100;

//@START_USER1
//@END_USER1


/*@NOTE_73
Every city in the game inherits from this class.
*/

class CCity
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
    int m_nPopulation;
    int m_nCropValue;
    int m_nDefense;
    int m_nHealth;
    int m_nLoyalty;
    int m_nSupport;
    int m_nMaximunCropValue;
    enCityType m_eType;
    CModifier* m_pModifier;
    CPersonRuler* m_pRuler;

//
// Non-Grouped Methods
//

protected:
    void SetType(const enCityType eType);
    void SetModifier(CModifier* pModifier);

public:
    CCity();
    virtual ~CCity();
    void SpendResources(const CWeather* pWeather, const CSeason* pSeason);
    enCityType GetType() const;
    int GetCropValue() const;
    void SetCropValue(const int nCropValue);
    int GetDefense() const;
    void SetDefense(const int nDefense);
    int GetFood() const;
    void SetFood(const int nFood);
    int GetGold() const;
    void SetGold(const int nGold);
    int GetHealth() const;
    void SetHealth(const int nHealth);
    int GetLoyalty() const;
    void SetLoyalty(const int nLoyalty);
    int GetMaximunCropValue() const;
    void SetMaximunCropValue(const int nMaximunCropValue);
    int GetPopulation() const;
    void SetPopulation(const int nPopulation);
    int GetSupport() const;
    void SetSupport(const int nSupport);
    const CModifier* GetModifier() const;
    CPersonRuler* GetRuler() const;
    void SetRuler(CPersonRuler* pRuler);
};

#endif


#ifdef CB_INLINES
#ifndef _CITY_H_INLINES
#define _CITY_H_INLINES

/*@NOTE_1035
Returns the value of member 'm_eType'.
*/
inline enCityType CCity::GetType() const
{//@CODE_1035
    return m_eType;
}//@CODE_1035



/*@NOTE_1036
Set the value of member 'm_eType' to 'eType'.
*/
inline void CCity::SetType(const enCityType eType)
{//@CODE_1036
    m_eType = eType;
}//@CODE_1036



/*@NOTE_235
Returns the value of member 'm_nCropValue'.
*/
inline int CCity::GetCropValue() const
{//@CODE_235
    return m_nCropValue;
}//@CODE_235



/*@NOTE_236
Set the value of member 'm_nCropValue' to 'nCropValue'.
*/
inline void CCity::SetCropValue(const int nCropValue)
{//@CODE_236
    int nMaximun;

    if (nCropValue < CONST_MINIMUN_CITY_CROP_VALUE)
        m_nCropValue = CONST_MINIMUN_CITY_CROP_VALUE;
    else {
        nMaximun = (CONST_MAXIMUN_CITY_CROP_VALUE > m_nMaximunCropValue)? m_nMaximunCropValue : CONST_MAXIMUN_CITY_CROP_VALUE;
        if (nCropValue > nMaximun)
            m_nCropValue = nMaximun;
        else
            m_nCropValue = nCropValue;
    }
}//@CODE_236



/*@NOTE_239
Returns the value of member 'm_nDefense'.
*/
inline int CCity::GetDefense() const
{//@CODE_239
    return m_nDefense;
}//@CODE_239



/*@NOTE_240
Set the value of member 'm_nDefense' to 'nDefense'.
*/
inline void CCity::SetDefense(const int nDefense)
{//@CODE_240
    if (nDefense < CONST_MINIMUN_CITY_DEFENSE)
        m_nDefense = CONST_MINIMUN_CITY_DEFENSE;
    else
        if (nDefense > CONST_MAXIMUN_CITY_DEFENSE)
            m_nDefense = CONST_MAXIMUN_CITY_DEFENSE;
        else
            m_nDefense = nDefense;
}//@CODE_240



/*@NOTE_227
Returns the value of member 'm_nFood'.
*/
inline int CCity::GetFood() const
{//@CODE_227
    return m_nFood;
}//@CODE_227



/*@NOTE_228
Set the value of member 'm_nFood' to 'nFood'.
*/
inline void CCity::SetFood(const int nFood)
{//@CODE_228
    if (nFood < CONST_MINIMUN_CITY_FOOD)
        m_nFood = CONST_MINIMUN_CITY_FOOD;
    else
        if (nFood > CONST_MAXIMUN_CITY_FOOD)
            m_nFood = CONST_MAXIMUN_CITY_FOOD;
        else
            m_nFood = nFood;
}//@CODE_228



/*@NOTE_223
Returns the value of member 'm_nGold'.
*/
inline int CCity::GetGold() const
{//@CODE_223
    return m_nGold;
}//@CODE_223



/*@NOTE_224
Set the value of member 'm_nGold' to 'nGold'.
*/
inline void CCity::SetGold(const int nGold)
{//@CODE_224
    if (nGold < CONST_MINIMUN_CITY_GOLD)
        m_nGold = CONST_MINIMUN_CITY_GOLD;
    else
        if (nGold > CONST_MAXIMUN_CITY_GOLD)
            m_nGold = CONST_MAXIMUN_CITY_GOLD;
        else
            m_nGold = nGold;
}//@CODE_224



/*@NOTE_243
Returns the value of member 'm_nHealth'.
*/
inline int CCity::GetHealth() const
{//@CODE_243
    return m_nHealth;
}//@CODE_243



/*@NOTE_244
Set the value of member 'm_nHealth' to 'nHealth'.
*/
inline void CCity::SetHealth(const int nHealth)
{//@CODE_244
    if (nHealth < CONST_MINIMUN_CITY_HEALTH)
        m_nHealth = CONST_MINIMUN_CITY_HEALTH;
    else
        if (nHealth > CONST_MAXIMUN_CITY_HEALTH)
            m_nHealth = CONST_MAXIMUN_CITY_HEALTH;
        else
            m_nHealth = nHealth;
}//@CODE_244



/*@NOTE_247
Returns the value of member 'm_nLoyalty'.
*/
inline int CCity::GetLoyalty() const
{//@CODE_247
    return m_nLoyalty;
}//@CODE_247



/*@NOTE_248
Set the value of member 'm_nLoyalty' to 'nLoyalty'.
*/
inline void CCity::SetLoyalty(const int nLoyalty)
{//@CODE_248
    if (nLoyalty < CONST_MINIMUN_CITY_LOYALTY)
        m_nLoyalty = CONST_MINIMUN_CITY_LOYALTY;
    else
        if (nLoyalty > CONST_MAXIMUN_CITY_LOYALTY)
            m_nLoyalty = CONST_MAXIMUN_CITY_LOYALTY;
        else
            m_nLoyalty = nLoyalty;
}//@CODE_248



/*@NOTE_264
Returns the value of member 'm_nMaximunCropValue'.
*/
inline int CCity::GetMaximunCropValue() const
{//@CODE_264
    return m_nMaximunCropValue;
}//@CODE_264



/*@NOTE_265
Set the value of member 'm_nMaximunCropValue' to 'nMaximunCropValue'.
*/
inline void CCity::SetMaximunCropValue(const int nMaximunCropValue)
{//@CODE_265
    if (nMaximunCropValue < CONST_MINIMUN_CITY_CROP_VALUE)
        m_nMaximunCropValue = CONST_MINIMUN_CITY_CROP_VALUE;
    else
        if (nMaximunCropValue > CONST_MAXIMUN_CITY_CROP_VALUE)
            m_nMaximunCropValue = CONST_MAXIMUN_CITY_CROP_VALUE;
        else
            m_nMaximunCropValue = nMaximunCropValue;
}//@CODE_265



/*@NOTE_231
Returns the value of member 'm_nPopulation'.
*/
inline int CCity::GetPopulation() const
{//@CODE_231
    return m_nPopulation;
}//@CODE_231



/*@NOTE_232
Set the value of member 'm_nPopulation' to 'nPopulation'.
*/
inline void CCity::SetPopulation(const int nPopulation)
{//@CODE_232
    if (nPopulation < CONST_MINIMUN_CITY_POPULATION)
        m_nPopulation = CONST_MINIMUN_CITY_POPULATION;
    else
        if (nPopulation > CONST_MAXIMUN_CITY_POPULATION)
            m_nPopulation = CONST_MAXIMUN_CITY_POPULATION;
        else
            m_nPopulation = nPopulation;
}//@CODE_232



/*@NOTE_251
Returns the value of member 'm_nSupport'.
*/
inline int CCity::GetSupport() const
{//@CODE_251
    return m_nSupport;
}//@CODE_251



/*@NOTE_252
Set the value of member 'm_nSupport' to 'nSupport'.
*/
inline void CCity::SetSupport(const int nSupport)
{//@CODE_252
    if (nSupport < CONST_MINIMUN_CITY_SUPPORT)
        m_nSupport = CONST_MINIMUN_CITY_SUPPORT;
    else
        if (nSupport > CONST_MAXIMUN_CITY_SUPPORT)
            m_nSupport = CONST_MAXIMUN_CITY_SUPPORT;
        else
            m_nSupport = nSupport;
}//@CODE_252



/*@NOTE_1025
Set the value of member 'm_pModifier' to 'pModifier'.
*/
inline void CCity::SetModifier(CModifier* pModifier)
{//@CODE_1025
    delete m_pModifier;
    m_pModifier = pModifier;
}//@CODE_1025



/*@NOTE_1027
Returns the value of member 'm_pModifier'.
*/
inline const CModifier* CCity::GetModifier() const
{//@CODE_1027
    return m_pModifier;
}//@CODE_1027



/*@NOTE_2108
Returns the value of member 'm_pRuler'.
*/
inline CPersonRuler* CCity::GetRuler() const
{//@CODE_2108
    return m_pRuler;
}//@CODE_2108



/*@NOTE_2109
Set the value of member 'm_pRuler' to 'pRuler'.
*/
inline void CCity::SetRuler(CPersonRuler* pRuler)
{//@CODE_2109
    m_pRuler = pRuler;
}//@CODE_2109



//@START_USER3
//@END_USER3

#endif
#endif

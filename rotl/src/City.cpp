/******************************************************************************\
*
* File:          ../../src/City.cpp
* Creation date: April 10, 2005 19:45
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCity'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 23:26 ReyBrujo, 2005
*     Updated code of method 'SpendResources'
* April 17, 2005 23:24 ReyBrujo, 2005
*     Updated code of method 'SpendResources'
* April 17, 2005 23:20 ReyBrujo, 2005
*     Added method 'SpendResources'
* April 16, 2005 17:45 ReyBrujo, 2005
*     Updated code of method '~CCity'
* April 16, 2005 14:48 ReyBrujo, 2005
*     Added method 'SetRuler'
*     Added method 'GetRuler'
*     Added member 'm_pRuler'
*     Updated code of method '~CCity'
* April 16, 2005 02:01 ReyBrujo, 2005
*     Updated code of method 'GetModifier'
*     Updated interface of method 'SetModifier'
*     Updated interface of method 'SetSupport'
*     Updated code of method 'GetSupport'
*     Updated interface of method 'SetPopulation'
*     Updated code of method 'GetPopulation'
*     Updated interface of method 'SetMaximunCropValue'
*     Updated code of method 'GetMaximunCropValue'
*     Updated interface of method 'SetLoyalty'
*     Updated code of method 'GetLoyalty'
*     Updated interface of method 'SetHealth'
*     Updated code of method 'GetHealth'
*     Updated interface of method 'SetGold'
*     Updated code of method 'GetGold'
*     Updated interface of method 'SetFood'
*     Updated code of method 'GetFood'
*     Updated interface of method 'SetDefense'
*     Updated code of method 'GetDefense'
*     Updated interface of method 'SetCropValue'
*     Updated code of method 'GetCropValue'
*     Updated interface of method 'SetType'
*     Updated code of method 'GetType'
*     Updated code of method '~CCity'
*     Updated code of method 'CCity'
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
*     Updated code of method '~CCity'
*     Updated member 'm_pModifier'
* April 12, 2005 17:45 ReyBrujo
*     Added method 'SetModifier'
*     Added member 'm_pModifier'
*     Added member 'm_eType'
*     Updated code of method '~CCity'
*     Updated interface of method 'CCity'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated interface of method 'SetSupport'
*     Updated code of method 'GetSupport'
*     Updated interface of method 'SetPopulation'
*     Updated code of method 'GetPopulation'
*     Updated interface of method 'SetMaximunCropValue'
*     Updated code of method 'GetMaximunCropValue'
*     Updated interface of method 'SetLoyalty'
*     Updated code of method 'GetLoyalty'
*     Updated interface of method 'SetHealth'
*     Updated code of method 'GetHealth'
*     Updated interface of method 'SetGold'
*     Updated code of method 'GetGold'
*     Updated interface of method 'SetFood'
*     Updated code of method 'GetFood'
*     Updated interface of method 'SetDefense'
*     Updated code of method 'GetDefense'
*     Updated interface of method 'SetCropValue'
*     Updated code of method 'GetCropValue'
*     Updated code of method '~CCity'
*     Updated code of method 'CCity'
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
* April 11, 2005 00:42 ReyBrujo, 2005
*     Updated interface of method 'SetMaximunCropValue'
*     Updated code of method 'GetMaximunCropValue'
*     Updated member 'm_nMaximunCropValue'
* April 11, 2005 00:37 ReyBrujo, 2005
*     Updated interface of method 'SetSupport'
*     Updated code of method 'GetSupport'
*     Updated interface of method 'SetPopulation'
*     Updated code of method 'GetPopulation'
*     Updated interface of method 'SetMaximunCropValue'
*     Updated code of method 'GetMaximunCropValue'
*     Updated interface of method 'SetLoyalty'
*     Updated code of method 'GetLoyalty'
*     Updated interface of method 'SetHealth'
*     Updated code of method 'GetHealth'
*     Updated interface of method 'SetGold'
*     Updated code of method 'GetGold'
*     Updated interface of method 'SetFood'
*     Updated code of method 'GetFood'
*     Updated interface of method 'SetDefense'
*     Updated code of method 'GetDefense'
*     Updated interface of method 'SetCropValue'
*     Updated code of method 'GetCropValue'
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
* April 10, 2005 20:42 ReyBrujo
*     Updated code of method 'ConstructorInclude'
*     Updated code of method 'CCity'
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
//@START_USER1
//@END_USER1


// Master include file
#include "rotl.h"


//@START_USER2
//@END_USER2




/*@NOTE_1034
Constructor method.
*/
CCity::CCity() //@INIT_1034
    : CBase()
    , m_nGold(CONST_MINIMUN_CITY_GOLD)
    , m_nFood(CONST_MINIMUN_CITY_FOOD)
    , m_nPopulation(CONST_MINIMUN_CITY_POPULATION)
    , m_nCropValue(CONST_MINIMUN_CITY_CROP_VALUE)
    , m_nDefense(CONST_MINIMUN_CITY_DEFENSE)
    , m_nHealth(CONST_MINIMUN_CITY_HEALTH)
    , m_nLoyalty(CONST_MINIMUN_CITY_LOYALTY)
    , m_nSupport(CONST_MINIMUN_CITY_SUPPORT)
    , m_nMaximunCropValue(CONST_MAXIMUN_CITY_CROP_VALUE)
    , m_eType(enCITYTYPE_COMMERCIAL_VILLAGE)
    , m_pModifier(NULL)
    , m_pRuler(NULL)
{//@CODE_1034
    ConstructorInclude();

    // Put in your own code
}//@CODE_1034


/*@NOTE_74
Destructor method.
*/
CCity::~CCity()
{//@CODE_74
    DestructorInclude();

    // Put in your own code
    if (m_pModifier != NULL) {
        delete m_pModifier;
        m_pModifier = NULL;
    }

    m_pRuler = NULL;
}//@CODE_74


/*@NOTE_2376
Tells the city to spend resources.
*/
void CCity::SpendResources(const CWeather* pWeather, const CSeason* pSeason)
{//@CODE_2376
    int nFood = 0;
    int nGold = 0;

    //  TODO: In the future, the weather might modify this too.
    pWeather = pWeather;

    nFood = static_cast<int>((GetPopulation() * 0.10) * pSeason->GetWeekendFoodModifier());
    nGold = static_cast<int>((GetPopulation() * 0.15) * pSeason->GetWeekendGoldModifier());

    SetGold(GetGold() - nGold);
    SetFood(GetFood() - nFood);

    //  TODO: Values should change depending on city stats.
}//@CODE_2376


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_75
Method which must be called first in a constructor.
*/
void CCity::ConstructorInclude()
{
}


/*@NOTE_76
Method which must be called first in a destructor.
*/
void CCity::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

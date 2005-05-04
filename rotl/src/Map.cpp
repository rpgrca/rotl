/******************************************************************************\
*
* File:          ../../src/Map.cpp
* Creation date: April 12, 2005 15:01
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMap'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 19, 2005 01:07 ReyBrujo, 2005
*     Added method 'SetCityRenderer'
*     Added method 'GetCityRenderer'
*     Added member 'm_pCityRenderer'
*     Updated code of method '~CMap'
*     Updated code of method 'CMap'
* April 18, 2005 00:49 ReyBrujo, 2005
*     Updated code of method 'SpendResources'
*     Updated code of method 'SetTerrain'
*     Updated code of method 'ResizeMap'
*     Updated code of method 'GetTerrain'
*     Updated code of method 'GetCityCount'
*     Updated code of method 'GetCityAt'
*     Updated code of method 'GetCity'
*     Updated code of method 'AddCity'
* April 18, 2005 00:44 ReyBrujo, 2005
*     Updated code of method 'GetCityAt'
* April 18, 2005 00:42 ReyBrujo, 2005
*     Added method 'GetCityAt'
* April 17, 2005 23:20 ReyBrujo, 2005
*     Added method 'SpendResources'
*     Updated return type of method 'SpendResources'
* April 17, 2005 15:23 ReyBrujo, 2005
*     Updated code of method 'GetCity'
* April 17, 2005 15:20 ReyBrujo, 2005
*     Updated interface of method 'GetCity'
* April 17, 2005 15:15 ReyBrujo, 2005
*     Added method 'GetCityCount'
*     Added method 'GetCity'
* April 17, 2005 02:08 ReyBrujo, 2005
*     Updated code of method 'CMap'
* April 17, 2005 00:01 ReyBrujo, 2005
*     Added method 'AddCity'
*     Added member 'm_aCities'
*     Updated code of method '~CMap'
*     Updated code of method 'CMap'
* April 16, 2005 02:33 ReyBrujo, 2005
*     Updated interface of method 'CMap'
* April 15, 2005 12:00 ReyBrujo, 2005
*     Updated code of method 'SetWidth'
*     Updated code of method 'SetHeight'
*     Updated code of method 'SetCurrentYear'
*     Updated code of method 'SetCurrentWeek'
*     Updated code of method 'SetCurrentMonth'
*     Updated code of method 'SetTerrain'
*     Updated code of method 'GetTerrain'
*     Updated code of method 'CMap'
* April 13, 2005 01:57 ReyBrujo, 2005
*     Added method 'SetTerrain'
*     Added method 'ResizeMap'
*     Updated code of method 'SetWidth'
*     Updated code of method 'SetHeight'
* April 13, 2005 01:39 ReyBrujo, 2005
*     Deleted method 'SaveMap'
*     Updated code of method 'LoadMap'
* April 13, 2005 01:29 ReyBrujo, 2005
*     Updated code of method 'LoadMap'
* April 13, 2005 00:56 ReyBrujo, 2005
*     Updated code of method 'GetTerrain'
* April 12, 2005 16:44 ReyBrujo
*     Updated interface of method 'CMap'
* April 12, 2005 15:01 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetWidth'
*     Added method 'GetWidth'
*     Added method 'SetHeight'
*     Added method 'GetHeight'
*     Added method 'GetNCurrentYear'
*     Added method 'GetNCurrentWeek'
*     Added method 'GetNCurrentMonth'
*     Added method 'UnloadMap'
*     Added method 'SaveMap'
*     Added method 'LoadMap'
*     Added method 'GetTerrain'
*     Added method '~CMap'
*     Added method 'CMap'
*     Added inheritance 'CBase'
*     Added member 'm_nCurrentMonth'
*     Added member 'm_nCurrentWeek'
*     Added member 'm_nCurrentYear'
*     Added member 'm_nHeight'
*     Added member 'm_nWidth'
*     Added member 'm_pTerrain'
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




/*@NOTE_972
Constructor method.
*/
CMap::CMap(const int nWidth, const int nHeight) //@INIT_972
    : CBase()
    , m_pTerrain(NULL)
    , m_nWidth(nWidth)
    , m_nHeight(nHeight)
    , m_nCurrentYear(CONST_DEFAULT_MAP_CURRENT_YEAR)
    , m_nCurrentWeek(CONST_DEFAULT_MAP_CURRENT_WEEK)
    , m_nCurrentMonth(CONST_DEFAULT_MAP_CURRENT_MONTH)
    , m_pCityRenderer(NULL)
{//@CODE_972
    ConstructorInclude();

    // Put in your own code
    unsigned int uIndex;

    for (uIndex = 0; uIndex < (sizeof(m_aCities) / sizeof(*m_aCities)); uIndex++)
        m_aCities[uIndex] = NULL;
}//@CODE_972


/*@NOTE_948
Destructor method.
*/
CMap::~CMap()
{//@CODE_948
    DestructorInclude();

    // Put in your own code
    unsigned int uIndex;

    UnloadMap();

    for (uIndex = 0; uIndex < (sizeof(m_aCities) / sizeof(*m_aCities)); uIndex++)
        if (m_aCities[uIndex] != NULL) {
            delete m_aCities[uIndex];
            m_aCities[uIndex] = NULL;
        }
}//@CODE_948


/*@NOTE_968
Destroys the map from memory.
*/
void CMap::UnloadMap()
{//@CODE_968
    int nIndex;
    int nMaximun;

    nMaximun = m_nWidth * m_nHeight;
    for (nIndex = 0; nIndex < nMaximun; nIndex++) {
        if (m_pTerrain[nIndex] != NULL) {
            delete m_pTerrain[nIndex];
            m_pTerrain[nIndex] = NULL;
        }
    }

    delete [] m_pTerrain;
    m_pTerrain = NULL;

    m_nHeight = 0;
    m_nWidth = 0;
}//@CODE_968


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_949
Method which must be called first in a constructor.
*/
void CMap::ConstructorInclude()
{
}


/*@NOTE_950
Method which must be called first in a destructor.
*/
void CMap::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

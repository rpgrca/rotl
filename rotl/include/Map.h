/******************************************************************************\
*
* File:          ../../include/Map.h
* Creation date: April 12, 2005 15:01
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CMap'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 19, 2005 01:07 ReyBrujo, 2005
*     Added method 'SetCityRenderer'
*     Added method 'GetCityRenderer'
*     Added member 'm_pCityRenderer'
* April 18, 2005 00:42 ReyBrujo, 2005
*     Added method 'GetCityAt'
* April 17, 2005 23:20 ReyBrujo, 2005
*     Added method 'SpendResources'
*     Updated return type of method 'SpendResources'
* April 17, 2005 15:20 ReyBrujo, 2005
*     Updated interface of method 'GetCity'
* April 17, 2005 15:15 ReyBrujo, 2005
*     Added method 'GetCityCount'
*     Added method 'GetCity'
* April 17, 2005 00:01 ReyBrujo, 2005
*     Added method 'AddCity'
*     Added member 'm_aCities'
* April 16, 2005 02:33 ReyBrujo, 2005
*     Updated interface of method 'CMap'
* April 13, 2005 02:03 ReyBrujo, 2005
*     Added method 'SetCurrentYear'
*     Added method 'SetCurrentWeek'
*     Added method 'SetCurrentMonth'
*     Updated member 'm_nCurrentMonth'
*     Updated member 'm_nCurrentWeek'
*     Updated member 'm_nCurrentYear'
* April 13, 2005 01:57 ReyBrujo, 2005
*     Added method 'SetTerrain'
*     Added method 'ResizeMap'
* April 13, 2005 01:39 ReyBrujo, 2005
*     Deleted method 'SaveMap'
* April 12, 2005 16:43 ReyBrujo
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
#ifndef _MAP_H
#define _MAP_H
const int CONST_DEFAULT_MAP_CURRENT_WEEK = 0;
const int CONST_DEFAULT_MAP_CURRENT_MONTH = 0;
const int CONST_DEFAULT_MAP_CURRENT_YEAR = 0;
const int CONST_DEFAULT_MAP_HEIGHT = 0;
const int CONST_DEFAULT_MAP_WIDTH = 0;
const int CONST_MAXIMUN_CITY_COUNT = 25;

//@START_USER1
//@END_USER1


/*@NOTE_947
The map where the game is held.
*/

class CMap
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
    CTerrain** m_pTerrain;
    int m_nWidth;
    int m_nHeight;
    int m_nCurrentYear;
    int m_nCurrentWeek;
    int m_nCurrentMonth;
    CCity* m_aCities[CONST_MAXIMUN_CITY_COUNT];
    CCityRenderer* m_pCityRenderer;

//
// Non-Grouped Methods
//

private:
    void ResizeMap();
    void UnloadMap();

protected:
    void SetCityRenderer(CCityRenderer* pCityRenderer);

public:
    CMap(const int nWidth = CONST_DEFAULT_MAP_WIDTH,
         const int nHeight = CONST_DEFAULT_MAP_HEIGHT);
    virtual ~CMap();
    bool AddCity(CCity* pCity, const bool bDestroy = false);
    CCity* GetCity(const unsigned int uIndex);
    CCity* GetCityAt(const int nX, const int nY) const;
    int GetCityCount() const;
    CTerrain* GetTerrain(const int nX, const int nY);
    void SetTerrain(const int nIndex, CTerrain* pTerrain);
    void SpendResources(const CWeather* pWeather, const CSeason* pSeason);
    int GetCurrentMonth() const;
    void SetCurrentMonth(const int nCurrentMonth);
    int GetCurrentWeek() const;
    void SetCurrentWeek(const int nCurrentWeek);
    int GetCurrentYear() const;
    void SetCurrentYear(const int nCurrentYear);
    int GetHeight() const;
    void SetHeight(const int nHeight);
    int GetWidth() const;
    void SetWidth(const int nWidth);
    CCityRenderer* GetCityRenderer() const;
};

#endif


#ifdef CB_INLINES
#ifndef _MAP_H_INLINES
#define _MAP_H_INLINES

/*@NOTE_2205
Adds a new city to the map.
*/
inline bool CMap::AddCity(CCity* pCity, const bool bDestroy)
{//@CODE_2205
    unsigned int uIndex;

    if (pCity != NULL) {
        for (uIndex = 0; uIndex < (sizeof(m_aCities) / sizeof(*m_aCities)); uIndex++)
            if (m_aCities[uIndex] == NULL) {
                m_aCities[uIndex] = pCity;
                return (true);
            }

        if (bDestroy)
            delete pCity;
    }

    return (false);
}//@CODE_2205



/*@NOTE_2297
Returns a city from the map by index.
*/
inline CCity* CMap::GetCity(const unsigned int uIndex)
{//@CODE_2297
    if (uIndex < (sizeof(m_aCities) / sizeof(*m_aCities)))
        return (m_aCities[uIndex]);
    else
        return (NULL);
}//@CODE_2297



/*@NOTE_2400
Gets a city at the asked position.
*/
inline CCity* CMap::GetCityAt(const int nX, const int nY) const
{//@CODE_2400
    unsigned int uIndex;

    for (uIndex = 0; uIndex < (sizeof(m_aCities) / sizeof(*m_aCities)); uIndex++)
        if (m_aCities[uIndex] != NULL)
            if ((m_aCities[uIndex]->GetLocationX() == nX) && (m_aCities[uIndex]->GetLocationY() == nY))
                return (m_aCities[uIndex]);

    return (NULL);
}//@CODE_2400



/*@NOTE_2298
Returns the amount of cities the map has.
*/
inline int CMap::GetCityCount() const
{//@CODE_2298
    unsigned int uIndex;
    int nCounter = 0;

    for (uIndex = 0; uIndex < (sizeof(m_aCities) / sizeof(*m_aCities)); uIndex++)
        if (m_aCities[uIndex] != NULL)
            nCounter++;

    return (nCounter);
}//@CODE_2298



/*@NOTE_969
Gets the terrain that is situated in a determined position of the map.
*/
inline CTerrain* CMap::GetTerrain(const int nX, const int nY)
{//@CODE_969
    CTerrain* pTerrain = NULL;

    if (m_pTerrain != NULL)
        if (((nX >= 0) && (nX < m_nWidth)) && ((nY >= 0) && (nY < m_nHeight)))
            pTerrain = m_pTerrain[nY * m_nWidth + nX];

    return (pTerrain);
}//@CODE_969



/*@NOTE_1172
Resizes the map.
If the map size becomes 0 (one of the sides has length 0) the map is deleted.
*/
inline void CMap::ResizeMap()
{//@CODE_1172
    int nMaximun;

    nMaximun = m_nHeight * m_nWidth;
    if (nMaximun != 0) {
        m_pTerrain = new CTerrain *[nMaximun];

        //  TODO: Check for m_pTerrain == NULL
        memset(m_pTerrain, '\0', nMaximun * sizeof(CTerrain *));
    }
    //  if nMaximun == 0, we suppose the array was already deleted
}//@CODE_1172



/*@NOTE_1173
Sets a terrain in determined square in the map.
*/
inline void CMap::SetTerrain(const int nIndex, CTerrain* pTerrain)
{//@CODE_1173
    if (pTerrain != NULL)
        if (nIndex >= 0 && nIndex < (m_nHeight * m_nWidth)) {
            if (m_pTerrain[nIndex] != NULL)
                delete m_pTerrain[nIndex];

            m_pTerrain[nIndex] = pTerrain;
        }
}//@CODE_1173



/*@NOTE_2370
Spends resources.
This function is called once per week, to make all cities consume some food and gold.
*/
inline void CMap::SpendResources(const CWeather* pWeather,
                                 const CSeason* pSeason)
{//@CODE_2370
    int nMaximun = 0;
    int nIndex = 0;

    nMaximun = GetCityCount();
    for (nIndex = 0; nIndex < nMaximun; nIndex++)
        m_aCities[nIndex]->SpendResources(pWeather, pSeason);
}//@CODE_2370



/*@NOTE_966
Returns the value of member 'm_nCurrentMonth'.
*/
inline int CMap::GetCurrentMonth() const
{//@CODE_966
    return m_nCurrentMonth;
}//@CODE_966



/*@NOTE_1178
Set the value of member 'm_nCurrentMonth' to 'nCurrentMonth'.
*/
inline void CMap::SetCurrentMonth(const int nCurrentMonth)
{//@CODE_1178
    m_nCurrentMonth = nCurrentMonth;
}//@CODE_1178



/*@NOTE_967
Returns the value of member 'm_nCurrentWeek'.
*/
inline int CMap::GetCurrentWeek() const
{//@CODE_967
    return m_nCurrentWeek;
}//@CODE_967



/*@NOTE_1176
Set the value of member 'm_nCurrentWeek' to 'nCurrentWeek'.
*/
inline void CMap::SetCurrentWeek(const int nCurrentWeek)
{//@CODE_1176
    m_nCurrentWeek = nCurrentWeek;
}//@CODE_1176



/*@NOTE_963
Returns the value of member 'm_nCurrentYear'.
*/
inline int CMap::GetCurrentYear() const
{//@CODE_963
    return m_nCurrentYear;
}//@CODE_963



/*@NOTE_1180
Set the value of member 'm_nCurrentYear' to 'nCurrentYear'.
*/
inline void CMap::SetCurrentYear(const int nCurrentYear)
{//@CODE_1180
    m_nCurrentYear = nCurrentYear;
}//@CODE_1180



/*@NOTE_959
Returns the value of member 'm_nHeight'.
*/
inline int CMap::GetHeight() const
{//@CODE_959
    return m_nHeight;
}//@CODE_959



/*@NOTE_960
Set the value of member 'm_nHeight' to 'nHeight'.
*/
inline void CMap::SetHeight(const int nHeight)
{//@CODE_960
    if (nHeight == 0)
        UnloadMap();

    if (m_nHeight != nHeight) {
        m_nHeight = nHeight;
        ResizeMap();
    }
}//@CODE_960



/*@NOTE_955
Returns the value of member 'm_nWidth'.
*/
inline int CMap::GetWidth() const
{//@CODE_955
    return m_nWidth;
}//@CODE_955



/*@NOTE_956
Set the value of member 'm_nWidth' to 'nWidth'.
*/
inline void CMap::SetWidth(const int nWidth)
{//@CODE_956
    if (nWidth == 0)
        UnloadMap();

    if (m_nWidth != nWidth) {
        m_nWidth = nWidth;
        ResizeMap();
    }
}//@CODE_956



/*@NOTE_2500
Returns the value of member 'm_pCityRenderer'.
*/
inline CCityRenderer* CMap::GetCityRenderer() const
{//@CODE_2500
    return m_pCityRenderer;
}//@CODE_2500



/*@NOTE_2501
Set the value of member 'm_pCityRenderer' to 'pCityRenderer'.
*/
inline void CMap::SetCityRenderer(CCityRenderer* pCityRenderer)
{//@CODE_2501
    m_pCityRenderer = pCityRenderer;
}//@CODE_2501



//@START_USER3
//@END_USER3

#endif
#endif

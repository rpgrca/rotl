/******************************************************************************\
*
* File:          ../../include/MapRenderer.h
* Creation date: April 12, 2005 15:01
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CMapRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 19, 2005 01:08 ReyBrujo, 2005
*     Updated interface of method 'SetCityRenderer'
*     Updated member 'm_pCityRenderer'
* April 19, 2005 01:07 ReyBrujo, 2005
*     Added method 'SetCityRenderer'
*     Added method 'GetCityRenderer'
*     Added member 'm_pCityRenderer'
* April 15, 2005 15:18 ReyBrujo, 2005
*     Updated interface of method 'SetMap'
*     Updated inheritance 'CRenderer'
*     Updated member 'm_pMap'
* April 13, 2005 18:28 ReyBrujo, 2005
*     Deleted method 'Draw'
* April 13, 2005 01:39 ReyBrujo, 2005
*     Updated interface of method 'SetMap'
*     Updated inheritance 'CRenderer'
*     Updated member 'm_pMap'
* April 12, 2005 15:17 ReyBrujo
*     Added method 'SetMap'
*     Added method 'GetMap'
*     Added method 'Draw'
*     Added member 'm_pMap'
* April 12, 2005 15:07 ReyBrujo
*     Added method 'CMapRenderer'
*     Added inheritance 'CRenderer'
* April 12, 2005 15:01 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMapRenderer'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _MAPRENDERER_H
#define _MAPRENDERER_H

//@START_USER1
//@END_USER1


/*@NOTE_942
The map renderer.
This class takes care of the drawing of the map.
*/

class CMapRenderer
    : public CRenderer
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

protected:
    CMap* m_pMap;
    CCityRenderer* m_pCityRenderer;

//
// Non-Grouped Methods
//

public:
    CMapRenderer();
    virtual ~CMapRenderer();
    CCityRenderer* GetCityRenderer() const;
    void SetCityRenderer(CCityRenderer* pCityRenderer);
    CMap* GetMap() const;
    void SetMap(CMap* pMap);
};

#endif


#ifdef CB_INLINES
#ifndef _MAPRENDERER_H_INLINES
#define _MAPRENDERER_H_INLINES

/*@NOTE_2508
Returns the value of member 'm_pCityRenderer'.
*/
inline CCityRenderer* CMapRenderer::GetCityRenderer() const
{//@CODE_2508
    return m_pCityRenderer;
}//@CODE_2508



/*@NOTE_2509
Set the value of member 'm_pCityRenderer' to 'pCityRenderer'.
*/
inline void CMapRenderer::SetCityRenderer(CCityRenderer* pCityRenderer)
{//@CODE_2509
    delete m_pCityRenderer;
    m_pCityRenderer = pCityRenderer;
}//@CODE_2509



/*@NOTE_979
Returns the value of member 'm_pMap'.
*/
inline CMap* CMapRenderer::GetMap() const
{//@CODE_979
    return m_pMap;
}//@CODE_979



/*@NOTE_980
Set the value of member 'm_pMap' to 'pMap'.
*/
inline void CMapRenderer::SetMap(CMap* pMap)
{//@CODE_980
    m_pMap = pMap;
}//@CODE_980



//@START_USER3
//@END_USER3

#endif
#endif

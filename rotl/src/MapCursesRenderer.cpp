/******************************************************************************\
*
* File:          ../../src/MapCursesRenderer.cpp
* Creation date: April 18, 2005 01:35
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMapCursesRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 19, 2005 23:55 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 19, 2005 01:31 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method 'Draw'
*     Updated code of method '~CMapCursesRenderer'
*     Updated code of method 'CMapCursesRenderer'
*     Updated inheritance 'CMapRenderer'
* April 19, 2005 01:08 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 19, 2005 01:07 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 19, 2005 00:47 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 19, 2005 00:44 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 19, 2005 00:39 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 19, 2005 00:38 ReyBrujo, 2005
*     Updated code of method 'Draw'
*     Updated code of method 'CMapCursesRenderer'
* April 19, 2005 00:34 ReyBrujo, 2005
*     Updated code of method 'CMapCursesRenderer'
* April 19, 2005 00:34 ReyBrujo, 2005
*     Updated code of method 'CMapCursesRenderer'
* April 19, 2005 00:27 ReyBrujo, 2005
*     Updated code of method 'CMapCursesRenderer'
* April 19, 2005 00:24 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 19, 2005 00:22 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 19, 2005 00:19 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 19, 2005 00:13 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 19, 2005 00:09 ReyBrujo, 2005
*     Updated code of method 'CMapCursesRenderer'
* April 19, 2005 00:08 ReyBrujo, 2005
*     Updated code of method 'CMapCursesRenderer'
* April 18, 2005 01:55 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 18, 2005 01:55 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 18, 2005 01:54 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 18, 2005 01:49 ReyBrujo, 2005
*     Updated code of method 'CMapCursesRenderer'
* April 18, 2005 01:40 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method 'Draw'
*     Updated code of method '~CMapCursesRenderer'
*     Updated code of method 'CMapCursesRenderer'
*     Updated inheritance 'CMapRenderer'
*     Updated member 'm_pWindow'
* April 18, 2005 01:35 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Draw'
*     Added method '~CMapCursesRenderer'
*     Added method 'CMapCursesRenderer'
*     Added inheritance 'CMapRenderer'
*     Added member 'm_pWINDOW'
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




/*@NOTE_2486
Constructor method.
*/
CMapCursesRenderer::CMapCursesRenderer() //@INIT_2486
    : CMapRenderer()
{//@CODE_2486
    ConstructorInclude();

    // Put in your own code
    init_pair(1, COLOR_GREEN , COLOR_GREEN );  //  enTERRAINTYPE_FIELD
    init_pair(2, COLOR_RED   , COLOR_RED   );  //  enTERRAINTYPE_MOUNTAIN
    init_pair(3, COLOR_BLUE  , COLOR_BLUE  );  //  enTERRAINTYPE_RIVER
    init_pair(4, COLOR_YELLOW, COLOR_YELLOW);  //  enTERRAINTYPE_ROAD
}//@CODE_2486


/*@NOTE_2480
Destructor method.
*/
CMapCursesRenderer::~CMapCursesRenderer()
{//@CODE_2480
    DestructorInclude();

    // Put in your own code
}//@CODE_2480


/*@NOTE_2485
This method must be overloaded in derived classes in order to draw onto screen.
*/
void CMapCursesRenderer::Draw()
{//@CODE_2485
    CTerrain *pTerrain = NULL;
    CCity *pCity = NULL;
    int nY;
    int nX;
    int nIndex;

    for (nY = 0; nY < m_pMap->GetHeight(); nY++) {
        for (nX = 0; nX < m_pMap->GetWidth(); nX++) {
            pTerrain = m_pMap->GetTerrain(nX, nY);
            if (pTerrain != NULL)
                nIndex = static_cast<int>(pTerrain->GetType());
                attrset(COLOR_PAIR(nIndex + 1));
                mvaddch(nY + 4, nX, static_cast<chtype>(' '));
        }
    }

    attrset(0);
    nY = m_pMap->GetCityCount();
    if (nY > 0) {
        for (nX = 0; nX < nY; nX++) {
            pCity = m_pMap->GetCity(nX);

            if (pCity != NULL) {
                m_pCityRenderer->SetCity(pCity);
                m_pCityRenderer->Draw();
            }
        }
    }

    refresh();
}//@CODE_2485


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_2481
Method which must be called first in a constructor.
*/
void CMapCursesRenderer::ConstructorInclude()
{
}


/*@NOTE_2482
Method which must be called first in a destructor.
*/
void CMapCursesRenderer::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

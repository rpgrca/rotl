/******************************************************************************\
*
* File:          ../../src/MapTextRenderer.cpp
* Creation date: April 12, 2005 15:17
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMapTextRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 15:15 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 17, 2005 15:01 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 17, 2005 14:59 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 15, 2005 15:18 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method 'Draw'
*     Updated code of method '~CMapTextRenderer'
*     Updated code of method 'CMapTextRenderer'
*     Updated inheritance 'CMapRenderer'
* April 13, 2005 01:39 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method 'Draw'
*     Updated code of method '~CMapTextRenderer'
*     Updated code of method 'CMapTextRenderer'
*     Updated inheritance 'CMapRenderer'
* April 13, 2005 00:50 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 12, 2005 16:39 ReyBrujo
*     Updated code of method 'Draw'
* April 12, 2005 15:17 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Draw'
*     Added method '~CMapTextRenderer'
*     Added method 'CMapTextRenderer'
*     Added inheritance 'CMapRenderer'
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




/*@NOTE_988
Constructor method.
*/
CMapTextRenderer::CMapTextRenderer() //@INIT_988
    : CMapRenderer()
{//@CODE_988
    ConstructorInclude();

    // Put in your own code
}//@CODE_988


/*@NOTE_983
Destructor method.
*/
CMapTextRenderer::~CMapTextRenderer()
{//@CODE_983
    DestructorInclude();

    // Put in your own code
}//@CODE_983


/*@NOTE_989
This method must be overloaded in derived classes in order to draw onto screen.
*/
void CMapTextRenderer::Draw()
{//@CODE_989
    CCityRenderer *pRenderer = NULL;
    CCity *pCity = NULL;
    CTerrain *pTerrain = NULL;
    int nY;
    int nX;

    const char acTerrain[] = {
        'F',  //  enTERRAINTYPE_FIELD
        'M',  //  enTERRAINTYPE_MOUNTAIN
        'R',  //  enTERRAINTYPE_RIVER
        'P'   //  enTERRAINTYPE_ROAD
    };

    for (nY = 0; nY < m_pMap->GetHeight(); nY++) {
        for (nX = 0; nX < m_pMap->GetWidth(); nX++) {
            pTerrain = m_pMap->GetTerrain(nX, nY);
            if (pTerrain != NULL)
                printf("%c ", acTerrain[static_cast<int>(pTerrain->GetType())]);
            else
                printf("  ");
        }

        printf("\n");
    }

    nY = m_pMap->GetCityCount();
    if (nY > 0) {
        pRenderer = new CCityTextRenderer;

        for (nX = 0; nX < nY; nX++) {
            pCity = m_pMap->GetCity(nX);
            if (pCity != NULL) {
                pRenderer->SetCity(pCity);
                pRenderer->Draw();
            }
        }

        delete pRenderer;
    }
}//@CODE_989


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_984
Method which must be called first in a constructor.
*/
void CMapTextRenderer::ConstructorInclude()
{
}


/*@NOTE_985
Method which must be called first in a destructor.
*/
void CMapTextRenderer::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

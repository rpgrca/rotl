/******************************************************************************\
*
* File:          ../../src/UnitTextRenderer.cpp
* Creation date: April 16, 2005 20:37
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CUnitTextRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 20:44 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 16, 2005 20:37 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Draw'
*     Added method '~CUnitTextRenderer'
*     Added method 'CUnitTextRenderer'
*     Added inheritance 'CUnitRenderer'
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




/*@NOTE_2181
Constructor method.
*/
CUnitTextRenderer::CUnitTextRenderer() //@INIT_2181
    : CUnitRenderer()
{//@CODE_2181
    ConstructorInclude();

    // Put in your own code
}//@CODE_2181


/*@NOTE_2175
Destructor method.
*/
CUnitTextRenderer::~CUnitTextRenderer()
{//@CODE_2175
    DestructorInclude();

    // Put in your own code
}//@CODE_2175


/*@NOTE_2180
This method must be overloaded in derived classes in order to draw onto screen.
*/
void CUnitTextRenderer::Draw()
{//@CODE_2180
    char strBuffer[512];

    printf("%s found at location (%d, %d)\n", m_pUnit->GetName(strBuffer, sizeof(strBuffer)), m_pUnit->GetLocationX(), m_pUnit->GetLocationY());
    printf("  Soldiers: %d\n", m_pUnit->GetSoldiers());
    printf("      Food: %d\n", m_pUnit->GetFood());
    printf("      Gold: %d\n", m_pUnit->GetGold());
    printf("      Arms: %d\n", m_pUnit->GetArms());
    printf("    Spirit: %d\n", m_pUnit->GetSpirit());
}//@CODE_2180


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_2176
Method which must be called first in a constructor.
*/
void CUnitTextRenderer::ConstructorInclude()
{
}


/*@NOTE_2177
Method which must be called first in a destructor.
*/
void CUnitTextRenderer::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

/******************************************************************************\
*
* File:          ../../src/Terrain.cpp
* Creation date: April 10, 2005 20:53
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CTerrain'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 22:56 ReyBrujo, 2005
*     Updated code of method 'CTerrain'
* April 16, 2005 22:53 ReyBrujo, 2005
*     Added method 'SetObstacle'
*     Added method 'GetObstacle'
*     Added member 'm_eObstacle'
*     Updated code of method 'GetType'
* April 13, 2005 17:12 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method 'GetModifier'
*     Updated interface of method 'SetType'
*     Updated code of method 'GetType'
*     Updated code of method '~CTerrain'
*     Updated code of method 'CTerrain'
*     Updated inheritance 'CBase'
*     Updated member 'm_pModifier'
*     Updated member 'm_eType'
* April 12, 2005 18:27 ReyBrujo
*     Updated code of method 'CTerrain'
* April 12, 2005 18:12 ReyBrujo
*     Added method 'GetModifier'
*     Added member 'm_pModifier'
*     Updated code of method '~CTerrain'
*     Updated code of method 'CTerrain'
* April 12, 2005 17:45 ReyBrujo
*     Deleted inheritance 'CEnvironment'
*     Added inheritance 'CBase'
* April 12, 2005 16:39 ReyBrujo
*     Updated code of method 'GetType'
*     Updated member 'm_eType'
* April 12, 2005 16:36 ReyBrujo
*     Added method 'GetType'
*     Added member 'm_eType'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CTerrain'
*     Updated code of method 'CTerrain'
*     Updated inheritance 'CEnvironment'
* April 10, 2005 22:51 ReyBrujo
*     Updated code of method 'CTerrain'
* April 10, 2005 22:42 ReyBrujo
*     Updated code of method 'CTerrain'
* April 10, 2005 21:42 ReyBrujo
*     Updated code of method 'CTerrain'
* April 10, 2005 21:38 ReyBrujo
*     Updated code of method 'CTerrain'
* April 10, 2005 21:24 ReyBrujo
*     Deleted inheritance 'CEnvironment'
*     Deleted member 'm_eTerrain'
*     Added inheritance 'CEnvironment'
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method '~CTerrain'
*     Updated code of method 'CTerrain'
* April 10, 2005 21:01 ReyBrujo
*     Added inheritance 'CEnvironment'
* April 10, 2005 20:53 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetTerrain'
*     Added method 'GetTerrain'
*     Added method '~CTerrain'
*     Added method 'CTerrain'
*     Added inheritance 'CBase'
*     Added member 'm_eTerrain'
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




/*@NOTE_273
Constructor method.
*/
CTerrain::CTerrain() //@INIT_273
    : m_eType(enTERRAINTYPE_FIELD)
    , m_eObstacle(enOBSTACLETYPE_FREE)
    , m_pModifier(NULL)
{//@CODE_273
    ConstructorInclude();

    // Put in your own code
    m_pModifier = new CModifier;
}//@CODE_273


/*@NOTE_269
Destructor method.
*/
CTerrain::~CTerrain()
{//@CODE_269
    DestructorInclude();

    // Put in your own code
    if (m_pModifier != NULL) {
        delete m_pModifier;
        m_pModifier = NULL;
    }
}//@CODE_269


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_270
Method which must be called first in a constructor.
*/
void CTerrain::ConstructorInclude()
{
}


/*@NOTE_271
Method which must be called first in a destructor.
*/
void CTerrain::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

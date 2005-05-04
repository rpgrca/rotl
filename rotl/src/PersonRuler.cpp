/******************************************************************************\
*
* File:          ../../src/PersonRuler.cpp
* Creation date: April 10, 2005 20:10
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CPersonRuler'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 15, 2005 13:28 ReyBrujo, 2005
*     Updated interface of method 'SetRespect'
*     Updated code of method 'GetRespect'
*     Updated code of method '~CPersonRuler'
*     Updated code of method 'CPersonRuler'
*     Updated inheritance 'CPersonGeneral'
*     Updated member 'm_nFriendship'
*     Updated member 'm_nRespect'
* April 14, 2005 01:33 ReyBrujo, 2005
*     Added method 'SetRespect'
*     Added method 'GetRespect'
*     Added member 'm_nFriendship'
*     Added member 'm_nRespect'
*     Updated code of method 'CPersonRuler'
* April 12, 2005 23:05 ReyBrujo, 2005
*     Updated code of method 'CPersonRuler'
* April 10, 2005 20:11 ReyBrujo
*     Added method 'CPersonRuler'
* April 10, 2005 20:10 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CPersonRuler'
*     Added inheritance 'CGeneral'
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




/*@NOTE_211
Constructor method.
*/
CPersonRuler::CPersonRuler() //@INIT_211
    : CPersonGeneral()
    , m_nRespect(0)
{//@CODE_211
    ConstructorInclude();

    // Put in your own code
    unsigned int uIndex;

    for (uIndex = 0; uIndex < (sizeof(m_nFriendship) / sizeof(*m_nFriendship)); uIndex++)
        m_nFriendship[uIndex] = 0;

    SetType(enPERSONTYPE_RULER);
}//@CODE_211


/*@NOTE_187
Destructor method.
*/
CPersonRuler::~CPersonRuler()
{//@CODE_187
    DestructorInclude();

    // Put in your own code
}//@CODE_187


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_188
Method which must be called first in a constructor.
*/
void CPersonRuler::ConstructorInclude()
{
}


/*@NOTE_189
Method which must be called first in a destructor.
*/
void CPersonRuler::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

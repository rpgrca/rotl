/******************************************************************************\
*
* File:          ../../src/Input.cpp
* Creation date: April 15, 2005 16:10
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CInput'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 18:53 ReyBrujo, 2005
*     Updated code of method 'CInput'
* April 17, 2005 18:27 ReyBrujo, 2005
*     Updated interface of method 'PollCommand'
*     Updated interface of method 'Add'
* April 17, 2005 18:03 ReyBrujo, 2005
*     Updated code of method 'GetCommand'
*     Updated return type of method 'GetCommand'
* April 17, 2005 17:58 ReyBrujo, 2005
*     Updated code of method 'Clear'
*     Updated interface of method 'Add'
*     Updated code of method '~CInput'
*     Updated member 'm_aActionBuffer'
* April 17, 2005 02:27 ReyBrujo, 2005
*     Updated member 'm_aInputBuffer'
* April 16, 2005 18:36 ReyBrujo, 2005
*     Updated code of method 'GetCommand'
* April 15, 2005 19:26 ReyBrujo, 2005
*     Updated code of method 'Add'
* April 15, 2005 19:25 ReyBrujo, 2005
*     Added method 'Add'
*     Added member 'm_nIndex'
*     Updated code of method 'GetCommand'
*     Updated code of method 'Clear'
* April 15, 2005 19:07 ReyBrujo, 2005
*     Updated code of method 'Clear'
* April 15, 2005 19:06 ReyBrujo, 2005
*     Updated code of method 'CInput'
* April 15, 2005 19:06 ReyBrujo, 2005
*     Updated code of method 'Clear'
*     Updated code of method '~CInput'
* April 15, 2005 19:03 ReyBrujo, 2005
*     Added member 'm_eInputBuffer'
*     Updated code of method 'GetCommand'
* April 15, 2005 19:00 ReyBrujo, 2005
*     Updated code of method 'Clear'
* April 15, 2005 17:58 ReyBrujo, 2005
*     Updated code of method 'CInput'
* April 15, 2005 17:57 ReyBrujo, 2005
*     Updated code of method '~CInput'
*     Updated code of method 'CInput'
*     Updated member 'm_pInputBuffer'
* April 15, 2005 17:48 ReyBrujo, 2005
*     Deleted member 'm_eInputBuffer'
*     Updated code of method 'Clear'
* April 15, 2005 16:47 ReyBrujo, 2005
*     Updated code of method 'CInput'
* April 15, 2005 16:47 ReyBrujo, 2005
*     Updated member 'm_Buffer'
* April 15, 2005 16:42 ReyBrujo, 2005
*     Added member 'm_teste'
* April 15, 2005 16:10 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'PollCommand'
*     Added method 'GetCommand'
*     Added method 'Clear'
*     Added method '~CInput'
*     Added method 'CInput'
*     Added member 'm_eInputBuffer'
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




/*@NOTE_1702
Constructor method.
*/
CInput::CInput() //@INIT_1702
    : m_nIndex(0)
{//@CODE_1702
    ConstructorInclude();

    // Put in your own code
    unsigned int uIndex;

    for (uIndex = 0; uIndex < (sizeof(m_aActionBuffer) / sizeof(*m_aActionBuffer)); uIndex++)
        m_aActionBuffer[uIndex] = NULL;
}//@CODE_1702


/*@NOTE_1687
Destructor method.
*/
CInput::~CInput()
{//@CODE_1687
    DestructorInclude();

    // Put in your own code
    Clear();
}//@CODE_1687


/*@NOTE_1706
Adds a new command action to the internal buffer of input commands.
*/
bool CInput::Add(CAction* pAction, const bool bDestroy)
{//@CODE_1706
    if (m_nIndex < CONST_MAXIMUN_INPUT_BUFFER) {
        m_aActionBuffer[m_nIndex++] = pAction;
        return (true);
    }

    if (bDestroy)
        delete pAction;

    return (false);
}//@CODE_1706


/*@NOTE_1701
Clears the internal input buffer.
*/
void CInput::Clear()
{//@CODE_1701
    unsigned int uIndex;

    for (uIndex = 0; uIndex < (sizeof(m_aActionBuffer) / sizeof(*m_aActionBuffer)); uIndex++)
        if (m_aActionBuffer[uIndex] != NULL) {
            delete m_aActionBuffer[uIndex];
            m_aActionBuffer[uIndex] = NULL;
        }

    m_nIndex = 0;
}//@CODE_1701


/*@NOTE_1700
Gets the next command from the input buffer.
*/
CAction* CInput::GetCommand()
{//@CODE_1700
    CAction *pResult = NULL;
    unsigned int uIndex;

    pResult = m_aActionBuffer[0];
    if (m_nIndex > 0)
        m_nIndex--;

    for (uIndex = 0; uIndex < (sizeof(m_aActionBuffer) / sizeof(*m_aActionBuffer)) - 1; uIndex++)
        m_aActionBuffer[uIndex] = m_aActionBuffer[uIndex + 1];

    m_aActionBuffer[uIndex] = NULL;
    return (pResult);
}//@CODE_1700


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1688
Method which must be called first in a constructor.
*/
void CInput::ConstructorInclude()
{
}


/*@NOTE_1689
Method which must be called first in a destructor.
*/
void CInput::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

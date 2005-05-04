/******************************************************************************\
*
* File:          ../../src/ut/UnitTesting.cpp
* Creation date: April 15, 2005 21:44
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CUnitTesting'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 01:07 ReyBrujo, 2005
*     Updated interface of method 'GetErrorMessage'
* April 15, 2005 21:50 ReyBrujo, 2005
*     Updated interface of method 'SetStatus'
*     Updated code of method 'GetStatus'
*     Updated code of method '~CUnitTesting'
*     Updated code of method 'CUnitTesting'
*     Updated member 'm_strErrorMessage'
*     Updated member 'm_Status'
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




/*@NOTE_1757
Constructor method.
*/
CUnitTesting::CUnitTesting() //@INIT_1757
    : m_Status(false)
{//@CODE_1757
    ConstructorInclude();

    // Put in your own code
    memset(m_strErrorMessage, '\0', sizeof(m_strErrorMessage));
}//@CODE_1757


/*@NOTE_1727
Destructor method.
*/
CUnitTesting::~CUnitTesting()
{//@CODE_1727
    DestructorInclude();

    // Put in your own code
}//@CODE_1727


/*@NOTE_1768
Gets the error message of the object.
*/
char* CUnitTesting::GetErrorMessage(char* pBuffer, const int nSize)
{//@CODE_1768
    if (pBuffer != NULL && nSize > 0) {
        memset(pBuffer, '\0', nSize);
        strncpy(pBuffer, m_strErrorMessage, nSize);
    }

    return (pBuffer);
}//@CODE_1768


/*@NOTE_1764
Returns the name of the test.
*/
const char* CUnitTesting::GetName(char* pErrorMessage, const int nLength) const
{//@CODE_1764
    memset(pErrorMessage, '\0', nLength);
    if (pErrorMessage != NULL)
        strncpy(pErrorMessage, m_strErrorMessage, nLength);

    return (pErrorMessage);
}//@CODE_1764


/*@NOTE_1767
Sets the error message for the object.
*/
void CUnitTesting::SetErrorMessage(const char* pErrorMessage)
{//@CODE_1767
    if (pErrorMessage != NULL)
        strncpy(m_strErrorMessage, pErrorMessage, sizeof(m_strErrorMessage));
}//@CODE_1767


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1728
Method which must be called first in a constructor.
*/
void CUnitTesting::ConstructorInclude()
{
}


/*@NOTE_1729
Method which must be called first in a destructor.
*/
void CUnitTesting::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

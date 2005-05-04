/******************************************************************************\
*
* File:          ../../src/uc/UnitTestingSet.cpp
* Creation date: April 15, 2005 21:45
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CUnitTestingSet'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 01:07 ReyBrujo, 2005
*     Updated code of method 'GetErrorMessage'
* April 16, 2005 01:03 ReyBrujo, 2005
*     Added method 'GetErrorMessage'
*     Updated code of method 'Execute'
* April 15, 2005 21:50 ReyBrujo, 2005
*     Updated interface of method 'AddTest'
*     Updated code of method '~CUnitTestingSet'
*     Updated code of method 'CUnitTestingSet'
*     Updated member 'm_pFixture'
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




/*@NOTE_1755
Constructor method.
*/
CUnitTestingSet::CUnitTestingSet() //@INIT_1755

{//@CODE_1755
    ConstructorInclude();

    // Put in your own code
    unsigned int uIndex;

    for (uIndex = 0; uIndex < (sizeof(m_pFixture) / sizeof(*m_pFixture)); uIndex++)
        m_pFixture[uIndex] = NULL;
}//@CODE_1755


/*@NOTE_1748
Destructor method.
*/
CUnitTestingSet::~CUnitTestingSet()
{//@CODE_1748
    DestructorInclude();

    // Put in your own code
    unsigned int uIndex;

    for (uIndex = 0; uIndex < (sizeof(m_pFixture) / sizeof(*m_pFixture)); uIndex++)
        if (m_pFixture[uIndex]) {
            delete m_pFixture[uIndex];
            m_pFixture[uIndex] = NULL;
        }
}//@CODE_1748


/*@NOTE_1753
Adds a new test to the current set.
*/
bool CUnitTestingSet::AddTest(CUnitTesting* pUnitTesting, bool bDestruct)
{//@CODE_1753
    unsigned int uIndex;

    for (uIndex = 0; uIndex < (sizeof(m_pFixture) / sizeof(*m_pFixture)); uIndex++)
        if (m_pFixture[uIndex] == NULL) {
            m_pFixture[uIndex] = pUnitTesting;
            return (true);
        }

    if (bDestruct)
        delete pUnitTesting;

    return (false);
}//@CODE_1753


/*@NOTE_1758
Executes all the unit tests, and returns true if all run correctly or false if at least one failed.
*/
bool CUnitTestingSet::Execute()
{//@CODE_1758
    unsigned int uIndex;
    bool bResult = true;

    for (uIndex = 0; uIndex < (sizeof(m_pFixture) / sizeof(*m_pFixture)); uIndex++)
        if (m_pFixture[uIndex] != NULL)
            bResult = bResult && m_pFixture[uIndex]->Execute();

    return (bResult);
}//@CODE_1758


/*@NOTE_1794
Fetches all the error messages in all the tests.
*/
char* CUnitTestingSet::GetErrorMessage(char* pBuffer, const int nSize)
{//@CODE_1794
    unsigned int uIndex;
    char strBuffer[1024];
    char strResult[256];

    if ((pBuffer != NULL) && (nSize > 0)) {
        memset(pBuffer, '\0', nSize);
        memset(strBuffer, '\0', sizeof(strBuffer));
        memset(strResult, '\0', sizeof(strResult));

        for (uIndex = 0; uIndex < (sizeof(m_pFixture) / sizeof(*m_pFixture)); uIndex++)
            if (m_pFixture[uIndex] != NULL) {
                m_pFixture[uIndex]->GetErrorMessage(strResult, sizeof(strResult));

                if (strBuffer[0] == '\0')
                    snprintf(strBuffer, sizeof(strBuffer), "%s\n", strResult);
                else {
                    strncat(strBuffer, strResult, sizeof(strBuffer));
                    strncat(strBuffer, "\n", sizeof(strBuffer));
                }
            }

        strncpy(pBuffer, strBuffer, nSize);
    }

    return (pBuffer);
}//@CODE_1794


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1749
Method which must be called first in a constructor.
*/
void CUnitTestingSet::ConstructorInclude()
{
}


/*@NOTE_1750
Method which must be called first in a destructor.
*/
void CUnitTestingSet::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

/******************************************************************************\
*
* File:          ../../src/Base.cpp
* Creation date: April 10, 2005 20:10
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CBase'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 14:52 ReyBrujo, 2005
*     Updated code of method 'operator =='
* April 16, 2005 14:48 ReyBrujo, 2005
*     Added method 'operator =='
* April 16, 2005 01:47 ReyBrujo, 2005
*     Updated code of method 'GetName'
* April 12, 2005 17:34 ReyBrujo
*     Updated code of method 'CBase'
* April 12, 2005 17:32 ReyBrujo
*     Updated code of method 'CBase'
* April 12, 2005 17:13 ReyBrujo
*     Updated code of method 'GetObjectID'
*     Updated member 'm_nObjectID'
* April 12, 2005 17:12 ReyBrujo
*     Added method 'GetObjectID'
*     Added member 'm_nObjectID'
*     Added member 'm_nCounter'
* April 11, 2005 03:18 ReyBrujo, 2005
*     Updated code of method 'GetName'
*     Updated return type of method 'GetName'
* April 10, 2005 22:31 ReyBrujo
*     Updated code of method 'GetName'
* April 10, 2005 22:31 ReyBrujo
*     Updated code of method 'GetName'
* April 10, 2005 21:07 ReyBrujo
*     Updated code of method '~CBase'
* April 10, 2005 20:10 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetName'
*     Added method 'GetName'
*     Added method 'FreeName'
*     Added method '~CBase'
*     Added method 'CBase'
*     Added member 'm_strName'
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


// Static members
int CBase::m_nCounter = 0;


/*@NOTE_204
Constructor method.
*/
CBase::CBase() //@INIT_204
    : m_strName(NULL)
    , m_nObjectID(m_nCounter++)
{//@CODE_204
    ConstructorInclude();

    // Put in your own code
}//@CODE_204


/*@NOTE_195
Destructor method.
*/
CBase::~CBase()
{//@CODE_195
    DestructorInclude();

    // Put in your own code
    FreeName();
}//@CODE_195


/*@NOTE_205
Deletes the name buffer and sets it to NULL.
*/
void CBase::FreeName()
{//@CODE_205
        if (m_strName != NULL) {
            delete [] m_strName;
            m_strName = NULL;
        }
}//@CODE_205


/*@NOTE_201
Returns the name of the object.
*/
char* CBase::GetName(char* pstrName, const int nLength)
{//@CODE_201
    int nNameLength;

    if ((pstrName != NULL) && (nLength > 0)) {
        if (m_strName != NULL) {
            nNameLength = strlen(m_strName);

            if (nLength > nNameLength) {
                memset(pstrName, '\0', nLength);
                strncpy(pstrName, m_strName, nNameLength);
            }
        }
        else
            pstrName[0] = '\0';
    }

    return (pstrName);
}//@CODE_201


/*@NOTE_2114
Checks if two objects are similar.
*/
bool CBase::operator ==(CBase* pBase)
{//@CODE_2114
    bool bResult;

    bResult = (this->m_nObjectID == pBase->m_nObjectID);
    return (bResult);
}//@CODE_2114


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_196
Method which must be called first in a constructor.
*/
void CBase::ConstructorInclude()
{
}


/*@NOTE_197
Method which must be called first in a destructor.
*/
void CBase::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

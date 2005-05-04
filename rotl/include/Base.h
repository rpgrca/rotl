/******************************************************************************\
*
* File:          ../../include/Base.h
* Creation date: April 10, 2005 20:10
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CBase'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 14:48 ReyBrujo, 2005
*     Added method 'operator =='
* April 12, 2005 17:13 ReyBrujo
*     Updated member 'm_nObjectID'
* April 12, 2005 17:12 ReyBrujo
*     Added method 'GetObjectID'
*     Added member 'm_nObjectID'
*     Added member 'm_nCounter'
* April 11, 2005 03:18 ReyBrujo, 2005
*     Updated return type of method 'GetName'
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
#ifndef _BASE_H
#define _BASE_H

//@START_USER1
#include <cstdio>
#include <cstdlib>
#include <cstring>
//@END_USER1


/*@NOTE_194
The base class. All classes inherit from this base.
*/

class CBase
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

private:
    char* m_strName;
    static int m_nCounter;

public:
    int m_nObjectID;

//
// Non-Grouped Methods
//

public:
    CBase();
    virtual ~CBase();
    void FreeName();
    char* GetName(char* pstrName, const int nLength);
    bool operator ==(CBase* pBase);
    int GetObjectID() const;
    void SetName(const char* strName);
};

#endif


#ifdef CB_INLINES
#ifndef _BASE_H_INLINES
#define _BASE_H_INLINES

/*@NOTE_999
Returns the value of member 'm_nObjectID'.
*/
inline int CBase::GetObjectID() const
{//@CODE_999
    return m_nObjectID;
}//@CODE_999



/*@NOTE_28
Set the value of member 'm_strName' to 'strName'.
*/
inline void CBase::SetName(const char* strName)
{//@CODE_28
    int nLength;

    if (strName != NULL) {
        FreeName();

        nLength = strlen(strName);
        m_strName = new char [nLength + 1];
        if (m_strName != NULL) {
            strncpy(m_strName, strName, nLength);
            m_strName[nLength] = '\0';
        }
    }
}//@CODE_28



//@START_USER3
//@END_USER3

#endif
#endif

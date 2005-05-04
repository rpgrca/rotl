/******************************************************************************\
*
* File:          ../../src/ut/UnitTesting.h
* Creation date: April 15, 2005 21:44
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CUnitTesting'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 01:07 ReyBrujo, 2005
*     Updated interface of method 'GetErrorMessage'
* April 15, 2005 21:50 ReyBrujo, 2005
*     Updated interface of method 'SetStatus'
*     Updated member 'm_strErrorMessage'
*     Updated member 'm_Status'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _UNITTESTING_H
#define _UNITTESTING_H

//@START_USER1
//@END_USER1


/*@NOTE_1726
Basic unit testing interface.
*/

class CUnitTesting
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
    bool m_Status;
    char m_strErrorMessage[1024];

//
// Non-Grouped Methods
//

protected:
    void SetErrorMessage(const char* pErrorMessage);
    void SetStatus(const bool status);

public:
    CUnitTesting();
    virtual ~CUnitTesting();
    virtual bool Execute() = 0;
    char* GetErrorMessage(char* pBuffer, const int nSize);
    virtual const char* GetName(char* pErrorMessage, const int nLength) const;
    bool GetStatus() const;
};

#endif


#ifdef CB_INLINES
#ifndef _UNITTESTING_H_INLINES
#define _UNITTESTING_H_INLINES

/*@NOTE_1760
Returns the value of member 'm_Status'.
*/
inline bool CUnitTesting::GetStatus() const
{//@CODE_1760
    return m_Status;
}//@CODE_1760



/*@NOTE_1761
Set the value of member 'm_Status' to 'status'.
*/
inline void CUnitTesting::SetStatus(const bool status)
{//@CODE_1761
    m_Status = status;
}//@CODE_1761



//@START_USER3
//@END_USER3

#endif
#endif

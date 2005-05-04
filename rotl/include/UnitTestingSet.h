/******************************************************************************\
*
* File:          ../../src/uc/UnitTestingSet.h
* Creation date: April 15, 2005 21:45
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CUnitTestingSet'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 01:03 ReyBrujo, 2005
*     Added method 'GetErrorMessage'
* April 15, 2005 21:50 ReyBrujo, 2005
*     Updated interface of method 'AddTest'
*     Updated member 'm_pFixture'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _UNITTESTINGSET_H
#define _UNITTESTINGSET_H

//@START_USER1
//@END_USER1


/*@NOTE_1747
This class runs all the tests and returns true if all of them were fine, or false if not.
*/

class CUnitTestingSet
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
    CUnitTesting* m_pFixture[100];

//
// Non-Grouped Methods
//

public:
    CUnitTestingSet();
    virtual ~CUnitTestingSet();
    bool AddTest(CUnitTesting* pUnitTesting, bool bDestruct = false);
    bool Execute();
    char* GetErrorMessage(char* pBuffer, const int nSize);
};

#endif


#ifdef CB_INLINES
#ifndef _UNITTESTINGSET_H_INLINES
#define _UNITTESTINGSET_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

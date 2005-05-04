/******************************************************************************\
*
* File:          ../../include/UnitTestingAction.h
* Creation date: April 16, 2005 03:07
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CUnitTestingAction'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 03:07 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'TestFarm'
*     Added method 'GetName'
*     Added method 'Execute'
*     Added method '~CUnitTestingAction'
*     Added method 'CUnitTestingAction'
*     Added inheritance 'CUnitTesting'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _UNITTESTINGACTION_H
#define _UNITTESTINGACTION_H

//@START_USER1
//@END_USER1



class CUnitTestingAction
    : public CUnitTesting
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

//
// Non-Grouped Methods
//

public:
    CUnitTestingAction();
    virtual ~CUnitTestingAction();
    virtual bool Execute();
    virtual const char* GetName(char* pErrorMessage, const int nLength) const;
    bool TestFarm() const;
};

#endif


#ifdef CB_INLINES
#ifndef _UNITTESTINGACTION_H_INLINES
#define _UNITTESTINGACTION_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

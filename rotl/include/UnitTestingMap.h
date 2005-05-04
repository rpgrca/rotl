/******************************************************************************\
*
* File:          ../../include/UnitTestingMap.h
* Creation date: April 16, 2005 02:33
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CUnitTestingMap'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:56 ReyBrujo, 2005
*     Added method 'LoadMap'
* April 16, 2005 02:33 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'GetName'
*     Added method 'Execute'
*     Added method 'CreateMap'
*     Added method '~CUnitTestingMap'
*     Added method 'CUnitTestingMap'
*     Added inheritance 'CUnitTesting'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _UNITTESTINGMAP_H
#define _UNITTESTINGMAP_H

//@START_USER1
//@END_USER1



class CUnitTestingMap
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
    CUnitTestingMap();
    virtual ~CUnitTestingMap();
    bool CreateMap() const;
    virtual bool Execute();
    virtual const char* GetName(char* pErrorMessage, const int nLength) const;
    bool LoadMap() const;
};

#endif


#ifdef CB_INLINES
#ifndef _UNITTESTINGMAP_H_INLINES
#define _UNITTESTINGMAP_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

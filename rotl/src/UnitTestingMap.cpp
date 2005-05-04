/******************************************************************************\
*
* File:          ../../src/UnitTestingMap.cpp
* Creation date: April 16, 2005 02:33
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CUnitTestingMap'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 03:07 ReyBrujo, 2005
*     Updated code of method 'CreateMap'
* April 16, 2005 03:02 ReyBrujo, 2005
*     Updated code of method 'LoadMap'
* April 16, 2005 03:00 ReyBrujo, 2005
*     Updated code of method 'LoadMap'
* April 16, 2005 02:59 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method 'LoadMap'
*     Updated interface of method 'GetName'
*     Updated code of method 'Execute'
*     Updated code of method 'CreateMap'
*     Updated code of method '~CUnitTestingMap'
*     Updated code of method 'CUnitTestingMap'
*     Updated inheritance 'CUnitTesting'
* April 16, 2005 02:56 ReyBrujo, 2005
*     Added method 'LoadMap'
* April 16, 2005 02:43 ReyBrujo, 2005
*     Updated code of method 'Execute'
* April 16, 2005 02:42 ReyBrujo, 2005
*     Updated code of method 'Execute'
* April 16, 2005 02:39 ReyBrujo, 2005
*     Updated code of method 'GetName'
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
//@START_USER1
//@END_USER1


// Master include file
#include "rotl.h"


//@START_USER2
//@END_USER2




/*@NOTE_1808
Constructor method.
*/
CUnitTestingMap::CUnitTestingMap() //@INIT_1808
    : CUnitTesting()
{//@CODE_1808
    ConstructorInclude();

    // Put in your own code
}//@CODE_1808


/*@NOTE_1800
Destructor method.
*/
CUnitTestingMap::~CUnitTestingMap()
{//@CODE_1800
    DestructorInclude();

    // Put in your own code
}//@CODE_1800


/*@NOTE_1810
Checks the default map has the right values.
*/
bool CUnitTestingMap::CreateMap() const
{//@CODE_1810
    CMap *pMap = NULL;
    bool bResult = true;

    pMap = new CMap;
    if (pMap != NULL) {
        bResult = bResult && (pMap->GetCurrentWeek()  == CONST_DEFAULT_MAP_CURRENT_WEEK);
        bResult = bResult && (pMap->GetCurrentMonth() == CONST_DEFAULT_MAP_CURRENT_MONTH);
        bResult = bResult && (pMap->GetCurrentYear()  == CONST_DEFAULT_MAP_CURRENT_YEAR);
        bResult = bResult && (pMap->GetHeight()       == CONST_DEFAULT_MAP_HEIGHT);
        bResult = bResult && (pMap->GetWidth()        == CONST_DEFAULT_MAP_WIDTH);
    }
    else
        bResult = false;

    return (bResult);
}//@CODE_1810


/*@NOTE_1809
Executes the testing.
*/
bool CUnitTestingMap::Execute()
{//@CODE_1809
    if (! CreateMap()) {
        SetErrorMessage("CUnitTestingMap::CreateMap() failed!");
        return (false);
    }

    if (! LoadMap()) {
        SetErrorMessage("CUnitTestingMap::LoadMap() failed!");
        return (false);
    }
 
    return (true);
}//@CODE_1809


/*@NOTE_1805
Returns the name of the test.
*/
const char* CUnitTestingMap::GetName(char* pErrorMessage,
                                     const int nLength) const
{//@CODE_1805
    if ((pErrorMessage != NULL) && (nLength > 0))
        strncpy(pErrorMessage, "CUnitTestingMap", nLength);

    return (pErrorMessage);
}//@CODE_1805


/*@NOTE_1813
Tests if the engine is loading maps correctly.
*/
bool CUnitTestingMap::LoadMap() const
{//@CODE_1813
    FILE        *outFile     = NULL;
    CMap        *pMap        = NULL;
    CMapFactory *pMapFactory = NULL;
    bool bResult = true;
    char strBuffer[512];

    outFile = fopen("./Maps/01.map", "wt");
    if (outFile != NULL) {
        fprintf(outFile, "South America\n0\n0\n100\n5\n7\n0\n0\n0\n0\n0\n0\n0\n0\n0\n0\n0\n0\n0\n0\n0\n0\n0\n0\n0\n0\n0\n1\n1\n0\n0\n2\n2\n2\n2\n2\n2\n2\n2\n2\n2\n");
        fclose(outFile);
    }

    pMapFactory = new CMapFactory;
    if (pMapFactory != NULL) {
        pMap = pMapFactory->Load("./Maps/01.map");
        if (pMap != NULL) {
            memset(strBuffer, '\0', sizeof(strBuffer));
            bResult = bResult && (! strcmp(pMap->GetName(strBuffer, sizeof(strBuffer)), "South America"));
            bResult = bResult && (pMap->GetCurrentWeek()  == 0);
            bResult = bResult && (pMap->GetCurrentMonth() == 0);
            bResult = bResult && (pMap->GetCurrentYear()  == 100);
            bResult = bResult && (pMap->GetWidth()        == 5);
            bResult = bResult && (pMap->GetHeight()       == 7);

            //  TODO: Check that every loaded terrain is right.
            delete pMap;
        }
        else
            bResult = false;

        delete pMapFactory;
    }

    return (bResult);
}//@CODE_1813


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1801
Method which must be called first in a constructor.
*/
void CUnitTestingMap::ConstructorInclude()
{
}


/*@NOTE_1802
Method which must be called first in a destructor.
*/
void CUnitTestingMap::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

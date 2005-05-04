/******************************************************************************\
*
* File:          ../../src/UnitTestingAction.cpp
* Creation date: April 16, 2005 03:07
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CUnitTestingAction'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 17:53 ReyBrujo, 2005
*     Updated code of method 'TestFarm'
* April 16, 2005 17:08 ReyBrujo, 2005
*     Updated code of method 'TestFarm'
* April 16, 2005 15:20 ReyBrujo, 2005
*     Updated code of method 'TestFarm'
* April 16, 2005 15:18 ReyBrujo, 2005
*     Updated code of method 'TestFarm'
* April 16, 2005 15:17 ReyBrujo, 2005
*     Updated code of method 'TestFarm'
* April 16, 2005 15:11 ReyBrujo, 2005
*     Updated code of method 'TestFarm'
* April 16, 2005 14:48 ReyBrujo, 2005
*     Updated code of method 'TestFarm'
*     Updated code of method 'Execute'
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
//@START_USER1
//@END_USER1


// Master include file
#include "rotl.h"


//@START_USER2
//@END_USER2




/*@NOTE_1820
Constructor method.
*/
CUnitTestingAction::CUnitTestingAction() //@INIT_1820
    : CUnitTesting()
{//@CODE_1820
    ConstructorInclude();

    // Put in your own code
}//@CODE_1820


/*@NOTE_1815
Destructor method.
*/
CUnitTestingAction::~CUnitTestingAction()
{//@CODE_1815
    DestructorInclude();

    // Put in your own code
}//@CODE_1815


/*@NOTE_1824
Executes the testing.
*/
bool CUnitTestingAction::Execute()
{//@CODE_1824
    if (! TestFarm()) {
        SetErrorMessage("CUnitTestingAction::TestFarm() failed!");
        return (false);
    }

    return (true);
}//@CODE_1824


/*@NOTE_1821
Returns the name of the test.
*/
const char* CUnitTestingAction::GetName(char* pErrorMessage,
                                        const int nLength) const
{//@CODE_1821
    if ((pErrorMessage != NULL) && (nLength > 0))
        strncpy(pErrorMessage, "CUnitTestingAction", nLength);

    return (pErrorMessage);
}//@CODE_1821


bool CUnitTestingAction::TestFarm() const
{//@CODE_1825
    CCityActionFarm *pCityActionFarm = NULL;
    CCity        *pCity = NULL;
    CPersonRuler *pRuler = NULL;
    CUnit        *pUnit = NULL;
    bool bResult = false;

    pCityActionFarm = new CCityActionFarm;
    if (pCityActionFarm != NULL) {
        pRuler = new CPersonRuler;

        if (pRuler != NULL) {
            pRuler->SetRespect(15);

            pUnit = new CUnit;
            if (pUnit != NULL) {
                pUnit->SetSoldiers(1000);
                pUnit->SetGold(2500);
                pUnit->SetRuler(pRuler);

                pCity = new CCity;
                if (pCity != NULL) {
                    pCity->SetCropValue(10);
                    pCity->SetLoyalty(10);
                    pCity->SetRuler(pRuler);

                    pCityActionFarm->SetCity(pCity);
                    pCityActionFarm->SetUnit(pUnit);

                    bResult = pCityActionFarm->Execute();

                    bResult = bResult && (pCity->GetLoyalty() == 11);
                    bResult = bResult && (pCity->GetCropValue() == 14);
                    bResult = bResult && (pUnit->GetGold() == 2400);

                    delete pCity;
                }

                delete pUnit;
            }

            delete pRuler;
        }

        delete pCityActionFarm;
    }

    return (bResult);
}//@CODE_1825


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1816
Method which must be called first in a constructor.
*/
void CUnitTestingAction::ConstructorInclude()
{
}


/*@NOTE_1817
Method which must be called first in a destructor.
*/
void CUnitTestingAction::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

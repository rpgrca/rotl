/******************************************************************************\
*
* File:          UnitTestingCity.h
* Creation date: April 15, 2005 21:44
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CUnitTestingCity'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:01 ReyBrujo, 2005
*     Updated interface of method 'TestCreatedVillageObject'
*     Updated interface of method 'TestCreatedTownObject'
*     Updated interface of method 'TestCreatedMetropolisObject'
*     Updated interface of method 'TestCreatedGranaryObject'
*     Updated interface of method 'TestCreatedFortressObject'
*     Updated interface of method 'TestCreatedCityObject'
*     Updated interface of method 'TestCreatedCitadelObject'
*     Updated interface of method 'TestCreatedCastleObject'
* April 16, 2005 00:29 ReyBrujo, 2005
*     Added method 'CheckLoadCities'
* April 15, 2005 23:39 ReyBrujo, 2005
*     Added method 'CheckVariableTransitivity'
*     Added method 'CheckVariableLimits'
* April 15, 2005 23:18 ReyBrujo, 2005
*     Added method 'TestCreatedVillageObject'
*     Added method 'TestCreatedTownObject'
*     Added method 'TestCreatedMetropolisObject'
*     Added method 'TestCreatedGranaryObject'
*     Added method 'TestCreatedFortressObject'
*     Added method 'TestCreatedCityObject'
*     Added method 'TestCreatedCitadelObject'
*     Added method 'TestCreatedCastleObject'
*     Added method 'CreateThroughCityFactory'
* April 15, 2005 21:50 ReyBrujo, 2005
*     Updated inheritance 'CUnitTesting'
* April 15, 2005 21:44 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'GetName'
*     Added method 'Execute'
*     Added method 'CreateVillage'
*     Added method 'CreateTown'
*     Added method 'CreateMetropolis'
*     Added method 'CreateGranary'
*     Added method 'CreateFortress'
*     Added method 'CreateCity'
*     Added method 'CreateCitadel'
*     Added method 'CreateCastle'
*     Added method '~CUnitTestingCity'
*     Added method 'CUnitTestingCity'
*     Added inheritance 'CUnitTesting'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _UNITTESTINGCITY_H
#define _UNITTESTINGCITY_H

//@START_USER1
//@END_USER1


/*@NOTE_1732
This class does the unit testing for the city modules.
*/

class CUnitTestingCity
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

private:
    bool CheckLoadCities() const;
    bool CheckVariableLimits() const;
    bool CheckVariableTransitivity() const;
    bool CreateCastle() const;
    bool CreateCitadel() const;
    bool CreateCity() const;
    bool CreateFortress() const;
    bool CreateGranary() const;
    bool CreateMetropolis() const;
    bool CreateThroughCityFactory() const;
    bool CreateTown() const;
    bool CreateVillage() const;
    bool TestCreatedCastleObject(CCity* pCityBase) const;
    bool TestCreatedCitadelObject(CCity* pCityBase) const;
    bool TestCreatedCityObject(CCity* pCityBase) const;
    bool TestCreatedFortressObject(CCity* pCityBase) const;
    bool TestCreatedGranaryObject(CCity* pCityBase) const;
    bool TestCreatedMetropolisObject(CCity* pCityBase) const;
    bool TestCreatedTownObject(CCity* pCityBase) const;
    bool TestCreatedVillageObject(CCity* pCityBase) const;

public:
    CUnitTestingCity();
    virtual ~CUnitTestingCity();
    virtual bool Execute();
    virtual const char* GetName(char* pErrorMessage, const int nLength) const;
};

#endif


#ifdef CB_INLINES
#ifndef _UNITTESTINGCITY_H_INLINES
#define _UNITTESTINGCITY_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

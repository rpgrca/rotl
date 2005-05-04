/******************************************************************************\
*
* File:          UnitTestingCity.cpp
* Creation date: April 15, 2005 21:44
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CUnitTestingCity'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:38 ReyBrujo, 2005
*     Updated code of method 'GetName'
* April 16, 2005 02:33 ReyBrujo, 2005
*     Updated code of method 'GetName'
* April 16, 2005 02:01 ReyBrujo, 2005
*     Updated interface of method 'TestCreatedVillageObject'
*     Updated interface of method 'TestCreatedTownObject'
*     Updated interface of method 'TestCreatedMetropolisObject'
*     Updated interface of method 'TestCreatedGranaryObject'
*     Updated interface of method 'TestCreatedFortressObject'
*     Updated interface of method 'TestCreatedCityObject'
*     Updated interface of method 'TestCreatedCitadelObject'
*     Updated interface of method 'TestCreatedCastleObject'
* April 16, 2005 01:49 ReyBrujo, 2005
*     Updated code of method 'CreateThroughCityFactory'
* April 16, 2005 01:44 ReyBrujo, 2005
*     Updated code of method 'TestCreatedCitadelObject'
* April 16, 2005 01:43 ReyBrujo, 2005
*     Updated code of method 'TestCreatedCastleObject'
* April 16, 2005 01:43 ReyBrujo, 2005
*     Updated code of method 'CheckLoadCities'
* April 16, 2005 01:41 ReyBrujo, 2005
*     Updated code of method 'TestCreatedVillageObject'
*     Updated code of method 'TestCreatedTownObject'
*     Updated code of method 'TestCreatedMetropolisObject'
*     Updated code of method 'TestCreatedGranaryObject'
*     Updated code of method 'TestCreatedFortressObject'
*     Updated code of method 'TestCreatedCityObject'
*     Updated code of method 'TestCreatedCitadelObject'
*     Updated code of method 'TestCreatedCastleObject'
*     Updated code of method 'CheckLoadCities'
* April 16, 2005 01:21 ReyBrujo, 2005
*     Updated code of method 'CheckVariableLimits'
* April 16, 2005 01:19 ReyBrujo, 2005
*     Updated code of method 'CheckVariableLimits'
* April 16, 2005 01:17 ReyBrujo, 2005
*     Updated code of method 'CheckVariableLimits'
* April 16, 2005 01:14 ReyBrujo, 2005
*     Updated code of method 'TestCreatedVillageObject'
*     Updated code of method 'TestCreatedTownObject'
*     Updated code of method 'TestCreatedMetropolisObject'
*     Updated code of method 'TestCreatedGranaryObject'
*     Updated code of method 'TestCreatedFortressObject'
*     Updated code of method 'TestCreatedCityObject'
*     Updated code of method 'TestCreatedCitadelObject'
*     Updated code of method 'TestCreatedCastleObject'
* April 16, 2005 00:53 ReyBrujo, 2005
*     Updated code of method 'Execute'
* April 16, 2005 00:45 ReyBrujo, 2005
*     Updated code of method 'CheckLoadCities'
* April 16, 2005 00:32 ReyBrujo, 2005
*     Updated code of method 'CheckVariableTransitivity'
* April 16, 2005 00:31 ReyBrujo, 2005
*     Updated code of method 'CheckVariableLimits'
* April 16, 2005 00:29 ReyBrujo, 2005
*     Added method 'CheckLoadCities'
* April 15, 2005 23:53 ReyBrujo, 2005
*     Updated code of method 'CheckVariableTransitivity'
*     Updated code of method 'CheckVariableLimits'
* April 15, 2005 23:42 ReyBrujo, 2005
*     Updated code of method 'Execute'
* April 15, 2005 23:39 ReyBrujo, 2005
*     Added method 'CheckVariableTransitivity'
*     Added method 'CheckVariableLimits'
* April 15, 2005 23:19 ReyBrujo, 2005
*     Updated code of method 'CreateThroughCityFactory'
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
*     Updated code of method 'CreateVillage'
*     Updated code of method 'CreateTown'
*     Updated code of method 'CreateMetropolis'
*     Updated code of method 'CreateGranary'
*     Updated code of method 'CreateFortress'
*     Updated code of method 'CreateCity'
*     Updated code of method 'CreateCitadel'
*     Updated code of method 'CreateCastle'
* April 15, 2005 22:57 ReyBrujo, 2005
*     Updated code of method 'CreateVillage'
*     Updated code of method 'CreateTown'
*     Updated code of method 'CreateMetropolis'
*     Updated code of method 'CreateGranary'
*     Updated code of method 'CreateFortress'
*     Updated code of method 'CreateCity'
*     Updated code of method 'CreateCitadel'
*     Updated code of method 'CreateCastle'
* April 15, 2005 22:57 ReyBrujo, 2005
*     Updated code of method 'CreateVillage'
*     Updated code of method 'CreateMetropolis'
*     Updated code of method 'CreateGranary'
*     Updated code of method 'CreateFortress'
*     Updated code of method 'CreateCitadel'
*     Updated code of method 'CreateCastle'
* April 15, 2005 22:56 ReyBrujo, 2005
*     Updated code of method 'CreateVillage'
*     Updated code of method 'CreateTown'
*     Updated code of method 'CreateMetropolis'
*     Updated code of method 'CreateGranary'
*     Updated code of method 'CreateFortress'
*     Updated code of method 'CreateCitadel'
*     Updated code of method 'CreateCastle'
* April 15, 2005 21:50 ReyBrujo, 2005
*     Updated code of method '~CUnitTestingCity'
*     Updated code of method 'CUnitTestingCity'
*     Updated inheritance 'CUnitTesting'
* April 15, 2005 21:45 ReyBrujo, 2005
*     Updated code of method '~CUnitTestingCity'
*     Updated code of method 'CUnitTestingCity'
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
//@START_USER1
//@END_USER1


// Master include file
#include "rotl.h"


//@START_USER2
//@END_USER2




/*@NOTE_1756
Constructor method.
*/
CUnitTestingCity::CUnitTestingCity() //@INIT_1756
    : CUnitTesting()
{//@CODE_1756
    ConstructorInclude();

    // Put in your own code
}//@CODE_1756


/*@NOTE_1733
Destructor method.
*/
CUnitTestingCity::~CUnitTestingCity()
{//@CODE_1733
    DestructorInclude();

    // Put in your own code
}//@CODE_1733


/*@NOTE_1793
Checks if it can load correctly the cities.
*/
bool CUnitTestingCity::CheckLoadCities() const
{//@CODE_1793
    //  Create the testing files.
    FILE         *outFile = NULL;
    char          strBuffer[512];
    CCityFactory *pCityFactory = NULL;
    CCity    *pCityBase = NULL;
    bool          bResult = false;

    outFile = fopen("./Cities/01.city", "wt");
    if (outFile != NULL) {
        fprintf(outFile, "6\nGandar\n15000\n10\n99\n15\n1000\n2000\n30\n30\n70\n");
        fclose(outFile);
    }

    outFile = fopen("./Cities/02.city", "wt");
    if (outFile != NULL) {
        fprintf(outFile, "3\nTemplar\n5000\n10\n89\n65\n3000\n3000\n30\n20\n80\n");
        fclose(outFile);
    }

    //  Load the first file.
    pCityFactory = new CCityFactory;

    if (pCityFactory != NULL) {
        pCityBase = pCityFactory->Load("./Cities/01.city");
        if (pCityBase != NULL) {
            bResult =            (pCityBase->GetType()             == static_cast<enCityType>(6));
            bResult = bResult && (pCityBase->GetPopulation()       == CONST_MAXIMUN_CITY_POPULATION);
            bResult = bResult && (pCityBase->GetCropValue()        == 10);
            bResult = bResult && (pCityBase->GetMaximunCropValue() == 99);
            bResult = bResult && (pCityBase->GetDefense()          == 15);
            bResult = bResult && (pCityBase->GetFood()             == 1000);
            bResult = bResult && (pCityBase->GetGold()             == 2000);
            bResult = bResult && (pCityBase->GetHealth()           == 30);
            bResult = bResult && (pCityBase->GetLoyalty()          == 30);
            bResult = bResult && (pCityBase->GetSupport()          == 70);
            bResult = bResult && (! strcmp(pCityBase->GetName(strBuffer, sizeof(strBuffer)), "Gandar"));

            delete pCityBase;
        }
        else
            bResult = false;

        pCityBase = pCityFactory->Load("./Cities/02.city");
        if (pCityBase != NULL) {
            bResult =            (pCityBase->GetType()             == static_cast<enCityType>(3));
            bResult = bResult && (pCityBase->GetPopulation()       == 5000);
            bResult = bResult && (pCityBase->GetCropValue()        == 10);
            bResult = bResult && (pCityBase->GetMaximunCropValue() == 89);
            bResult = bResult && (pCityBase->GetDefense()          == 65);
            bResult = bResult && (pCityBase->GetFood()             == 3000);
            bResult = bResult && (pCityBase->GetGold()             == 3000);
            bResult = bResult && (pCityBase->GetHealth()           == 30);
            bResult = bResult && (pCityBase->GetLoyalty()          == 20);
            bResult = bResult && (pCityBase->GetSupport()          == 80);
            bResult = bResult && (! strcmp(pCityBase->GetName(strBuffer, sizeof(strBuffer)), "Templar"));

            delete pCityBase;
        }
        else
            bResult = false;

        delete pCityFactory;
    }

    return (bResult);
}//@CODE_1793


/*@NOTE_1792
Checks if, when an extremely low or extremely high value is set to one of the city values, it is wrapped.
*/
bool CUnitTestingCity::CheckVariableLimits() const
{//@CODE_1792
    CCity *pCityBase = NULL;
    bool bResult = true;

    pCityBase = new CCity;
    if (pCityBase != NULL) {
        pCityBase->SetCropValue(CONST_MAXIMUN_CITY_CROP_VALUE + 1);
        bResult = bResult && (pCityBase->GetCropValue() == CONST_MAXIMUN_CITY_CROP_VALUE);

        pCityBase->SetCropValue(CONST_MINIMUN_CITY_CROP_VALUE - 1);
        bResult = bResult && (pCityBase->GetCropValue() == CONST_MINIMUN_CITY_CROP_VALUE);
        
        pCityBase->SetDefense(CONST_MAXIMUN_CITY_DEFENSE + 1);
        bResult = bResult && (pCityBase->GetDefense() == CONST_MAXIMUN_CITY_DEFENSE);

        pCityBase->SetDefense(CONST_MINIMUN_CITY_DEFENSE - 1);
        bResult = bResult && (pCityBase->GetDefense() == CONST_MINIMUN_CITY_DEFENSE);

        pCityBase->SetFood(CONST_MAXIMUN_CITY_FOOD + 1);
        bResult = bResult && (pCityBase->GetFood() == CONST_MAXIMUN_CITY_FOOD);

        pCityBase->SetFood(CONST_MINIMUN_CITY_FOOD - 1);
        bResult = bResult && (pCityBase->GetFood() == CONST_MINIMUN_CITY_FOOD);

        pCityBase->SetGold(CONST_MAXIMUN_CITY_GOLD + 1);
        bResult = bResult && (pCityBase->GetGold() == CONST_MAXIMUN_CITY_GOLD);

        pCityBase->SetGold(CONST_MINIMUN_CITY_GOLD - 1);
        bResult = bResult && (pCityBase->GetGold() == CONST_MINIMUN_CITY_GOLD);

        pCityBase->SetHealth(CONST_MAXIMUN_CITY_HEALTH + 1);
        bResult = bResult && (pCityBase->GetHealth() == CONST_MAXIMUN_CITY_HEALTH);

        pCityBase->SetHealth(CONST_MINIMUN_CITY_HEALTH - 1);
        bResult = bResult && (pCityBase->GetHealth() == CONST_MINIMUN_CITY_HEALTH);

        pCityBase->SetLoyalty(CONST_MAXIMUN_CITY_LOYALTY + 1);
        bResult = bResult && (pCityBase->GetLoyalty() == CONST_MAXIMUN_CITY_LOYALTY);

        pCityBase->SetLoyalty(CONST_MINIMUN_CITY_LOYALTY - 1);
        bResult = bResult && (pCityBase->GetLoyalty() == CONST_MINIMUN_CITY_LOYALTY);

        pCityBase->SetMaximunCropValue(CONST_MAXIMUN_CITY_CROP_VALUE + 1);
        bResult = bResult && (pCityBase->GetMaximunCropValue() == CONST_MAXIMUN_CITY_CROP_VALUE);

        pCityBase->SetMaximunCropValue(CONST_MINIMUN_CITY_CROP_VALUE - 1);
        bResult = bResult && (pCityBase->GetMaximunCropValue() == CONST_MINIMUN_CITY_CROP_VALUE);

        pCityBase->SetPopulation(CONST_MAXIMUN_CITY_POPULATION + 1);
        bResult = bResult && (pCityBase->GetPopulation() == CONST_MAXIMUN_CITY_POPULATION);

        pCityBase->SetPopulation(CONST_MINIMUN_CITY_POPULATION - 1);
        bResult = bResult && (pCityBase->GetPopulation() == CONST_MINIMUN_CITY_POPULATION);

        pCityBase->SetSupport(CONST_MAXIMUN_CITY_SUPPORT + 1);
        bResult = bResult && (pCityBase->GetSupport() == CONST_MAXIMUN_CITY_SUPPORT);

        pCityBase->SetSupport(CONST_MINIMUN_CITY_SUPPORT - 1);
        bResult = bResult && (pCityBase->GetSupport() == CONST_MINIMUN_CITY_SUPPORT);

        delete pCityBase;
    }
    else
        bResult = false;

    return (bResult);
}//@CODE_1792


/*@NOTE_1791
Checks that, if a variable is set a value, it holds the value.
*/
bool CUnitTestingCity::CheckVariableTransitivity() const
{//@CODE_1791
    CCity *pCityBase = NULL;
    int nValue;
    bool bResult = true;

    pCityBase = new CCity;
    if (pCityBase != NULL) {
        nValue = (CONST_MAXIMUN_CITY_CROP_VALUE + CONST_MINIMUN_CITY_CROP_VALUE) / 2;
        pCityBase->SetCropValue(nValue);
        bResult = bResult && (pCityBase->GetCropValue() == nValue);

        nValue = (CONST_MAXIMUN_CITY_DEFENSE + CONST_MINIMUN_CITY_DEFENSE) / 2;
        pCityBase->SetDefense(nValue);
        bResult = bResult && (pCityBase->GetDefense() == nValue);

        nValue = (CONST_MAXIMUN_CITY_FOOD + CONST_MINIMUN_CITY_FOOD) / 2;
        pCityBase->SetFood(nValue);
        bResult = bResult && (pCityBase->GetFood() == nValue);

        nValue = (CONST_MAXIMUN_CITY_GOLD + CONST_MINIMUN_CITY_GOLD) / 2;
        pCityBase->SetGold(nValue);
        bResult = bResult && (pCityBase->GetGold() == nValue);

        nValue = (CONST_MAXIMUN_CITY_HEALTH + CONST_MINIMUN_CITY_HEALTH) / 2;
        pCityBase->SetHealth(nValue);
        bResult = bResult && (pCityBase->GetHealth() == nValue);

        nValue = (CONST_MAXIMUN_CITY_LOYALTY + CONST_MINIMUN_CITY_LOYALTY) / 2;
        pCityBase->SetLoyalty(nValue);
        bResult = bResult && (pCityBase->GetLoyalty() == nValue);

        nValue = (CONST_MAXIMUN_CITY_CROP_VALUE + CONST_MINIMUN_CITY_CROP_VALUE) / 2;
        pCityBase->SetMaximunCropValue(nValue);
        bResult = bResult && (pCityBase->GetMaximunCropValue() == nValue);

        nValue = (CONST_MAXIMUN_CITY_POPULATION + CONST_MINIMUN_CITY_POPULATION) / 2;
        pCityBase->SetPopulation(nValue);
        bResult = bResult && (pCityBase->GetPopulation() == nValue);

        nValue = (CONST_MAXIMUN_CITY_SUPPORT + CONST_MINIMUN_CITY_SUPPORT) / 2;
        pCityBase->SetSupport(nValue);
        bResult = bResult && (pCityBase->GetSupport() == nValue);

        nValue = (CONST_MAXIMUN_CITY_CROP_VALUE + CONST_MINIMUN_CITY_CROP_VALUE) / 2;
        pCityBase->SetMaximunCropValue(nValue);
        pCityBase->SetCropValue(nValue + 1);
        bResult = bResult && (pCityBase->GetCropValue() == nValue);

        delete pCityBase;
    }
    else
        bResult = false;

    return (bResult);
}//@CODE_1791


/*@NOTE_1744
Tests if it is possible to create a castle, and if so, that the default values are right.
*/
bool CUnitTestingCity::CreateCastle() const
{//@CODE_1744
    bool bResult = true;
    CCity *pCityBase = NULL;

    pCityBase = new CMilitaryCityCastle;
    if (pCityBase != NULL) {
        bResult = TestCreatedCastleObject(pCityBase);
        delete pCityBase;
    }
    else
        bResult = false;

    return (bResult);
}//@CODE_1744


/*@NOTE_1742
Tests if it is possible to create a citadel, and if so, that the default values are right.
*/
bool CUnitTestingCity::CreateCitadel() const
{//@CODE_1742
    bool bResult = true;
    CCity *pCityBase = NULL;

    pCityBase = new CMilitaryCityCitadel;
    if (pCityBase != NULL) {
        bResult = TestCreatedCitadelObject(pCityBase);
        delete pCityBase;
    }
    else
        bResult = false;

    return (bResult);
}//@CODE_1742


/*@NOTE_1739
Tests if it is possible to create a city, and if so, that the default values are right.
*/
bool CUnitTestingCity::CreateCity() const
{//@CODE_1739
    bool bResult = true;
    CCity *pCityBase = NULL;

    pCityBase = new CCommercialCityCity;
    if (pCityBase != NULL) {
        bResult = TestCreatedCityObject(pCityBase);
        delete pCityBase;
    }
    else
        bResult = false;

    return (bResult);
}//@CODE_1739


/*@NOTE_1743
Tests if it is possible to create a fortress, and if so, that the default values are right.
*/
bool CUnitTestingCity::CreateFortress() const
{//@CODE_1743
    bool bResult = true;
    CCity *pCityBase = NULL;

    pCityBase = new CMilitaryCityFortress;
    if (pCityBase != NULL) {
        bResult = TestCreatedFortressObject(pCityBase);
        delete pCityBase;
    }
    else
        bResult = false;

    return (bResult);
}//@CODE_1743


/*@NOTE_1741
Tests if it is possible to create a granary, and if so, that the default values are right.
*/
bool CUnitTestingCity::CreateGranary() const
{//@CODE_1741
    bool bResult = true;
    CCity *pCityBase = NULL;

    pCityBase = new CMilitaryCityGranary;
    if (pCityBase != NULL) {
        bResult = TestCreatedGranaryObject(pCityBase);
        delete pCityBase;
    }
    else
        bResult = false;

    return (bResult);
}//@CODE_1741


bool CUnitTestingCity::CreateMetropolis() const
{//@CODE_1740
    bool bResult = true;
    CCity *pCityBase = NULL;

    pCityBase = new CCommercialCityMetropolis;
    if (pCityBase != NULL) {
        bResult = TestCreatedMetropolisObject(pCityBase);
        delete pCityBase;
    }
    else
        bResult = false;

    return (bResult);
}//@CODE_1740


bool CUnitTestingCity::CreateThroughCityFactory() const
{//@CODE_1774
    CCityFactory *pFactory = NULL;
    CCity *pCityBase = NULL;
    bool bResult;

    pFactory = new CCityFactory;
    if (pFactory != NULL) {
        pCityBase = pFactory->Create(enCITYTYPE_COMMERCIAL_VILLAGE);
        bResult = TestCreatedVillageObject(pCityBase);
        delete pCityBase;

        pCityBase = pFactory->Create(enCITYTYPE_COMMERCIAL_TOWN);
        bResult = bResult && TestCreatedTownObject(pCityBase);
        delete pCityBase;

        pCityBase = pFactory->Create(enCITYTYPE_COMMERCIAL_CITY);
        bResult = bResult && TestCreatedCityObject(pCityBase);
        delete pCityBase;

        pCityBase = pFactory->Create(enCITYTYPE_COMMERCIAL_METROPOLIS);
        bResult = bResult && TestCreatedMetropolisObject(pCityBase);
        delete pCityBase;

        pCityBase = pFactory->Create(enCITYTYPE_MILITARY_GRANARY);
        bResult = bResult && TestCreatedGranaryObject(pCityBase);
        delete pCityBase;

        pCityBase = pFactory->Create(enCITYTYPE_MILITARY_CITADEL);
        bResult = bResult && TestCreatedCitadelObject(pCityBase);
        delete pCityBase;

        pCityBase = pFactory->Create(enCITYTYPE_MILITARY_FORTRESS);
        bResult = bResult && TestCreatedFortressObject(pCityBase);
        delete pCityBase;

        pCityBase = pFactory->Create(enCITYTYPE_MILITARY_CASTLE);
        bResult = bResult && TestCreatedCastleObject(pCityBase);
        delete pCityBase;
    }
    else
        bResult = false;

    return (bResult);
}//@CODE_1774


/*@NOTE_1738
Tests if it is possible to create a town, and if so, that the default values are right.
*/
bool CUnitTestingCity::CreateTown() const
{//@CODE_1738
    bool bResult = true;
    CCity *pCityBase = NULL;

    pCityBase = new CCommercialCityTown;
    if (pCityBase != NULL) {
        bResult = TestCreatedTownObject(pCityBase);
        delete pCityBase;
    }
    else
        bResult = false;

    return (bResult);
}//@CODE_1738


/*@NOTE_1737
Tests if it is possible to create a village, and if so, that the default values are right.
*/
bool CUnitTestingCity::CreateVillage() const
{//@CODE_1737
    bool bResult = true;
    CCity *pCityBase = NULL;

    pCityBase = new CCommercialCityVillage;
    if (pCityBase != NULL) {
        bResult = TestCreatedVillageObject(pCityBase);
        delete pCityBase;
    }
    else
        bResult = false;

    return (bResult);
}//@CODE_1737


/*@NOTE_1746
Executes the testing.
*/
bool CUnitTestingCity::Execute()
{//@CODE_1746
    if (! CreateVillage()) {
        SetErrorMessage("CUnitTestingCity::CreateVillage() failed!");
        return (false);
    }

    if (! CreateTown()) {
        SetErrorMessage("CUnitTestingCity::CreateTown() failed!");
        return (false);
    }

    if (! CreateCity()) {
        SetErrorMessage("CUnitTestingCity::CreateCity() failed!");
        return (false);
    }

    if (! CreateMetropolis()) {
        SetErrorMessage("CUnitTestingCity::CreateMetropolis() failed!");
        return (false);
    }

    if (! CreateGranary()) {
        SetErrorMessage("CUnitTestingCity::CreateGranary() failed!");
        return (false);
    }

    if (! CreateCitadel()) {
        SetErrorMessage("CUnitTestingCity::CreateCitadel() failed!");
        return (false);
    }

    if (! CreateFortress()) {
        SetErrorMessage("CUnitTestingCity::CreateFortress() failed!");
        return (false);
    }

    if (! CreateCastle()) {
        SetErrorMessage("CUnitTestingCity::CreateCastle() failed!");
        return (false);
    }

    if (! CheckVariableTransitivity()) {
        SetErrorMessage("CUnitTestingCity::CheckVariableTransitivity() failed!");
        return (false);
    }

    if (! CheckVariableLimits()) {
        SetErrorMessage("CUnitTestingCity::CheckVariableLimits() failed!");
        return (false);
    }

    if (! CheckLoadCities()) {
        SetErrorMessage("CUnitTestingCity::CheckLoadCities() failed!");
        return (false);
    }

    if (! CreateThroughCityFactory()) {
        SetErrorMessage("CUnitTestingCity::CreateThroughCityFactory() failed!");
        return (false);
    }

    return (true);
}//@CODE_1746


/*@NOTE_1765
Returns the name of the test.
*/
const char* CUnitTestingCity::GetName(char* pErrorMessage,
                                      const int nLength) const
{//@CODE_1765
    if ((pErrorMessage != NULL) && (nLength > 0))
        strncpy(pErrorMessage, "CUnitTestingCity", nLength);

    return (pErrorMessage);
}//@CODE_1765


/*@NOTE_1775
Tests if the data of a just recently castle object is valid.
*/
bool CUnitTestingCity::TestCreatedCastleObject(CCity* pCityBase) const
{//@CODE_1775
    bool bResult = true;

    bResult = bResult && (pCityBase->GetCropValue()        == CONST_MINIMUN_CITY_CROP_VALUE);
    bResult = bResult && (pCityBase->GetGold()             == CONST_MINIMUN_CITY_GOLD      );
    bResult = bResult && (pCityBase->GetFood()             == CONST_MINIMUN_CITY_FOOD      );
    bResult = bResult && (pCityBase->GetPopulation()       == CONST_MINIMUN_CITY_POPULATION);
    bResult = bResult && (pCityBase->GetMaximunCropValue() == CONST_MAXIMUN_CITY_CROP_VALUE);
    bResult = bResult && (pCityBase->GetDefense()          == CONST_MINIMUN_CITY_DEFENSE   );
    bResult = bResult && (pCityBase->GetHealth()           == CONST_MINIMUN_CITY_HEALTH    );
    bResult = bResult && (pCityBase->GetLoyalty()          == CONST_MINIMUN_CITY_LOYALTY   );
    bResult = bResult && (pCityBase->GetSupport()          == CONST_MINIMUN_CITY_SUPPORT   );
    bResult = bResult && (pCityBase->GetType()             == enCITYTYPE_MILITARY_CASTLE);

    return (bResult);
}//@CODE_1775


/*@NOTE_1777
Tests if the data of a just recently citadel object is valid.
*/
bool CUnitTestingCity::TestCreatedCitadelObject(CCity* pCityBase) const
{//@CODE_1777
    bool bResult = true;

    bResult = bResult && (pCityBase->GetCropValue()        == CONST_MINIMUN_CITY_CROP_VALUE);
    bResult = bResult && (pCityBase->GetGold()             == CONST_MINIMUN_CITY_GOLD      );
    bResult = bResult && (pCityBase->GetFood()             == CONST_MINIMUN_CITY_FOOD      );
    bResult = bResult && (pCityBase->GetPopulation()       == CONST_MINIMUN_CITY_POPULATION);
    bResult = bResult && (pCityBase->GetMaximunCropValue() == CONST_MAXIMUN_CITY_CROP_VALUE);
    bResult = bResult && (pCityBase->GetDefense()          == CONST_MINIMUN_CITY_DEFENSE   );
    bResult = bResult && (pCityBase->GetHealth()           == CONST_MINIMUN_CITY_HEALTH    );
    bResult = bResult && (pCityBase->GetLoyalty()          == CONST_MINIMUN_CITY_LOYALTY   );
    bResult = bResult && (pCityBase->GetSupport()          == CONST_MINIMUN_CITY_SUPPORT   );
    bResult = bResult && (pCityBase->GetType()             == enCITYTYPE_MILITARY_CITADEL);

    return (bResult);
}//@CODE_1777


/*@NOTE_1779
Tests if a recently created city object has the correct default values.
*/
bool CUnitTestingCity::TestCreatedCityObject(CCity* pCityBase) const
{//@CODE_1779
    bool bResult = true;

    bResult = bResult && (pCityBase->GetCropValue()        == CONST_MINIMUN_CITY_CROP_VALUE);
    bResult = bResult && (pCityBase->GetGold()             == CONST_MINIMUN_CITY_GOLD      );
    bResult = bResult && (pCityBase->GetFood()             == CONST_MINIMUN_CITY_FOOD      );
    bResult = bResult && (pCityBase->GetPopulation()       == CONST_MINIMUN_CITY_POPULATION);
    bResult = bResult && (pCityBase->GetMaximunCropValue() == CONST_MAXIMUN_CITY_CROP_VALUE);
    bResult = bResult && (pCityBase->GetDefense()          == CONST_MINIMUN_CITY_DEFENSE   );
    bResult = bResult && (pCityBase->GetHealth()           == CONST_MINIMUN_CITY_HEALTH    );
    bResult = bResult && (pCityBase->GetLoyalty()          == CONST_MINIMUN_CITY_LOYALTY   );
    bResult = bResult && (pCityBase->GetSupport()          == CONST_MINIMUN_CITY_SUPPORT   );
    bResult = bResult && (pCityBase->GetType()             == enCITYTYPE_COMMERCIAL_CITY);

    return (bResult);
}//@CODE_1779


/*@NOTE_1781
Tests if a recently created fortress object has the right default values.
*/
bool CUnitTestingCity::TestCreatedFortressObject(CCity* pCityBase) const
{//@CODE_1781
    bool bResult = true;

    bResult = bResult && (pCityBase->GetCropValue()        == CONST_MINIMUN_CITY_CROP_VALUE);
    bResult = bResult && (pCityBase->GetGold()             == CONST_MINIMUN_CITY_GOLD      );
    bResult = bResult && (pCityBase->GetFood()             == CONST_MINIMUN_CITY_FOOD      );
    bResult = bResult && (pCityBase->GetPopulation()       == CONST_MINIMUN_CITY_POPULATION);
    bResult = bResult && (pCityBase->GetMaximunCropValue() == CONST_MAXIMUN_CITY_CROP_VALUE);
    bResult = bResult && (pCityBase->GetDefense()          == CONST_MINIMUN_CITY_DEFENSE   );
    bResult = bResult && (pCityBase->GetHealth()           == CONST_MINIMUN_CITY_HEALTH    );
    bResult = bResult && (pCityBase->GetLoyalty()          == CONST_MINIMUN_CITY_LOYALTY   );
    bResult = bResult && (pCityBase->GetSupport()          == CONST_MINIMUN_CITY_SUPPORT   );
    bResult = bResult && (pCityBase->GetType()             == enCITYTYPE_MILITARY_FORTRESS);

    return (bResult);
}//@CODE_1781


/*@NOTE_1783
Tests if a recently created granary object has the right default values.
*/
bool CUnitTestingCity::TestCreatedGranaryObject(CCity* pCityBase) const
{//@CODE_1783
    bool bResult = true;

    bResult = bResult && (pCityBase->GetCropValue()        == CONST_MINIMUN_CITY_CROP_VALUE);
    bResult = bResult && (pCityBase->GetGold()             == CONST_MINIMUN_CITY_GOLD      );
    bResult = bResult && (pCityBase->GetFood()             == CONST_MINIMUN_CITY_FOOD      );
    bResult = bResult && (pCityBase->GetPopulation()       == CONST_MINIMUN_CITY_POPULATION);
    bResult = bResult && (pCityBase->GetMaximunCropValue() == CONST_MAXIMUN_CITY_CROP_VALUE);
    bResult = bResult && (pCityBase->GetDefense()          == CONST_MINIMUN_CITY_DEFENSE   );
    bResult = bResult && (pCityBase->GetHealth()           == CONST_MINIMUN_CITY_HEALTH    );
    bResult = bResult && (pCityBase->GetLoyalty()          == CONST_MINIMUN_CITY_LOYALTY   );
    bResult = bResult && (pCityBase->GetSupport()          == CONST_MINIMUN_CITY_SUPPORT   );
    bResult = bResult && (pCityBase->GetType()             == enCITYTYPE_MILITARY_GRANARY);

    return (bResult);
}//@CODE_1783


/*@NOTE_1785
Tests if a recently created metropolis has the right default values.
*/
bool CUnitTestingCity::TestCreatedMetropolisObject(CCity* pCityBase) const
{//@CODE_1785
    bool bResult = true;

    bResult = bResult && (pCityBase->GetCropValue()        == CONST_MINIMUN_CITY_CROP_VALUE);
    bResult = bResult && (pCityBase->GetGold()             == CONST_MINIMUN_CITY_GOLD      );
    bResult = bResult && (pCityBase->GetFood()             == CONST_MINIMUN_CITY_FOOD      );
    bResult = bResult && (pCityBase->GetPopulation()       == CONST_MINIMUN_CITY_POPULATION);
    bResult = bResult && (pCityBase->GetMaximunCropValue() == CONST_MAXIMUN_CITY_CROP_VALUE);
    bResult = bResult && (pCityBase->GetDefense()          == CONST_MINIMUN_CITY_DEFENSE   );
    bResult = bResult && (pCityBase->GetHealth()           == CONST_MINIMUN_CITY_HEALTH    );
    bResult = bResult && (pCityBase->GetLoyalty()          == CONST_MINIMUN_CITY_LOYALTY   );
    bResult = bResult && (pCityBase->GetSupport()          == CONST_MINIMUN_CITY_SUPPORT   );
    bResult = bResult && (pCityBase->GetType()             == enCITYTYPE_COMMERCIAL_METROPOLIS);

    return (bResult);
}//@CODE_1785


/*@NOTE_1787
Tests if a recently created town object has the right default values.
*/
bool CUnitTestingCity::TestCreatedTownObject(CCity* pCityBase) const
{//@CODE_1787
    bool bResult = true;

    bResult = bResult && (pCityBase->GetCropValue()        == CONST_MINIMUN_CITY_CROP_VALUE);
    bResult = bResult && (pCityBase->GetGold()             == CONST_MINIMUN_CITY_GOLD      );
    bResult = bResult && (pCityBase->GetFood()             == CONST_MINIMUN_CITY_FOOD      );
    bResult = bResult && (pCityBase->GetPopulation()       == CONST_MINIMUN_CITY_POPULATION);
    bResult = bResult && (pCityBase->GetMaximunCropValue() == CONST_MAXIMUN_CITY_CROP_VALUE);
    bResult = bResult && (pCityBase->GetDefense()          == CONST_MINIMUN_CITY_DEFENSE   );
    bResult = bResult && (pCityBase->GetHealth()           == CONST_MINIMUN_CITY_HEALTH    );
    bResult = bResult && (pCityBase->GetLoyalty()          == CONST_MINIMUN_CITY_LOYALTY   );
    bResult = bResult && (pCityBase->GetSupport()          == CONST_MINIMUN_CITY_SUPPORT   );
    bResult = bResult && (pCityBase->GetType()             == enCITYTYPE_COMMERCIAL_TOWN);

    return (bResult);
}//@CODE_1787


/*@NOTE_1789
Checks if a recently created village object has the right default values.
*/
bool CUnitTestingCity::TestCreatedVillageObject(CCity* pCityBase) const
{//@CODE_1789
    bool bResult = true;

    bResult = bResult && (pCityBase->GetCropValue()        == CONST_MINIMUN_CITY_CROP_VALUE);
    bResult = bResult && (pCityBase->GetGold()             == CONST_MINIMUN_CITY_GOLD      );
    bResult = bResult && (pCityBase->GetFood()             == CONST_MINIMUN_CITY_FOOD      );
    bResult = bResult && (pCityBase->GetPopulation()       == CONST_MINIMUN_CITY_POPULATION);
    bResult = bResult && (pCityBase->GetMaximunCropValue() == CONST_MAXIMUN_CITY_CROP_VALUE);
    bResult = bResult && (pCityBase->GetDefense()          == CONST_MINIMUN_CITY_DEFENSE   );
    bResult = bResult && (pCityBase->GetHealth()           == CONST_MINIMUN_CITY_HEALTH    );
    bResult = bResult && (pCityBase->GetLoyalty()          == CONST_MINIMUN_CITY_LOYALTY   );
    bResult = bResult && (pCityBase->GetSupport()          == CONST_MINIMUN_CITY_SUPPORT   );
    bResult = bResult && (pCityBase->GetType()             == enCITYTYPE_COMMERCIAL_VILLAGE);

    return (bResult);
}//@CODE_1789


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1734
Method which must be called first in a constructor.
*/
void CUnitTestingCity::ConstructorInclude()
{
}


/*@NOTE_1735
Method which must be called first in a destructor.
*/
void CUnitTestingCity::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

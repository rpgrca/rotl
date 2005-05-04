/******************************************************************************\
*
* File:          ../../src/CityFactory.cpp
* Creation date: April 10, 2005 20:42
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCityFactory'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:01 ReyBrujo, 2005
*     Updated code of method 'Load'
*     Updated code of method 'Create'
* April 13, 2005 18:01 ReyBrujo, 2005
*     Updated code of method 'Load'
* April 13, 2005 17:50 ReyBrujo, 2005
*     Deleted method 'CreateRandomCommercialCity'
*     Deleted method 'CreateRandomMilitaryCity'
*     Added method 'Load'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method 'CreateRandomMilitaryCity'
*     Updated code of method 'CreateRandomCommercialCity'
*     Updated interface of method 'Create'
*     Updated code of method '~CCityFactory'
*     Updated code of method 'CCityFactory'
* April 11, 2005 02:34 ReyBrujo, 2005
*     Added method 'CreateRandomMilitaryCity'
*     Updated code of method 'CreateRandomCommercialCity'
*     Updated return type of method 'CreateRandomCommercialCity'
*     Updated return type of method 'CreateRandomMilitaryCity'
* April 11, 2005 02:31 ReyBrujo, 2005
*     Added method 'CreateRandomCommercialCity'
* April 11, 2005 02:05 ReyBrujo, 2005
*     Updated code of method 'Create'
* April 10, 2005 23:00 ReyBrujo
*     Updated code of method 'Create'
* April 10, 2005 22:32 ReyBrujo
*     Updated code of method 'Build'
* April 10, 2005 21:54 ReyBrujo
*     Updated code of method 'Build'
* April 10, 2005 20:53 ReyBrujo
*     Added method 'CCityFactory'
* April 10, 2005 20:42 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Build'
*     Added method '~CCityFactory'
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




/*@NOTE_262
Constructor method.
*/
CCityFactory::CCityFactory() //@INIT_262
{//@CODE_262
    ConstructorInclude();

    // Put in your own code
}//@CODE_262


/*@NOTE_255
Destructor method.
*/
CCityFactory::~CCityFactory()
{//@CODE_255
    DestructorInclude();

    // Put in your own code
}//@CODE_255


/*@NOTE_259
Creates a city according to the parameters it gets.
*/
CCity* CCityFactory::Create(const enCityType eCityType) const
{//@CODE_259
    CCity* pBase = NULL;

    switch (eCityType) {
        case enCITYTYPE_COMMERCIAL_VILLAGE:
            pBase = new CCommercialCityVillage;
            break;
            
        case enCITYTYPE_COMMERCIAL_TOWN:
            pBase = new CCommercialCityTown;
            break;

        case enCITYTYPE_COMMERCIAL_CITY:
            pBase = new CCommercialCityCity;
            break;

        case enCITYTYPE_COMMERCIAL_METROPOLIS:
            pBase = new CCommercialCityMetropolis;
            break;

        case enCITYTYPE_MILITARY_GRANARY:
            pBase = new CMilitaryCityGranary;
            break;

        case enCITYTYPE_MILITARY_CITADEL:
            pBase = new CMilitaryCityCitadel;
            break;

        case enCITYTYPE_MILITARY_FORTRESS:
            pBase = new CMilitaryCityFortress;
            break;

        case enCITYTYPE_MILITARY_CASTLE:
            pBase = new CMilitaryCityCastle;
            break;
    }

    return (pBase);
}//@CODE_259


/*@NOTE_1182
Loads a city from a file.
*/
CCity* CCityFactory::Load(const char* strFileName) const
{//@CODE_1182
#define D_CITY_STATE_TYPE            	 0
#define D_CITY_STATE_NAME                1
#define D_CITY_STATE_POPULATION       	 2
#define D_CITY_STATE_CROP_VALUE          3
#define D_CITY_STATE_MAXIMUN_CROP_VALUE  4
#define D_CITY_STATE_DEFENSE             5
#define D_CITY_STATE_FOOD                6
#define D_CITY_STATE_GOLD                7
#define D_CITY_STATE_HEALTH              8
#define D_CITY_STATE_LOYALTY             9
#define D_CITY_STATE_SUPPORT            10
#define D_CITY_STATE_END                11
    
    FILE      *inFile  = NULL;
    CCity *pCity = NULL;
    char       strBuffer[256];
    int        nState  = D_CITY_STATE_TYPE;
    int        nLength = 0;

    if (strFileName != NULL) {
        inFile = fopen(strFileName, "rt");

        if (inFile != NULL) {
            memset(strBuffer, '\0', sizeof(strBuffer));
            while (fgets(strBuffer, sizeof(strBuffer), inFile) != NULL) {
                nLength = strlen(strBuffer);
                if ((nLength >= 1) && (strBuffer[nLength - 1] == '\n'))
                    strBuffer[nLength - 1] = '\0';

                switch (nState) {
                    case D_CITY_STATE_TYPE:
                        pCity = Create(static_cast<enCityType>(atol(strBuffer)));
                        if (pCity == NULL)
                            goto close_file;
                        nState = D_CITY_STATE_NAME;
                        break;

                    case D_CITY_STATE_NAME:
                        pCity->SetName(strBuffer);
                        nState = D_CITY_STATE_POPULATION;
                        break;

                    case D_CITY_STATE_POPULATION:
                        pCity->SetPopulation(atol(strBuffer));
                        nState = D_CITY_STATE_CROP_VALUE;
                        break;

                    case D_CITY_STATE_CROP_VALUE:
                        pCity->SetCropValue(atol(strBuffer));
                        nState = D_CITY_STATE_MAXIMUN_CROP_VALUE;
                        break;

                    case D_CITY_STATE_MAXIMUN_CROP_VALUE:
                        pCity->SetMaximunCropValue(atol(strBuffer));
                        nState = D_CITY_STATE_DEFENSE;
                        break;

                    case D_CITY_STATE_DEFENSE:
                        pCity->SetDefense(atol(strBuffer));
                        nState = D_CITY_STATE_FOOD;
                        break;

                    case D_CITY_STATE_FOOD:
                        pCity->SetFood(atol(strBuffer));
                        nState = D_CITY_STATE_GOLD;
                        break;

                    case D_CITY_STATE_GOLD:
                        pCity->SetGold(atol(strBuffer));
                        nState = D_CITY_STATE_HEALTH;
                        break;

                    case D_CITY_STATE_HEALTH:
                        pCity->SetHealth(atol(strBuffer));
                        nState = D_CITY_STATE_LOYALTY;
                        break;

                    case D_CITY_STATE_LOYALTY:
                        pCity->SetLoyalty(atol(strBuffer));
                        nState = D_CITY_STATE_SUPPORT;
                        break;

                    case D_CITY_STATE_SUPPORT:
                        pCity->SetSupport(atol(strBuffer));
                        nState = D_CITY_STATE_END;
                        break;

                    case D_CITY_STATE_END:
                        break;

                    default:
                        if (pCity != NULL) {
                            delete pCity;
                            pCity = NULL;
                        }
                        goto close_file;
                        break;
                }
            }

close_file:
            fclose(inFile);
        }
    }

    return (pCity);

#undef D_CITY_STATE_TYPE
#undef D_CITY_STATE_NAME
#undef D_CITY_STATE_POPULATION
#undef D_CITY_STATE_MAXIMUN_CROP_VALUE
#undef D_CITY_STATE_CROP_VALUE
#undef D_CITY_STATE_DEFENSE
#undef D_CITY_STATE_FOOD
#undef D_CITY_STATE_GOLD
#undef D_CITY_STATE_HEALTH
#undef D_CITY_STATE_LOYALTY
#undef D_CITY_STATE_END
}//@CODE_1182


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_256
Method which must be called first in a constructor.
*/
void CCityFactory::ConstructorInclude()
{
}


/*@NOTE_257
Method which must be called first in a destructor.
*/
void CCityFactory::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

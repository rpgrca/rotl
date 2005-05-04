/******************************************************************************\
*
* File:          ../../src/MapFactory.cpp
* Creation date: April 13, 2005 01:39
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CMapFactory'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 13, 2005 02:16 ReyBrujo, 2005
*     Updated code of method 'Load'
* April 13, 2005 02:12 ReyBrujo, 2005
*     Updated code of method 'Load'
* April 13, 2005 02:07 ReyBrujo, 2005
*     Updated code of method 'Load'
* April 13, 2005 02:04 ReyBrujo, 2005
*     Updated code of method 'Load'
* April 13, 2005 02:04 ReyBrujo, 2005
*     Updated code of method 'Load'
* April 13, 2005 01:57 ReyBrujo, 2005
*     Updated code of method 'Load'
* April 13, 2005 01:41 ReyBrujo, 2005
*     Added method 'Load'
* April 13, 2005 01:39 ReyBrujo, 2005
*     Added method 'CMapFactory'
* April 13, 2005 01:39 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMapFactory'
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




/*@NOTE_1169
Constructor method.
*/
CMapFactory::CMapFactory() //@INIT_1169
{//@CODE_1169
    ConstructorInclude();

    // Put in your own code
}//@CODE_1169


/*@NOTE_1165
Destructor method.
*/
CMapFactory::~CMapFactory()
{//@CODE_1165
    DestructorInclude();

    // Put in your own code
}//@CODE_1165


/*@NOTE_1170
Loads a map from the hard disk.
It uses a very simple state machine to load it.

TODO:  Change this to load from a string instead of a file.
*/
CMap* CMapFactory::Load(const char* strFileName)
{//@CODE_1170

#define D_MAP_STATE_NAME    0
#define D_MAP_STATE_WEEK    1
#define D_MAP_STATE_MONTH   2
#define D_MAP_STATE_YEAR    3
#define D_MAP_STATE_WIDTH   4
#define D_MAP_STATE_HEIGHT  5
#define D_MAP_STATE_TERRAIN 6
#define D_MAP_STATE_END     7

    char strBuffer[512];
    FILE *inFile   = NULL;
    int   nState   = D_MAP_STATE_NAME;
    int   nTile    = 0;
    int   nMaximun = 0;
    int   nLength  = 0;
    bool  bResult  = false;
    enTerrainType eTerrain;
    CMap *pMap     = NULL;
    CTerrainFactory *pFactory = NULL;

    if (strFileName != NULL) {
        inFile = fopen(strFileName, "rt");

        if (inFile != NULL) {
            pFactory = new CTerrainFactory;
            pMap = new CMap;

            if (pFactory != NULL) {
                memset(strBuffer, '\0', sizeof(strBuffer));
                while (fgets(strBuffer, sizeof(strBuffer), inFile) != NULL) {
                    nLength = strlen(strBuffer);
                    if ((nLength >= 1) && (strBuffer[nLength - 1] == '\n'))
                        strBuffer[nLength - 1] = '\0';

                    //  TODO: Check for invalid lines in the file.
                    if (strBuffer[0] != '\0') {
                        switch (nState) {
                            case D_MAP_STATE_NAME:
                                //  TODO: Check for invalid buffer name
                                pMap->SetName(strBuffer);
                                nState = D_MAP_STATE_WEEK;
                                break;

                            case D_MAP_STATE_WEEK:
                                //  TODO: Check for invalid week value
                                pMap->SetCurrentWeek(atol(strBuffer));
                                nState = D_MAP_STATE_MONTH;
                                break;

                            case D_MAP_STATE_MONTH:
                                //  TODO: Check for invalid month value
                                pMap->SetCurrentMonth(atol(strBuffer));
                                nState = D_MAP_STATE_YEAR;
                                break;

                            case D_MAP_STATE_YEAR:
                                //  TODO: Check for invalid year value
                                pMap->SetCurrentYear(atol(strBuffer));
                                nState = D_MAP_STATE_WIDTH;
                                break;

                            case D_MAP_STATE_WIDTH:
                                //  TODO: Check for invalid width value
                                pMap->SetWidth(atol(strBuffer));
                                nState = D_MAP_STATE_HEIGHT;
                                break;

                            case D_MAP_STATE_HEIGHT:
                                //  TODO: Check for invalid height value
                                pMap->SetHeight(atol(strBuffer));
                                nMaximun = pMap->GetWidth() * pMap->GetHeight();
                                nState = D_MAP_STATE_TERRAIN;
                                break;

                            case D_MAP_STATE_TERRAIN:
                                //  TODO: Check for invalid terrain value
                                if (nTile < nMaximun) {
                                    eTerrain = static_cast<enTerrainType>(atol(strBuffer));
                                    pMap->SetTerrain(nTile, pFactory->Create(eTerrain));
                                    nTile++;

                                    if (nTile >= nMaximun) {
                                        nState  = D_MAP_STATE_END;
                                        bResult = true;
                                    }
                                }
                                //  TODO: Check for extra tiles at the end of the map
                                break;

                            case D_MAP_STATE_END:
                                bResult = true;
                                break;

                            default:
                                //  TODO: Check for invalid state.
                                break;
                        }
                    }
                }
            }

            delete pFactory;
            fclose(inFile);
        }
    }

    //  If we didn't finish parsing the file, destroy the map.
    if (! bResult)
        if (pMap != NULL) {
            delete pMap;
            pMap = NULL;
        }

    return (pMap);

#undef D_MAP_STATE_NAME
#undef D_MAP_STATE_WEEK
#undef D_MAP_STATE_MONTH
#undef D_MAP_STATE_YEAR
#undef D_MAP_STATE_WIDTH
#undef D_MAP_STATE_HEIGHT
#undef D_MAP_STATE_TERRAIN
#undef D_MAP_STATE_END
}//@CODE_1170


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1166
Method which must be called first in a constructor.
*/
void CMapFactory::ConstructorInclude()
{
}


/*@NOTE_1167
Method which must be called first in a destructor.
*/
void CMapFactory::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

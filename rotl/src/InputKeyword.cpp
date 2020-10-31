/******************************************************************************\
*
* File:          ../../src/InputKeyword.cpp
* Creation date: April 15, 2005 16:10
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CInputKeyword'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 19, 2005 02:30 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
* April 18, 2005 00:32 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
* April 17, 2005 21:55 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
* April 17, 2005 19:44 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
* April 17, 2005 19:30 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
* April 17, 2005 19:28 ReyBrujo, 2005
*     Updated interface of method 'PollCommand'
* April 17, 2005 18:27 ReyBrujo, 2005
*     Updated interface of method 'PollCommand'
* April 17, 2005 17:55 ReyBrujo, 2005
*     Updated interface of method 'PollCommand'
* April 17, 2005 17:37 ReyBrujo, 2005
*     Updated interface of method 'PollCommand'
* April 17, 2005 14:32 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
* April 17, 2005 14:30 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
* April 17, 2005 14:29 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
* April 17, 2005 14:29 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
* April 16, 2005 19:37 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
* April 16, 2005 19:32 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
* April 16, 2005 18:47 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
* April 16, 2005 18:36 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
* April 16, 2005 17:22 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
* April 16, 2005 17:21 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
* April 16, 2005 17:21 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
* April 16, 2005 03:14 ReyBrujo, 2005
*     Updated code of method '~CInputKeyword'
*     Updated code of method 'CInputKeyword'
* April 15, 2005 19:54 ReyBrujo, 2005
*     Updated code of method '~CInputKeyword'
*     Updated code of method 'CInputKeyword'
* April 15, 2005 19:31 ReyBrujo, 2005
*     Added method 'PollCommand'
*     Updated code of method '~CInputKeyword'
*     Updated code of method 'CInputKeyword'
* April 15, 2005 16:11 ReyBrujo, 2005
*     Added method 'CInputKeyword'
* April 15, 2005 16:10 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'GetCommand'
*     Added method '~CInputKeyword'
*     Added inheritance 'CInput'
*     Updated return type of method 'GetCommand'
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




/*@NOTE_1703
Constructor method.
*/
CInputKeyword::CInputKeyword() //@INIT_1703
    : CInput()
{//@CODE_1703
    ConstructorInclude();

    // Put in your own code
}//@CODE_1703


/*@NOTE_1692
Destructor method.
*/
CInputKeyword::~CInputKeyword()
{//@CODE_1692
    DestructorInclude();

    // Put in your own code
}//@CODE_1692


/*@NOTE_1713
Base poll method to be redefined by classes inheriting from this one.
The method supposedly polls the input system and adds a new input command to the internal buffer, until a maximun of CONST_MAXIMUN_POLL_BUFFER is reached.
*/
void CInputKeyword::PollCommand(const enWeekType eWeekType, CPlayer* pPlayer,
                                CMap* pMap)
{//@CODE_1713
    CArmyActionMarch *pArmyActionMarch = NULL;
    CCityAction      *pCityAction      = NULL;
    char strBuffer[256];
    CUnit *pUnit = NULL;
    CCity *pCity = NULL;

    printf("> ");
    fgets(strBuffer, sizeof(strBuffer), stdin);
    if (strBuffer[strlen(strBuffer) - 1] == '\n')
        strBuffer[strlen(strBuffer) - 1] = '\0';

    pUnit = pPlayer->GetUnit(pPlayer->GetCurrentUnit());
    switch (eWeekType) {
        case enWEEKTYPE_MOVEMENT:
            if (! strncmp(strBuffer, "HELP\0", 5) || ! strncmp(strBuffer, "H\0", 2)) {
                puts("You can move the army NORTH, SOUTH, EAST and WEST, my lord.");
            }
            else
            if (! strncmp(strBuffer, "NORTH\0", 6) || ! strncmp(strBuffer, "N\0", 2)) {
                pArmyActionMarch = new CArmyActionMarchNormal;

                pArmyActionMarch->SetUnit(pUnit);
                pArmyActionMarch->SetDirection(enDIRECTIONTYPE_NORTH);
                pArmyActionMarch->SetMap(pMap);

                if (Add(pArmyActionMarch))
                    puts("The army will advance north, my lord.\n");
                else {
                    puts("My lord, we cannot accept new commands yet.\n");
                    delete pArmyActionMarch;
                }
            }
            else
            if (! strncmp(strBuffer, "SOUTH\0", 6) || ! strncmp(strBuffer, "S\0", 2)) {
                pArmyActionMarch = new CArmyActionMarchNormal;

                pArmyActionMarch->SetUnit(pUnit);
                pArmyActionMarch->SetDirection(enDIRECTIONTYPE_SOUTH);
                pArmyActionMarch->SetMap(pMap);

                if (Add(pArmyActionMarch))
                    puts("The army will advance south, my lord.\n");
                else {
                    puts("My lord, we cannot accept new commands yet.\n");
                    delete pArmyActionMarch;
                }
            }
            else
            if (! strncmp(strBuffer, "EAST\0", 5) || ! strncmp(strBuffer, "E\0", 2)) {
                pArmyActionMarch = new CArmyActionMarchNormal;

                pArmyActionMarch->SetUnit(pUnit);
                pArmyActionMarch->SetDirection(enDIRECTIONTYPE_EAST);
                pArmyActionMarch->SetMap(pMap);

                if (Add(pArmyActionMarch))
                    puts("The army will advance east, my lord.\n");
                else {
                    puts("My lord, we cannot accept new commands yet.\n");
                    delete pArmyActionMarch;
                }
            }
            else
            if (! strncmp(strBuffer, "WEST\0", 5) || ! strncmp(strBuffer, "W\0", 2)) {
                pArmyActionMarch = new CArmyActionMarchNormal;

                pArmyActionMarch->SetUnit(pUnit);
                pArmyActionMarch->SetDirection(enDIRECTIONTYPE_WEST);
                pArmyActionMarch->SetMap(pMap);

                if (Add(pArmyActionMarch))
                    puts("The army will advance west, my lord.\n");
                else {
                    puts("My lord, we cannot accept new commands yet.\n");
                    delete pArmyActionMarch;
                }
            }
            break;

        case enWEEKTYPE_PLANNING:
            if (! strncmp(strBuffer, "HELP\0", 5) || ! strncmp(strBuffer, "H\0", 2)) {
                puts("You can plan to FARM, BUILD or CLAIM a city, my lord.\n");
            }
            else
            if (! strncmp(strBuffer, "FARM\0", 5) || ! strncmp(strBuffer, "F\0", 2)) {
                pCity = pMap->GetCityAt(pUnit->GetLocationX(), pUnit->GetLocationY());

                if (pCity != NULL) {
                    pCityAction = new CCityActionFarm;
                    pCityAction->SetUnit(pUnit);
                    pCityAction->SetCity(pCity);

                    if (Add(pCityAction))
                        puts("We shall farm the land, my lord.\n");
                    else {
                        puts("My lord, we cannot accept new tasks yet.\n");
                        delete pCityAction;
                    }
                }
                else
                    puts("But... there are no farms to work, my lord!\n");
            }
            else
            if (! strncmp(strBuffer, "BUILD\0", 6) || ! strncmp(strBuffer, "B\0", 2)) {
                pCity = pMap->GetCityAt(pUnit->GetLocationX(), pUnit->GetLocationY());

                if (pCity != NULL) {
                    pCityAction = new CCityActionBuild;
                    pCityAction->SetUnit(pUnit);
                    pCityAction->SetCity(pCity);

                    if (Add(pCityAction))
                        puts("We shall rebuild the walls, my lord.\n");
                    else {
                        puts("My lord, we cannot accept new tasks yet.\n");
                        delete pCityAction;
                    }
               }
               else
                   puts("But... there are no walls here to build, my lord!\n");
            }
            else
            if (! strncmp(strBuffer, "CLAIM\0", 6) || ! strncmp(strBuffer, "C\0", 2)) {
                pCity = pMap->GetCityAt(pUnit->GetLocationX(), pUnit->GetLocationY());

                if (pCity != NULL) {
                    pCityAction = new CCityActionClaim;
                    pCityAction->SetUnit(pUnit);
                    pCityAction->SetCity(pCity);

                    if (Add(pCityAction))
                        puts("We shall claim the city, my lord.\n");
                    else {
                        puts("My lord, we cannot accept new tasks yet.\n");
                        delete pCityAction;
                    }
                }
                else
                    puts("But... there is no city to claim here, my lord!\n");
            }
            break;
    }
}//@CODE_1713


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1693
Method which must be called first in a constructor.
*/
void CInputKeyword::ConstructorInclude()
{
}


/*@NOTE_1694
Method which must be called first in a destructor.
*/
void CInputKeyword::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

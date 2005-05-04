/******************************************************************************\
*
* File:          InputCurses.cpp
* Creation date: April 19, 2005 02:30
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CInputCurses'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 20, 2005 00:43 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
* April 20, 2005 00:34 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
* April 20, 2005 00:33 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
* April 20, 2005 00:33 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
* April 20, 2005 00:32 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
* April 20, 2005 00:31 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
*     Updated code of method '~CInputCurses'
*     Updated code of method 'CInputCurses'
* April 19, 2005 02:33 ReyBrujo, 2005
*     Updated code of method 'PollCommand'
* April 19, 2005 02:31 ReyBrujo, 2005
*     Updated code of method '~CInputCurses'
*     Updated code of method 'CInputCurses'
* April 19, 2005 02:30 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'PollCommand'
*     Added method '~CInputCurses'
*     Added method 'CInputCurses'
*     Added inheritance 'CInput'
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




/*@NOTE_2550
Constructor method.
*/
CInputCurses::CInputCurses() //@INIT_2550
    : CInput()
{//@CODE_2550
    ConstructorInclude();

    // Put in your own code
}//@CODE_2550


/*@NOTE_2545
Destructor method.
*/
CInputCurses::~CInputCurses()
{//@CODE_2545
    DestructorInclude();

    // Put in your own code
}//@CODE_2545


/*@NOTE_2551
Base poll method to be redefined by classes inheriting from this one.
The method supposedly polls the input system and adds a new input command to the internal buffer, until a maximun of CONST_MAXIMUN_POLL_BUFFER is reached.
*/
void CInputCurses::PollCommand(const enWeekType eWeekType, CPlayer* pPlayer,
                               CMap* pMap)
{//@CODE_2551
    CArmyActionMarch *pArmyActionMarch = NULL;
    CUnit *pUnit = NULL;
    int nChar;
    enWeekType eType;

    eType   = eWeekType;
    pPlayer = pPlayer;
    nChar   = getch();

    pUnit = pPlayer->GetUnit(pPlayer->GetCurrentUnit());
    switch (nChar) {
        case KEY_UP:
            pArmyActionMarch = new CArmyActionMarchNormal;
    
            pArmyActionMarch->SetUnit(pUnit);
            pArmyActionMarch->SetDirection(enDIRECTIONTYPE_NORTH);
            pArmyActionMarch->SetMap(pMap);
    
            if (Add(pArmyActionMarch))
                mvaddstr(20, 0, "The army will advance north, my lord.\n");
            else {
                mvaddstr(20, 0, "My lord, we cannot accept new commands yet.\n");
                delete pArmyActionMarch;
            }
            break;

        case KEY_DOWN:
            pArmyActionMarch = new CArmyActionMarchNormal;

            pArmyActionMarch->SetUnit(pUnit);
            pArmyActionMarch->SetDirection(enDIRECTIONTYPE_SOUTH);
            pArmyActionMarch->SetMap(pMap);

            if (Add(pArmyActionMarch))
                mvaddstr(20, 0, "The army will advance south, my lord.\n");
            else {
                mvaddstr(20, 0, "My lord, we cannot accept new commands yet.\n");
                delete pArmyActionMarch;
            }
            break;

        case KEY_RIGHT:
            pArmyActionMarch = new CArmyActionMarchNormal;

            pArmyActionMarch->SetUnit(pUnit);
            pArmyActionMarch->SetDirection(enDIRECTIONTYPE_EAST);
            pArmyActionMarch->SetMap(pMap);

            if (Add(pArmyActionMarch))
                mvaddstr(20, 0, "The army will advance east, my lord.\n");
            else {
                mvaddstr(20, 0, "My lord, we cannot accept new commands yet.\n");
                delete pArmyActionMarch;
            }
            break;

        case KEY_LEFT:
            pArmyActionMarch = new CArmyActionMarchNormal;

            pArmyActionMarch->SetUnit(pUnit);
            pArmyActionMarch->SetDirection(enDIRECTIONTYPE_WEST);
            pArmyActionMarch->SetMap(pMap);

            if (Add(pArmyActionMarch))
                mvaddstr(20, 0, "The army will advance west, my lord.\n");
            else {
                mvaddstr(20, 0, "My lord, we cannot accept new commands yet.\n");
                delete pArmyActionMarch;
            }
            break;
    }



#if 0
    mvaddstr(19, 0, "> ");
    getnstr(strBuffer, sizeof(strBuffer));
    if (strBuffer[strlen(strBuffer) - 1] == '\n')
        strBuffer[strlen(strBuffer) - 1] = '\0';

    pUnit = pPlayer->GetUnit(pPlayer->GetCurrentUnit());
    switch (eWeekType) {
        case enWEEKTYPE_MOVEMENT:
            if (! strnicmp(strBuffer, "HELP\0", 5) || ! strnicmp(strBuffer, "H\0", 2)) {
                mvaddstr(20, 0, "You can move the army NORTH, SOUTH, EAST and WEST, my lord.");
            }
            else
            if (! strnicmp(strBuffer, "NORTH\0", 6) || ! strnicmp(strBuffer, "N\0", 2)) {
                pArmyActionMarch = new CArmyActionMarchNormal;

                pArmyActionMarch->SetUnit(pUnit);
                pArmyActionMarch->SetDirection(enDIRECTIONTYPE_NORTH);
                pArmyActionMarch->SetMap(pMap);

                if (Add(pArmyActionMarch))
                    mvaddstr(20, 0, "The army will advance north, my lord.\n");
                else {
                    mvaddstr(20, 0, "My lord, we cannot accept new commands yet.\n");
                    delete pArmyActionMarch;
                }
            }
            else
            if (! strnicmp(strBuffer, "SOUTH\0", 6) || ! strnicmp(strBuffer, "S\0", 2)) {
                pArmyActionMarch = new CArmyActionMarchNormal;

                pArmyActionMarch->SetUnit(pUnit);
                pArmyActionMarch->SetDirection(enDIRECTIONTYPE_SOUTH);
                pArmyActionMarch->SetMap(pMap);

                if (Add(pArmyActionMarch))
                    mvaddstr(20, 0, "The army will advance south, my lord.\n");
                else {
                    mvaddstr(20, 0, "My lord, we cannot accept new commands yet.\n");
                    delete pArmyActionMarch;
                }
            }
            else
            if (! strnicmp(strBuffer, "EAST\0", 5) || ! strnicmp(strBuffer, "E\0", 2)) {
                pArmyActionMarch = new CArmyActionMarchNormal;

                pArmyActionMarch->SetUnit(pUnit);
                pArmyActionMarch->SetDirection(enDIRECTIONTYPE_EAST);
                pArmyActionMarch->SetMap(pMap);

                if (Add(pArmyActionMarch))
                    mvaddstr(20, 0, "The army will advance east, my lord.\n");
                else {
                    mvaddstr(20, 0, "My lord, we cannot accept new commands yet.\n");
                    delete pArmyActionMarch;
                }
            }
            else
            if (! strnicmp(strBuffer, "WEST\0", 5) || ! strnicmp(strBuffer, "W\0", 2)) {
                pArmyActionMarch = new CArmyActionMarchNormal;

                pArmyActionMarch->SetUnit(pUnit);
                pArmyActionMarch->SetDirection(enDIRECTIONTYPE_WEST);
                pArmyActionMarch->SetMap(pMap);

                if (Add(pArmyActionMarch))
                    mvaddstr(20, 0, "The army will advance west, my lord.\n");
                else {
                    mvaddstr(20, 0, "My lord, we cannot accept new commands yet.\n");
                    delete pArmyActionMarch;
                }
            }
            break;

        case enWEEKTYPE_PLANNING:
            if (! strnicmp(strBuffer, "HELP\0", 5) || ! strnicmp(strBuffer, "H\0", 2)) {
                mvaddstr(20, 0, "You can plan to FARM, BUILD or CLAIM a city, my lord.\n");
            }
            else
            if (! strnicmp(strBuffer, "FARM\0", 5) || ! strnicmp(strBuffer, "F\0", 2)) {
                pCity = pMap->GetCityAt(pUnit->GetLocationX(), pUnit->GetLocationY());

                if (pCity != NULL) {
                    pCityAction = new CCityActionFarm;
                    pCityAction->SetUnit(pUnit);
                    pCityAction->SetCity(pCity);

                    if (Add(pCityAction))
                        mvaddstr(20, 0, "We shall farm the land, my lord.\n");
                    else {
                        mvaddstr(20, 0, "My lord, we cannot accept new tasks yet.\n");
                        delete pCityAction;
                    }
                }
                else
                    mvaddstr(20, 0, "But... there are no farms to work, my lord!\n");
            }
            else
            if (! strnicmp(strBuffer, "BUILD\0", 6) || ! strnicmp(strBuffer, "B\0", 2)) {
                pCity = pMap->GetCityAt(pUnit->GetLocationX(), pUnit->GetLocationY());

                if (pCity != NULL) {
                    pCityAction = new CCityActionBuild;
                    pCityAction->SetUnit(pUnit);
                    pCityAction->SetCity(pCity);

                    if (Add(pCityAction))
                        mvaddstr(20, 0, "We shall rebuild the walls, my lord.\n");
                    else {
                        mvaddstr(20, 0, "My lord, we cannot accept new tasks yet.\n");
                        delete pCityAction;
                    }
               }
               else
                   mvaddstr(20, 0, "But... there are no walls here to build, my lord!\n");
            }
            else
            if (! strnicmp(strBuffer, "CLAIM\0", 6) || ! strnicmp(strBuffer, "C\0", 2)) {
                pCity = pMap->GetCityAt(pUnit->GetLocationX(), pUnit->GetLocationY());

                if (pCity != NULL) {
                    pCityAction = new CCityActionClaim;
                    pCityAction->SetUnit(pUnit);
                    pCityAction->SetCity(pCity);

                    if (Add(pCityAction))
                        mvaddstr(20, 0, "We shall claim the city, my lord.\n");
                    else {
                        mvaddstr(20, 0, "My lord, we cannot accept new tasks yet.\n");
                        delete pCityAction;
                    }
                }
                else
                    mvaddstr(20, 0, "But... there is no city to claim here, my lord!\n");
            }
            break;
    }
#endif
}//@CODE_2551


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_2546
Method which must be called first in a constructor.
*/
void CInputCurses::ConstructorInclude()
{
}


/*@NOTE_2547
Method which must be called first in a destructor.
*/
void CInputCurses::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

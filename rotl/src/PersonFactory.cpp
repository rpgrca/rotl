/******************************************************************************\
*
* File:          ../../src/PersonFactory.cpp
* Creation date: April 10, 2005 23:00
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CPersonFactory'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 13, 2005 01:34 ReyBrujo, 2005
*     Updated code of method 'Load'
* April 13, 2005 01:29 ReyBrujo, 2005
*     Added method 'Load'
* April 10, 2005 23:00 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Create'
*     Added method '~CPersonFactory'
*     Added method 'CPersonFactory'
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




/*@NOTE_413
Constructor method.
*/
CPersonFactory::CPersonFactory() //@INIT_413
{//@CODE_413
    ConstructorInclude();

    // Put in your own code
}//@CODE_413


/*@NOTE_409
Destructor method.
*/
CPersonFactory::~CPersonFactory()
{//@CODE_409
    DestructorInclude();

    // Put in your own code
}//@CODE_409


/*@NOTE_414
Generates a person of the asked type.
*/
CPerson* CPersonFactory::Create(const enPersonType ePerson) const
{//@CODE_414
    CPerson* pPerson = NULL;

    switch (ePerson) {
        case enPERSONTYPE_PERSON:
            pPerson = new CPerson;
            break;

        case enPERSONTYPE_GENERAL:
            pPerson = new CPersonGeneral;
            break;

        case enPERSONTYPE_RULER:
            pPerson = new CPersonRuler;
            break;
    }

    return (pPerson);
}//@CODE_414


/*@NOTE_1151
Loads a person from a file, and returns an object representing it.
TODO:  Change this to load from a string instead of a file.
*/
CPerson* CPersonFactory::Load(const char* strFileName) const
{//@CODE_1151
#define D_PERSON_STATE_TYPE            0
#define D_PERSON_STATE_NAME            1
#define D_PERSON_STATE_AGE             2
#define D_PERSON_STATE_EXPERIENCE      3
#define D_PERSON_STATE_CHARM           4
#define D_PERSON_STATE_INTELLIGENCE    5
#define D_PERSON_STATE_BATTLESKILL     6
#define D_PERSON_STATE_STAMINA         7
#define D_PERSON_STATE_MAXIMUN_STAMINA 8
#define D_PERSON_STATE_END             9
    
    FILE    *inFile  = NULL;
    CPerson *pPerson = NULL;
    char     strBuffer[256];
    int      nState  = D_PERSON_STATE_TYPE;
    int      nLength = 0;

    if (strFileName != NULL) {
        inFile = fopen(strFileName, "rt");

        if (inFile != NULL) {
            memset(strBuffer, '\0', sizeof(strBuffer));
            while (fgets(strBuffer, sizeof(strBuffer), inFile) != NULL) {
                nLength = strlen(strBuffer);
                if ((nLength >= 1) && (strBuffer[nLength - 1] == '\n'))
                    strBuffer[nLength - 1] = '\0';

                switch (nState) {
                    case D_PERSON_STATE_TYPE:
                        pPerson = Create(static_cast<enPersonType>(atol(strBuffer)));
                        if (pPerson == NULL)
                            goto close_file;
                        nState = D_PERSON_STATE_NAME;
                        break;

                    case D_PERSON_STATE_NAME:
                        pPerson->SetName(strBuffer);
                        nState = D_PERSON_STATE_AGE;
                        break;

                    case D_PERSON_STATE_AGE:
                        pPerson->SetAge(atol(strBuffer));
                        nState = D_PERSON_STATE_EXPERIENCE;
                        break;

                    case D_PERSON_STATE_EXPERIENCE:
                        pPerson->SetExperience(atol(strBuffer));
                        nState = D_PERSON_STATE_CHARM;
                        break;

                    case D_PERSON_STATE_CHARM:
                        pPerson->SetCharm(atol(strBuffer));
                        nState = D_PERSON_STATE_INTELLIGENCE;
                        break;

                    case D_PERSON_STATE_INTELLIGENCE:
                        pPerson->SetIntelligence(atol(strBuffer));
                        nState = D_PERSON_STATE_BATTLESKILL;
                        break;

                    case D_PERSON_STATE_BATTLESKILL:
                        pPerson->SetBattleSkill(atol(strBuffer));
                        nState = D_PERSON_STATE_STAMINA;
                        break;

                    case D_PERSON_STATE_STAMINA:
                        pPerson->SetStamina(atol(strBuffer));
                        nState = D_PERSON_STATE_MAXIMUN_STAMINA;
                        break;

                    case D_PERSON_STATE_MAXIMUN_STAMINA:
                        pPerson->SetMaximunStamina(atol(strBuffer));
                        nState = D_PERSON_STATE_END;
                        break;

                    case D_PERSON_STATE_END:
                        break;
                }
            }

close_file:
            fclose(inFile);
        }
    }

    return (pPerson);

#undef D_PERSON_STATE_TYPE
#undef D_PERSON_STATE_NAME
#undef D_PERSON_STATE_AGE
#undef D_PERSON_STATE_EXPERIENCE
#undef D_PERSON_STATE_CHARM
#undef D_PERSON_STATE_INTELLIGENCE
#undef D_PERSON_STATE_BATTLESKILL
#undef D_PERSON_STATE_STAMINA
#undef D_PERSON_STATE_MAXIMUN_STAMINA
#undef D_PERSON_STATE_END
}//@CODE_1151


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_410
Method which must be called first in a constructor.
*/
void CPersonFactory::ConstructorInclude()
{
}


/*@NOTE_411
Method which must be called first in a destructor.
*/
void CPersonFactory::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

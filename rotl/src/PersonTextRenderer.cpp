/******************************************************************************\
*
* File:          ../../src/PersonTextRenderer.cpp
* Creation date: April 13, 2005 00:39
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CPersonTextRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 15, 2005 15:18 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method 'Draw'
*     Updated code of method '~CPersonTextRenderer'
*     Updated code of method 'CPersonTextRenderer'
*     Updated inheritance 'CPersonRenderer'
* April 13, 2005 00:47 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 13, 2005 00:39 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Draw'
*     Added method '~CPersonTextRenderer'
*     Added method 'CPersonTextRenderer'
*     Added inheritance 'CPersonRenderer'
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




/*@NOTE_1148
Constructor method.
*/
CPersonTextRenderer::CPersonTextRenderer() //@INIT_1148
    : CPersonRenderer()
{//@CODE_1148
    ConstructorInclude();

    // Put in your own code
}//@CODE_1148


/*@NOTE_1144
Destructor method.
*/
CPersonTextRenderer::~CPersonTextRenderer()
{//@CODE_1144
    DestructorInclude();

    // Put in your own code
}//@CODE_1144


/*@NOTE_1150
This method must be overloaded in derived classes in order to draw onto screen.
*/
void CPersonTextRenderer::Draw()
{//@CODE_1150
    //  TODO: There must be a better way.
    const char *strTypeString[] = {
        "Person",
        "General",
        "Ruler"
    };

    char strBuffer[512];
    memset(strBuffer, '\0', sizeof(strBuffer));
    printf("        Name: %s\n", m_pPerson->GetName(strBuffer, sizeof(strBuffer)));

    //  TODO: Check it is not going out of index.
    printf("        Type: %d (%s)\n", m_pPerson->GetType(), strTypeString[m_pPerson->GetType()]);

    printf("         Age: %d\n", m_pPerson->GetAge());
    printf("  Experience: %d\n", m_pPerson->GetExperience());
    printf("       Charm: %d\n", m_pPerson->GetCharm());
    printf("Intelligence: %d\n", m_pPerson->GetIntelligence());
    printf("Battle Skill: %d\n", m_pPerson->GetBattleSkill());
    printf("     Stamina: %d/%d\n", m_pPerson->GetStamina(), m_pPerson->GetMaximunStamina());
}//@CODE_1150


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1145
Method which must be called first in a constructor.
*/
void CPersonTextRenderer::ConstructorInclude()
{
}


/*@NOTE_1146
Method which must be called first in a destructor.
*/
void CPersonTextRenderer::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

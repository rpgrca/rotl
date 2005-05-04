/******************************************************************************\
*
* File:          ../../src/CityTextRenderer.cpp
* Creation date: April 13, 2005 18:28
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCityTextRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 15, 2005 15:18 ReyBrujo, 2005
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method 'Draw'
*     Updated code of method '~CCityTextRenderer'
*     Updated code of method 'CCityTextRenderer'
*     Updated inheritance 'CCityRenderer'
* April 13, 2005 18:29 ReyBrujo, 2005
*     Updated code of method 'Draw'
* April 13, 2005 18:28 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Draw'
*     Added method '~CCityTextRenderer'
*     Added method 'CCityTextRenderer'
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




/*@NOTE_1200
Constructor method.
*/
CCityTextRenderer::CCityTextRenderer() //@INIT_1200
{//@CODE_1200
    ConstructorInclude();

    // Put in your own code
}//@CODE_1200


/*@NOTE_1196
Destructor method.
*/
CCityTextRenderer::~CCityTextRenderer()
{//@CODE_1196
    DestructorInclude();

    // Put in your own code
}//@CODE_1196


/*@NOTE_1201
This method must be overloaded in derived classes in order to draw onto screen.
*/
void CCityTextRenderer::Draw()
{//@CODE_1201
    //  TODO: There must be a better way.
    const char *strTypeString[] = {
        "Village",
        "Town",
        "City",
        "Metropolis",
        "Granary",
        "Citadel",
        "Fortress",
        "Castle"
    };

    char strBuffer[512];
    memset(strBuffer, '\0', sizeof(strBuffer));
    printf("        Name: %s\n", m_pCity->GetName(strBuffer, sizeof(strBuffer)));

    //  TODO: Check it is not going out of index.
    printf("        Type: %d (%s)\n", m_pCity->GetType(), strTypeString[m_pCity->GetType()]);

    printf("  Population: %d\n", m_pCity->GetPopulation());
    printf("        Food: %d\n", m_pCity->GetFood());
    printf("        Gold: %d\n", m_pCity->GetGold());
    printf("  Crop Value: %d/%d\n", m_pCity->GetCropValue(), m_pCity->GetMaximunCropValue());
    printf("     Defense: %d\n", m_pCity->GetDefense());
    printf("      Health: %d\n", m_pCity->GetHealth());
    printf("     Loyalty: %d\n", m_pCity->GetLoyalty());
    printf("     Support: %d\n", m_pCity->GetSupport());
}//@CODE_1201


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1197
Method which must be called first in a constructor.
*/
void CCityTextRenderer::ConstructorInclude()
{
}


/*@NOTE_1198
Method which must be called first in a destructor.
*/
void CCityTextRenderer::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

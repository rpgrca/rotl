/******************************************************************************\
*
* File:          ../../src/SeasonFactory.cpp
* Creation date: April 11, 2005 16:55
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CSeasonFactory'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated interface of method 'Create'
*     Updated code of method '~CSeasonFactory'
*     Updated code of method 'CSeasonFactory'
* April 11, 2005 16:55 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Create'
*     Added method '~CSeasonFactory'
*     Added method 'CSeasonFactory'
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




/*@NOTE_784
Constructor method.
*/
CSeasonFactory::CSeasonFactory() //@INIT_784
{//@CODE_784
    ConstructorInclude();

    // Put in your own code
}//@CODE_784


/*@NOTE_780
Destructor method.
*/
CSeasonFactory::~CSeasonFactory()
{//@CODE_780
    DestructorInclude();

    // Put in your own code
}//@CODE_780


/*@NOTE_785
Creates a new season.
*/
CSeason* CSeasonFactory::Create(const enSeasonType eSeason)
{//@CODE_785
    CSeason* pSeason = NULL;

    switch (eSeason) {
        case enSEASONTYPE_SUMMER:
            pSeason = new CSeasonSummer;
            break;

        case enSEASONTYPE_AUTUMN:
            pSeason = new CSeasonAutumn;
            break;

        case enSEASONTYPE_WINTER:
            pSeason = new CSeasonWinter;
            break;

        case enSEASONTYPE_SPRING:
            pSeason = new CSeasonSpring;
            break;
    }

    return (pSeason);
}//@CODE_785


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_781
Method which must be called first in a constructor.
*/
void CSeasonFactory::ConstructorInclude()
{
}


/*@NOTE_782
Method which must be called first in a destructor.
*/
void CSeasonFactory::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

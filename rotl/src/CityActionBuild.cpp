/******************************************************************************\
*
* File:          ../../src/CityActionBuild.cpp
* Creation date: April 14, 2005 02:03
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCityActionBuild'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 15, 2005 15:18 ReyBrujo, 2005
*     Updated code of method 'Execute'
* April 15, 2005 13:47 ReyBrujo, 2005
*     Updated code of method 'Execute'
* April 15, 2005 13:41 ReyBrujo, 2005
*     Updated code of method 'Execute'
* April 15, 2005 13:29 ReyBrujo, 2005
*     Updated code of method 'Execute'
* April 15, 2005 13:23 ReyBrujo, 2005
*     Added method 'Execute'
*     Updated code of method '~CCityActionBuild'
*     Updated code of method 'CCityActionBuild'
* April 14, 2005 02:23 ReyBrujo, 2005
*     Updated code of method 'CCityActionBuild'
* April 14, 2005 02:03 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionBuild'
*     Added method 'CCityActionBuild'
*     Added inheritance 'CCityAction'
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




/*@NOTE_1403
Constructor method.
*/
CCityActionBuild::CCityActionBuild() //@INIT_1403
    : CCityAction()
{//@CODE_1403
    ConstructorInclude();

    // Put in your own code
    SetType(enACTIONTYPE_CITY_BUILD);
}//@CODE_1403


/*@NOTE_1398
Destructor method.
*/
CCityActionBuild::~CCityActionBuild()
{//@CODE_1398
    DestructorInclude();

    // Put in your own code
}//@CODE_1398


/*@NOTE_1566
Executes the action.
Must be reimplemented in order to have the action executed.
*/
bool CCityActionBuild::Execute()
{//@CODE_1566
    CPersonRuler *pRuler = NULL;
    int nCost = 0;

    pRuler = m_pUnit->GetRuler();
    if (m_pCity->GetDefense() < CONST_MAXIMUN_CITY_DEFENSE) {
        nCost = m_pUnit->GetSoldiers() / 100;

        if (m_pUnit->GetGold() >= nCost) {
            m_pCity->SetDefense(m_pCity->GetDefense() + m_pUnit->GetSoldiers() / 250);
            m_pCity->SetLoyalty( m_pCity->GetLoyalty() + 1);
            m_pUnit->SetGold(m_pUnit->GetGold() - nCost);
            pRuler->SetRespect(pRuler->GetRespect() + 1);

            return (true);
        }
    }

    return (false);
}//@CODE_1566


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1399
Method which must be called first in a constructor.
*/
void CCityActionBuild::ConstructorInclude()
{
}


/*@NOTE_1400
Method which must be called first in a destructor.
*/
void CCityActionBuild::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

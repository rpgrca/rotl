/******************************************************************************\
*
* File:          ../../src/CityActionFarm.cpp
* Creation date: April 14, 2005 02:03
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CCityActionFarm'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 17:47 ReyBrujo, 2005
*     Updated code of method 'Execute'
* April 16, 2005 14:48 ReyBrujo, 2005
*     Updated code of method 'Execute'
* April 15, 2005 14:32 ReyBrujo, 2005
*     Added method 'Execute'
* April 14, 2005 02:23 ReyBrujo, 2005
*     Updated code of method 'CCityActionFarm'
* April 14, 2005 02:03 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CCityActionFarm'
*     Added method 'CCityActionFarm'
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




/*@NOTE_1396
Constructor method.
*/
CCityActionFarm::CCityActionFarm() //@INIT_1396
    : CCityAction()
{//@CODE_1396
    ConstructorInclude();

    // Put in your own code
    SetType(enACTIONTYPE_CITY_FARM);
}//@CODE_1396


/*@NOTE_1391
Destructor method.
*/
CCityActionFarm::~CCityActionFarm()
{//@CODE_1391
    DestructorInclude();

    // Put in your own code
}//@CODE_1391


/*@NOTE_1571
Executes the action.
Must be reimplemented in order to have the action executed.
*/
bool CCityActionFarm::Execute()
{//@CODE_1571
    CPersonRuler *pRuler = NULL;
    int nCost = 0;

    pRuler = m_pUnit->GetRuler();
    if (m_pCity->GetCropValue() < CONST_MAXIMUN_CITY_CROP_VALUE) {
        nCost = m_pUnit->GetSoldiers() / 10;

        if (m_pUnit->GetGold() >= nCost) {
            m_pCity->SetCropValue(m_pCity->GetCropValue() + (m_pUnit->GetSoldiers() / 250));

            if (pRuler == m_pCity->GetRuler())
                m_pCity->SetLoyalty(m_pCity->GetLoyalty() + 1);
            //else
            //  TODO: Add support for the current ruler in the city.

            m_pUnit->SetGold(m_pUnit->GetGold() - nCost);

            pRuler->SetRespect(pRuler->GetRespect() + 1);
            return (true);
        }
    }

    return (false);
}//@CODE_1571


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_1392
Method which must be called first in a constructor.
*/
void CCityActionFarm::ConstructorInclude()
{
}


/*@NOTE_1393
Method which must be called first in a destructor.
*/
void CCityActionFarm::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

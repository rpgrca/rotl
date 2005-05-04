/******************************************************************************\
*
* File:          ../../src/EventFactory.cpp
* Creation date: April 11, 2005 02:15
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CEventFactory'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 23:15 ReyBrujo, 2005
*     Deleted method 'CreateRandomSeasonalEvent'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated code of method 'CreateRandomSeasonalEvent'
*     Updated interface of method 'Create'
*     Updated code of method '~CEventFactory'
*     Updated code of method 'CEventFactory'
* April 11, 2005 02:34 ReyBrujo, 2005
*     Updated code of method 'CreateRandomSeasonalEvent'
*     Updated return type of method 'CreateRandomSeasonalEvent'
* April 11, 2005 02:29 ReyBrujo, 2005
*     Updated code of method 'CreateRandomSeasonalEvent'
* April 11, 2005 02:29 ReyBrujo, 2005
*     Updated code of method 'CreateRandomSeasonalEvent'
* April 11, 2005 02:28 ReyBrujo, 2005
*     Updated code of method 'CreateRandomSeasonalEvent'
* April 11, 2005 02:28 ReyBrujo, 2005
*     Updated code of method 'CreateRandomSeasonalEvent'
* April 11, 2005 02:27 ReyBrujo, 2005
*     Updated code of method 'CreateRandomSeasonalEvent'
* April 11, 2005 02:24 ReyBrujo, 2005
*     Added method 'CreateRandomSeasonalEvent'
*     Updated interface of method 'Create'
* April 11, 2005 02:16 ReyBrujo, 2005
*     Updated code of method 'Create'
* April 11, 2005 02:15 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Create'
*     Added method '~CEventFactory'
*     Added method 'CEventFactory'
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




/*@NOTE_589
Constructor method.
*/
CEventFactory::CEventFactory() //@INIT_589
{//@CODE_589
    ConstructorInclude();

    // Put in your own code
}//@CODE_589


/*@NOTE_585
Destructor method.
*/
CEventFactory::~CEventFactory()
{//@CODE_585
    DestructorInclude();

    // Put in your own code
}//@CODE_585


/*@NOTE_590
Creates an event of the given type.
*/
CEvent* CEventFactory::Create(const enEventType eEvent) const
{//@CODE_590
    CEvent *pEvent = NULL;

    switch (eEvent) {
        case enEVENTTYPE_SEASONAL_BLIZZARD:
            pEvent = new CSeasonalEventBlizzard;
            break;

        case enEVENTTYPE_SEASONAL_SAND_STORM:
            pEvent = new CSeasonalEventSandStorm;
            break;

        case enEVENTTYPE_SEASONAL_HEAVY_RAINS:
            pEvent = new CSeasonalEventHeavyRains;
            break;

        case enEVENTTYPE_SEASONAL_FLOODS:
            pEvent = new CSeasonalEventFloods;
            break;

        case enEVENTTYPE_SEASONAL_DROUGHT:
            pEvent = new CSeasonalEventDrought;
            break;

        case enEVENTTYPE_SEASONAL_HARVEST:
            pEvent = new CSeasonalEventHarvest;
            break;

        case enEVENTTYPE_SEASONAL_THIEVES:
            pEvent = new CSeasonalThieves;
            break;

        case enEVENTTYPE_SEASONAL_FOREIGN_INVASION:
            pEvent = new CSeasonalEventForeignInvasion;
            break;

        case enEVENTTYPE_SEASONAL_RIOTS:
            pEvent = new CSeasonalEventRiots;
            break;

        case enEVENTTYPE_SEASONAL_PLAGUE:
            pEvent = new CSeasonalEventPlague;
            break;

        case enEVENTTYPE_SEASONAL_EARTHQUAKE:
            pEvent = new CSeasonalEventEarthquake;
            break;
    }

    return (pEvent);
}//@CODE_590


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_586
Method which must be called first in a constructor.
*/
void CEventFactory::ConstructorInclude()
{
}


/*@NOTE_587
Method which must be called first in a destructor.
*/
void CEventFactory::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

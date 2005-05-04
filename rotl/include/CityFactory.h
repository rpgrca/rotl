/******************************************************************************\
*
* File:          ../../include/CityFactory.h
* Creation date: April 10, 2005 20:42
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCityFactory'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 13, 2005 17:50 ReyBrujo, 2005
*     Deleted method 'CreateRandomCommercialCity'
*     Deleted method 'CreateRandomMilitaryCity'
*     Added method 'Load'
* April 12, 2005 15:01 ReyBrujo
*     Updated interface of method 'Create'
* April 11, 2005 02:34 ReyBrujo, 2005
*     Added method 'CreateRandomMilitaryCity'
*     Updated return type of method 'CreateRandomCommercialCity'
*     Updated return type of method 'CreateRandomMilitaryCity'
* April 11, 2005 02:31 ReyBrujo, 2005
*     Added method 'CreateRandomCommercialCity'
* April 10, 2005 20:53 ReyBrujo
*     Added method 'CCityFactory'
* April 10, 2005 20:42 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'Build'
*     Added method '~CCityFactory'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _CITYFACTORY_H
#define _CITYFACTORY_H

//@START_USER1
//@END_USER1


/*@NOTE_254
The city factory.
This class will generate cities.
*/

class CCityFactory
{

//@START_USER2
//@END_USER2

//
// Group: ClassBuilder methods
//

private:
    void ConstructorInclude();
    void DestructorInclude();

//
// Non-Grouped Members
//

//
// Non-Grouped Methods
//

public:
    CCityFactory();
    virtual ~CCityFactory();
    CCity* Create(const enCityType eCityType) const;
    CCity* Load(const char* strFileName) const;
};

#endif


#ifdef CB_INLINES
#ifndef _CITYFACTORY_H_INLINES
#define _CITYFACTORY_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

/******************************************************************************\
*
* File:          ../../include/CityActionFarm.h
* Creation date: April 14, 2005 02:03
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCityActionFarm'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 15, 2005 14:32 ReyBrujo, 2005
*     Added method 'Execute'
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
#ifndef _CITYACTIONFARM_H
#define _CITYACTIONFARM_H

//@START_USER1
//@END_USER1


/*@NOTE_1390
Develop the crops in a city.
The amount of Gold necessary to FARM depends on the number of soldiers in the division.
Farming increases the city's Crop Value and the ruler's Loyalty and Respect levels.
*/

class CCityActionFarm
    : public CCityAction
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
    CCityActionFarm();
    virtual ~CCityActionFarm();
    virtual bool Execute();
};

#endif


#ifdef CB_INLINES
#ifndef _CITYACTIONFARM_H_INLINES
#define _CITYACTIONFARM_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

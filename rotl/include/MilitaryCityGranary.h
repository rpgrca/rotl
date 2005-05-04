/******************************************************************************\
*
* File:          ../../include/MilitaryCityGranary.h
* Creation date: April 10, 2005 20:10
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CMilitaryCityGranary'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CMilitaryCity'
* April 10, 2005 20:11 ReyBrujo
*     Added method 'CMilitaryCityGranary'
* April 10, 2005 20:10 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMilitaryCityGranary'
*     Added inheritance 'CMilitaryCity'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _MILITARYCITYGRANARY_H
#define _MILITARYCITYGRANARY_H

//@START_USER1
//@END_USER1


/*@NOTE_113
Granaries are the smallest military cities available in the game.
They have less than CONST_POPULATION_GRANARY inhabitants and less than CONST_DEFENSE_GRANARY defense.
*/

class CMilitaryCityGranary
    : public CMilitaryCity
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
    CMilitaryCityGranary();
    virtual ~CMilitaryCityGranary();
};

#endif


#ifdef CB_INLINES
#ifndef _MILITARYCITYGRANARY_H_INLINES
#define _MILITARYCITYGRANARY_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

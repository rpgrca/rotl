/******************************************************************************\
*
* File:          ../../include/MilitaryCityFortress.h
* Creation date: April 10, 2005 20:10
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CMilitaryCityFortress'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CMilitaryCity'
* April 10, 2005 20:11 ReyBrujo
*     Added method 'CMilitaryCityFortress'
* April 10, 2005 20:10 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMilitaryCityFortress'
*     Added inheritance 'CMilitaryCity'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _MILITARYCITYFORTRESS_H
#define _MILITARYCITYFORTRESS_H

//@START_USER1
//@END_USER1


/*@NOTE_126
Fortress are the most common military cities.
They have less than CONST_POPULATION_FORTRESS inhabitants and less than CONST_DEFENSE_FORTRESS defense.
*/

class CMilitaryCityFortress
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
    CMilitaryCityFortress();
    virtual ~CMilitaryCityFortress();
};

#endif


#ifdef CB_INLINES
#ifndef _MILITARYCITYFORTRESS_H_INLINES
#define _MILITARYCITYFORTRESS_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

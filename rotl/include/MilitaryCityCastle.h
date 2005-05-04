/******************************************************************************\
*
* File:          ../../include/MilitaryCityCastle.h
* Creation date: April 10, 2005 20:10
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CMilitaryCityCastle'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CMilitaryCity'
* April 10, 2005 20:11 ReyBrujo
*     Added method 'CMilitaryCityCastle'
* April 10, 2005 20:10 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CMilitaryCityCastle'
*     Added inheritance 'CMilitaryCity'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _MILITARYCITYCASTLE_H
#define _MILITARYCITYCASTLE_H

//@START_USER1
//@END_USER1


/*@NOTE_132
Castles are the largest military cities available in the game.
They have over CONST_POPULATION_FORTRESS inhabitants and over CONST_DEFENSE_FORTRESS defense.
*/

class CMilitaryCityCastle
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
    CMilitaryCityCastle();
    virtual ~CMilitaryCityCastle();
};

#endif


#ifdef CB_INLINES
#ifndef _MILITARYCITYCASTLE_H_INLINES
#define _MILITARYCITYCASTLE_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

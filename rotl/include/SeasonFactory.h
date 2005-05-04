/******************************************************************************\
*
* File:          ../../include/SeasonFactory.h
* Creation date: April 11, 2005 16:55
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CSeasonFactory'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 15:01 ReyBrujo
*     Updated interface of method 'Create'
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
#ifndef _SEASONFACTORY_H
#define _SEASONFACTORY_H

//@START_USER1
//@END_USER1


/*@NOTE_779
The season factory generates a season based on the input.
*/

class CSeasonFactory
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
    CSeasonFactory();
    virtual ~CSeasonFactory();
    CSeason* Create(const enSeasonType eSeason);
};

#endif


#ifdef CB_INLINES
#ifndef _SEASONFACTORY_H_INLINES
#define _SEASONFACTORY_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

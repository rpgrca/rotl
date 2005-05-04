/******************************************************************************\
*
* File:          InputCurses.h
* Creation date: April 19, 2005 02:30
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CInputCurses'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 19, 2005 02:30 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'PollCommand'
*     Added method '~CInputCurses'
*     Added method 'CInputCurses'
*     Added inheritance 'CInput'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _INPUTCURSES_H
#define _INPUTCURSES_H

//@START_USER1
//@END_USER1


/*@NOTE_2544
The input module for PDCurses.
*/

class CInputCurses
    : public CInput
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
    CInputCurses();
    virtual ~CInputCurses();
    virtual void PollCommand(const enWeekType eWeekType, CPlayer* pPlayer,
                             CMap* pMap);
};

#endif


#ifdef CB_INLINES
#ifndef _INPUTCURSES_H_INLINES
#define _INPUTCURSES_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

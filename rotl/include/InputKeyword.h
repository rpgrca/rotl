/******************************************************************************\
*
* File:          ../../include/InputKeyword.h
* Creation date: April 15, 2005 16:10
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CInputKeyword'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 19:28 ReyBrujo, 2005
*     Updated interface of method 'PollCommand'
* April 17, 2005 18:27 ReyBrujo, 2005
*     Updated interface of method 'PollCommand'
* April 17, 2005 17:55 ReyBrujo, 2005
*     Updated interface of method 'PollCommand'
* April 17, 2005 17:37 ReyBrujo, 2005
*     Updated interface of method 'PollCommand'
* April 15, 2005 19:31 ReyBrujo, 2005
*     Added method 'PollCommand'
* April 15, 2005 16:11 ReyBrujo, 2005
*     Added method 'CInputKeyword'
* April 15, 2005 16:10 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'GetCommand'
*     Added method '~CInputKeyword'
*     Added inheritance 'CInput'
*     Updated return type of method 'GetCommand'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _INPUTKEYWORD_H
#define _INPUTKEYWORD_H

//@START_USER1
//@END_USER1


/*@NOTE_1691
Basic keyboard class.
This class allows the player to send commands to the game through the keyboard.
*/

class CInputKeyword
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
    CInputKeyword();
    virtual ~CInputKeyword();
    virtual void PollCommand(const enWeekType eWeekType, CPlayer* pPlayer,
                             CMap* pMap);
};

#endif


#ifdef CB_INLINES
#ifndef _INPUTKEYWORD_H_INLINES
#define _INPUTKEYWORD_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

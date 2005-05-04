/******************************************************************************\
*
* File:          ../../include/Input.h
* Creation date: April 15, 2005 16:10
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CInput'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 19:28 ReyBrujo, 2005
*     Updated interface of method 'PollCommand'
* April 17, 2005 18:27 ReyBrujo, 2005
*     Updated interface of method 'PollCommand'
*     Updated interface of method 'Add'
* April 17, 2005 18:03 ReyBrujo, 2005
*     Updated return type of method 'GetCommand'
* April 17, 2005 17:58 ReyBrujo, 2005
*     Updated interface of method 'Add'
*     Updated member 'm_aActionBuffer'
* April 17, 2005 17:55 ReyBrujo, 2005
*     Updated interface of method 'PollCommand'
* April 17, 2005 17:37 ReyBrujo, 2005
*     Updated interface of method 'PollCommand'
* April 17, 2005 02:27 ReyBrujo, 2005
*     Updated member 'm_aInputBuffer'
* April 15, 2005 19:25 ReyBrujo, 2005
*     Added method 'Add'
*     Added member 'm_nIndex'
* April 15, 2005 19:03 ReyBrujo, 2005
*     Added member 'm_eInputBuffer'
* April 15, 2005 17:57 ReyBrujo, 2005
*     Updated member 'm_pInputBuffer'
* April 15, 2005 17:50 ReyBrujo, 2005
*     Updated member 'm_eInputBuffer'
* April 15, 2005 17:50 ReyBrujo, 2005
*     Updated member 'm_eInputBuffer'
* April 15, 2005 17:46 ReyBrujo, 2005
*     Deleted member 'm_eInputBuffer'
*     Updated member 'm_eInputBuffer'
* April 15, 2005 17:46 ReyBrujo, 2005
*     Deleted member 'm_eInputBuffer'
*     Updated member 'm_eBuffer'
* April 15, 2005 16:47 ReyBrujo, 2005
*     Updated member 'm_Buffer'
* April 15, 2005 16:42 ReyBrujo, 2005
*     Added member 'm_teste'
* April 15, 2005 16:10 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'PollCommand'
*     Added method 'GetCommand'
*     Added method 'Clear'
*     Added method '~CInput'
*     Added method 'CInput'
*     Added member 'm_eInputBuffer'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _INPUT_H
#define _INPUT_H
const int CONST_MAXIMUN_INPUT_BUFFER = 25;

//@START_USER1
//@END_USER1


/*@NOTE_1686
The base class for input sequences.
All input methods (keyboard, mouse and joystick someday) must inherit from this class to get the basic interface.
*/

class CInput
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

private:
    CAction* m_aActionBuffer[CONST_MAXIMUN_INPUT_BUFFER];
    int m_nIndex;

//
// Non-Grouped Methods
//

public:
    CInput();
    virtual ~CInput();
    bool Add(CAction* pAction, const bool bDestroy = false);
    void Clear();
    CAction* GetCommand();
    virtual void PollCommand(const enWeekType eWeekType, CPlayer* pPlayer,
                             CMap* pMap) = 0;
};

#endif


#ifdef CB_INLINES
#ifndef _INPUT_H_INLINES
#define _INPUT_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif

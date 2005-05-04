/******************************************************************************\
*
* File:          ../../include/Action.h
* Creation date: April 14, 2005 01:33
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CAction'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 14, 2005 02:23 ReyBrujo, 2005
*     Added method 'SetType'
*     Added method 'GetType'
*     Added member 'm_eType'
* April 14, 2005 01:33 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'GetRunning'
*     Added method 'Execute'
*     Added method '~CAction'
*     Added method 'CAction'
*     Added member 'm_bRunning'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _ACTION_H
#define _ACTION_H

//@START_USER1
//@END_USER1


/*@NOTE_1252
The basic support for actions.
*/

class CAction
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
    bool m_bRunning;
    enActionType m_eType;

//
// Non-Grouped Methods
//

protected:
    void SetType(const enActionType eType);

public:
    CAction();
    virtual ~CAction();
    virtual bool Execute() = 0;
    bool GetRunning() const;
    enActionType GetType() const;
};

#endif


#ifdef CB_INLINES
#ifndef _ACTION_H_INLINES
#define _ACTION_H_INLINES

/*@NOTE_1304
Returns the value of member 'm_bRunning'.
*/
inline bool CAction::GetRunning() const
{//@CODE_1304
    return m_bRunning;
}//@CODE_1304



/*@NOTE_1494
Returns the value of member 'm_eType'.
*/
inline enActionType CAction::GetType() const
{//@CODE_1494
    return m_eType;
}//@CODE_1494



/*@NOTE_1495
Set the value of member 'm_eType' to 'eType'.
*/
inline void CAction::SetType(const enActionType eType)
{//@CODE_1495
    m_eType = eType;
}//@CODE_1495



//@START_USER3
//@END_USER3

#endif
#endif

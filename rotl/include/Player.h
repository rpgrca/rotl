/******************************************************************************\
*
* File:          ../../include/Player.h
* Creation date: April 16, 2005 18:36
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CPlayer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 16:49 ReyBrujo, 2005
*     Added method 'SetCurentUnit'
*     Added method 'GetCurrentUnit'
*     Added member 'm_nCurrentUnit'
* April 17, 2005 16:27 ReyBrujo, 2005
*     Added method 'GetUnitCount'
*     Added method 'GetUnit'
*     Updated return type of method 'GetUnitCount'
* April 17, 2005 02:27 ReyBrujo, 2005
*     Updated member 'm_aUnits'
* April 16, 2005 20:21 ReyBrujo, 2005
*     Updated interface of method 'ExecuteCommand'
* April 16, 2005 19:57 ReyBrujo, 2005
*     Added method 'ExecuteCommand'
*     Added method 'AddUnit'
*     Added member 'm_pUnits'
* April 16, 2005 18:36 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetRuler'
*     Added method 'GetRuler'
*     Added method 'SetInput'
*     Added method 'GetInput'
*     Added method '~CPlayer'
*     Added method 'CPlayer'
*     Added member 'm_pInput'
*     Added member 'm_pPersonRuler'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _PLAYER_H
#define _PLAYER_H
const int CONST_MAXIMUN_PLAYER_UNIT = 20;

//@START_USER1
//@END_USER1


/*@NOTE_2127
The player class.
This class represents every player in the game.
Some players can be controlled by the computer.
*/

class CPlayer
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
    CPersonRuler* m_pPersonRuler;
    CInput* m_pInput;
    CUnit* m_aUnits[CONST_MAXIMUN_PLAYER_UNIT];
    int m_nCurrentUnit;

//
// Non-Grouped Methods
//

public:
    CPlayer();
    virtual ~CPlayer();
    virtual bool AddUnit(CUnit* pUnit, bool bDestroy = false);
    virtual bool ExecuteCommand(CMap* pMap);
    CUnit* GetUnit(const unsigned int uIndex) const;
    int GetUnitCount() const;
    int GetCurrentUnit() const;
    void SetCurentUnit(const int nCurrentUnit);
    CInput* GetInput() const;
    void SetInput(CInput* pInput);
    CPersonRuler* GetRuler() const;
    void SetRuler(CPersonRuler* pPersonRuler);
};

#endif


#ifdef CB_INLINES
#ifndef _PLAYER_H_INLINES
#define _PLAYER_H_INLINES

/*@NOTE_2307
Returns the value of member 'm_nCurrentUnit'.
*/
inline int CPlayer::GetCurrentUnit() const
{//@CODE_2307
    return m_nCurrentUnit;
}//@CODE_2307



/*@NOTE_2308
Set the value of member 'm_nCurrentUnit' to 'nCurrentUnit'.
*/
inline void CPlayer::SetCurentUnit(const int nCurrentUnit)
{//@CODE_2308
    m_nCurrentUnit = nCurrentUnit;
}//@CODE_2308



/*@NOTE_2138
Returns the value of member 'm_pInput'.
*/
inline CInput* CPlayer::GetInput() const
{//@CODE_2138
    return m_pInput;
}//@CODE_2138



/*@NOTE_2139
Set the value of member 'm_pInput' to 'pInput'.
*/
inline void CPlayer::SetInput(CInput* pInput)
{//@CODE_2139
    m_pInput = pInput;
}//@CODE_2139



/*@NOTE_2134
Returns the value of member 'm_pPersonRuler'.
*/
inline CPersonRuler* CPlayer::GetRuler() const
{//@CODE_2134
    return m_pPersonRuler;
}//@CODE_2134



/*@NOTE_2135
Set the value of member 'm_pPersonRuler' to 'pPersonRuler'.
*/
inline void CPlayer::SetRuler(CPersonRuler* pPersonRuler)
{//@CODE_2135
    m_pPersonRuler = pPersonRuler;
}//@CODE_2135



//@START_USER3
//@END_USER3

#endif
#endif

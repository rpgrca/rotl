/******************************************************************************\
*
* File:          ../../include/PlayerRenderer.h
* Creation date: April 17, 2005 16:56
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CPlayerRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 17:02 ReyBrujo, 2005
*     Added method 'GetPlayer'
*     Updated interface of method 'SetPlayer'
*     Updated member 'm_pPlayer'
* April 17, 2005 16:56 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetPlayer'
*     Added method '~CPlayerRenderer'
*     Added method 'CPlayerRenderer'
*     Added inheritance 'CRenderer'
*     Added member 'm_pPlayer'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _PLAYERRENDERER_H
#define _PLAYERRENDERER_H

//@START_USER1
//@END_USER1


/*@NOTE_2310
The base renderer for the player class.
*/

class CPlayerRenderer
    : public CRenderer
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

protected:
    CPlayer* m_pPlayer;

//
// Non-Grouped Methods
//

public:
    CPlayerRenderer();
    virtual ~CPlayerRenderer();
    void SetPlayer(CPlayer* pPlayer);
    CPlayer* GetPlayer() const;
};

#endif


#ifdef CB_INLINES
#ifndef _PLAYERRENDERER_H_INLINES
#define _PLAYERRENDERER_H_INLINES

/*@NOTE_2317
Set the value of member 'm_pPlayer' to 'pPlayer'.
*/
inline void CPlayerRenderer::SetPlayer(CPlayer* pPlayer)
{//@CODE_2317
    m_pPlayer = pPlayer;
}//@CODE_2317



/*@NOTE_2337
Returns the value of member 'm_pPlayer'.
*/
inline CPlayer* CPlayerRenderer::GetPlayer() const
{//@CODE_2337
    return m_pPlayer;
}//@CODE_2337



//@START_USER3
//@END_USER3

#endif
#endif

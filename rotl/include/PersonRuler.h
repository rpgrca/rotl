/******************************************************************************\
*
* File:          ../../include/PersonRuler.h
* Creation date: April 10, 2005 20:10
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CPersonRuler'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 15, 2005 13:28 ReyBrujo, 2005
*     Updated interface of method 'SetRespect'
*     Updated inheritance 'CPersonGeneral'
*     Updated member 'm_nFriendship'
*     Updated member 'm_nRespect'
* April 14, 2005 01:33 ReyBrujo, 2005
*     Added method 'SetRespect'
*     Added method 'GetRespect'
*     Added member 'm_nFriendship'
*     Added member 'm_nRespect'
* April 10, 2005 20:11 ReyBrujo
*     Added method 'CPersonRuler'
* April 10, 2005 20:10 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CPersonRuler'
*     Added inheritance 'CGeneral'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _PERSONRULER_H
#define _PERSONRULER_H
const int CONST_MINIMUN_RULER_RESPECT = 0;
const int CONST_MINIMUN_RULER_FRIENDSHIP = 0;

const int CONST_MAXIMUN_RULER_RESPECT = 100;
const int CONST_MAXIMUN_RULER_FRIENDSHIP = 100;

//  8 rulers maximun
const int CONST_MAXIMUN_RULER_COUNT = 8;

#define M_IS_VALID_RULER_RESPECT(_x) (((_x) >= CONST_MINIMUN_RULER_RESPECT) && ((_x) <= CONST_MAXIMUN_RULER_RESPECT))
#define M_IS_VALID_RULER_FRIENDSHIP(_x) (((_x) >= CONST_MINIMUN_RULER_FRIENDSHIP) && ((_x) <= CONST_MAXIMUN_RULER_FRIENDSHIP))

//@START_USER1
//@END_USER1


/*@NOTE_186
The ruler is the main character of the player.
If the ruler of the player is captured or dies, the player controlling that ruler loses.
*/

class CPersonRuler
    : public CPersonGeneral
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
    int m_nRespect;
    int m_nFriendship[CONST_MAXIMUN_RULER_COUNT];

//
// Non-Grouped Methods
//

public:
    CPersonRuler();
    virtual ~CPersonRuler();
    int GetRespect() const;
    void SetRespect(int nRespect);
};

#endif


#ifdef CB_INLINES
#ifndef _PERSONRULER_H_INLINES
#define _PERSONRULER_H_INLINES

/*@NOTE_1306
Returns the value of member 'm_nRespect'.
*/
inline int CPersonRuler::GetRespect() const
{//@CODE_1306
    return m_nRespect;
}//@CODE_1306



/*@NOTE_1307
Set the value of member 'm_nRespect' to 'nRespect'.
*/
inline void CPersonRuler::SetRespect(int nRespect)
{//@CODE_1307
    if (M_IS_VALID_RULER_RESPECT(nRespect))
        m_nRespect = nRespect;
}//@CODE_1307



//@START_USER3
//@END_USER3

#endif
#endif

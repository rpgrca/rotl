/******************************************************************************\
*
* File:          ../../include/PersonRenderer.h
* Creation date: April 13, 2005 00:39
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CPersonRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 15, 2005 15:18 ReyBrujo, 2005
*     Updated interface of method 'SetPerson'
*     Updated inheritance 'CRenderer'
*     Updated member 'm_pPerson'
* April 13, 2005 18:19 ReyBrujo, 2005
*     Deleted method 'Draw'
* April 13, 2005 01:39 ReyBrujo, 2005
*     Updated interface of method 'SetPerson'
*     Updated inheritance 'CRenderer'
*     Updated member 'm_pPerson'
* April 13, 2005 00:39 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetPerson'
*     Added method 'GetPerson'
*     Added method 'Draw'
*     Added method '~CPersonRenderer'
*     Added method 'CPersonRenderer'
*     Added inheritance 'CRenderer'
*     Added member 'm_pPerson'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _PERSONRENDERER_H
#define _PERSONRENDERER_H

//@START_USER1
//@END_USER1


/*@NOTE_1132
The base renderer class for the person class.
*/

class CPersonRenderer
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
    CPerson* m_pPerson;

//
// Non-Grouped Methods
//

public:
    CPersonRenderer();
    virtual ~CPersonRenderer();
    CPerson* GetPerson() const;
    void SetPerson(CPerson* pPerson);
};

#endif


#ifdef CB_INLINES
#ifndef _PERSONRENDERER_H_INLINES
#define _PERSONRENDERER_H_INLINES

/*@NOTE_1139
Returns the value of member 'm_pPerson'.
*/
inline CPerson* CPersonRenderer::GetPerson() const
{//@CODE_1139
    return m_pPerson;
}//@CODE_1139



/*@NOTE_1140
Set the value of member 'm_pPerson' to 'pPerson'.
*/
inline void CPersonRenderer::SetPerson(CPerson* pPerson)
{//@CODE_1140
    m_pPerson = pPerson;
}//@CODE_1140



//@START_USER3
//@END_USER3

#endif
#endif

/******************************************************************************\
*
* File:          ../../include/CityRenderer.h
* Creation date: April 13, 2005 18:19
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCityRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:01 ReyBrujo, 2005
*     Updated interface of method 'SetCity'
*     Updated member 'm_pCity'
* April 15, 2005 15:18 ReyBrujo, 2005
*     Updated interface of method 'SetCity'
*     Updated inheritance 'CRenderer'
*     Updated member 'm_pCity'
* April 14, 2005 00:36 ReyBrujo, 2005
*     Deleted method 'Draw'
* April 13, 2005 18:19 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetCity'
*     Added method 'GetCity'
*     Added method 'Draw'
*     Added method '~CCityRenderer'
*     Added method 'CCityRenderer'
*     Added inheritance 'CRenderer'
*     Added member 'm_pCity'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _CITYRENDERER_H
#define _CITYRENDERER_H

//@START_USER1
//@END_USER1


/*@NOTE_1184
The base city renderer.
*/

class CCityRenderer
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
    CCity* m_pCity;

//
// Non-Grouped Methods
//

public:
    CCityRenderer();
    virtual ~CCityRenderer();
    CCity* GetCity() const;
    void SetCity(CCity* pCity);
};

#endif


#ifdef CB_INLINES
#ifndef _CITYRENDERER_H_INLINES
#define _CITYRENDERER_H_INLINES

/*@NOTE_1192
Returns the value of member 'm_pCity'.
*/
inline CCity* CCityRenderer::GetCity() const
{//@CODE_1192
    return m_pCity;
}//@CODE_1192



/*@NOTE_1193
Set the value of member 'm_pCity' to 'pCity'.
*/
inline void CCityRenderer::SetCity(CCity* pCity)
{//@CODE_1193
    m_pCity = pCity;
}//@CODE_1193



//@START_USER3
//@END_USER3

#endif
#endif

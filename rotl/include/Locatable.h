/******************************************************************************\
*
* File:          ../../include/Locatable.h
* Creation date: April 18, 2005 00:42
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CLocatable'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 18, 2005 00:53 ReyBrujo, 2005
*     Updated interface of method 'SetLocationY'
*     Updated interface of method 'SetLocationX'
*     Updated member 'm_nLocationY'
*     Updated member 'm_nLocationX'
* April 18, 2005 00:42 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetLocationY'
*     Added method 'GetLocationY'
*     Added method 'SetLocationX'
*     Added method 'GetLocationX'
*     Added method '~CLocatable'
*     Added method 'CLocatable'
*     Added member 'm_nLocationY'
*     Added member 'm_nLocationX'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _LOCATABLE_H
#define _LOCATABLE_H

//@START_USER1
//@END_USER1


/*@NOTE_2412
Any object that inherits from this one can be located in the main map.
*/

class CLocatable
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
    int m_nLocationX;
    int m_nLocationY;

//
// Non-Grouped Methods
//

protected:
    virtual void SetLocationX(const int nLocationX);
    virtual void SetLocationY(const int nLocationY);

public:
    CLocatable();
    virtual ~CLocatable();
    virtual int GetLocationX() const;
    virtual int GetLocationY() const;
};

#endif


#ifdef CB_INLINES
#ifndef _LOCATABLE_H_INLINES
#define _LOCATABLE_H_INLINES

/*@NOTE_2418
Returns the value of member 'm_nLocationX'.
*/
inline int CLocatable::GetLocationX() const
{//@CODE_2418
    return m_nLocationX;
}//@CODE_2418



/*@NOTE_2419
Set the value of member 'm_nLocationX' to 'nLocationX'.
*/
inline void CLocatable::SetLocationX(const int nLocationX)
{//@CODE_2419
    m_nLocationX = nLocationX;
}//@CODE_2419



/*@NOTE_2422
Returns the value of member 'm_nLocationY'.
*/
inline int CLocatable::GetLocationY() const
{//@CODE_2422
    return m_nLocationY;
}//@CODE_2422



/*@NOTE_2423
Set the value of member 'm_nLocationY' to 'nLocationY'.
*/
inline void CLocatable::SetLocationY(const int nLocationY)
{//@CODE_2423
    m_nLocationY = nLocationY;
}//@CODE_2423



//@START_USER3
//@END_USER3

#endif
#endif

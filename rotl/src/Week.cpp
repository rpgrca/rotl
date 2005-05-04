/******************************************************************************\
*
* File:          ../../src/Week.cpp
* Creation date: April 11, 2005 14:15
* Author:        ClassBuilder
*                XXXX
* Purpose:       Method implementations of class 'CWeek'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 17, 2005 07:26 ReyBrujo, 2005
*     Added method 'SetWeather'
*     Added method 'GetWeather'
*     Added member 'm_pWeather'
*     Updated code of method '~CWeek'
* April 12, 2005 23:05 ReyBrujo, 2005
*     Added method 'SetType'
*     Added method 'GetType'
*     Added member 'm_eType'
* April 12, 2005 15:01 ReyBrujo
*     Updated code of method 'DestructorInclude'
*     Updated code of method 'ConstructorInclude'
*     Updated interface of method 'SetWeek'
*     Updated code of method 'GetWeek'
*     Updated code of method '~CWeek'
*     Updated code of method 'CWeek'
*     Updated inheritance 'CBase'
*     Updated member 'm_nWeek'
* April 11, 2005 14:23 ReyBrujo
*     Updated code of method 'SetWeek'
*     Updated code of method 'GetWeek'
* April 11, 2005 14:15 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetWeek'
*     Added method 'GetWeek'
*     Added method '~CWeek'
*     Added method 'CWeek'
*     Added inheritance 'CBase'
*     Added member 'm_nWeek'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
//@START_USER1
//@END_USER1


// Master include file
#include "rotl.h"


//@START_USER2
//@END_USER2




/*@NOTE_667
Constructor method.
*/
CWeek::CWeek() //@INIT_667
    : CBase()
    , m_nWeek(0)
    , m_eType(enWEEKTYPE_MOVEMENT)
    , m_pWeather(NULL)
{//@CODE_667
    ConstructorInclude();

    // Put in your own code
}//@CODE_667


/*@NOTE_663
Destructor method.
*/
CWeek::~CWeek()
{//@CODE_663
    DestructorInclude();

    // Put in your own code
    if (m_pWeather != NULL) {
        delete m_pWeather;
        m_pWeather = NULL;
    }
}//@CODE_663


/*@NOTE_676
Returns the value of member 'm_nWeek'.
*/
int CWeek::GetWeek() const
{//@CODE_676
    return m_nWeek;
}//@CODE_676


/*@NOTE_677
Set the value of member 'm_nWeek' to 'nWeek'.
*/
void CWeek::SetWeek(const int nWeek)
{//@CODE_677
    if (M_IS_VALID_WEEK_NUMBER(nWeek))
        m_nWeek = nWeek;
}//@CODE_677


//{{AFX DO NOT EDIT CODE BELOW THIS LINE !!!

/*@NOTE_664
Method which must be called first in a constructor.
*/
void CWeek::ConstructorInclude()
{
}


/*@NOTE_665
Method which must be called first in a destructor.
*/
void CWeek::DestructorInclude()
{
}


// Methods for the relation(s) of the class

//}}AFX DO NOT EDIT CODE ABOVE THIS LINE !!!

//@START_USER3

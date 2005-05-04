/******************************************************************************\
*
* File:          ../../include/CityAction.h
* Creation date: April 14, 2005 01:50
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CCityAction'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 02:01 ReyBrujo, 2005
*     Updated interface of method 'SetCity'
*     Updated member 'm_pCity'
* April 15, 2005 13:26 ReyBrujo, 2005
*     Updated interface of method 'SetUnit'
*     Updated interface of method 'SetCity'
*     Updated member 'm_pUnit'
*     Updated member 'm_pCity'
* April 14, 2005 02:03 ReyBrujo, 2005
*     Added method 'SetUnit'
*     Added method 'GetUnit'
*     Added member 'm_pUnit'
* April 14, 2005 01:50 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetCity'
*     Added method 'GetCity'
*     Added method '~CCityAction'
*     Added method 'CCityAction'
*     Added inheritance 'CAction'
*     Added member 'm_pCity'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _CITYACTION_H
#define _CITYACTION_H

//@START_USER1
//@END_USER1


/*@NOTE_1335
Basic support for actions executed by the army for the city.
*/

class CCityAction
    : public CAction
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
    CUnit* m_pUnit;

//
// Non-Grouped Methods
//

public:
    CCityAction();
    virtual ~CCityAction();
    CCity* GetCity() const;
    void SetCity(CCity* pCity);
    CUnit* GetUnit() const;
    void SetUnit(CUnit* pUnit);
};

#endif


#ifdef CB_INLINES
#ifndef _CITYACTION_H_INLINES
#define _CITYACTION_H_INLINES

/*@NOTE_1345
Returns the value of member 'm_pCity'.
*/
inline CCity* CCityAction::GetCity() const
{//@CODE_1345
    return m_pCity;
}//@CODE_1345



/*@NOTE_1346
Set the value of member 'm_pCity' to 'pCity'.
*/
inline void CCityAction::SetCity(CCity* pCity)
{//@CODE_1346
    m_pCity = pCity;
}//@CODE_1346



/*@NOTE_1405
Returns the value of member 'm_pUnit'.
*/
inline CUnit* CCityAction::GetUnit() const
{//@CODE_1405
    return m_pUnit;
}//@CODE_1405



/*@NOTE_1406
Set the value of member 'm_pUnit' to 'pUnit'.
*/
inline void CCityAction::SetUnit(CUnit* pUnit)
{//@CODE_1406
    m_pUnit = pUnit;
}//@CODE_1406



//@START_USER3
//@END_USER3

#endif
#endif

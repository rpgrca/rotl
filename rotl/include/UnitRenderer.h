/******************************************************************************\
*
* File:          ../../include/UnitRenderer.h
* Creation date: April 16, 2005 20:37
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CUnitRenderer'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 16, 2005 20:37 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetUnit'
*     Added method 'GetUnit'
*     Added method '~CUnitRenderer'
*     Added method 'CUnitRenderer'
*     Added inheritance 'CRenderer'
*     Added member 'm_pUnit'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _UNITRENDERER_H
#define _UNITRENDERER_H

//@START_USER1
//@END_USER1


/*@NOTE_2163
The basic renderer for the units.
*/

class CUnitRenderer
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
    CUnit* m_pUnit;

//
// Non-Grouped Methods
//

public:
    CUnitRenderer();
    virtual ~CUnitRenderer();
    CUnit* GetUnit() const;
    void SetUnit(CUnit* pUnit);
};

#endif


#ifdef CB_INLINES
#ifndef _UNITRENDERER_H_INLINES
#define _UNITRENDERER_H_INLINES

/*@NOTE_2170
Returns the value of member 'm_pUnit'.
*/
inline CUnit* CUnitRenderer::GetUnit() const
{//@CODE_2170
    return m_pUnit;
}//@CODE_2170



/*@NOTE_2171
Set the value of member 'm_pUnit' to 'pUnit'.
*/
inline void CUnitRenderer::SetUnit(CUnit* pUnit)
{//@CODE_2171
    m_pUnit = pUnit;
}//@CODE_2171



//@START_USER3
//@END_USER3

#endif
#endif

/******************************************************************************\
*
* File:          ../../include/Temporal.h
* Creation date: April 18, 2005 00:53
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CTemporal'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 18, 2005 00:54 ReyBrujo, 2005
*     Added method 'CTemporal'
* April 18, 2005 00:53 ReyBrujo, 2005
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'SetRounds'
*     Added method 'GetRounds'
*     Added method '~CTemporal'
*     Added member 'm_nRounds'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _TEMPORAL_H
#define _TEMPORAL_H

//@START_USER1
//@END_USER1


/*@NOTE_2447
Any class that spends a certain time in the map and then is destroyed or disappears must inherit from this class.
*/

class CTemporal
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
    int m_nRounds;

//
// Non-Grouped Methods
//

protected:
    void SetRounds(int nRounds);

public:
    CTemporal();
    virtual ~CTemporal();
    int GetRounds() const;
};

#endif


#ifdef CB_INLINES
#ifndef _TEMPORAL_H_INLINES
#define _TEMPORAL_H_INLINES

/*@NOTE_2453
Returns the value of member 'm_nRounds'.
*/
inline int CTemporal::GetRounds() const
{//@CODE_2453
    return m_nRounds;
}//@CODE_2453



/*@NOTE_2454
Set the value of member 'm_nRounds' to 'nRounds'.
*/
inline void CTemporal::SetRounds(int nRounds)
{//@CODE_2454
    m_nRounds = nRounds;
}//@CODE_2454



//@START_USER3
//@END_USER3

#endif
#endif

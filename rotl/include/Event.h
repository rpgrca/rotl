/******************************************************************************\
*
* File:          ../../include/Event.h
* Creation date: April 10, 2005 21:54
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CEvent'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 18:40 ReyBrujo
*     Added method 'SetType'
*     Added method 'GetType'
*     Added member 'm_eType'
* April 12, 2005 17:39 ReyBrujo
*     Deleted method 'GetCropValueModifier'
*     Deleted member 'm_fCropValueModifier'
*     Deleted method 'GetDefenseModifier'
*     Deleted member 'm_fDefenseModifier'
*     Deleted method 'GetFoodModifier'
*     Deleted member 'm_fFoodModifier'
*     Deleted method 'GetGoldModifier'
*     Deleted member 'm_fGoldModifier'
*     Deleted method 'GetHealthModifier'
*     Deleted member 'm_fHealthModifier'
*     Deleted method 'GetPopulationModifier'
*     Deleted member 'm_fPopulationModifier'
*     Deleted method 'GetSoldierModifier'
*     Deleted member 'm_fSoldierModifier'
*     Deleted method 'GetSpiritModifier'
*     Deleted member 'm_fSpiritModifier'
*     Deleted method 'GetStaminaModifier'
*     Deleted member 'm_fStaminaModifier'
*     Added method 'GetModifier'
*     Added member 'm_pModifier'
* April 12, 2005 15:01 ReyBrujo
*     Updated inheritance 'CBase'
*     Updated member 'm_fStaminaModifier'
*     Updated member 'm_fFoodModifier'
*     Updated member 'm_fGoldModifier'
*     Updated member 'm_fSoldierModifier'
*     Updated member 'm_fDefenseModifier'
*     Updated member 'm_fCropValueModifier'
*     Updated member 'm_fHealthModifier'
*     Updated member 'm_fPopulationModifier'
*     Updated member 'm_fSpiritModifier'
* April 11, 2005 01:30 ReyBrujo, 2005
*     Added method 'GetStaminaModifier'
*     Added method 'GetSoldierModifier'
*     Added method 'GetPopulationModifier'
*     Added method 'GetHealthModifier'
*     Added method 'GetGoldModifier'
*     Added method 'GetFoodModifier'
*     Added method 'GetDefenseModifier'
*     Added method 'GetCropValueModifier'
*     Added member 'm_fStaminaModifier'
*     Added member 'm_fFoodModifier'
*     Added member 'm_fGoldModifier'
*     Added member 'm_fSoldierModifier'
*     Added member 'm_fDefenseModifier'
*     Added member 'm_fCropValueModifier'
*     Added member 'm_fHealthModifier'
*     Added member 'm_fPopulationModifier'
* April 11, 2005 00:09 ReyBrujo, 2005
*     Added method 'GetSpiritModifier'
*     Updated member 'm_fSpiritModifier'
* April 10, 2005 21:54 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~CEvent'
*     Added method 'CEvent'
*     Added inheritance 'CBase'
*     Added member 'm_fSpirit'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _EVENT_H
#define _EVENT_H
const float CONST_BLIZZARD_SPIRIT_MODIFIER = 0.85;
const float CONST_SAND_STORM_POPULATION_MODIFIER = 0.95;
const float CONST_SAND_STORM_SPIRIT_MODIFIER = 0.9;
const float CONST_HEAVY_RAINS_SPIRIT_MODIFIER = 0.9;
const float CONST_FLOODS_HEALTH_MODIFIER = 0.85;
const float CONST_FLOODS_POPULATION_MODIFIER = 0.90;
const float CONST_FLOODS_CROP_VALUE_MODIFIER = 0.70;
const float CONST_FLOODS_DEFENSE_MODIFIER = 0.95;
const float CONST_FLOODS_SOLDIER_MODIFIER = 0.95;
const float CONST_FLOODS_SPIRIT_MODIFIER = 0.85;
const float CONST_DROUGHT_SPIRIT_MODIFIER = 0.80;
const float CONST_DROUGHT_CROP_VALUE_MODIFIER = 0.75;
const float CONST_HARVEST_GOLD_MODIFIER = 1.25;
const float CONST_HARVEST_FOOD_MODIFIER = 1.25;
const float CONST_THIEVES_GOLD_MODIFIER = 0.70;
const float CONST_THIEVES_FOOD_MODIFIER = 0.70;
const float CONST_THIEVES_DEFENSE_MODIFIER = 0.90;
const float CONST_THIEVES_CROP_VALUE_MODIFIER = 0.95;
const float CONST_FOREIGN_INVASION_HEALTH_MODIFIER = 0.85;
const float CONST_FOREIGN_INVASION_GOLD_MODIFIER = 0.75;
const float CONST_FOREIGN_INVASION_FOOD_MODIFIER = 0.75;
const float CONST_FOREIGN_INVASION_POPULATION_MODIFIER = 0.80;
const float CONST_FOREIGN_INVASION_CROP_VALUE_MODIFIER = 0.75;
const float CONST_FOREIGN_INVASION_DEFENSE_MODIFIER = 0.70;
const float CONST_FOREIGN_INVASION_SOLDIER_MODIFIER = 0.85;
const float CONST_RIOTS_HEALTH_MODIFIER = 0.75;
const float CONST_RIOTS_GOLD_MODIFIER = 0.90;
const float CONST_RIOTS_POPULATION_MODIFIER = 0.95;
const float CONST_RIOTS_CROP_VALUE_MODIFIER = 0.85;
const float CONST_RIOTS_DEFENSE_MODIFIER = 0.90;
const float CONST_RIOTS_SOLDIER_MODIFIER = 0.95;
const float CONST_RIOTS_SPIRIT_MODIFIER = 0.80;
const float CONST_PLAGUE_HEALTH_MODIFIER = 0.60;
const float CONST_PLAGUE_POPULATION_MODIFIER = 0.85;
const float CONST_PLAGUE_SOLDIER_MODIFIER = 0.90;
const float CONST_PLAGUE_STAMINA_MODIFIER = 0.90;
const float CONST_EARTHQUAKE_HEALTH_MODIFIER = 0.85;
const float CONST_EARTHQUAKE_POPULATION_MODIFIER = 0.85;
const float CONST_EARTHQUAKE_CROP_VALUE_MODIFIER = 0.75;
const float CONST_EARTHQUAKE_DEFENSE_MODIFIER = 0.75;
const float CONST_EARTHQUAKE_SOLDIER_MODIFIER = 0.90;
const float CONST_EARTHQUAKE_SPIRIT_MODIFIER = 0.85;

//@START_USER1
//@END_USER1


/*@NOTE_384
Events are divided into seasonel and historical events.
*/

class CEvent
    : public CBase
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
    enEventType m_eType;

protected:
    CModifier* m_pModifier;

//
// Non-Grouped Methods
//

protected:
    void SetType(const enEventType eType);

public:
    CEvent();
    virtual ~CEvent();
    enEventType GetType() const;
    const CModifier* GetModifier() const;
};

#endif


#ifdef CB_INLINES
#ifndef _EVENT_H_INLINES
#define _EVENT_H_INLINES

/*@NOTE_1065
Returns the value of member 'm_eType'.
*/
inline enEventType CEvent::GetType() const
{//@CODE_1065
    return m_eType;
}//@CODE_1065



/*@NOTE_1066
Set the value of member 'm_eType' to 'eType'.
*/
inline void CEvent::SetType(const enEventType eType)
{//@CODE_1066
    m_eType = eType;
}//@CODE_1066



/*@NOTE_1008
Returns the value of member 'm_pModifier'.
*/
inline const CModifier* CEvent::GetModifier() const
{//@CODE_1008
    return m_pModifier;
}//@CODE_1008



//@START_USER3
//@END_USER3

#endif
#endif

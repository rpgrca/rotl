/******************************************************************************\
*
* File:          ../../include/Modifier.h
* Creation date: April 12, 2005 17:39
* Author:        ClassBuilder
*                XXXX
* Purpose:       Declaration of class 'CModifier'
*
* Modifications: @INSERT_MODIFICATIONS(* )
* April 12, 2005 23:05 ReyBrujo, 2005
*     Added method 'SetCityMaximunCropValue'
*     Added method 'GetCityMaximunCropValue'
*     Added inheritance 'CBase'
*     Added member 'm_fCityMaximunCropValue'
* April 12, 2005 22:41 ReyBrujo, 2005
*     Added method 'SetUnitGoldModifier'
*     Added method 'GetUnitGoldModifier'
*     Added method 'SetUnitFoodModifier'
*     Added method 'GetUnitFoodModifier'
*     Added method 'SetUnitArmsModifier'
*     Added method 'GetUnitArmsModifier'
*     Added method 'SetPersonExperienceModifier'
*     Added method 'GetPersonExperienceModifier'
*     Added method 'SetCitySupportModifier'
*     Added method 'GetCitySupportModifier'
*     Added method 'SetCityLoyaltyModifier'
*     Added method 'GetCityLoyaltyModifier'
*     Added member 'm_fPersonExperienceModifier'
*     Added member 'm_fUnitArmsModifier'
*     Added member 'm_fUnitFoodModifier'
*     Added member 'm_fUnitGoldModifier'
*     Added member 'm_fCitySupportModifier'
*     Added member 'm_fCityLoyaltyModifier'
*     Updated interface of method 'SetUnitSpiritModifier'
*     Updated interface of method 'SetUnitSoldierModifier'
*     Updated interface of method 'SetUnitDamageModifier'
*     Updated interface of method 'SetUnitAttackModifier'
*     Updated interface of method 'SetPersonStaminaModifier'
*     Updated interface of method 'SetCityPopulationModifier'
*     Updated interface of method 'SetCityHealthModifier'
*     Updated interface of method 'SetCityGoldModifier'
*     Updated interface of method 'SetCityFoodModifier'
*     Updated interface of method 'SetCityDefenseModifier'
*     Updated interface of method 'SetCityCropValueModifier'
*     Updated member 'm_fUnitDamageModifier'
*     Updated member 'm_fUnitAttackModifier'
*     Updated member 'm_fPersonStaminaModifier'
*     Updated member 'm_fUnitSpiritModifier'
*     Updated member 'm_fUnitSoldierModifier'
*     Updated member 'm_fCityPopulationModifier'
*     Updated member 'm_fCityHealthModifier'
*     Updated member 'm_fCityGoldModifier'
*     Updated member 'm_fCityFoodModifier'
*     Updated member 'm_fCityDefenseModifier'
*     Updated member 'm_fCityCropValueModifier'
* April 12, 2005 18:15 ReyBrujo
*     Added method 'SetDamageModifier'
*     Added method 'GetDamageModifier'
*     Added member 'm_fDamageModifier'
* April 12, 2005 18:06 ReyBrujo
*     Added method 'SetAttackModifier'
*     Added method 'GetAttackModifier'
*     Added member 'm_fAttackModifier'
* April 12, 2005 18:04 ReyBrujo
*     Added method 'SetFSoldierModifier'
*     Added method 'SetPopulationModifier'
*     Added method 'SetFHealthModifier'
*     Added method 'SetGoldModifier'
*     Added method 'SetFoodModifier'
*     Added method 'SetDefenseModifier'
*     Updated member 'm_fSoldierModifier'
*     Updated member 'm_fPopulationModifier'
*     Updated member 'm_fHealthModifier'
*     Updated member 'm_fGoldModifier'
*     Updated member 'm_fFoodModifier'
*     Updated member 'm_fDefenseModifier'
* April 12, 2005 17:52 ReyBrujo
*     Updated interface of method 'SetStaminaModifier'
*     Updated interface of method 'SetSpiritModifier'
*     Updated interface of method 'SetCropValueModifier'
*     Updated member 'm_fStaminaModifier'
*     Updated member 'm_fSpiritModifier'
*     Updated member 'm_fCropValueModifier'
* April 12, 2005 17:51 ReyBrujo
*     Added method 'SetSpiritModifier'
*     Updated member 'm_fSpiritModifier'
* April 12, 2005 17:51 ReyBrujo
*     Added method 'SetStaminaModifier'
*     Added method 'SetCropValueModifier'
*     Updated member 'm_fStaminaModifier'
*     Updated member 'm_fCropValueModifier'
* April 12, 2005 17:39 ReyBrujo
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method 'GetStaminaModifier'
*     Added method 'GetSpiritModifier'
*     Added method 'GetSoldierModifier'
*     Added method 'GetPopulationModifier'
*     Added method 'GetHealthModifier'
*     Added method 'GetGoldModifier'
*     Added method 'GetFoodModifier'
*     Added method 'GetDefenseModifier'
*     Added method 'GetCropValueModifier'
*     Added method '~CModifier'
*     Added method 'CModifier'
*     Added member 'm_fStaminaModifier'
*     Added member 'm_fSpiritModifier'
*     Added member 'm_fSoldierModifier'
*     Added member 'm_fPopulationModifier'
*     Added member 'm_fHealthModifier'
*     Added member 'm_fGoldModifier'
*     Added member 'm_fFoodModifier'
*     Added member 'm_fDefenseModifier'
*     Added member 'm_fCropValueModifier'
*
* Copyright 2005, XXXXX
* All rights are reserved. Reproduction in whole or part is prohibited
* without the written consent of the copyright owner.
*
\******************************************************************************/
#ifndef _MODIFIER_H
#define _MODIFIER_H

//@START_USER1
//@END_USER1


/*@NOTE_1000
This class takes care of the different modifiers.
*/

class CModifier
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
    float m_fCityCropValueModifier;
    float m_fCityDefenseModifier;
    float m_fCityFoodModifier;
    float m_fCityGoldModifier;
    float m_fCityHealthModifier;
    float m_fCityPopulationModifier;
    float m_fUnitSoldierModifier;
    float m_fUnitSpiritModifier;
    float m_fPersonStaminaModifier;
    float m_fUnitAttackModifier;
    float m_fUnitDamageModifier;
    float m_fCityLoyaltyModifier;
    float m_fCitySupportModifier;
    float m_fUnitGoldModifier;
    float m_fUnitFoodModifier;
    float m_fUnitArmsModifier;
    float m_fPersonExperienceModifier;
    float m_fCityMaximunCropValue;

//
// Non-Grouped Methods
//

public:
    CModifier();
    virtual ~CModifier();
    float GetCityCropValueModifier() const;
    void SetCityCropValueModifier(const float fCityCropValueModifier);
    float GetCityDefenseModifier() const;
    void SetCityDefenseModifier(const float fCityDefenseModifier);
    float GetCityFoodModifier() const;
    void SetCityFoodModifier(const float fCityFoodModifier);
    float GetCityGoldModifier() const;
    void SetCityGoldModifier(const float fCityGoldModifier);
    float GetCityHealthModifier() const;
    void SetCityHealthModifier(const float fCityHealthModifier);
    float GetCityLoyaltyModifier() const;
    void SetCityLoyaltyModifier(const float fCityLoyaltyModifier);
    float GetCityMaximunCropValue() const;
    void SetCityMaximunCropValue(const float fCityMaximunCropValue);
    float GetCityPopulationModifier() const;
    void SetCityPopulationModifier(const float fCityPopulationModifier);
    float GetCitySupportModifier() const;
    void SetCitySupportModifier(const float fCitySupportModifier);
    float GetPersonExperienceModifier() const;
    void SetPersonExperienceModifier(const float fPersonExperienceModifier);
    float GetPersonStaminaModifier() const;
    void SetPersonStaminaModifier(const float fPersonStaminaModifier);
    float GetUnitArmsModifier() const;
    void SetUnitArmsModifier(const float fUnitArmsModifier);
    float GetUnitAttackModifier() const;
    void SetUnitAttackModifier(const float fUnitAttackModifier);
    float GetUnitDamageModifier() const;
    void SetUnitDamageModifier(const float fUnitDamageModifier);
    float GetUnitFoodModifier() const;
    void SetUnitFoodModifier(const float fUnitFoodModifier);
    float GetUnitGoldModifier() const;
    void SetUnitGoldModifier(const float fUnitGoldModifier);
    float GetUnitSoldierModifier() const;
    void SetUnitSoldierModifier(const float fUnitSoldierModifier);
    float GetUnitSpiritModifier() const;
    void SetUnitSpiritModifier(const float fUnitSpiritModifier);
};

#endif


#ifdef CB_INLINES
#ifndef _MODIFIER_H_INLINES
#define _MODIFIER_H_INLINES

/*@NOTE_493
Returns the value of member 'm_fCityCropValueModifier'.
*/
inline float CModifier::GetCityCropValueModifier() const
{//@CODE_493
    return m_fCityCropValueModifier;
}//@CODE_493



/*@NOTE_1028
Set the value of member 'm_fCityCropValueModifier' to 'fCityCropValueModifier'.
*/
inline void CModifier::SetCityCropValueModifier(const float fCityCropValueModifier)
{//@CODE_1028
    m_fCityCropValueModifier = fCityCropValueModifier;
}//@CODE_1028



/*@NOTE_495
Returns the value of member 'm_fCityDefenseModifier'.
*/
inline float CModifier::GetCityDefenseModifier() const
{//@CODE_495
    return m_fCityDefenseModifier;
}//@CODE_495



/*@NOTE_1048
Set the value of member 'm_fCityDefenseModifier' to 'fCityDefenseModifier'.
*/
inline void CModifier::SetCityDefenseModifier(const float fCityDefenseModifier)
{//@CODE_1048
    m_fCityDefenseModifier = fCityDefenseModifier;
}//@CODE_1048



/*@NOTE_501
Returns the value of member 'm_fCityFoodModifier'.
*/
inline float CModifier::GetCityFoodModifier() const
{//@CODE_501
    return m_fCityFoodModifier;
}//@CODE_501



/*@NOTE_1046
Set the value of member 'm_fCityFoodModifier' to 'fCityFoodModifier'.
*/
inline void CModifier::SetCityFoodModifier(const float fCityFoodModifier)
{//@CODE_1046
    m_fCityFoodModifier = fCityFoodModifier;
}//@CODE_1046



/*@NOTE_499
Returns the value of member 'm_fCityGoldModifier'.
*/
inline float CModifier::GetCityGoldModifier() const
{//@CODE_499
    return m_fCityGoldModifier;
}//@CODE_499



/*@NOTE_1044
Set the value of member 'm_fCityGoldModifier' to 'fCityGoldModifier'.
*/
inline void CModifier::SetCityGoldModifier(const float fCityGoldModifier)
{//@CODE_1044
    m_fCityGoldModifier = fCityGoldModifier;
}//@CODE_1044



/*@NOTE_491
Returns the value of member 'm_fCityHealthModifier'.
*/
inline float CModifier::GetCityHealthModifier() const
{//@CODE_491
    return m_fCityHealthModifier;
}//@CODE_491



/*@NOTE_1038
Set the value of member 'm_fCityHealthModifier' to 'fCityHealthModifier'.
*/
inline void CModifier::SetCityHealthModifier(const float fCityHealthModifier)
{//@CODE_1038
    m_fCityHealthModifier = fCityHealthModifier;
}//@CODE_1038



/*@NOTE_1076
Returns the value of member 'm_fCityLoyaltyModifier'.
*/
inline float CModifier::GetCityLoyaltyModifier() const
{//@CODE_1076
    return m_fCityLoyaltyModifier;
}//@CODE_1076



/*@NOTE_1077
Set the value of member 'm_fCityLoyaltyModifier' to 'fCityLoyaltyModifier'.
*/
inline void CModifier::SetCityLoyaltyModifier(const float fCityLoyaltyModifier)
{//@CODE_1077
    m_fCityLoyaltyModifier = fCityLoyaltyModifier;
}//@CODE_1077



/*@NOTE_1100
Returns the value of member 'm_fCityMaximunCropValue'.
*/
inline float CModifier::GetCityMaximunCropValue() const
{//@CODE_1100
    return m_fCityMaximunCropValue;
}//@CODE_1100



/*@NOTE_1101
Set the value of member 'm_fCityMaximunCropValue' to 'fCityMaximunCropValue'.
*/
inline void CModifier::SetCityMaximunCropValue(const float fCityMaximunCropValue)
{//@CODE_1101
    m_fCityMaximunCropValue = fCityMaximunCropValue;
}//@CODE_1101



/*@NOTE_489
Returns the value of member 'm_fCityPopulationModifier'.
*/
inline float CModifier::GetCityPopulationModifier() const
{//@CODE_489
    return m_fCityPopulationModifier;
}//@CODE_489



/*@NOTE_1042
Set the value of member 'm_fCityPopulationModifier' to 'fCityPopulationModifier'.
*/
inline void CModifier::SetCityPopulationModifier(const float fCityPopulationModifier)
{//@CODE_1042
    m_fCityPopulationModifier = fCityPopulationModifier;
}//@CODE_1042



/*@NOTE_1080
Returns the value of member 'm_fCitySupportModifier'.
*/
inline float CModifier::GetCitySupportModifier() const
{//@CODE_1080
    return m_fCitySupportModifier;
}//@CODE_1080



/*@NOTE_1081
Set the value of member 'm_fCitySupportModifier' to 'fCitySupportModifier'.
*/
inline void CModifier::SetCitySupportModifier(const float fCitySupportModifier)
{//@CODE_1081
    m_fCitySupportModifier = fCitySupportModifier;
}//@CODE_1081



/*@NOTE_1096
Returns the value of member 'm_fPersonExperienceModifier'.
*/
inline float CModifier::GetPersonExperienceModifier() const
{//@CODE_1096
    return m_fPersonExperienceModifier;
}//@CODE_1096



/*@NOTE_1097
Set the value of member 'm_fPersonExperienceModifier' to 'fPersonExperienceModifier'.
*/
inline void CModifier::SetPersonExperienceModifier(const float fPersonExperienceModifier)
{//@CODE_1097
    m_fPersonExperienceModifier = fPersonExperienceModifier;
}//@CODE_1097



/*@NOTE_503
Returns the value of member 'm_fPersonStaminaModifier'.
*/
inline float CModifier::GetPersonStaminaModifier() const
{//@CODE_503
    return m_fPersonStaminaModifier;
}//@CODE_503



/*@NOTE_1030
Set the value of member 'm_fPersonStaminaModifier' to 'fPersonStaminaModifier'.
*/
inline void CModifier::SetPersonStaminaModifier(const float fPersonStaminaModifier)
{//@CODE_1030
    m_fPersonStaminaModifier = fPersonStaminaModifier;
}//@CODE_1030



/*@NOTE_1092
Returns the value of member 'm_fUnitArmsModifier'.
*/
inline float CModifier::GetUnitArmsModifier() const
{//@CODE_1092
    return m_fUnitArmsModifier;
}//@CODE_1092



/*@NOTE_1093
Set the value of member 'm_fUnitArmsModifier' to 'fUnitArmsModifier'.
*/
inline void CModifier::SetUnitArmsModifier(const float fUnitArmsModifier)
{//@CODE_1093
    m_fUnitArmsModifier = fUnitArmsModifier;
}//@CODE_1093



/*@NOTE_1051
Returns the value of member 'm_fUnitAttackModifier'.
*/
inline float CModifier::GetUnitAttackModifier() const
{//@CODE_1051
    return m_fUnitAttackModifier;
}//@CODE_1051



/*@NOTE_1052
Set the value of member 'm_fUnitAttackModifier' to 'fUnitAttackModifier'.
*/
inline void CModifier::SetUnitAttackModifier(const float fUnitAttackModifier)
{//@CODE_1052
    m_fUnitAttackModifier = fUnitAttackModifier;
}//@CODE_1052



/*@NOTE_1058
Returns the value of member 'm_fUnitDamageModifier'.
*/
inline float CModifier::GetUnitDamageModifier() const
{//@CODE_1058
    return m_fUnitDamageModifier;
}//@CODE_1058



/*@NOTE_1059
Set the value of member 'm_fUnitDamageModifier' to 'fUnitDamageModifier'.
*/
inline void CModifier::SetUnitDamageModifier(const float fUnitDamageModifier)
{//@CODE_1059
    m_fUnitDamageModifier = fUnitDamageModifier;
}//@CODE_1059



/*@NOTE_1088
Returns the value of member 'm_fUnitFoodModifier'.
*/
inline float CModifier::GetUnitFoodModifier() const
{//@CODE_1088
    return m_fUnitFoodModifier;
}//@CODE_1088



/*@NOTE_1089
Set the value of member 'm_fUnitFoodModifier' to 'fUnitFoodModifier'.
*/
inline void CModifier::SetUnitFoodModifier(const float fUnitFoodModifier)
{//@CODE_1089
    m_fUnitFoodModifier = fUnitFoodModifier;
}//@CODE_1089



/*@NOTE_1084
Returns the value of member 'm_fUnitGoldModifier'.
*/
inline float CModifier::GetUnitGoldModifier() const
{//@CODE_1084
    return m_fUnitGoldModifier;
}//@CODE_1084



/*@NOTE_1085
Set the value of member 'm_fUnitGoldModifier' to 'fUnitGoldModifier'.
*/
inline void CModifier::SetUnitGoldModifier(const float fUnitGoldModifier)
{//@CODE_1085
    m_fUnitGoldModifier = fUnitGoldModifier;
}//@CODE_1085



/*@NOTE_497
Returns the value of member 'm_fUnitSoldierModifier'.
*/
inline float CModifier::GetUnitSoldierModifier() const
{//@CODE_497
    return m_fUnitSoldierModifier;
}//@CODE_497



/*@NOTE_1040
Set the value of member 'm_fUnitSoldierModifier' to 'fUnitSoldierModifier'.
*/
inline void CModifier::SetUnitSoldierModifier(const float fUnitSoldierModifier)
{//@CODE_1040
    m_fUnitSoldierModifier = fUnitSoldierModifier;
}//@CODE_1040



/*@NOTE_467
Returns the value of member 'm_fUnitSpiritModifier'.
*/
inline float CModifier::GetUnitSpiritModifier() const
{//@CODE_467
    return m_fUnitSpiritModifier;
}//@CODE_467



/*@NOTE_1032
Set the value of member 'm_fUnitSpiritModifier' to 'fUnitSpiritModifier'.
*/
inline void CModifier::SetUnitSpiritModifier(const float fUnitSpiritModifier)
{//@CODE_1032
    m_fUnitSpiritModifier = fUnitSpiritModifier;
}//@CODE_1032



//@START_USER3
//@END_USER3

#endif
#endif

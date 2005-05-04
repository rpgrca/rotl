#ifndef _ROTL_H
#define _ROTL_H

// Date, Time & Version defines
#define RISE_OF_THE_LEGEND___LOGIC_MODULE_DATE    20050504
#define RISE_OF_THE_LEGEND___LOGIC_MODULE_TIME    005626
#define RISE_OF_THE_LEGEND___LOGIC_MODULE_VERSION 493

// Context define declarations

// Forward extern class declarations

//@START_USER1
//@END_USER1

// Defines needed for relations between templated classes

// Type declarations
//@START_DECLARATION_260 enCityType
typedef enum enCityType {
    enCITYTYPE_COMMERCIAL_VILLAGE = 0,
    enCITYTYPE_COMMERCIAL_TOWN,
    enCITYTYPE_COMMERCIAL_CITY,
    enCITYTYPE_COMMERCIAL_METROPOLIS,
    enCITYTYPE_MILITARY_GRANARY,
    enCITYTYPE_MILITARY_CITADEL,
    enCITYTYPE_MILITARY_FORTRESS,
    enCITYTYPE_MILITARY_CASTLE
} enCityType;

// Minimun and maximuns
#define D_MINIMUN_COMMERCIAL_CITY enCITYTYPE_COMMERCIAL_VILLAGE
#define D_MAXIMUN_COMMERCIAL_CITY enCITYTYPE_COMMERCIAL_METROPOLIS
#define D_MINIMUN_MILITARY_CITY enCITYTYPE_MILITARY_GRANARY
#define D_MAXIMUN_MILITARY_CITY enCITYTYPE_MILITARY_CASTLE
//@END_DECLARATION_260

//@START_DECLARATION_280 enTerrainType
typedef enum enTerrainType {
    enTERRAINTYPE_FIELD = 0,
    enTERRAINTYPE_MOUNTAIN = 1,
    enTERRAINTYPE_RIVER = 2,
    enTERRAINTYPE_ROAD = 3
} enTerrainType;
//@END_DECLARATION_280

//@START_DECLARATION_381 enWeatherType
typedef enum enWeatherType {
    enWEATHERTYPE_RAIN = 0,
    enWEATHERTYPE_SNOW = 1,
    enWEATHERTYPE_SUNNY = 2
} enWeatherType;

#define D_MAXIMUN_WEATHER_COUNT 3
//@END_DECLARATION_381

//@START_DECLARATION_415 enPersonType
typedef enum enPersonType {
    enPERSONTYPE_PERSON = 0,
    enPERSONTYPE_GENERAL = 1,
    enPERSONTYPE_RULER = 2
} enPersonType;
//@END_DECLARATION_415

//@START_DECLARATION_583 enEventType
typedef enum enEventType {
    enEVENTTYPE_SEASONAL_BLIZZARD = 0,
    enEVENTTYPE_SEASONAL_SAND_STORM,
    enEVENTTYPE_SEASONAL_HEAVY_RAINS,
    enEVENTTYPE_SEASONAL_FLOODS,
    enEVENTTYPE_SEASONAL_DROUGHT,
    enEVENTTYPE_SEASONAL_HARVEST,
    enEVENTTYPE_SEASONAL_THIEVES,
    enEVENTTYPE_SEASONAL_FOREIGN_INVASION,
    enEVENTTYPE_SEASONAL_RIOTS,
    enEVENTTYPE_SEASONAL_PLAGUE,
    enEVENTTYPE_SEASONAL_EARTHQUAKE
} enEventType;

//  Minimun and maximun values of the seasonal events
#define D_MINIMUN_SEASONAL_EVENT enEVENTTYPE_SEASONAL_BLIZZARD
#define D_MAXIMUN_SEASONAL_EVENT enEVENTTYPE_SEASONAL_EARTHQUAKE
//@END_DECLARATION_583

//@START_DECLARATION_786 enSeasonType
typedef enum enSeasonType {
    enSEASONTYPE_SUMMER = 0,
    enSEASONTYPE_AUTUMN,
    enSEASONTYPE_WINTER,
    enSEASONTYPE_SPRING
} enSeasonType;
//@END_DECLARATION_786

//@START_DECLARATION_921 enMonthType
typedef enum enMonthType {
    enMONTHTYPE_JANUARY = 0,
    enMONTHTYPE_FEBRUARY,
    enMONTHTYPE_MARCH,
    enMONTHTYPE_APRIL,
    enMONTHTYPE_MAY,
    enMONTHTYPE_JUNE,
    enMONTHTYPE_JULY,
    enMONTHTYPE_AUGUST,
    enMONTHTYPE_SEPTEMBER,
    enMONTHTYPE_OCTOBER,
    enMONTHTYPE_NOVEMBER,
    enMONTHTYPE_DECEMBER
} enMonthType;
//@END_DECLARATION_921

//@START_DECLARATION_1124 enWeekType
typedef enum enWeekType {
    enWEEKTYPE_MOVEMENT = 0,
    enWEEKTYPE_PLANNING
} enWeekType;
//@END_DECLARATION_1124

//@START_DECLARATION_1492 enActionType
typedef enum enActionType {
    enACTIONTYPE_NONE = -1,
    enACTIONTYPE_ARMY_ATTACK,
    enACTIONTYPE_ARMY_HIDE_CONCEAL,
    enACTIONTYPE_ARMY_HIDE_SHOW,
    enACTIONTYPE_ARMY_MARCH_NORMAL,
    enACTIONTYPE_ARMY_MARCH_RUSH,
    enACTIONTYPE_ARMY_MARCH_SNEAK,
    enACTIONTYPE_ARMY_SPY_SEEK,
    enACTIONTYPE_ARMY_SPY_SEND,
    enACTIONTYPE_ARMY_STRUCTURE_ORGANIZE,
    enACTIONTYPE_ARMY_STRUCTURE_FIRE,
    enACTIONTYPE_CITY_BUILD,
    enACTIONTYPE_CITY_BUY,
    enACTIONTYPE_CITY_ENLIST_DRAFT,
    enACTIONTYPE_CITY_ENLIST_HIRE,
    enACTIONTYPE_CITY_FARM,
    enACTIONTYPE_CITY_GIVE_ALMS,
    enACTIONTYPE_CITY_GIVE_FEAST,
    enACTIONTYPE_CITY_MATERIAL_RAID,
    enACTIONTYPE_CITY_MATERIAL_STOCK
} enActionType;
//@END_DECLARATION_1492

//@START_DECLARATION_1697 enInputType
typedef enum enInputType {
    enINPUTTYPE_NONE = -1,
    enINPUTTYPE_UP,
    enINPUTTYPE_DOWN,
    enINPUTTYPE_LEFT,
    enINPUTTYPE_RIGHT,
    enINPUTTYPE_BUTTON1,
    enINPUTTYPE_BUTTON2,
    enINPUTTYPE_QUIT
} enInputType;
//@END_DECLARATION_1697

//@START_DECLARATION_2191 enObstacleType
typedef enum enObstacleType {
    enOBSTACLETYPE_FREE = 0,
    enOBSTACLETYPE_BLOCK
} enObstacleType;
//@END_DECLARATION_2191

//@START_DECLARATION_2357 enDirectionType
typedef enum enDirectionType {
    enDIRECTIONTYPE_NORTH = 0,
    enDIRECTIONTYPE_SOUTH,
    enDIRECTIONTYPE_EAST,
    enDIRECTIONTYPE_WEST
} enDirectionType;
//@END_DECLARATION_2357

// Forward class declarations
class CBase;
class CPerson;
class CPersonGeneral;
class CCity;
class CCommercialCity;
class CCommercialCityVillage;
class CCommercialCityTown;
class CCommercialCityCity;
class CCommercialCityMetropolis;
class CMilitaryCity;
class CMilitaryCityGranary;
class CMilitaryCityCitadel;
class CMilitaryCityFortress;
class CMilitaryCityCastle;
class CPersonRuler;
class CCityFactory;
class CTerrain;
class CTerrainMountain;
class CTerrainField;
class CTerrainRiver;
class CTerrainRoad;
class CWeather;
class CWeatherRain;
class CModifier;
class CWeatherSnow;
class CWeatherSunny;
class CTerrainFactory;
class CWeatherFactory;
class CEvent;
class CSeasonalEvent;
class CPersonFactory;
class CSeasonalEventBlizzard;
class CUnit;
class CSeasonalEventSandStorm;
class CSeasonalEventHeavyRains;
class CSeasonalEventFloods;
class CSeasonalEventDrought;
class CSeasonalEventHarvest;
class CSeasonalThieves;
class CSeasonalEventForeignInvasion;
class CSeasonalEventRiots;
class CSeasonalEventPlague;
class CSeasonalEventEarthquake;
class CHistoricalEvent;
class CEventFactory;
class CWeek;
class CMovementWeek;
class CPlanningWeek;
class CMonth;
class CWeekFactory;
class CSeason;
class CMonthJanuary;
class CSeasonSummer;
class CSeasonAutumn;
class CSeasonWinter;
class CSeasonSpring;
class CSeasonFactory;
class CMonthFebruary;
class CMonthMarch;
class CMonthApril;
class CMonthMay;
class CMonthJune;
class CMonthJuly;
class CMonthAugust;
class CMonthSeptember;
class CMonthOctober;
class CMonthNovember;
class CMonthDecember;
class CMonthFactory;
class CTimelineFactory;
class CRenderer;
class CMapRenderer;
class CMap;
class CMapTextRenderer;
class CPersonRenderer;
class CPersonTextRenderer;
class CMapFactory;
class CCityRenderer;
class CCityTextRenderer;
class CCombat;
class CCombatGround;
class CCombatSiege;
class CCombatDuel;
class CAction;
class CArmyActionMarch;
class CArmyActionMarchNormal;
class CArmyActionMarchSneak;
class CArmyActionMarchRush;
class CArmyActionAttack;
class CCityActionGive;
class CArmyAction;
class CCityAction;
class CCityActionGiveFeast;
class CCityActionGiveAlms;
class CCityActionEnlist;
class CCityActionEnlistDraft;
class CCityActionEnlistHire;
class CCityActionBuy;
class CCityActionFarm;
class CCityActionBuild;
class CCityActionMaterial;
class CCityActionMaterialStock;
class CCityActionMaterialRaid;
class CArmyActionHide;
class CArmyActionHideConceal;
class CArmyActionHideShow;
class CArmyActionSpy;
class CArmyActionSpySend;
class CArmyActionSpySeek;
class CArmyActionStructure;
class CArmyActionStructureOrganize;
class CArmyActionStructureFire;
class CInput;
class CInputKeyword;
class CUnitTesting;
class CUnitTestingCity;
class CUnitTestingSet;
class CUnitTestingMap;
class CUnitTestingAction;
class CGame;
class CPlayer;
class CUnitRenderer;
class CUnitTextRenderer;
class CTimeline;
class CTimelineRenderer;
class CTimelineTextRenderer;
class CWeatherRenderer;
class CWeatherTextRenderer;
class CPlayerRenderer;
class CPlayerTextRenderer;
class CCityActionClaim;
class CLocatable;
class CTemporal;
class CMapCursesRenderer;
class CCityCursesRenderer;
class CUnitCursesRenderer;
class CPlayerCursesRenderer;
class CInputCurses;
class CTimelineCursesRenderer;

// Make sure the CB_PTR macro is defined
#ifndef CB_PTR
#define CB_PTR(ClassName) ClassName*
#endif

// Needed ClassBuilder include files
#include <assert.h>

// Make sure the inline implementations are skipped
#ifdef CB_INLINES
#undef CB_INLINES
#endif

// Include classes, for declarations
#include "Base.h"
#include "Person.h"
#include "PersonGeneral.h"
#include "Locatable.h"
#include "City.h"
#include "CommercialCity.h"
#include "CommercialCityVillage.h"
#include "CommercialCityTown.h"
#include "CommercialCityCity.h"
#include "CommercialCityMetropolis.h"
#include "MilitaryCity.h"
#include "MilitaryCityGranary.h"
#include "MilitaryCityCitadel.h"
#include "MilitaryCityFortress.h"
#include "MilitaryCityCastle.h"
#include "PersonRuler.h"
#include "CityFactory.h"
#include "Terrain.h"
#include "TerrainMountain.h"
#include "TerrainField.h"
#include "TerrainRiver.h"
#include "TerrainRoad.h"
#include "Weather.h"
#include "WeatherRain.h"
#include "Modifier.h"
#include "WeatherSnow.h"
#include "WeatherSunny.h"
#include "TerrainFactory.h"
#include "WeatherFactory.h"
#include "Event.h"
#include "SeasonalEvent.h"
#include "PersonFactory.h"
#include "SeasonalEventBlizzard.h"
#include "Unit.h"
#include "SeasonalEventSandStorm.h"
#include "SeasonalEventHeavyRains.h"
#include "SeasonalEventFloods.h"
#include "SeasonalEventDrought.h"
#include "SeasonalEventHarvest.h"
#include "SeasonalThieves.h"
#include "SeasonalEventForeignInvasion.h"
#include "SeasonalEventRiots.h"
#include "SeasonalEventPlague.h"
#include "SeasonalEventEarthquake.h"
#include "HistoricalEvent.h"
#include "EventFactory.h"
#include "Week.h"
#include "MovementWeek.h"
#include "PlanningWeek.h"
#include "Month.h"
#include "WeekFactory.h"
#include "Season.h"
#include "MonthJanuary.h"
#include "SeasonSummer.h"
#include "SeasonAutumn.h"
#include "SeasonWinter.h"
#include "SeasonSpring.h"
#include "SeasonFactory.h"
#include "MonthFebruary.h"
#include "MonthMarch.h"
#include "MonthApril.h"
#include "MonthMay.h"
#include "MonthJune.h"
#include "MonthJuly.h"
#include "MonthAugust.h"
#include "MonthSeptember.h"
#include "MonthOctober.h"
#include "MonthNovember.h"
#include "MonthDecember.h"
#include "MonthFactory.h"
#include "TimelineFactory.h"
#include "Renderer.h"
#include "MapRenderer.h"
#include "Map.h"
#include "MapTextRenderer.h"
#include "PersonRenderer.h"
#include "PersonTextRenderer.h"
#include "MapFactory.h"
#include "CityRenderer.h"
#include "CityTextRenderer.h"
#include "Combat.h"
#include "CombatGround.h"
#include "CombatSiege.h"
#include "CombatDuel.h"
#include "Action.h"
#include "ArmyAction.h"
#include "ArmyActionMarch.h"
#include "ArmyActionMarchNormal.h"
#include "ArmyActionMarchSneak.h"
#include "ArmyActionMarchRush.h"
#include "ArmyActionAttack.h"
#include "CityAction.h"
#include "CityActionGive.h"
#include "CityActionGiveFeast.h"
#include "CityActionGiveAlms.h"
#include "CityActionEnlist.h"
#include "CityActionEnlistDraft.h"
#include "CityActionEnlistHire.h"
#include "CityActionBuy.h"
#include "CityActionFarm.h"
#include "CityActionBuild.h"
#include "CityActionMaterial.h"
#include "CityActionMaterialStock.h"
#include "CityActionMaterialRaid.h"
#include "ArmyActionHide.h"
#include "ArmyActionHideConceal.h"
#include "ArmyActionHideShow.h"
#include "ArmyActionSpy.h"
#include "ArmyActionSpySend.h"
#include "ArmyActionSpySeek.h"
#include "ArmyActionStructure.h"
#include "ArmyActionStructureOrganize.h"
#include "ArmyActionStructureFire.h"
#include "Input.h"
#include "InputKeyword.h"
#include "UnitTesting.h"
#include "UnitTestingCity.h"
#include "UnitTestingSet.h"
#include "UnitTestingMap.h"
#include "UnitTestingAction.h"
#include "Game.h"
#include "Player.h"
#include "UnitRenderer.h"
#include "UnitTextRenderer.h"
#include "Timeline.h"
#include "TimelineRenderer.h"
#include "TimelineTextRenderer.h"
#include "WeatherRenderer.h"
#include "WeatherTextRenderer.h"
#include "PlayerRenderer.h"
#include "PlayerTextRenderer.h"
#include "CityActionClaim.h"
#include "Temporal.h"
#include "MapCursesRenderer.h"
#include "CityCursesRenderer.h"
#include "UnitCursesRenderer.h"
#include "PlayerCursesRenderer.h"
#include "InputCurses.h"
#include "TimelineCursesRenderer.h"


// Include classes again, for inline implementation
#define CB_INLINES
#include "Base.h"
#include "Person.h"
#include "City.h"
#include "PersonRuler.h"
#include "Terrain.h"
#include "Weather.h"
#include "Modifier.h"
#include "Event.h"
#include "Unit.h"
#include "Week.h"
#include "Month.h"
#include "Season.h"
#include "MapRenderer.h"
#include "Map.h"
#include "PersonRenderer.h"
#include "CityRenderer.h"
#include "Combat.h"
#include "CombatDuel.h"
#include "Action.h"
#include "ArmyActionMarch.h"
#include "ArmyAction.h"
#include "CityAction.h"
#include "ArmyActionSpy.h"
#include "UnitTesting.h"
#include "Game.h"
#include "Player.h"
#include "UnitRenderer.h"
#include "Timeline.h"
#include "TimelineRenderer.h"
#include "WeatherRenderer.h"
#include "PlayerRenderer.h"
#include "Locatable.h"
#include "Temporal.h"

//@START_USER2
//@END_USER2

#endif

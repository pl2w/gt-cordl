#pragma once
// IWYU pragma private; include "GlobalNamespace/CritterTemplate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CritterTemplate)
namespace GlobalNamespace {
class CrittersAnim;
}
namespace GlobalNamespace {
class CrittersPawn;
}
namespace GlobalNamespace {
struct crittersAttractorStruct;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class CritterTemplate;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CritterTemplate*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CritterTemplate*, "", "CritterTemplate");
// Dependencies UnityEngine.GameObject, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: CritterTemplate
class CORDL_TYPE CritterTemplate : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_HapticsBlurb)) ::StringW  HapticsBlurb;

/// @brief Field afraidOfList, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_afraidOfList, put=__cordl_internal_set_afraidOfList)) ::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>*  afraidOfList;

/// @brief Field attractedThreshold, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_attractedThreshold, put=__cordl_internal_set_attractedThreshold)) float_t  attractedThreshold;

/// @brief Field attractedToList, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_attractedToList, put=__cordl_internal_set_attractedToList)) ::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>*  attractedToList;

/// @brief Field attractionAnim, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_attractionAnim, put=__cordl_internal_set_attractionAnim)) ::GlobalNamespace::CrittersAnim*  attractionAnim;

/// @brief Field attractionLostPerSecond, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_attractionLostPerSecond, put=__cordl_internal_set_attractionLostPerSecond)) float_t  attractionLostPerSecond;

/// @brief Field attractionOngoingFX, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_attractionOngoingFX, put=__cordl_internal_set_attractionOngoingFX)) ::UnityW<::UnityEngine::GameObject>  attractionOngoingFX;

/// @brief Field attractionStartFX, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_attractionStartFX, put=__cordl_internal_set_attractionStartFX)) ::UnityW<::UnityEngine::GameObject>  attractionStartFX;

/// @brief Field awakeThreshold, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_awakeThreshold, put=__cordl_internal_set_awakeThreshold)) float_t  awakeThreshold;

/// @brief Field calmThreshold, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_calmThreshold, put=__cordl_internal_set_calmThreshold)) float_t  calmThreshold;

/// @brief Field capturedAnim, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_capturedAnim, put=__cordl_internal_set_capturedAnim)) ::GlobalNamespace::CrittersAnim*  capturedAnim;

/// @brief Field capturedOngoingFX, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_capturedOngoingFX, put=__cordl_internal_set_capturedOngoingFX)) ::UnityW<::UnityEngine::GameObject>  capturedOngoingFX;

/// @brief Field capturedStartFX, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_capturedStartFX, put=__cordl_internal_set_capturedStartFX)) ::UnityW<::UnityEngine::GameObject>  capturedStartFX;

/// @brief Field catchableThreshold, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_catchableThreshold, put=__cordl_internal_set_catchableThreshold)) float_t  catchableThreshold;

/// @brief Field despawningAnim, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_despawningAnim, put=__cordl_internal_set_despawningAnim)) ::GlobalNamespace::CrittersAnim*  despawningAnim;

/// @brief Field despawningOngoingFX, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_despawningOngoingFX, put=__cordl_internal_set_despawningOngoingFX)) ::UnityW<::UnityEngine::GameObject>  despawningOngoingFX;

/// @brief Field despawningStartFX, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_despawningStartFX, put=__cordl_internal_set_despawningStartFX)) ::UnityW<::UnityEngine::GameObject>  despawningStartFX;

/// @brief Field eatingAnim, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_eatingAnim, put=__cordl_internal_set_eatingAnim)) ::GlobalNamespace::CrittersAnim*  eatingAnim;

/// @brief Field eatingOngoingFX, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_eatingOngoingFX, put=__cordl_internal_set_eatingOngoingFX)) ::UnityW<::UnityEngine::GameObject>  eatingOngoingFX;

/// @brief Field eatingStartFX, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_eatingStartFX, put=__cordl_internal_set_eatingStartFX)) ::UnityW<::UnityEngine::GameObject>  eatingStartFX;

/// @brief Field escapeThreshold, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_escapeThreshold, put=__cordl_internal_set_escapeThreshold)) float_t  escapeThreshold;

/// @brief Field fearAnim, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_fearAnim, put=__cordl_internal_set_fearAnim)) ::GlobalNamespace::CrittersAnim*  fearAnim;

/// @brief Field fearLostPerSecond, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_fearLostPerSecond, put=__cordl_internal_set_fearLostPerSecond)) float_t  fearLostPerSecond;

/// @brief Field fearOngoingFX, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_fearOngoingFX, put=__cordl_internal_set_fearOngoingFX)) ::UnityW<::UnityEngine::GameObject>  fearOngoingFX;

/// @brief Field fearStartFX, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_fearStartFX, put=__cordl_internal_set_fearStartFX)) ::UnityW<::UnityEngine::GameObject>  fearStartFX;

/// @brief Field grabbedAnim, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbedAnim, put=__cordl_internal_set_grabbedAnim)) ::GlobalNamespace::CrittersAnim*  grabbedAnim;

/// @brief Field grabbedOngoingFX, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbedOngoingFX, put=__cordl_internal_set_grabbedOngoingFX)) ::UnityW<::UnityEngine::GameObject>  grabbedOngoingFX;

/// @brief Field grabbedStartFX, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbedStartFX, put=__cordl_internal_set_grabbedStartFX)) ::UnityW<::UnityEngine::GameObject>  grabbedStartFX;

/// @brief Field grabbedStopFX, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbedStopFX, put=__cordl_internal_set_grabbedStopFX)) ::UnityW<::UnityEngine::GameObject>  grabbedStopFX;

/// @brief Field grabbedStruggleHaptics, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbedStruggleHaptics, put=__cordl_internal_set_grabbedStruggleHaptics)) ::UnityW<::UnityEngine::AudioClip>  grabbedStruggleHaptics;

/// @brief Field grabbedStruggleHapticsStrength, offset 0x1c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabbedStruggleHapticsStrength, put=__cordl_internal_set_grabbedStruggleHapticsStrength)) float_t  grabbedStruggleHapticsStrength;

/// @brief Field hatChance, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_hatChance, put=__cordl_internal_set_hatChance)) float_t  hatChance;

/// @brief Field hats, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_hats, put=__cordl_internal_set_hats)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  hats;

/// @brief Field hungerGainedPerSecond, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_hungerGainedPerSecond, put=__cordl_internal_set_hungerGainedPerSecond)) float_t  hungerGainedPerSecond;

/// @brief Field hungerLostPerSecond, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hungerLostPerSecond, put=__cordl_internal_set_hungerLostPerSecond)) float_t  hungerLostPerSecond;

/// @brief Field hungryAnim, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_hungryAnim, put=__cordl_internal_set_hungryAnim)) ::GlobalNamespace::CrittersAnim*  hungryAnim;

/// @brief Field hungryOngoingFX, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_hungryOngoingFX, put=__cordl_internal_set_hungryOngoingFX)) ::UnityW<::UnityEngine::GameObject>  hungryOngoingFX;

/// @brief Field hungryStartFX, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_hungryStartFX, put=__cordl_internal_set_hungryStartFX)) ::UnityW<::UnityEngine::GameObject>  hungryStartFX;

/// @brief Field hungryThreshold, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_hungryThreshold, put=__cordl_internal_set_hungryThreshold)) float_t  hungryThreshold;

/// @brief Field jumpCooldown, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_jumpCooldown, put=__cordl_internal_set_jumpCooldown)) float_t  jumpCooldown;

/// @brief Field jumpVariabilityTime, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_jumpVariabilityTime, put=__cordl_internal_set_jumpVariabilityTime)) float_t  jumpVariabilityTime;

/// @brief Field lifeTime, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lifeTime, put=__cordl_internal_set_lifeTime)) float_t  lifeTime;

/// @brief Field maxAttraction, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxAttraction, put=__cordl_internal_set_maxAttraction)) float_t  maxAttraction;

/// @brief Field maxFear, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxFear, put=__cordl_internal_set_maxFear)) float_t  maxFear;

/// @brief Field maxHunger, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHunger, put=__cordl_internal_set_maxHunger)) float_t  maxHunger;

/// @brief Field maxJumpVel, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxJumpVel, put=__cordl_internal_set_maxJumpVel)) float_t  maxJumpVel;

/// @brief Field maxSize, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSize, put=__cordl_internal_set_maxSize)) float_t  maxSize;

/// @brief Field maxSleepiness, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSleepiness, put=__cordl_internal_set_maxSleepiness)) float_t  maxSleepiness;

/// @brief Field maxStruggle, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxStruggle, put=__cordl_internal_set_maxStruggle)) float_t  maxStruggle;

/// @brief Field minSize, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_minSize, put=__cordl_internal_set_minSize)) float_t  minSize;

/// @brief Field modifiedValues, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_modifiedValues, put=__cordl_internal_set_modifiedValues)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  modifiedValues;

/// @brief Field parent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::UnityW<::GlobalNamespace::CritterTemplate>  parent;

/// @brief Field satiatedThreshold, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_satiatedThreshold, put=__cordl_internal_set_satiatedThreshold)) float_t  satiatedThreshold;

/// @brief Field scaredJumpCooldown, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaredJumpCooldown, put=__cordl_internal_set_scaredJumpCooldown)) float_t  scaredJumpCooldown;

/// @brief Field scaredThreshold, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaredThreshold, put=__cordl_internal_set_scaredThreshold)) float_t  scaredThreshold;

/// @brief Field sensoryRange, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sensoryRange, put=__cordl_internal_set_sensoryRange)) float_t  sensoryRange;

/// @brief Field sleepAnim, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_sleepAnim, put=__cordl_internal_set_sleepAnim)) ::GlobalNamespace::CrittersAnim*  sleepAnim;

/// @brief Field sleepOngoingFX, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_sleepOngoingFX, put=__cordl_internal_set_sleepOngoingFX)) ::UnityW<::UnityEngine::GameObject>  sleepOngoingFX;

/// @brief Field sleepStartFX, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_sleepStartFX, put=__cordl_internal_set_sleepStartFX)) ::UnityW<::UnityEngine::GameObject>  sleepStartFX;

/// @brief Field sleepinessGainedPerSecond, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_sleepinessGainedPerSecond, put=__cordl_internal_set_sleepinessGainedPerSecond)) float_t  sleepinessGainedPerSecond;

/// @brief Field sleepinessLostPerSecond, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_sleepinessLostPerSecond, put=__cordl_internal_set_sleepinessLostPerSecond)) float_t  sleepinessLostPerSecond;

/// @brief Field spawningAnim, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawningAnim, put=__cordl_internal_set_spawningAnim)) ::GlobalNamespace::CrittersAnim*  spawningAnim;

/// @brief Field spawningOngoingFX, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawningOngoingFX, put=__cordl_internal_set_spawningOngoingFX)) ::UnityW<::UnityEngine::GameObject>  spawningOngoingFX;

/// @brief Field spawningStartFX, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawningStartFX, put=__cordl_internal_set_spawningStartFX)) ::UnityW<::UnityEngine::GameObject>  spawningStartFX;

/// @brief Field struggleGainedPerSecond, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_struggleGainedPerSecond, put=__cordl_internal_set_struggleGainedPerSecond)) float_t  struggleGainedPerSecond;

/// @brief Field struggleLostPerSecond, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_struggleLostPerSecond, put=__cordl_internal_set_struggleLostPerSecond)) float_t  struggleLostPerSecond;

/// @brief Field stunnedAnim, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_stunnedAnim, put=__cordl_internal_set_stunnedAnim)) ::GlobalNamespace::CrittersAnim*  stunnedAnim;

/// @brief Field stunnedOngoingFX, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_stunnedOngoingFX, put=__cordl_internal_set_stunnedOngoingFX)) ::UnityW<::UnityEngine::GameObject>  stunnedOngoingFX;

/// @brief Field stunnedStartFX, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_stunnedStartFX, put=__cordl_internal_set_stunnedStartFX)) ::UnityW<::UnityEngine::GameObject>  stunnedStartFX;

/// @brief Field temperament, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_temperament, put=__cordl_internal_set_temperament)) ::StringW  temperament;

/// @brief Field tiredThreshold, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_tiredThreshold, put=__cordl_internal_set_tiredThreshold)) float_t  tiredThreshold;

/// @brief Field unattractedThreshold, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_unattractedThreshold, put=__cordl_internal_set_unattractedThreshold)) float_t  unattractedThreshold;

/// @brief Field visionConeAngle, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_visionConeAngle, put=__cordl_internal_set_visionConeAngle)) float_t  visionConeAngle;

/// @brief Method ApplyBehaviour, addr 0x56f75a8, size 0x598, virtual false, abstract: false, final false
inline void ApplyBehaviour(::GlobalNamespace::CrittersPawn*  critter) ;

/// @brief Method ApplyBehaviourFX, addr 0x56f7b40, size 0x930, virtual false, abstract: false, final false
inline void ApplyBehaviourFX(::GlobalNamespace::CrittersPawn*  critter) ;

/// @brief Method ApplyToCritter, addr 0x56f7580, size 0x28, virtual false, abstract: false, final false
inline void ApplyToCritter(::GlobalNamespace::CrittersPawn*  critter) ;

/// @brief Method GetParentValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetParentValue(::StringW  valueName) ;

/// @brief Method GetTemplateValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetTemplateValue(::StringW  valueName) ;

/// @brief Method IsValueModified, addr 0x56f7528, size 0x58, virtual false, abstract: false, final false
inline bool IsValueModified(::StringW  valueName) ;

static inline ::GlobalNamespace::CritterTemplate* New_ctor() ;

/// @brief Method OnEnable, addr 0x56f7524, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0x56f5da8, size 0x60, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method RegisterModifiedBehaviour, addr 0x56f5e08, size 0xa84, virtual false, abstract: false, final false
inline void RegisterModifiedBehaviour() ;

/// @brief Method RegisterModifiedVisual, addr 0x56f688c, size 0xc98, virtual false, abstract: false, final false
inline void RegisterModifiedVisual() ;

/// @brief Method SetMaxStrength, addr 0x56f5be8, size 0xe0, virtual false, abstract: false, final false
inline void SetMaxStrength(float_t  maxStrength) ;

/// @brief Method SetMeanStrength, addr 0x56f5cc8, size 0xe0, virtual false, abstract: false, final false
inline void SetMeanStrength(float_t  meanStrength) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>* const& __cordl_internal_get_afraidOfList() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>*& __cordl_internal_get_afraidOfList() ;

constexpr float_t const& __cordl_internal_get_attractedThreshold() const;

constexpr float_t& __cordl_internal_get_attractedThreshold() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>* const& __cordl_internal_get_attractedToList() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>*& __cordl_internal_get_attractedToList() ;

constexpr ::GlobalNamespace::CrittersAnim* const& __cordl_internal_get_attractionAnim() const;

constexpr ::GlobalNamespace::CrittersAnim*& __cordl_internal_get_attractionAnim() ;

constexpr float_t const& __cordl_internal_get_attractionLostPerSecond() const;

constexpr float_t& __cordl_internal_get_attractionLostPerSecond() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_attractionOngoingFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_attractionOngoingFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_attractionStartFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_attractionStartFX() ;

constexpr float_t const& __cordl_internal_get_awakeThreshold() const;

constexpr float_t& __cordl_internal_get_awakeThreshold() ;

constexpr float_t const& __cordl_internal_get_calmThreshold() const;

constexpr float_t& __cordl_internal_get_calmThreshold() ;

constexpr ::GlobalNamespace::CrittersAnim* const& __cordl_internal_get_capturedAnim() const;

constexpr ::GlobalNamespace::CrittersAnim*& __cordl_internal_get_capturedAnim() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_capturedOngoingFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_capturedOngoingFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_capturedStartFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_capturedStartFX() ;

constexpr float_t const& __cordl_internal_get_catchableThreshold() const;

constexpr float_t& __cordl_internal_get_catchableThreshold() ;

constexpr ::GlobalNamespace::CrittersAnim* const& __cordl_internal_get_despawningAnim() const;

constexpr ::GlobalNamespace::CrittersAnim*& __cordl_internal_get_despawningAnim() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_despawningOngoingFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_despawningOngoingFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_despawningStartFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_despawningStartFX() ;

constexpr ::GlobalNamespace::CrittersAnim* const& __cordl_internal_get_eatingAnim() const;

constexpr ::GlobalNamespace::CrittersAnim*& __cordl_internal_get_eatingAnim() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_eatingOngoingFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_eatingOngoingFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_eatingStartFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_eatingStartFX() ;

constexpr float_t const& __cordl_internal_get_escapeThreshold() const;

constexpr float_t& __cordl_internal_get_escapeThreshold() ;

constexpr ::GlobalNamespace::CrittersAnim* const& __cordl_internal_get_fearAnim() const;

constexpr ::GlobalNamespace::CrittersAnim*& __cordl_internal_get_fearAnim() ;

constexpr float_t const& __cordl_internal_get_fearLostPerSecond() const;

constexpr float_t& __cordl_internal_get_fearLostPerSecond() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_fearOngoingFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_fearOngoingFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_fearStartFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_fearStartFX() ;

constexpr ::GlobalNamespace::CrittersAnim* const& __cordl_internal_get_grabbedAnim() const;

constexpr ::GlobalNamespace::CrittersAnim*& __cordl_internal_get_grabbedAnim() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_grabbedOngoingFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_grabbedOngoingFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_grabbedStartFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_grabbedStartFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_grabbedStopFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_grabbedStopFX() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_grabbedStruggleHaptics() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_grabbedStruggleHaptics() ;

constexpr float_t const& __cordl_internal_get_grabbedStruggleHapticsStrength() const;

constexpr float_t& __cordl_internal_get_grabbedStruggleHapticsStrength() ;

constexpr float_t const& __cordl_internal_get_hatChance() const;

constexpr float_t& __cordl_internal_get_hatChance() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_hats() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_hats() ;

constexpr float_t const& __cordl_internal_get_hungerGainedPerSecond() const;

constexpr float_t& __cordl_internal_get_hungerGainedPerSecond() ;

constexpr float_t const& __cordl_internal_get_hungerLostPerSecond() const;

constexpr float_t& __cordl_internal_get_hungerLostPerSecond() ;

constexpr ::GlobalNamespace::CrittersAnim* const& __cordl_internal_get_hungryAnim() const;

constexpr ::GlobalNamespace::CrittersAnim*& __cordl_internal_get_hungryAnim() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_hungryOngoingFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_hungryOngoingFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_hungryStartFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_hungryStartFX() ;

constexpr float_t const& __cordl_internal_get_hungryThreshold() const;

constexpr float_t& __cordl_internal_get_hungryThreshold() ;

constexpr float_t const& __cordl_internal_get_jumpCooldown() const;

constexpr float_t& __cordl_internal_get_jumpCooldown() ;

constexpr float_t const& __cordl_internal_get_jumpVariabilityTime() const;

constexpr float_t& __cordl_internal_get_jumpVariabilityTime() ;

constexpr float_t const& __cordl_internal_get_lifeTime() const;

constexpr float_t& __cordl_internal_get_lifeTime() ;

constexpr float_t const& __cordl_internal_get_maxAttraction() const;

constexpr float_t& __cordl_internal_get_maxAttraction() ;

constexpr float_t const& __cordl_internal_get_maxFear() const;

constexpr float_t& __cordl_internal_get_maxFear() ;

constexpr float_t const& __cordl_internal_get_maxHunger() const;

constexpr float_t& __cordl_internal_get_maxHunger() ;

constexpr float_t const& __cordl_internal_get_maxJumpVel() const;

constexpr float_t& __cordl_internal_get_maxJumpVel() ;

constexpr float_t const& __cordl_internal_get_maxSize() const;

constexpr float_t& __cordl_internal_get_maxSize() ;

constexpr float_t const& __cordl_internal_get_maxSleepiness() const;

constexpr float_t& __cordl_internal_get_maxSleepiness() ;

constexpr float_t const& __cordl_internal_get_maxStruggle() const;

constexpr float_t& __cordl_internal_get_maxStruggle() ;

constexpr float_t const& __cordl_internal_get_minSize() const;

constexpr float_t& __cordl_internal_get_minSize() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& __cordl_internal_get_modifiedValues() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& __cordl_internal_get_modifiedValues() ;

constexpr ::UnityW<::GlobalNamespace::CritterTemplate> const& __cordl_internal_get_parent() const;

constexpr ::UnityW<::GlobalNamespace::CritterTemplate>& __cordl_internal_get_parent() ;

constexpr float_t const& __cordl_internal_get_satiatedThreshold() const;

constexpr float_t& __cordl_internal_get_satiatedThreshold() ;

constexpr float_t const& __cordl_internal_get_scaredJumpCooldown() const;

constexpr float_t& __cordl_internal_get_scaredJumpCooldown() ;

constexpr float_t const& __cordl_internal_get_scaredThreshold() const;

constexpr float_t& __cordl_internal_get_scaredThreshold() ;

constexpr float_t const& __cordl_internal_get_sensoryRange() const;

constexpr float_t& __cordl_internal_get_sensoryRange() ;

constexpr ::GlobalNamespace::CrittersAnim* const& __cordl_internal_get_sleepAnim() const;

constexpr ::GlobalNamespace::CrittersAnim*& __cordl_internal_get_sleepAnim() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_sleepOngoingFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_sleepOngoingFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_sleepStartFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_sleepStartFX() ;

constexpr float_t const& __cordl_internal_get_sleepinessGainedPerSecond() const;

constexpr float_t& __cordl_internal_get_sleepinessGainedPerSecond() ;

constexpr float_t const& __cordl_internal_get_sleepinessLostPerSecond() const;

constexpr float_t& __cordl_internal_get_sleepinessLostPerSecond() ;

constexpr ::GlobalNamespace::CrittersAnim* const& __cordl_internal_get_spawningAnim() const;

constexpr ::GlobalNamespace::CrittersAnim*& __cordl_internal_get_spawningAnim() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_spawningOngoingFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_spawningOngoingFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_spawningStartFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_spawningStartFX() ;

constexpr float_t const& __cordl_internal_get_struggleGainedPerSecond() const;

constexpr float_t& __cordl_internal_get_struggleGainedPerSecond() ;

constexpr float_t const& __cordl_internal_get_struggleLostPerSecond() const;

constexpr float_t& __cordl_internal_get_struggleLostPerSecond() ;

constexpr ::GlobalNamespace::CrittersAnim* const& __cordl_internal_get_stunnedAnim() const;

constexpr ::GlobalNamespace::CrittersAnim*& __cordl_internal_get_stunnedAnim() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_stunnedOngoingFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_stunnedOngoingFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_stunnedStartFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_stunnedStartFX() ;

constexpr ::StringW const& __cordl_internal_get_temperament() const;

constexpr ::StringW& __cordl_internal_get_temperament() ;

constexpr float_t const& __cordl_internal_get_tiredThreshold() const;

constexpr float_t& __cordl_internal_get_tiredThreshold() ;

constexpr float_t const& __cordl_internal_get_unattractedThreshold() const;

constexpr float_t& __cordl_internal_get_unattractedThreshold() ;

constexpr float_t const& __cordl_internal_get_visionConeAngle() const;

constexpr float_t& __cordl_internal_get_visionConeAngle() ;

constexpr void __cordl_internal_set_afraidOfList(::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>*  value) ;

constexpr void __cordl_internal_set_attractedThreshold(float_t  value) ;

constexpr void __cordl_internal_set_attractedToList(::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>*  value) ;

constexpr void __cordl_internal_set_attractionAnim(::GlobalNamespace::CrittersAnim*  value) ;

constexpr void __cordl_internal_set_attractionLostPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_attractionOngoingFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_attractionStartFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_awakeThreshold(float_t  value) ;

constexpr void __cordl_internal_set_calmThreshold(float_t  value) ;

constexpr void __cordl_internal_set_capturedAnim(::GlobalNamespace::CrittersAnim*  value) ;

constexpr void __cordl_internal_set_capturedOngoingFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_capturedStartFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_catchableThreshold(float_t  value) ;

constexpr void __cordl_internal_set_despawningAnim(::GlobalNamespace::CrittersAnim*  value) ;

constexpr void __cordl_internal_set_despawningOngoingFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_despawningStartFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_eatingAnim(::GlobalNamespace::CrittersAnim*  value) ;

constexpr void __cordl_internal_set_eatingOngoingFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_eatingStartFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_escapeThreshold(float_t  value) ;

constexpr void __cordl_internal_set_fearAnim(::GlobalNamespace::CrittersAnim*  value) ;

constexpr void __cordl_internal_set_fearLostPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_fearOngoingFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_fearStartFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_grabbedAnim(::GlobalNamespace::CrittersAnim*  value) ;

constexpr void __cordl_internal_set_grabbedOngoingFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_grabbedStartFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_grabbedStopFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_grabbedStruggleHaptics(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_grabbedStruggleHapticsStrength(float_t  value) ;

constexpr void __cordl_internal_set_hatChance(float_t  value) ;

constexpr void __cordl_internal_set_hats(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_hungerGainedPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_hungerLostPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_hungryAnim(::GlobalNamespace::CrittersAnim*  value) ;

constexpr void __cordl_internal_set_hungryOngoingFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_hungryStartFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_hungryThreshold(float_t  value) ;

constexpr void __cordl_internal_set_jumpCooldown(float_t  value) ;

constexpr void __cordl_internal_set_jumpVariabilityTime(float_t  value) ;

constexpr void __cordl_internal_set_lifeTime(float_t  value) ;

constexpr void __cordl_internal_set_maxAttraction(float_t  value) ;

constexpr void __cordl_internal_set_maxFear(float_t  value) ;

constexpr void __cordl_internal_set_maxHunger(float_t  value) ;

constexpr void __cordl_internal_set_maxJumpVel(float_t  value) ;

constexpr void __cordl_internal_set_maxSize(float_t  value) ;

constexpr void __cordl_internal_set_maxSleepiness(float_t  value) ;

constexpr void __cordl_internal_set_maxStruggle(float_t  value) ;

constexpr void __cordl_internal_set_minSize(float_t  value) ;

constexpr void __cordl_internal_set_modifiedValues(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

constexpr void __cordl_internal_set_parent(::UnityW<::GlobalNamespace::CritterTemplate>  value) ;

constexpr void __cordl_internal_set_satiatedThreshold(float_t  value) ;

constexpr void __cordl_internal_set_scaredJumpCooldown(float_t  value) ;

constexpr void __cordl_internal_set_scaredThreshold(float_t  value) ;

constexpr void __cordl_internal_set_sensoryRange(float_t  value) ;

constexpr void __cordl_internal_set_sleepAnim(::GlobalNamespace::CrittersAnim*  value) ;

constexpr void __cordl_internal_set_sleepOngoingFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_sleepStartFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_sleepinessGainedPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_sleepinessLostPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_spawningAnim(::GlobalNamespace::CrittersAnim*  value) ;

constexpr void __cordl_internal_set_spawningOngoingFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_spawningStartFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_struggleGainedPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_struggleLostPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_stunnedAnim(::GlobalNamespace::CrittersAnim*  value) ;

constexpr void __cordl_internal_set_stunnedOngoingFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_stunnedStartFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_temperament(::StringW  value) ;

constexpr void __cordl_internal_set_tiredThreshold(float_t  value) ;

constexpr void __cordl_internal_set_unattractedThreshold(float_t  value) ;

constexpr void __cordl_internal_set_visionConeAngle(float_t  value) ;

/// @brief Method .ctor, addr 0x56f8470, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HapticsBlurb, addr 0x56f5b2c, size 0xbc, virtual false, abstract: false, final false
inline ::StringW get_HapticsBlurb() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CritterTemplate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CritterTemplate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CritterTemplate(CritterTemplate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CritterTemplate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CritterTemplate(CritterTemplate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{127};

/// @brief Field parent, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CritterTemplate>  ___parent;

/// [Space]
/// [Header("Description")]
/// @brief Field temperament, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___temperament;

/// [Space]
/// [Header("Behaviour")]
/// [CritterTemplateParameter]
/// @brief Field maxJumpVel, offset: 0x28, size: 0x4, def value: None
 float_t  ___maxJumpVel;

/// [CritterTemplateParameter]
/// @brief Field jumpCooldown, offset: 0x2c, size: 0x4, def value: None
 float_t  ___jumpCooldown;

/// [CritterTemplateParameter]
/// @brief Field scaredJumpCooldown, offset: 0x30, size: 0x4, def value: None
 float_t  ___scaredJumpCooldown;

/// [CritterTemplateParameter]
/// @brief Field jumpVariabilityTime, offset: 0x34, size: 0x4, def value: None
 float_t  ___jumpVariabilityTime;

/// [Space]
/// [CritterTemplateParameter]
/// @brief Field visionConeAngle, offset: 0x38, size: 0x4, def value: None
 float_t  ___visionConeAngle;

/// [FormerlySerializedAs("visionConeHeight")]
/// [CritterTemplateParameter]
/// @brief Field sensoryRange, offset: 0x3c, size: 0x4, def value: None
 float_t  ___sensoryRange;

/// [Space]
/// [CritterTemplateParameter]
/// @brief Field maxHunger, offset: 0x40, size: 0x4, def value: None
 float_t  ___maxHunger;

/// [CritterTemplateParameter]
/// @brief Field hungryThreshold, offset: 0x44, size: 0x4, def value: None
 float_t  ___hungryThreshold;

/// [CritterTemplateParameter]
/// @brief Field satiatedThreshold, offset: 0x48, size: 0x4, def value: None
 float_t  ___satiatedThreshold;

/// [CritterTemplateParameter]
/// @brief Field hungerLostPerSecond, offset: 0x4c, size: 0x4, def value: None
 float_t  ___hungerLostPerSecond;

/// [CritterTemplateParameter]
/// @brief Field hungerGainedPerSecond, offset: 0x50, size: 0x4, def value: None
 float_t  ___hungerGainedPerSecond;

/// [Space]
/// [CritterTemplateParameter]
/// @brief Field maxFear, offset: 0x54, size: 0x4, def value: None
 float_t  ___maxFear;

/// [CritterTemplateParameter]
/// @brief Field scaredThreshold, offset: 0x58, size: 0x4, def value: None
 float_t  ___scaredThreshold;

/// [CritterTemplateParameter]
/// @brief Field calmThreshold, offset: 0x5c, size: 0x4, def value: None
 float_t  ___calmThreshold;

/// [CritterTemplateParameter]
/// @brief Field fearLostPerSecond, offset: 0x60, size: 0x4, def value: None
 float_t  ___fearLostPerSecond;

/// [Space]
/// [CritterTemplateParameter]
/// @brief Field maxAttraction, offset: 0x64, size: 0x4, def value: None
 float_t  ___maxAttraction;

/// [CritterTemplateParameter]
/// @brief Field attractedThreshold, offset: 0x68, size: 0x4, def value: None
 float_t  ___attractedThreshold;

/// [CritterTemplateParameter]
/// @brief Field unattractedThreshold, offset: 0x6c, size: 0x4, def value: None
 float_t  ___unattractedThreshold;

/// [CritterTemplateParameter]
/// @brief Field attractionLostPerSecond, offset: 0x70, size: 0x4, def value: None
 float_t  ___attractionLostPerSecond;

/// [Space]
/// [CritterTemplateParameter]
/// @brief Field maxSleepiness, offset: 0x74, size: 0x4, def value: None
 float_t  ___maxSleepiness;

/// [CritterTemplateParameter]
/// @brief Field tiredThreshold, offset: 0x78, size: 0x4, def value: None
 float_t  ___tiredThreshold;

/// [CritterTemplateParameter]
/// @brief Field awakeThreshold, offset: 0x7c, size: 0x4, def value: None
 float_t  ___awakeThreshold;

/// [CritterTemplateParameter]
/// @brief Field sleepinessGainedPerSecond, offset: 0x80, size: 0x4, def value: None
 float_t  ___sleepinessGainedPerSecond;

/// [CritterTemplateParameter]
/// @brief Field sleepinessLostPerSecond, offset: 0x84, size: 0x4, def value: None
 float_t  ___sleepinessLostPerSecond;

/// [Space]
/// [CritterTemplateParameter]
/// @brief Field struggleGainedPerSecond, offset: 0x88, size: 0x4, def value: None
 float_t  ___struggleGainedPerSecond;

/// [CritterTemplateParameter]
/// @brief Field maxStruggle, offset: 0x8c, size: 0x4, def value: None
 float_t  ___maxStruggle;

/// [CritterTemplateParameter]
/// @brief Field escapeThreshold, offset: 0x90, size: 0x4, def value: None
 float_t  ___escapeThreshold;

/// [CritterTemplateParameter]
/// @brief Field catchableThreshold, offset: 0x94, size: 0x4, def value: None
 float_t  ___catchableThreshold;

/// [CritterTemplateParameter]
/// @brief Field struggleLostPerSecond, offset: 0x98, size: 0x4, def value: None
 float_t  ___struggleLostPerSecond;

/// [Space]
/// [CritterTemplateParameter]
/// @brief Field lifeTime, offset: 0x9c, size: 0x4, def value: None
 float_t  ___lifeTime;

/// [Space]
/// @brief Field attractedToList, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>*  ___attractedToList;

/// @brief Field afraidOfList, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>*  ___afraidOfList;

/// [Space]
/// [Header("Visual")]
/// [CritterTemplateParameter]
/// @brief Field minSize, offset: 0xb0, size: 0x4, def value: None
 float_t  ___minSize;

/// [CritterTemplateParameter]
/// @brief Field maxSize, offset: 0xb4, size: 0x4, def value: None
 float_t  ___maxSize;

/// [CritterTemplateParameter]
/// @brief Field hatChance, offset: 0xb8, size: 0x4, def value: None
 float_t  ___hatChance;

/// @brief Field hats, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___hats;

/// [Space]
/// [Header("Behaviour FX")]
/// @brief Field eatingStartFX, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___eatingStartFX;

/// @brief Field eatingOngoingFX, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___eatingOngoingFX;

/// @brief Field eatingAnim, offset: 0xd8, size: 0x8, def value: None
 ::GlobalNamespace::CrittersAnim*  ___eatingAnim;

/// @brief Field fearStartFX, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___fearStartFX;

/// @brief Field fearOngoingFX, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___fearOngoingFX;

/// @brief Field fearAnim, offset: 0xf0, size: 0x8, def value: None
 ::GlobalNamespace::CrittersAnim*  ___fearAnim;

/// @brief Field attractionStartFX, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___attractionStartFX;

/// @brief Field attractionOngoingFX, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___attractionOngoingFX;

/// @brief Field attractionAnim, offset: 0x108, size: 0x8, def value: None
 ::GlobalNamespace::CrittersAnim*  ___attractionAnim;

/// @brief Field sleepStartFX, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___sleepStartFX;

/// @brief Field sleepOngoingFX, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___sleepOngoingFX;

/// @brief Field sleepAnim, offset: 0x120, size: 0x8, def value: None
 ::GlobalNamespace::CrittersAnim*  ___sleepAnim;

/// @brief Field grabbedStartFX, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___grabbedStartFX;

/// @brief Field grabbedOngoingFX, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___grabbedOngoingFX;

/// @brief Field grabbedStopFX, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___grabbedStopFX;

/// @brief Field grabbedAnim, offset: 0x140, size: 0x8, def value: None
 ::GlobalNamespace::CrittersAnim*  ___grabbedAnim;

/// @brief Field hungryStartFX, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___hungryStartFX;

/// @brief Field hungryOngoingFX, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___hungryOngoingFX;

/// @brief Field hungryAnim, offset: 0x158, size: 0x8, def value: None
 ::GlobalNamespace::CrittersAnim*  ___hungryAnim;

/// @brief Field spawningStartFX, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___spawningStartFX;

/// @brief Field spawningOngoingFX, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___spawningOngoingFX;

/// @brief Field spawningAnim, offset: 0x170, size: 0x8, def value: None
 ::GlobalNamespace::CrittersAnim*  ___spawningAnim;

/// @brief Field despawningStartFX, offset: 0x178, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___despawningStartFX;

/// @brief Field despawningOngoingFX, offset: 0x180, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___despawningOngoingFX;

/// @brief Field despawningAnim, offset: 0x188, size: 0x8, def value: None
 ::GlobalNamespace::CrittersAnim*  ___despawningAnim;

/// @brief Field capturedStartFX, offset: 0x190, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___capturedStartFX;

/// @brief Field capturedOngoingFX, offset: 0x198, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___capturedOngoingFX;

/// @brief Field capturedAnim, offset: 0x1a0, size: 0x8, def value: None
 ::GlobalNamespace::CrittersAnim*  ___capturedAnim;

/// @brief Field stunnedStartFX, offset: 0x1a8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___stunnedStartFX;

/// @brief Field stunnedOngoingFX, offset: 0x1b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___stunnedOngoingFX;

/// @brief Field stunnedAnim, offset: 0x1b8, size: 0x8, def value: None
 ::GlobalNamespace::CrittersAnim*  ___stunnedAnim;

/// @brief Field grabbedStruggleHaptics, offset: 0x1c0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___grabbedStruggleHaptics;

/// @brief Field grabbedStruggleHapticsStrength, offset: 0x1c8, size: 0x4, def value: None
 float_t  ___grabbedStruggleHapticsStrength;

/// @brief Field modifiedValues, offset: 0x1d0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  ___modifiedValues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___parent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___temperament) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___maxJumpVel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___jumpCooldown) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___scaredJumpCooldown) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___jumpVariabilityTime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___visionConeAngle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___sensoryRange) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___maxHunger) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___hungryThreshold) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___satiatedThreshold) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___hungerLostPerSecond) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___hungerGainedPerSecond) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___maxFear) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___scaredThreshold) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___calmThreshold) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___fearLostPerSecond) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___maxAttraction) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___attractedThreshold) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___unattractedThreshold) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___attractionLostPerSecond) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___maxSleepiness) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___tiredThreshold) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___awakeThreshold) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___sleepinessGainedPerSecond) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___sleepinessLostPerSecond) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___struggleGainedPerSecond) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___maxStruggle) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___escapeThreshold) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___catchableThreshold) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___struggleLostPerSecond) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___lifeTime) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___attractedToList) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___afraidOfList) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___minSize) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___maxSize) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___hatChance) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___hats) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___eatingStartFX) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___eatingOngoingFX) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___eatingAnim) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___fearStartFX) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___fearOngoingFX) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___fearAnim) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___attractionStartFX) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___attractionOngoingFX) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___attractionAnim) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___sleepStartFX) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___sleepOngoingFX) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___sleepAnim) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___grabbedStartFX) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___grabbedOngoingFX) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___grabbedStopFX) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___grabbedAnim) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___hungryStartFX) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___hungryOngoingFX) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___hungryAnim) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___spawningStartFX) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___spawningOngoingFX) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___spawningAnim) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___despawningStartFX) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___despawningOngoingFX) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___despawningAnim) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___capturedStartFX) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___capturedOngoingFX) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___capturedAnim) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___stunnedStartFX) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___stunnedOngoingFX) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___stunnedAnim) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___grabbedStruggleHaptics) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___grabbedStruggleHapticsStrength) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterTemplate, ___modifiedValues) == 0x1d0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CritterTemplate) == 0x1d8, "Size mismatch!");

} // namespace end def GlobalNamespace

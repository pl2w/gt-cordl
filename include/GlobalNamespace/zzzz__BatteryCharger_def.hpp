#pragma once
// IWYU pragma private; include "GlobalNamespace/BatteryCharger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BatteryChargerCrank_def.hpp"
#include "GlobalNamespace/zzzz__BatteryCharger_BatteryChargerEvent_VDirection_def.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BatteryCharger)
namespace GlobalNamespace {
class BatteryChargerCrank;
}
namespace GlobalNamespace {
struct BatteryChargerEvent_BatteryCharger_VDirection;
}
namespace GlobalNamespace {
struct BatteryChargerState_CrankSyncState;
}
namespace GlobalNamespace {
class BatteryChargerState;
}
namespace GlobalNamespace {
class BatteryCharger_BatteryChargerEvent;
}
namespace GlobalNamespace {
class BatteryCharger_EventPhaseObjects;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class BatteryCharger;
}
namespace GlobalNamespace {
class BatteryCharger_BatteryChargerEvent;
}
namespace GlobalNamespace {
class BatteryCharger_EventPhaseObjects;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BatteryCharger*);
MARK_REF_T(::GlobalNamespace::BatteryCharger_BatteryChargerEvent*);
MARK_REF_T(::GlobalNamespace::BatteryCharger_EventPhaseObjects*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BatteryCharger*, "", "BatteryCharger");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BatteryCharger_BatteryChargerEvent*, "", "BatteryCharger/BatteryChargerEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BatteryCharger_EventPhaseObjects*, "", "BatteryCharger/EventPhaseObjects");
// Dependencies BatteryCharger::BatteryChargerEvent, BatteryCharger::EventPhaseObjects, BatteryChargerCrank, UnityEngine.Color, UnityEngine.MonoBehaviour, XSceneRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: BatteryCharger
class CORDL_TYPE BatteryCharger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BatteryChargerEvent = ::GlobalNamespace::BatteryCharger_BatteryChargerEvent;

using EventPhaseObjects = ::GlobalNamespace::BatteryCharger_EventPhaseObjects;

 __declspec(property(get=get_CurrentEventPhase)) int32_t  CurrentEventPhase;

 __declspec(property(get=get_LocalActorNr)) int32_t  LocalActorNr;

/// @brief Field actions, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_actions, put=__cordl_internal_set_actions)) ::ArrayW<::GlobalNamespace::BatteryCharger_BatteryChargerEvent*>  actions;

/// @brief Field chargeFillRenderer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_chargeFillRenderer, put=__cordl_internal_set_chargeFillRenderer)) ::UnityW<::UnityEngine::Renderer>  chargeFillRenderer;

/// @brief Field chargeFillTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_chargeFillTransform, put=__cordl_internal_set_chargeFillTransform)) ::UnityW<::UnityEngine::Transform>  chargeFillTransform;

/// @brief Field chargeFullRollAngle, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_chargeFullRollAngle, put=__cordl_internal_set_chargeFullRollAngle)) float_t  chargeFullRollAngle;

/// @brief Field chargingLoopSound, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_chargingLoopSound, put=__cordl_internal_set_chargingLoopSound)) ::UnityW<::UnityEngine::AudioSource>  chargingLoopSound;

/// @brief Field crankCount, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankCount, put=__cordl_internal_set_crankCount)) int32_t  crankCount;

/// @brief Field cranks, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_cranks, put=__cordl_internal_set_cranks)) ::ArrayW<::UnityW<::GlobalNamespace::BatteryChargerCrank>>  cranks;

/// @brief Field emptyColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_emptyColor, put=__cordl_internal_set_emptyColor)) ::UnityEngine::Color  emptyColor;

/// @brief Field eventPhases, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_eventPhases, put=__cordl_internal_set_eventPhases)) ::ArrayW<::GlobalNamespace::BatteryCharger_EventPhaseObjects*>  eventPhases;

/// @brief Field fullColor, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_fullColor, put=__cordl_internal_set_fullColor)) ::UnityEngine::Color  fullColor;

/// @brief Field fullyChargedSound, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_fullyChargedSound, put=__cordl_internal_set_fullyChargedSound)) ::UnityW<::UnityEngine::AudioSource>  fullyChargedSound;

/// @brief Field previousCharge, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousCharge, put=__cordl_internal_set_previousCharge)) float_t  previousCharge;

/// @brief Field state, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::UnityW<::GlobalNamespace::BatteryChargerState>  state;

/// @brief Field stateRef, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_stateRef, put=__cordl_internal_set_stateRef)) ::GlobalNamespace::XSceneRef  stateRef;

/// @brief Method ApplyChargeVisuals, addr 0x5bfc47c, size 0x178, virtual false, abstract: false, final false
inline void ApplyChargeVisuals() ;

/// @brief Method Bind, addr 0x5bfbe2c, size 0x1e8, virtual false, abstract: false, final false
inline void Bind(::GlobalNamespace::BatteryChargerState*  newState) ;

/// @brief Method IsCrankHeldLocally, addr 0x5bfd040, size 0xc0, virtual false, abstract: false, final false
inline bool IsCrankHeldLocally(int32_t  crankIndex) ;

/// @brief Method LateUpdate, addr 0x5bfc944, size 0x284, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::BatteryCharger* New_ctor() ;

/// @brief Method OnChargeChanged, addr 0x5bfd874, size 0xe4, virtual false, abstract: false, final false
inline void OnChargeChanged() ;

/// @brief Method OnCrankGrabbed, addr 0x5bfd2a8, size 0x18, virtual false, abstract: false, final false
inline bool OnCrankGrabbed(int32_t  crankIndex, bool  isLeftHand) ;

/// @brief Method OnCrankInput, addr 0x5bfd72c, size 0x24, virtual false, abstract: false, final false
inline void OnCrankInput(int32_t  crankIndex, float_t  degrees) ;

/// @brief Method OnCrankReleased, addr 0x5bfd4fc, size 0x14, virtual false, abstract: false, final false
inline void OnCrankReleased(int32_t  crankIndex, float_t  finalAngle) ;

/// @brief Method OnDisable, addr 0x5bfc014, size 0x8c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5bfbd68, size 0xc4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEventPhaseChanged, addr 0x5bfc5f4, size 0x168, virtual false, abstract: false, final false
inline void OnEventPhaseChanged(int32_t  phase) ;

/// @brief Method OnFullyCharged, addr 0x5bfd958, size 0x84, virtual false, abstract: false, final false
inline void OnFullyCharged() ;

/// @brief Method OnStateSceneLoaded, addr 0x5bfc228, size 0x6c, virtual false, abstract: false, final false
inline void OnStateSceneLoaded() ;

/// @brief Method RegisterCrank, addr 0x5bfbbb4, size 0x130, virtual false, abstract: false, final false
inline int32_t RegisterCrank(::GlobalNamespace::BatteryChargerCrank*  crank) ;

/// @brief Method SetChargePerCrankDegree, addr 0x5bfd290, size 0x18, virtual false, abstract: false, final false
inline void SetChargePerCrankDegree(float_t  chargeRate) ;

/// @brief Method SetEventPhase, addr 0x5bfd100, size 0xd4, virtual false, abstract: false, final false
inline void SetEventPhase(int32_t  phase) ;

/// @brief Method Unbind, addr 0x5bfc0a0, size 0x188, virtual false, abstract: false, final false
inline void Unbind() ;

/// @brief Method UpdateRemoteCrankVisual, addr 0x5bfcc50, size 0x10c, virtual false, abstract: false, final false
inline void UpdateRemoteCrankVisual(::GlobalNamespace::BatteryChargerCrank*  crank, ::GlobalNamespace::BatteryChargerState_CrankSyncState  syncState, int32_t  localActor) ;

constexpr ::ArrayW<::GlobalNamespace::BatteryCharger_BatteryChargerEvent*> const& __cordl_internal_get_actions() const;

constexpr ::ArrayW<::GlobalNamespace::BatteryCharger_BatteryChargerEvent*>& __cordl_internal_get_actions() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_chargeFillRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_chargeFillRenderer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_chargeFillTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_chargeFillTransform() ;

constexpr float_t const& __cordl_internal_get_chargeFullRollAngle() const;

constexpr float_t& __cordl_internal_get_chargeFullRollAngle() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_chargingLoopSound() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_chargingLoopSound() ;

constexpr int32_t const& __cordl_internal_get_crankCount() const;

constexpr int32_t& __cordl_internal_get_crankCount() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::BatteryChargerCrank>> const& __cordl_internal_get_cranks() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::BatteryChargerCrank>>& __cordl_internal_get_cranks() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_emptyColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_emptyColor() ;

constexpr ::ArrayW<::GlobalNamespace::BatteryCharger_EventPhaseObjects*> const& __cordl_internal_get_eventPhases() const;

constexpr ::ArrayW<::GlobalNamespace::BatteryCharger_EventPhaseObjects*>& __cordl_internal_get_eventPhases() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_fullColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_fullColor() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_fullyChargedSound() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_fullyChargedSound() ;

constexpr float_t const& __cordl_internal_get_previousCharge() const;

constexpr float_t& __cordl_internal_get_previousCharge() ;

constexpr ::UnityW<::GlobalNamespace::BatteryChargerState> const& __cordl_internal_get_state() const;

constexpr ::UnityW<::GlobalNamespace::BatteryChargerState>& __cordl_internal_get_state() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_stateRef() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_stateRef() ;

constexpr void __cordl_internal_set_actions(::ArrayW<::GlobalNamespace::BatteryCharger_BatteryChargerEvent*>  value) ;

constexpr void __cordl_internal_set_chargeFillRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_chargeFillTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_chargeFullRollAngle(float_t  value) ;

constexpr void __cordl_internal_set_chargingLoopSound(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_crankCount(int32_t  value) ;

constexpr void __cordl_internal_set_cranks(::ArrayW<::UnityW<::GlobalNamespace::BatteryChargerCrank>>  value) ;

constexpr void __cordl_internal_set_emptyColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_eventPhases(::ArrayW<::GlobalNamespace::BatteryCharger_EventPhaseObjects*>  value) ;

constexpr void __cordl_internal_set_fullColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_fullyChargedSound(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_previousCharge(float_t  value) ;

constexpr void __cordl_internal_set_state(::UnityW<::GlobalNamespace::BatteryChargerState>  value) ;

constexpr void __cordl_internal_set_stateRef(::GlobalNamespace::XSceneRef  value) ;

/// @brief Method .ctor, addr 0x5bfd9f8, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentEventPhase, addr 0x5bfbb34, size 0x80, virtual false, abstract: false, final false
inline int32_t get_CurrentEventPhase() ;

/// @brief Method get_LocalActorNr, addr 0x5bfbce4, size 0x84, virtual false, abstract: false, final false
inline int32_t get_LocalActorNr() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BatteryCharger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BatteryCharger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BatteryCharger(BatteryCharger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BatteryCharger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BatteryCharger(BatteryCharger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{407};

/// [Header("Network State")]
/// [SerializeField]
/// @brief Field stateRef, offset: 0x20, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___stateRef;

/// [Header("Charge Visuals")]
/// [Tooltip("Transform rotated on its local Z axis to show charge level")]
/// [SerializeField]
/// @brief Field chargeFillTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___chargeFillTransform;

/// [Tooltip("Local Z rotation in degrees when fully charged")]
/// [SerializeField]
/// @brief Field chargeFullRollAngle, offset: 0x40, size: 0x4, def value: None
 float_t  ___chargeFullRollAngle;

/// [Tooltip("Renderer whose material color lerps with charge")]
/// [SerializeField]
/// @brief Field chargeFillRenderer, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___chargeFillRenderer;

/// [SerializeField]
/// @brief Field emptyColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ___emptyColor;

/// [SerializeField]
/// @brief Field fullColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ___fullColor;

/// [Header("Audio")]
/// [SerializeField]
/// @brief Field chargingLoopSound, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___chargingLoopSound;

/// [SerializeField]
/// @brief Field fullyChargedSound, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___fullyChargedSound;

/// [Header("Event Phases")]
/// [SerializeField]
/// @brief Field eventPhases, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::BatteryCharger_EventPhaseObjects*>  ___eventPhases;

/// @brief Field state, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BatteryChargerState>  ___state;

/// @brief Field cranks, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::BatteryChargerCrank>>  ___cranks;

/// @brief Field crankCount, offset: 0x98, size: 0x4, def value: None
 int32_t  ___crankCount;

/// [SerializeField]
/// @brief Field actions, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::BatteryCharger_BatteryChargerEvent*>  ___actions;

/// @brief Field previousCharge, offset: 0xa8, size: 0x4, def value: None
 float_t  ___previousCharge;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BatteryCharger, ___stateRef) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryCharger, ___chargeFillTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryCharger, ___chargeFullRollAngle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryCharger, ___chargeFillRenderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryCharger, ___emptyColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryCharger, ___fullColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryCharger, ___chargingLoopSound) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryCharger, ___fullyChargedSound) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryCharger, ___eventPhases) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryCharger, ___state) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryCharger, ___cranks) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryCharger, ___crankCount) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryCharger, ___actions) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryCharger, ___previousCharge) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BatteryCharger) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies BatteryCharger::BatteryChargerEvent::VDirection, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BatteryCharger/BatteryChargerEvent
class CORDL_TYPE BatteryCharger_BatteryChargerEvent : public ::System::Object {
public:
// Declarations
using VDirection = ::GlobalNamespace::BatteryChargerEvent_BatteryCharger_VDirection;

 __declspec(property(get=get_Action)) ::UnityEngine::Events::UnityEvent*  Action;

 __declspec(property(get=get_Direction)) ::GlobalNamespace::BatteryChargerEvent_BatteryCharger_VDirection  Direction;

 __declspec(property(get=get_Value)) float_t  Value;

/// @brief Field action, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::UnityEngine::Events::UnityEvent*  action;

/// @brief Field direction, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_direction, put=__cordl_internal_set_direction)) ::GlobalNamespace::BatteryChargerEvent_BatteryCharger_VDirection  direction;

/// @brief Field value, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) float_t  value;

static inline ::GlobalNamespace::BatteryCharger_BatteryChargerEvent* New_ctor() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_action() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_action() ;

constexpr ::GlobalNamespace::BatteryChargerEvent_BatteryCharger_VDirection const& __cordl_internal_get_direction() const;

constexpr ::GlobalNamespace::BatteryChargerEvent_BatteryCharger_VDirection& __cordl_internal_get_direction() ;

constexpr float_t const& __cordl_internal_get_value() const;

constexpr float_t& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_action(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_direction(::GlobalNamespace::BatteryChargerEvent_BatteryCharger_VDirection  value) ;

constexpr void __cordl_internal_set_value(float_t  value) ;

/// @brief Method .ctor, addr 0x5bfda98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Action, addr 0x5bfda90, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_Action() ;

/// @brief Method get_Direction, addr 0x5bfda80, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::BatteryChargerEvent_BatteryCharger_VDirection get_Direction() ;

/// @brief Method get_Value, addr 0x5bfda88, size 0x8, virtual false, abstract: false, final false
inline float_t get_Value() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BatteryCharger_BatteryChargerEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BatteryCharger_BatteryChargerEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BatteryCharger_BatteryChargerEvent(BatteryCharger_BatteryChargerEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BatteryCharger_BatteryChargerEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BatteryCharger_BatteryChargerEvent(BatteryCharger_BatteryChargerEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{406};

/// [SerializeField]
/// @brief Field direction, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::BatteryChargerEvent_BatteryCharger_VDirection  ___direction;

/// [SerializeField]
/// @brief Field value, offset: 0x14, size: 0x4, def value: None
 float_t  ___value;

/// [SerializeField]
/// @brief Field action, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___action;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BatteryCharger_BatteryChargerEvent, ___direction) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryCharger_BatteryChargerEvent, ___value) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryCharger_BatteryChargerEvent, ___action) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BatteryCharger_BatteryChargerEvent) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.GameObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: BatteryCharger/EventPhaseObjects
class CORDL_TYPE BatteryCharger_EventPhaseObjects : public ::System::Object {
public:
// Declarations
/// @brief Field friendlyName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendlyName, put=__cordl_internal_set_friendlyName)) ::StringW  friendlyName;

/// @brief Field objects, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_objects, put=__cordl_internal_set_objects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  objects;

static inline ::GlobalNamespace::BatteryCharger_EventPhaseObjects* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_friendlyName() const;

constexpr ::StringW& __cordl_internal_get_friendlyName() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_objects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_objects() ;

constexpr void __cordl_internal_set_friendlyName(::StringW  value) ;

constexpr void __cordl_internal_set_objects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

/// @brief Method .ctor, addr 0x5bfda78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BatteryCharger_EventPhaseObjects() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BatteryCharger_EventPhaseObjects", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BatteryCharger_EventPhaseObjects(BatteryCharger_EventPhaseObjects && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BatteryCharger_EventPhaseObjects", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BatteryCharger_EventPhaseObjects(BatteryCharger_EventPhaseObjects const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{404};

/// @brief Field friendlyName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___friendlyName;

/// @brief Field objects, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___objects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BatteryCharger_EventPhaseObjects, ___friendlyName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryCharger_EventPhaseObjects, ___objects) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BatteryCharger_EventPhaseObjects) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/StreetLightSaber.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__StreetLightSaber_State_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StreetLightSaber)
namespace GlobalNamespace {
struct StreetLightSaber_State;
}
namespace GorillaLocomotion::Climbing {
class GorillaVelocityTracker;
}
namespace GorillaTag::Cosmetics {
class StreetLightSaber_StaffStates;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class TrailRenderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class StreetLightSaber;
}
namespace GorillaTag::Cosmetics {
class StreetLightSaber_StaffStates;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::StreetLightSaber*);
MARK_REF_T(::GorillaTag::Cosmetics::StreetLightSaber_StaffStates*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::StreetLightSaber*, "GorillaTag.Cosmetics", "StreetLightSaber");
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::StreetLightSaber_StaffStates*, "GorillaTag.Cosmetics", "StreetLightSaber/StaffStates");
// Dependencies GorillaTag.Cosmetics.StreetLightSaber::StaffStates, GorillaTag.Cosmetics.StreetLightSaber::State, UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.StreetLightSaber
class CORDL_TYPE StreetLightSaber : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::StreetLightSaber_State;

using StaffStates = ::GorillaTag::Cosmetics::StreetLightSaber_StaffStates;

 __declspec(property(get=get_CurrentState)) ::GlobalNamespace::StreetLightSaber_State  CurrentState;

/// @brief Field allStates, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_allStates, put=__cordl_internal_set_allStates)) ::ArrayW<::GorillaTag::Cosmetics::StreetLightSaber_StaffStates*>  allStates;

/// @brief Field allStatesDict, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_allStatesDict, put=__cordl_internal_set_allStatesDict)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StreetLightSaber_State,::GorillaTag::Cosmetics::StreetLightSaber_StaffStates*>*  allStatesDict;

/// @brief Field autoSwitch, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoSwitch, put=__cordl_internal_set_autoSwitch)) bool  autoSwitch;

/// @brief Field autoSwitchEnabledTime, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_autoSwitchEnabledTime, put=__cordl_internal_set_autoSwitchEnabledTime)) float_t  autoSwitchEnabledTime;

/// @brief Field autoSwitchTimer, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_autoSwitchTimer, put=__cordl_internal_set_autoSwitchTimer)) float_t  autoSwitchTimer;

/// @brief Field currentIndex, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field hashId, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_hashId, put=__cordl_internal_set_hashId)) int32_t  hashId;

/// @brief Field instancedMaterial, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_instancedMaterial, put=__cordl_internal_set_instancedMaterial)) ::UnityW<::UnityEngine::Material>  instancedMaterial;

/// @brief Field materialIndex, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_materialIndex, put=__cordl_internal_set_materialIndex)) int32_t  materialIndex;

/// @brief Field meshRenderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshRenderer, put=__cordl_internal_set_meshRenderer)) ::UnityW<::UnityEngine::Renderer>  meshRenderer;

/// @brief Field minHitVelocityThreshold, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_minHitVelocityThreshold, put=__cordl_internal_set_minHitVelocityThreshold)) float_t  minHitVelocityThreshold;

/// @brief Field shaderColorProperty, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_shaderColorProperty, put=__cordl_internal_set_shaderColorProperty)) ::StringW  shaderColorProperty;

/// @brief Field trailRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_trailRenderer, put=__cordl_internal_set_trailRenderer)) ::UnityW<::UnityEngine::TrailRenderer>  trailRenderer;

/// @brief Field values, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_values, put=setStaticF_values)) ::ArrayW<::GlobalNamespace::StreetLightSaber_State>  values;

/// @brief Field velocityTracker, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityTracker, put=__cordl_internal_set_velocityTracker)) ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  velocityTracker;

/// @brief Method Awake, addr 0x5da352c, size 0x270, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method EnableAutoSwitch, addr 0x5da3be0, size 0x8, virtual false, abstract: false, final false
inline void EnableAutoSwitch(bool  enable) ;

/// @brief Method ForceSwitchTo, addr 0x5da38e8, size 0xa4, virtual false, abstract: false, final false
inline void ForceSwitchTo(::GlobalNamespace::StreetLightSaber_State  targetState) ;

/// @brief Method HitReceived, addr 0x5da3bf0, size 0x188, virtual false, abstract: false, final false
inline void HitReceived(::UnityEngine::Vector3  contact) ;

static inline ::GorillaTag::Cosmetics::StreetLightSaber* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5da3890, size 0x50, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x5da38e0, size 0x8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ResetStaff, addr 0x5da3be8, size 0x8, virtual false, abstract: false, final false
inline void ResetStaff() ;

/// @brief Method SwitchState, addr 0x5da3a08, size 0x1d8, virtual false, abstract: false, final false
inline void SwitchState(int32_t  newIndex) ;

/// @brief Method Update, addr 0x5da379c, size 0x40, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateStateAuto, addr 0x5da37dc, size 0xb4, virtual false, abstract: false, final false
inline void UpdateStateAuto() ;

/// @brief Method UpdateStateManual, addr 0x5da398c, size 0x7c, virtual false, abstract: false, final false
inline void UpdateStateManual() ;

constexpr ::ArrayW<::GorillaTag::Cosmetics::StreetLightSaber_StaffStates*> const& __cordl_internal_get_allStates() const;

constexpr ::ArrayW<::GorillaTag::Cosmetics::StreetLightSaber_StaffStates*>& __cordl_internal_get_allStates() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StreetLightSaber_State,::GorillaTag::Cosmetics::StreetLightSaber_StaffStates*>* const& __cordl_internal_get_allStatesDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StreetLightSaber_State,::GorillaTag::Cosmetics::StreetLightSaber_StaffStates*>*& __cordl_internal_get_allStatesDict() ;

constexpr bool const& __cordl_internal_get_autoSwitch() const;

constexpr bool& __cordl_internal_get_autoSwitch() ;

constexpr float_t const& __cordl_internal_get_autoSwitchEnabledTime() const;

constexpr float_t& __cordl_internal_get_autoSwitchEnabledTime() ;

constexpr float_t const& __cordl_internal_get_autoSwitchTimer() const;

constexpr float_t& __cordl_internal_get_autoSwitchTimer() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr int32_t const& __cordl_internal_get_hashId() const;

constexpr int32_t& __cordl_internal_get_hashId() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_instancedMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_instancedMaterial() ;

constexpr int32_t const& __cordl_internal_get_materialIndex() const;

constexpr int32_t& __cordl_internal_get_materialIndex() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_meshRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_meshRenderer() ;

constexpr float_t const& __cordl_internal_get_minHitVelocityThreshold() const;

constexpr float_t& __cordl_internal_get_minHitVelocityThreshold() ;

constexpr ::StringW const& __cordl_internal_get_shaderColorProperty() const;

constexpr ::StringW& __cordl_internal_get_shaderColorProperty() ;

constexpr ::UnityW<::UnityEngine::TrailRenderer> const& __cordl_internal_get_trailRenderer() const;

constexpr ::UnityW<::UnityEngine::TrailRenderer>& __cordl_internal_get_trailRenderer() ;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker> const& __cordl_internal_get_velocityTracker() const;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>& __cordl_internal_get_velocityTracker() ;

constexpr void __cordl_internal_set_allStates(::ArrayW<::GorillaTag::Cosmetics::StreetLightSaber_StaffStates*>  value) ;

constexpr void __cordl_internal_set_allStatesDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StreetLightSaber_State,::GorillaTag::Cosmetics::StreetLightSaber_StaffStates*>*  value) ;

constexpr void __cordl_internal_set_autoSwitch(bool  value) ;

constexpr void __cordl_internal_set_autoSwitchEnabledTime(float_t  value) ;

constexpr void __cordl_internal_set_autoSwitchTimer(float_t  value) ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_hashId(int32_t  value) ;

constexpr void __cordl_internal_set_instancedMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_materialIndex(int32_t  value) ;

constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_minHitVelocityThreshold(float_t  value) ;

constexpr void __cordl_internal_set_shaderColorProperty(::StringW  value) ;

constexpr void __cordl_internal_set_trailRenderer(::UnityW<::UnityEngine::TrailRenderer>  value) ;

constexpr void __cordl_internal_set_velocityTracker(::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  value) ;

/// @brief Method .ctor, addr 0x5da3d78, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::GlobalNamespace::StreetLightSaber_State> getStaticF_values() ;

/// @brief Method get_CurrentState, addr 0x5da34ac, size 0x80, virtual false, abstract: false, final false
inline ::GlobalNamespace::StreetLightSaber_State get_CurrentState() ;

static inline void setStaticF_values(::ArrayW<::GlobalNamespace::StreetLightSaber_State>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreetLightSaber() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreetLightSaber", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StreetLightSaber(StreetLightSaber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreetLightSaber", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreetLightSaber(StreetLightSaber const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4978};

/// [SerializeField]
/// @brief Field autoSwitchTimer, offset: 0x20, size: 0x4, def value: None
 float_t  ___autoSwitchTimer;

/// [SerializeField]
/// @brief Field trailRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TrailRenderer>  ___trailRenderer;

/// [SerializeField]
/// @brief Field meshRenderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___meshRenderer;

/// [SerializeField]
/// @brief Field shaderColorProperty, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___shaderColorProperty;

/// [SerializeField]
/// @brief Field materialIndex, offset: 0x40, size: 0x4, def value: None
 int32_t  ___materialIndex;

/// [SerializeField]
/// @brief Field velocityTracker, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  ___velocityTracker;

/// [SerializeField]
/// @brief Field minHitVelocityThreshold, offset: 0x50, size: 0x4, def value: None
 float_t  ___minHitVelocityThreshold;

/// [Space]
/// [Header("Staff State Settings")]
/// @brief Field allStates, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::Cosmetics::StreetLightSaber_StaffStates*>  ___allStates;

/// @brief Field currentIndex, offset: 0x60, size: 0x4, def value: None
 int32_t  ___currentIndex;

/// @brief Field allStatesDict, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StreetLightSaber_State,::GorillaTag::Cosmetics::StreetLightSaber_StaffStates*>*  ___allStatesDict;

/// @brief Field autoSwitch, offset: 0x70, size: 0x1, def value: None
 bool  ___autoSwitch;

/// @brief Field autoSwitchEnabledTime, offset: 0x74, size: 0x4, def value: None
 float_t  ___autoSwitchEnabledTime;

/// @brief Field hashId, offset: 0x78, size: 0x4, def value: None
 int32_t  ___hashId;

/// @brief Field instancedMaterial, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___instancedMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::StreetLightSaber, ___autoSwitchTimer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StreetLightSaber, ___trailRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StreetLightSaber, ___meshRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StreetLightSaber, ___shaderColorProperty) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StreetLightSaber, ___materialIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StreetLightSaber, ___velocityTracker) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StreetLightSaber, ___minHitVelocityThreshold) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StreetLightSaber, ___allStates) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StreetLightSaber, ___currentIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StreetLightSaber, ___allStatesDict) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StreetLightSaber, ___autoSwitch) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StreetLightSaber, ___autoSwitchEnabledTime) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StreetLightSaber, ___hashId) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StreetLightSaber, ___instancedMaterial) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::StreetLightSaber) == 0x88, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
// Dependencies GorillaTag.Cosmetics.StreetLightSaber::State, System.Object, UnityEngine.Color
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.StreetLightSaber/StaffStates
class CORDL_TYPE StreetLightSaber_StaffStates : public ::System::Object {
public:
// Declarations
/// @brief Field OnSuccessfulHit, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSuccessfulHit, put=__cordl_internal_set_OnSuccessfulHit)) ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  OnSuccessfulHit;

/// @brief Field color, offset 0x14, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color  color;

/// @brief Field onEnterState, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEnterState, put=__cordl_internal_set_onEnterState)) ::UnityEngine::Events::UnityEvent*  onEnterState;

/// @brief Field onExitState, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onExitState, put=__cordl_internal_set_onExitState)) ::UnityEngine::Events::UnityEvent*  onExitState;

/// @brief Field state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::StreetLightSaber_State  state;

static inline ::GorillaTag::Cosmetics::StreetLightSaber_StaffStates* New_ctor() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& __cordl_internal_get_OnSuccessfulHit() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& __cordl_internal_get_OnSuccessfulHit() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_color() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onEnterState() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onEnterState() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onExitState() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onExitState() ;

constexpr ::GlobalNamespace::StreetLightSaber_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::StreetLightSaber_State& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_OnSuccessfulHit(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_onEnterState(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onExitState(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::StreetLightSaber_State  value) ;

/// @brief Method .ctor, addr 0x5da3f6c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreetLightSaber_StaffStates() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreetLightSaber_StaffStates", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StreetLightSaber_StaffStates(StreetLightSaber_StaffStates && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreetLightSaber_StaffStates", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreetLightSaber_StaffStates(StreetLightSaber_StaffStates const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4976};

/// @brief Field state, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::StreetLightSaber_State  ___state;

/// @brief Field color, offset: 0x14, size: 0x10, def value: None
 ::UnityEngine::Color  ___color;

/// @brief Field onEnterState, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onEnterState;

/// @brief Field onExitState, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onExitState;

/// @brief Field OnSuccessfulHit, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  ___OnSuccessfulHit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::StreetLightSaber_StaffStates, ___state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StreetLightSaber_StaffStates, ___color) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StreetLightSaber_StaffStates, ___onEnterState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StreetLightSaber_StaffStates, ___onExitState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StreetLightSaber_StaffStates, ___OnSuccessfulHit) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::StreetLightSaber_StaffStates) == 0x40, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics

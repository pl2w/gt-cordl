#pragma once
// IWYU pragma private; include "GlobalNamespace/WaterInteractionEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(WaterInteractionEvents)
namespace GorillaLocomotion::Swimming {
class WaterVolume;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class SphereCollider;
}
// Forward declare root types
namespace GlobalNamespace {
class WaterInteractionEvents;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WaterInteractionEvents*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WaterInteractionEvents*, "", "WaterInteractionEvents");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: WaterInteractionEvents
class CORDL_TYPE WaterInteractionEvents : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field inWater, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_inWater, put=__cordl_internal_set_inWater)) bool  inWater;

/// @brief Field onEnterWater, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEnterWater, put=__cordl_internal_set_onEnterWater)) ::UnityEngine::Events::UnityEvent*  onEnterWater;

/// @brief Field onExitWater, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onExitWater, put=__cordl_internal_set_onExitWater)) ::UnityEngine::Events::UnityEvent*  onExitWater;

/// @brief Field overlappingWaterVolumes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlappingWaterVolumes, put=__cordl_internal_set_overlappingWaterVolumes)) ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*  overlappingWaterVolumes;

/// @brief Field waterContactSphere, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_waterContactSphere, put=__cordl_internal_set_waterContactSphere)) ::UnityW<::UnityEngine::SphereCollider>  waterContactSphere;

static inline ::GlobalNamespace::WaterInteractionEvents* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5abcb44, size 0x154, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5abcc98, size 0xf4, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method Update, addr 0x5abc808, size 0x33c, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_inWater() const;

constexpr bool& __cordl_internal_get_inWater() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onEnterWater() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onEnterWater() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onExitWater() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onExitWater() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>* const& __cordl_internal_get_overlappingWaterVolumes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*& __cordl_internal_get_overlappingWaterVolumes() ;

constexpr ::UnityW<::UnityEngine::SphereCollider> const& __cordl_internal_get_waterContactSphere() const;

constexpr ::UnityW<::UnityEngine::SphereCollider>& __cordl_internal_get_waterContactSphere() ;

constexpr void __cordl_internal_set_inWater(bool  value) ;

constexpr void __cordl_internal_set_onEnterWater(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onExitWater(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_overlappingWaterVolumes(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*  value) ;

constexpr void __cordl_internal_set_waterContactSphere(::UnityW<::UnityEngine::SphereCollider>  value) ;

/// @brief Method .ctor, addr 0x5abcd8c, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterInteractionEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterInteractionEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterInteractionEvents(WaterInteractionEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterInteractionEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterInteractionEvents(WaterInteractionEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3313};

/// @brief Field onEnterWater, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onEnterWater;

/// @brief Field onExitWater, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onExitWater;

/// [SerializeField]
/// @brief Field waterContactSphere, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SphereCollider>  ___waterContactSphere;

/// @brief Field overlappingWaterVolumes, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*  ___overlappingWaterVolumes;

/// @brief Field inWater, offset: 0x40, size: 0x1, def value: None
 bool  ___inWater;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WaterInteractionEvents, ___onEnterWater) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterInteractionEvents, ___onExitWater) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterInteractionEvents, ___waterContactSphere) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterInteractionEvents, ___overlappingWaterVolumes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterInteractionEvents, ___inWater) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WaterInteractionEvents) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace

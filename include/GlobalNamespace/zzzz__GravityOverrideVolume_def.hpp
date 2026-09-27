#pragma once
// IWYU pragma private; include "GlobalNamespace/GravityOverrideVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GravityOverrideVolume_GravityType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GravityOverrideVolume)
namespace GlobalNamespace {
class CompositeTriggerEvents;
}
namespace GlobalNamespace {
struct GravityOverrideVolume_GravityType;
}
namespace GorillaLocomotion {
class GTPlayer;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GravityOverrideVolume;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GravityOverrideVolume*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GravityOverrideVolume*, "", "GravityOverrideVolume");
// Dependencies GravityOverrideVolume::GravityType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GravityOverrideVolume
class CORDL_TYPE GravityOverrideVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GravityType = ::GlobalNamespace::GravityOverrideVolume_GravityType;

/// @brief Field gravityType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityType, put=__cordl_internal_set_gravityType)) ::GlobalNamespace::GravityOverrideVolume_GravityType  gravityType;

/// @brief Field referenceTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_referenceTransform, put=__cordl_internal_set_referenceTransform)) ::UnityW<::UnityEngine::Transform>  referenceTransform;

/// @brief Field strength, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_strength, put=__cordl_internal_set_strength)) float_t  strength;

/// @brief Field triggerEvents, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerEvents, put=__cordl_internal_set_triggerEvents)) ::UnityW<::GlobalNamespace::CompositeTriggerEvents>  triggerEvents;

/// @brief Method GravityOverrideFunction, addr 0x579ea98, size 0x1a0, virtual false, abstract: false, final false
inline void GravityOverrideFunction(::GorillaLocomotion::GTPlayer*  player) ;

static inline ::GlobalNamespace::GravityOverrideVolume* New_ctor() ;

/// @brief Method OnColliderEnteredVolume, addr 0x579e810, size 0x168, virtual false, abstract: false, final false
inline void OnColliderEnteredVolume(::UnityEngine::Collider*  collider) ;

/// @brief Method OnColliderExitedVolume, addr 0x579e978, size 0x120, virtual false, abstract: false, final false
inline void OnColliderExitedVolume(::UnityEngine::Collider*  collider) ;

/// @brief Method OnDisable, addr 0x579e6ec, size 0x124, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x579e5c8, size 0x124, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::GlobalNamespace::GravityOverrideVolume_GravityType const& __cordl_internal_get_gravityType() const;

constexpr ::GlobalNamespace::GravityOverrideVolume_GravityType& __cordl_internal_get_gravityType() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_referenceTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_referenceTransform() ;

constexpr float_t const& __cordl_internal_get_strength() const;

constexpr float_t& __cordl_internal_get_strength() ;

constexpr ::UnityW<::GlobalNamespace::CompositeTriggerEvents> const& __cordl_internal_get_triggerEvents() const;

constexpr ::UnityW<::GlobalNamespace::CompositeTriggerEvents>& __cordl_internal_get_triggerEvents() ;

constexpr void __cordl_internal_set_gravityType(::GlobalNamespace::GravityOverrideVolume_GravityType  value) ;

constexpr void __cordl_internal_set_referenceTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_strength(float_t  value) ;

constexpr void __cordl_internal_set_triggerEvents(::UnityW<::GlobalNamespace::CompositeTriggerEvents>  value) ;

/// @brief Method .ctor, addr 0x579ec38, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GravityOverrideVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GravityOverrideVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GravityOverrideVolume(GravityOverrideVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GravityOverrideVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GravityOverrideVolume(GravityOverrideVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1517};

/// [SerializeField]
/// @brief Field gravityType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GravityOverrideVolume_GravityType  ___gravityType;

/// [SerializeField]
/// @brief Field strength, offset: 0x24, size: 0x4, def value: None
 float_t  ___strength;

/// [SerializeField]
/// [Tooltip("In Radial: the center point of gravity, In Directional: the forward vector of this transform defines the direction")]
/// @brief Field referenceTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___referenceTransform;

/// [SerializeField]
/// @brief Field triggerEvents, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CompositeTriggerEvents>  ___triggerEvents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GravityOverrideVolume, ___gravityType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GravityOverrideVolume, ___strength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GravityOverrideVolume, ___referenceTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GravityOverrideVolume, ___triggerEvents) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GravityOverrideVolume) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSplineDollyLookAtTargets_Item.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineSplineDollyLookAtTargets_Item)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineSplineDollyLookAtTargets_Item;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item, "Unity.Cinemachine", "CinemachineSplineDollyLookAtTargets/Item");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineSplineDollyLookAtTargets/Item
struct CORDL_TYPE CinemachineSplineDollyLookAtTargets_Item {
public:
// Declarations
 __declspec(property(get=get_WorldLookAt, put=set_WorldLookAt)) ::UnityEngine::Vector3  WorldLookAt;

/// [IsReadOnly]
/// @brief Method get_WorldLookAt, addr 0xaea7198, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_WorldLookAt() ;

/// @brief Method set_WorldLookAt, addr 0xaea72dc, size 0xb8, virtual false, abstract: false, final false
inline void set_WorldLookAt(::UnityEngine::Vector3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineSplineDollyLookAtTargets_Item() ;

// Ctor Parameters [CppParam { name: "LookAt", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Offset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Easing", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineSplineDollyLookAtTargets_Item(::UnityW<::UnityEngine::Transform>  LookAt, ::UnityEngine::Vector3  Offset, float_t  Easing) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22245};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [Tooltip("The target object to look at.  It may be None, in which case the Offset will specify a point in world space.")]
/// @brief Field LookAt, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  LookAt;

/// [Tooltip("The offset (in local coords) from the LookAt target\'s origin.  If LookAt target is None, this will specify a world-space point.")]
/// @brief Field Offset, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  Offset;

/// [Tooltip("Controls how to ease in and out of this data point.  A value of 0 will linearly interpolate between LookAt points, while a value of 1 will slow down and briefly pause the rotation to look at the target.")]
/// [Range(0, 1)]
/// @brief Field Easing, offset: 0x14, size: 0x4, def value: None
 float_t  Easing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item, LookAt) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item, Offset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item, Easing) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

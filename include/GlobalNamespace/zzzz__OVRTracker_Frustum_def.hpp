#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTracker_Frustum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRTracker_Frustum)
// Forward declare root types
namespace GlobalNamespace {
struct OVRTracker_Frustum;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRTracker_Frustum);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRTracker_Frustum, "", "OVRTracker/Frustum");
// Dependencies UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTracker/Frustum
struct CORDL_TYPE OVRTracker_Frustum {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRTracker_Frustum() ;

// Ctor Parameters [CppParam { name: "nearZ", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "farZ", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "fov", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }]
constexpr OVRTracker_Frustum(float_t  nearZ, float_t  farZ, ::UnityEngine::Vector2  fov) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12520};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field nearZ, offset: 0x0, size: 0x4, def value: None
 float_t  nearZ;

/// @brief Field farZ, offset: 0x4, size: 0x4, def value: None
 float_t  farZ;

/// @brief Field fov, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  fov;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTracker_Frustum, nearZ) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTracker_Frustum, farZ) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTracker_Frustum, fov) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRTracker_Frustum) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

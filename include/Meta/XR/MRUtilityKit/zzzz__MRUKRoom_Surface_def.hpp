#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKRoom_Surface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MRUKRoom_Surface)
namespace Meta::XR::MRUtilityKit {
class MRUKAnchor;
}
// Forward declare root types
namespace GlobalNamespace {
struct MRUKRoom_Surface;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKRoom_Surface);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKRoom_Surface, "Meta.XR.MRUtilityKit", "MRUKRoom/Surface");
// Dependencies UnityEngine.Matrix4x4, UnityEngine.Rect
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKRoom/Surface
struct CORDL_TYPE MRUKRoom_Surface {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MRUKRoom_Surface() ;

// Ctor Parameters [CppParam { name: "Anchor", ty: "::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>", modifiers: "", def_value: None, comment: None }, CppParam { name: "UsableArea", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsPlane", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bounds", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }]
constexpr MRUKRoom_Surface(::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  Anchor, float_t  UsableArea, bool  IsPlane, ::UnityEngine::Rect  Bounds, ::UnityEngine::Matrix4x4  Transform) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25890};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field Anchor, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  Anchor;

/// @brief Field UsableArea, offset: 0x8, size: 0x4, def value: None
 float_t  UsableArea;

/// @brief Field IsPlane, offset: 0xc, size: 0x1, def value: None
 bool  IsPlane;

/// @brief Field Bounds, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Rect  Bounds;

/// @brief Field Transform, offset: 0x20, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  Transform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKRoom_Surface, Anchor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKRoom_Surface, UsableArea) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKRoom_Surface, IsPlane) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKRoom_Surface, Bounds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKRoom_Surface, Transform) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKRoom_Surface) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace

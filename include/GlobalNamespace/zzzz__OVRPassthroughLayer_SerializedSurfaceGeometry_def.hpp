#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPassthroughLayer_SerializedSurfaceGeometry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPassthroughLayer_SerializedSurfaceGeometry)
namespace UnityEngine {
class MeshFilter;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPassthroughLayer_SerializedSurfaceGeometry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPassthroughLayer_SerializedSurfaceGeometry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPassthroughLayer_SerializedSurfaceGeometry, "", "OVRPassthroughLayer/SerializedSurfaceGeometry");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPassthroughLayer/SerializedSurfaceGeometry
struct CORDL_TYPE OVRPassthroughLayer_SerializedSurfaceGeometry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPassthroughLayer_SerializedSurfaceGeometry() ;

// Ctor Parameters [CppParam { name: "meshFilter", ty: "::UnityW<::UnityEngine::MeshFilter>", modifiers: "", def_value: None, comment: None }, CppParam { name: "updateTransform", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr OVRPassthroughLayer_SerializedSurfaceGeometry(::UnityW<::UnityEngine::MeshFilter>  meshFilter, bool  updateTransform) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12024};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field meshFilter, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  meshFilter;

/// @brief Field updateTransform, offset: 0x8, size: 0x1, def value: None
 bool  updateTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_SerializedSurfaceGeometry, meshFilter) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_SerializedSurfaceGeometry, updateTransform) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPassthroughLayer_SerializedSurfaceGeometry) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

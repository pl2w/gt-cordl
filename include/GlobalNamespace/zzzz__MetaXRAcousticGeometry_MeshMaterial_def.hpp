#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticGeometry_MeshMaterial.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/Acoustics/zzzz__IMaterialDataProvider_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MetaXRAcousticGeometry_MeshMaterial)
namespace Meta::XR::Acoustics {
class IMaterialDataProvider;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct MetaXRAcousticGeometry_MeshMaterial;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial, "", "MetaXRAcousticGeometry/MeshMaterial");
// Dependencies Meta.XR.Acoustics.IMaterialDataProvider
namespace GlobalNamespace {
// Is value type: true
// CS Name: MetaXRAcousticGeometry/MeshMaterial
struct CORDL_TYPE MetaXRAcousticGeometry_MeshMaterial {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticGeometry_MeshMaterial() ;

// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshMaterials", ty: "::ArrayW<::Meta::XR::Acoustics::IMaterialDataProvider*>", modifiers: "", def_value: None, comment: None }]
constexpr MetaXRAcousticGeometry_MeshMaterial(::UnityW<::UnityEngine::Mesh>  mesh, ::UnityW<::UnityEngine::Transform>  meshTransform, ::ArrayW<::Meta::XR::Acoustics::IMaterialDataProvider*>  meshMaterials) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29912};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field mesh, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  mesh;

/// @brief Field meshTransform, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  meshTransform;

/// @brief Field meshMaterials, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Meta::XR::Acoustics::IMaterialDataProvider*>  meshMaterials;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial, mesh) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial, meshTransform) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial, meshMaterials) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "Drawing/DrawingData_MeshWithType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/zzzz__DrawingData_MeshType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DrawingData_MeshWithType)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
struct DrawingData_MeshWithType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DrawingData_MeshWithType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DrawingData_MeshWithType, "Drawing", "DrawingData/MeshWithType");
// Dependencies Drawing.DrawingData::MeshType
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.DrawingData/MeshWithType
struct CORDL_TYPE DrawingData_MeshWithType {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DrawingData_MeshWithType() ;

// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty: "::GlobalNamespace::DrawingData_MeshType", modifiers: "", def_value: None, comment: None }]
constexpr DrawingData_MeshWithType(::UnityW<::UnityEngine::Mesh>  mesh, ::GlobalNamespace::DrawingData_MeshType  type) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27746};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field mesh, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  mesh;

/// @brief Field type, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::DrawingData_MeshType  type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DrawingData_MeshWithType, mesh) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_MeshWithType, type) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DrawingData_MeshWithType) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

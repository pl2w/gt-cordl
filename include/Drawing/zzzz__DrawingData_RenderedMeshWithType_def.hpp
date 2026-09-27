#pragma once
// IWYU pragma private; include "Drawing/DrawingData_RenderedMeshWithType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/zzzz__DrawingData_MeshType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawingData_RenderedMeshWithType)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
struct DrawingData_RenderedMeshWithType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DrawingData_RenderedMeshWithType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DrawingData_RenderedMeshWithType, "Drawing", "DrawingData/RenderedMeshWithType");
// Dependencies Drawing.DrawingData::MeshType, UnityEngine.Color, UnityEngine.Matrix4x4
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.DrawingData/RenderedMeshWithType
struct CORDL_TYPE DrawingData_RenderedMeshWithType {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DrawingData_RenderedMeshWithType() ;

// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty: "::GlobalNamespace::DrawingData_MeshType", modifiers: "", def_value: None, comment: None }, CppParam { name: "drawingOrderIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "matrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }]
constexpr DrawingData_RenderedMeshWithType(::UnityW<::UnityEngine::Mesh>  mesh, ::GlobalNamespace::DrawingData_MeshType  type, int32_t  drawingOrderIndex, ::UnityEngine::Color  color, ::UnityEngine::Matrix4x4  matrix) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27747};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field mesh, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  mesh;

/// @brief Field type, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::DrawingData_MeshType  type;

/// @brief Field drawingOrderIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  drawingOrderIndex;

/// @brief Field color, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  color;

/// @brief Field matrix, offset: 0x20, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  matrix;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DrawingData_RenderedMeshWithType, mesh) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_RenderedMeshWithType, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_RenderedMeshWithType, drawingOrderIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_RenderedMeshWithType, color) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_RenderedMeshWithType, matrix) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DrawingData_RenderedMeshWithType) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace

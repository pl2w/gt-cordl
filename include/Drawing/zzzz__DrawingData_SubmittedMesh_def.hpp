#pragma once
// IWYU pragma private; include "Drawing/DrawingData_SubmittedMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(DrawingData_SubmittedMesh)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
struct DrawingData_SubmittedMesh;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DrawingData_SubmittedMesh);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DrawingData_SubmittedMesh, "Drawing", "DrawingData/SubmittedMesh");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.DrawingData/SubmittedMesh
struct CORDL_TYPE DrawingData_SubmittedMesh {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DrawingData_SubmittedMesh() ;

// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None, comment: None }, CppParam { name: "temporary", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr DrawingData_SubmittedMesh(::UnityW<::UnityEngine::Mesh>  mesh, bool  temporary) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27732};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field mesh, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  mesh;

/// @brief Field temporary, offset: 0x8, size: 0x1, def value: None
 bool  temporary;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DrawingData_SubmittedMesh, mesh) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_SubmittedMesh, temporary) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DrawingData_SubmittedMesh) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

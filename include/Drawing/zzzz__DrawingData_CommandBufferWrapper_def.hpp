#pragma once
// IWYU pragma private; include "Drawing/DrawingData_CommandBufferWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawingData_CommandBufferWrapper)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
struct DrawingData_CommandBufferWrapper;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DrawingData_CommandBufferWrapper);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DrawingData_CommandBufferWrapper, "Drawing", "DrawingData/CommandBufferWrapper");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.DrawingData/CommandBufferWrapper
struct CORDL_TYPE DrawingData_CommandBufferWrapper {
public:
// Declarations
/// @brief Method DrawMesh, addr 0x55ce408, size 0x64, virtual false, abstract: false, final false
inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method SetWireframe, addr 0x55cdcb8, size 0x38, virtual false, abstract: false, final false
inline void SetWireframe(bool  enable) ;

// Ctor Parameters []
// @brief default ctor
constexpr DrawingData_CommandBufferWrapper() ;

// Ctor Parameters [CppParam { name: "cmd", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "allowDisablingWireframe", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "cmd2", ty: "::UnityEngine::Rendering::RasterCommandBuffer*", modifiers: "", def_value: None, comment: None }]
constexpr DrawingData_CommandBufferWrapper(::UnityEngine::Rendering::CommandBuffer*  cmd, bool  allowDisablingWireframe, ::UnityEngine::Rendering::RasterCommandBuffer*  cmd2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27750};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field cmd, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  cmd;

/// @brief Field allowDisablingWireframe, offset: 0x8, size: 0x1, def value: None
 bool  allowDisablingWireframe;

/// @brief Field cmd2, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::RasterCommandBuffer*  cmd2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DrawingData_CommandBufferWrapper, cmd) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_CommandBufferWrapper, allowDisablingWireframe) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_CommandBufferWrapper, cmd2) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DrawingData_CommandBufferWrapper) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

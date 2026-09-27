#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/MeshGenerator_TessellationJobParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerator_BorderParams_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_NativeRectParams_def.hpp"
#include "UnityEngine/UIElements/zzzz__UnsafeMeshGenerationNode_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MeshGenerator_TessellationJobParameters)
// Forward declare root types
namespace GlobalNamespace {
struct MeshGenerator_TessellationJobParameters;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MeshGenerator_TessellationJobParameters);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MeshGenerator_TessellationJobParameters, "UnityEngine.UIElements.UIR", "MeshGenerator/TessellationJobParameters");
// Dependencies UnityEngine.UIElements.MeshBuilderNative::NativeRectParams, UnityEngine.UIElements.UIR.MeshGenerator::BorderParams, UnityEngine.UIElements.UnsafeMeshGenerationNode
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.MeshGenerator/TessellationJobParameters
struct CORDL_TYPE MeshGenerator_TessellationJobParameters {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MeshGenerator_TessellationJobParameters() ;

// Ctor Parameters [CppParam { name: "isBorderJob", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "rectParams", ty: "::GlobalNamespace::MeshBuilderNative_NativeRectParams", modifiers: "", def_value: None, comment: None }, CppParam { name: "borderParams", ty: "::GlobalNamespace::MeshGenerator_BorderParams", modifiers: "", def_value: None, comment: None }, CppParam { name: "node", ty: "::UnityEngine::UIElements::UnsafeMeshGenerationNode", modifiers: "", def_value: None, comment: None }]
constexpr MeshGenerator_TessellationJobParameters(bool  isBorderJob, ::GlobalNamespace::MeshBuilderNative_NativeRectParams  rectParams, ::GlobalNamespace::MeshGenerator_BorderParams  borderParams, ::UnityEngine::UIElements::UnsafeMeshGenerationNode  node) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8544};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1d8};

/// @brief Field isBorderJob, offset: 0x0, size: 0x1, def value: None
 bool  isBorderJob;

/// @brief Field rectParams, offset: 0x8, size: 0x118, def value: None
 ::GlobalNamespace::MeshBuilderNative_NativeRectParams  rectParams;

/// @brief Field borderParams, offset: 0x120, size: 0xb0, def value: None
 ::GlobalNamespace::MeshGenerator_BorderParams  borderParams;

/// @brief Field node, offset: 0x1d0, size: 0x8, def value: None
 ::UnityEngine::UIElements::UnsafeMeshGenerationNode  node;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MeshGenerator_TessellationJobParameters, isBorderJob) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_TessellationJobParameters, rectParams) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_TessellationJobParameters, borderParams) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_TessellationJobParameters, node) == 0x1d0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MeshGenerator_TessellationJobParameters) == 0x1d8, "Size mismatch!");

} // namespace end def GlobalNamespace

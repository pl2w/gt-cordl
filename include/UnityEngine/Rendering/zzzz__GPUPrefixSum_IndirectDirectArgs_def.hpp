#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUPrefixSum_IndirectDirectArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__GPUPrefixSum_SupportResources_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUPrefixSum_IndirectDirectArgs)
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct GPUPrefixSum_IndirectDirectArgs;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GPUPrefixSum_IndirectDirectArgs);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GPUPrefixSum_IndirectDirectArgs, "UnityEngine.Rendering", "GPUPrefixSum/IndirectDirectArgs");
// Dependencies UnityEngine.Rendering.GPUPrefixSum::SupportResources
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUPrefixSum/IndirectDirectArgs
struct CORDL_TYPE GPUPrefixSum_IndirectDirectArgs {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GPUPrefixSum_IndirectDirectArgs() ;

// Ctor Parameters [CppParam { name: "exclusive", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "inputCountBufferByteOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "inputCountBuffer", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "input", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "supportResources", ty: "::GlobalNamespace::GPUPrefixSum_SupportResources", modifiers: "", def_value: None, comment: None }]
constexpr GPUPrefixSum_IndirectDirectArgs(bool  exclusive, int32_t  inputCountBufferByteOffset, ::UnityEngine::ComputeBuffer*  inputCountBuffer, ::UnityEngine::GraphicsBuffer*  input, ::GlobalNamespace::GPUPrefixSum_SupportResources  supportResources) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17013};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field exclusive, offset: 0x0, size: 0x1, def value: None
 bool  exclusive;

/// @brief Field inputCountBufferByteOffset, offset: 0x4, size: 0x4, def value: None
 int32_t  inputCountBufferByteOffset;

/// @brief Field inputCountBuffer, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  inputCountBuffer;

/// @brief Field input, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  input;

/// @brief Field supportResources, offset: 0x18, size: 0x38, def value: None
 ::GlobalNamespace::GPUPrefixSum_SupportResources  supportResources;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_IndirectDirectArgs, exclusive) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_IndirectDirectArgs, inputCountBufferByteOffset) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_IndirectDirectArgs, inputCountBuffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_IndirectDirectArgs, input) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_IndirectDirectArgs, supportResources) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GPUPrefixSum_IndirectDirectArgs) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace

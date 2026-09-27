#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUPrefixSum_DirectArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__GPUPrefixSum_SupportResources_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUPrefixSum_DirectArgs)
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct GPUPrefixSum_DirectArgs;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GPUPrefixSum_DirectArgs);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GPUPrefixSum_DirectArgs, "UnityEngine.Rendering", "GPUPrefixSum/DirectArgs");
// Dependencies UnityEngine.Rendering.GPUPrefixSum::SupportResources
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUPrefixSum/DirectArgs
struct CORDL_TYPE GPUPrefixSum_DirectArgs {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GPUPrefixSum_DirectArgs() ;

// Ctor Parameters [CppParam { name: "exclusive", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "inputCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "input", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "supportResources", ty: "::GlobalNamespace::GPUPrefixSum_SupportResources", modifiers: "", def_value: None, comment: None }]
constexpr GPUPrefixSum_DirectArgs(bool  exclusive, int32_t  inputCount, ::UnityEngine::GraphicsBuffer*  input, ::GlobalNamespace::GPUPrefixSum_SupportResources  supportResources) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17012};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field exclusive, offset: 0x0, size: 0x1, def value: None
 bool  exclusive;

/// @brief Field inputCount, offset: 0x4, size: 0x4, def value: None
 int32_t  inputCount;

/// @brief Field input, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  input;

/// @brief Field supportResources, offset: 0x10, size: 0x38, def value: None
 ::GlobalNamespace::GPUPrefixSum_SupportResources  supportResources;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_DirectArgs, exclusive) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_DirectArgs, inputCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_DirectArgs, input) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUPrefixSum_DirectArgs, supportResources) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GPUPrefixSum_DirectArgs) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace

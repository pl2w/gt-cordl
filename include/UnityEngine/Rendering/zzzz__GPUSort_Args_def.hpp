#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUSort_Args.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__GPUSort_SupportResources_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUSort_Args)
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct GPUSort_Args;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GPUSort_Args);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GPUSort_Args, "UnityEngine.Rendering", "GPUSort/Args");
// Dependencies UnityEngine.Rendering.GPUSort::SupportResources
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUSort/Args
struct CORDL_TYPE GPUSort_Args {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GPUSort_Args() ;

// Ctor Parameters [CppParam { name: "count", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxDepth", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "inputKeys", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "inputValues", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "resources", ty: "::GlobalNamespace::GPUSort_SupportResources", modifiers: "", def_value: None, comment: None }, CppParam { name: "workGroupCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GPUSort_Args(uint32_t  count, uint32_t  maxDepth, ::UnityEngine::GraphicsBuffer*  inputKeys, ::UnityEngine::GraphicsBuffer*  inputValues, ::GlobalNamespace::GPUSort_SupportResources  resources, int32_t  workGroupCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17018};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field count, offset: 0x0, size: 0x4, def value: None
 uint32_t  count;

/// @brief Field maxDepth, offset: 0x4, size: 0x4, def value: None
 uint32_t  maxDepth;

/// @brief Field inputKeys, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  inputKeys;

/// @brief Field inputValues, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  inputValues;

/// @brief Field resources, offset: 0x18, size: 0x10, def value: None
 ::GlobalNamespace::GPUSort_SupportResources  resources;

/// @brief Field workGroupCount, offset: 0x28, size: 0x4, def value: None
 int32_t  workGroupCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GPUSort_Args, count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUSort_Args, maxDepth) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUSort_Args, inputKeys) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUSort_Args, inputValues) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUSort_Args, resources) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUSort_Args, workGroupCount) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GPUSort_Args) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

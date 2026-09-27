#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUSort.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__GPUSort_SystemResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUSort)
namespace GlobalNamespace {
struct GPUSort_Args;
}
namespace GlobalNamespace {
struct GPUSort_RenderGraphResources;
}
namespace GlobalNamespace {
struct GPUSort_Stage;
}
namespace GlobalNamespace {
struct GPUSort_SupportResources;
}
namespace GlobalNamespace {
struct GPUSort_SystemResources;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct GPUSort;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GPUSort);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUSort, "UnityEngine.Rendering", "GPUSort");
// Dependencies UnityEngine.Rendering.GPUSort::SystemResources, UnityEngine.Rendering.LocalKeyword
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUSort
struct CORDL_TYPE GPUSort {
public:
// Declarations
using Args = ::GlobalNamespace::GPUSort_Args;

using RenderGraphResources = ::GlobalNamespace::GPUSort_RenderGraphResources;

using Stage = ::GlobalNamespace::GPUSort_Stage;

using SupportResources = ::GlobalNamespace::GPUSort_SupportResources;

using SystemResources = ::GlobalNamespace::GPUSort_SystemResources;

/// @brief Method CopyBuffer, addr 0xb1956f8, size 0x1b8, virtual false, abstract: false, final false
inline void CopyBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  src, ::UnityEngine::GraphicsBuffer*  dst) ;

/// @brief Method Dispatch, addr 0xb1958c0, size 0x1e8, virtual false, abstract: false, final false
inline void Dispatch(::UnityEngine::Rendering::CommandBuffer*  cmd, ::GlobalNamespace::GPUSort_Args  args) ;

/// @brief Method DispatchStage, addr 0xb195448, size 0x2b0, virtual false, abstract: false, final false
inline void DispatchStage(::UnityEngine::Rendering::CommandBuffer*  cmd, ::GlobalNamespace::GPUSort_Args  args, uint32_t  h, ::GlobalNamespace::GPUSort_Stage  stage) ;

/// @brief Method DivRoundUp, addr 0xb1958b0, size 0x10, virtual false, abstract: false, final false
static inline int32_t DivRoundUp(int32_t  x, int32_t  y) ;

/// @brief Method .ctor, addr 0xb19525c, size 0x1ec, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::GPUSort_SystemResources  resources) ;

// Ctor Parameters []
// @brief default ctor
constexpr GPUSort() ;

// Ctor Parameters [CppParam { name: "m_Keywords", ty: "::ArrayW<::UnityEngine::Rendering::LocalKeyword>", modifiers: "", def_value: None, comment: None }, CppParam { name: "resources", ty: "::GlobalNamespace::GPUSort_SystemResources", modifiers: "", def_value: None, comment: None }]
constexpr GPUSort(::ArrayW<::UnityEngine::Rendering::LocalKeyword>  m_Keywords, ::GlobalNamespace::GPUSort_SystemResources  resources) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17022};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field kWorkGroupSize offset 0xffffffff size 0x4
static constexpr uint32_t  kWorkGroupSize{static_cast<uint32_t>(0x400u)};

/// @brief Field m_Keywords, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::LocalKeyword>  m_Keywords;

/// @brief Field resources, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::GPUSort_SystemResources  resources;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUSort, m_Keywords) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUSort, resources) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::GPUSort) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering

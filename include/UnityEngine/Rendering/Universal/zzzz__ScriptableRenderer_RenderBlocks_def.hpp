#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScriptableRenderer_RenderBlocks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableRenderer_RenderBlocks)
namespace GlobalNamespace {
struct RenderBlocks_ScriptableRenderer_BlockRange;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderPass;
}
// Forward declare root types
namespace GlobalNamespace {
struct ScriptableRenderer_RenderBlocks;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScriptableRenderer_RenderBlocks);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScriptableRenderer_RenderBlocks, "UnityEngine.Rendering.Universal", "ScriptableRenderer/RenderBlocks");
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.Universal.RenderPassEvent
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks
struct CORDL_TYPE ScriptableRenderer_RenderBlocks {
public:
// Declarations
using BlockRange = ::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb24eabc, size 0x54, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method FillBlockRanges, addr 0xb24e9b4, size 0x108, virtual false, abstract: false, final false
inline void FillBlockRanges(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*  activeRenderPassQueue) ;

/// @brief Method GetLength, addr 0xb24eb10, size 0xc, virtual false, abstract: false, final false
inline int32_t GetLength(int32_t  index) ;

/// @brief Method GetRange, addr 0xb24eb1c, size 0x2c, virtual false, abstract: false, final false
inline ::GlobalNamespace::RenderBlocks_ScriptableRenderer_BlockRange GetRange(int32_t  index) ;

/// @brief Method .ctor, addr 0xb24e808, size 0x1ac, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*  activeRenderPassQueue) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr ScriptableRenderer_RenderBlocks() ;

// Ctor Parameters [CppParam { name: "m_BlockEventLimits", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::RenderPassEvent>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BlockRanges", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BlockRangeLengths", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr ScriptableRenderer_RenderBlocks(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::RenderPassEvent>  m_BlockEventLimits, ::Unity::Collections::NativeArray_1<int32_t>  m_BlockRanges, ::Unity::Collections::NativeArray_1<int32_t>  m_BlockRangeLengths) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18376};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_BlockEventLimits, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::RenderPassEvent>  m_BlockEventLimits;

/// @brief Field m_BlockRanges, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  m_BlockRanges;

/// @brief Field m_BlockRangeLengths, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  m_BlockRangeLengths;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScriptableRenderer_RenderBlocks, m_BlockEventLimits) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScriptableRenderer_RenderBlocks, m_BlockRanges) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScriptableRenderer_RenderBlocks, m_BlockRangeLengths) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScriptableRenderer_RenderBlocks) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

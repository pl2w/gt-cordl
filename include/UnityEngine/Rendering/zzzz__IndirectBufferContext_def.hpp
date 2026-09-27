#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IndirectBufferContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferContext_BufferState_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndirectBufferContext)
namespace GlobalNamespace {
struct IndirectBufferContext_BufferState;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct IndirectBufferContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::IndirectBufferContext);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::IndirectBufferContext, "UnityEngine.Rendering", "IndirectBufferContext");
// Dependencies Unity.Jobs.JobHandle, UnityEngine.Rendering.IndirectBufferContext::BufferState
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.IndirectBufferContext
struct CORDL_TYPE IndirectBufferContext {
public:
// Declarations
using BufferState = ::GlobalNamespace::IndirectBufferContext_BufferState;

/// @brief Method Matches, addr 0xb20927c, size 0x30, virtual false, abstract: false, final false
inline bool Matches(::GlobalNamespace::IndirectBufferContext_BufferState  bufferState, int32_t  occluderVersion, int32_t  subviewMask) ;

/// @brief Method .ctor, addr 0xb20926c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Unity::Jobs::JobHandle  cullingJobHandle) ;

// Ctor Parameters []
// @brief default ctor
constexpr IndirectBufferContext() ;

// Ctor Parameters [CppParam { name: "cullingJobHandle", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "bufferState", ty: "::GlobalNamespace::IndirectBufferContext_BufferState", modifiers: "", def_value: None, comment: None }, CppParam { name: "occluderVersion", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "subviewMask", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr IndirectBufferContext(::Unity::Jobs::JobHandle  cullingJobHandle, ::GlobalNamespace::IndirectBufferContext_BufferState  bufferState, int32_t  occluderVersion, int32_t  subviewMask) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26670};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field cullingJobHandle, offset: 0x0, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  cullingJobHandle;

/// @brief Field bufferState, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::IndirectBufferContext_BufferState  bufferState;

/// @brief Field occluderVersion, offset: 0x14, size: 0x4, def value: None
 int32_t  occluderVersion;

/// @brief Field subviewMask, offset: 0x18, size: 0x4, def value: None
 int32_t  subviewMask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContext, cullingJobHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContext, bufferState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContext, occluderVersion) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContext, subviewMask) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::IndirectBufferContext) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering

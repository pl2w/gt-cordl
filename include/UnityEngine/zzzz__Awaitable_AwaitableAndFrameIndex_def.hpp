#pragma once
// IWYU pragma private; include "UnityEngine/Awaitable_AwaitableAndFrameIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Awaitable_AwaitableAndFrameIndex)
namespace UnityEngine {
class Awaitable;
}
// Forward declare root types
namespace GlobalNamespace {
struct Awaitable_AwaitableAndFrameIndex;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Awaitable_AwaitableAndFrameIndex);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Awaitable_AwaitableAndFrameIndex, "UnityEngine", "Awaitable/AwaitableAndFrameIndex");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Awaitable/AwaitableAndFrameIndex
struct CORDL_TYPE Awaitable_AwaitableAndFrameIndex {
public:
// Declarations
 __declspec(property(get=get_Awaitable)) ::UnityEngine::Awaitable*  Awaitable;

 __declspec(property(get=get_FrameIndex)) int32_t  FrameIndex;

/// @brief Method .ctor, addr 0xb5db348, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Awaitable*  awaitable, int32_t  frameIndex) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Awaitable, addr 0xb5db338, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Awaitable* get_Awaitable() ;

/// [CompilerGenerated]
/// [IsReadOnly]
/// @brief Method get_FrameIndex, addr 0xb5db340, size 0x8, virtual false, abstract: false, final false
inline int32_t get_FrameIndex() ;

// Ctor Parameters []
// @brief default ctor
constexpr Awaitable_AwaitableAndFrameIndex() ;

// Ctor Parameters [CppParam { name: "_Awaitable_k__BackingField", ty: "::UnityEngine::Awaitable*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_FrameIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Awaitable_AwaitableAndFrameIndex(::UnityEngine::Awaitable*  _Awaitable_k__BackingField, int32_t  _FrameIndex_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15050};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Awaitable>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Awaitable*  _Awaitable_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <FrameIndex>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  _FrameIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Awaitable_AwaitableAndFrameIndex, _Awaitable_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Awaitable_AwaitableAndFrameIndex, _FrameIndex_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Awaitable_AwaitableAndFrameIndex) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

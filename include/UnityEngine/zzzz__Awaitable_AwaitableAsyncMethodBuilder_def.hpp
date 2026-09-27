#pragma once
// IWYU pragma private; include "UnityEngine/Awaitable_AwaitableAsyncMethodBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Awaitable_AwaitableAsyncMethodBuilder)
namespace UnityEngine {
class AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox;
}
namespace UnityEngine {
class Awaitable;
}
// Forward declare root types
namespace GlobalNamespace {
struct Awaitable_AwaitableAsyncMethodBuilder;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Awaitable_AwaitableAsyncMethodBuilder);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Awaitable_AwaitableAsyncMethodBuilder, "UnityEngine", "Awaitable/AwaitableAsyncMethodBuilder");
// [ExcludeFromDocs]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Awaitable/AwaitableAsyncMethodBuilder
struct CORDL_TYPE Awaitable_AwaitableAsyncMethodBuilder {
public:
// Declarations
using IStateMachineBox = ::UnityEngine::AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox;

// Ctor Parameters []
// @brief default ctor
constexpr Awaitable_AwaitableAsyncMethodBuilder() ;

// Ctor Parameters [CppParam { name: "_stateMachineBox", ty: "::UnityEngine::AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_resultingCoroutine", ty: "::UnityEngine::Awaitable*", modifiers: "", def_value: None, comment: None }]
constexpr Awaitable_AwaitableAsyncMethodBuilder(::UnityEngine::AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox*  _stateMachineBox, ::UnityEngine::Awaitable*  _resultingCoroutine) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15046};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _stateMachineBox, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox*  _stateMachineBox;

/// @brief Field _resultingCoroutine, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Awaitable*  _resultingCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Awaitable_AwaitableAsyncMethodBuilder, _stateMachineBox) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Awaitable_AwaitableAsyncMethodBuilder, _resultingCoroutine) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Awaitable_AwaitableAsyncMethodBuilder) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

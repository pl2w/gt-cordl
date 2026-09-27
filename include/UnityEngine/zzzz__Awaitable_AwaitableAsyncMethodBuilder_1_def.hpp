#pragma once
// IWYU pragma private; include "UnityEngine/Awaitable_AwaitableAsyncMethodBuilder_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Awaitable_AwaitableAsyncMethodBuilder_1)
namespace UnityEngine {
template<typename T>
class AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox;
}
namespace UnityEngine {
template<typename T>
class Awaitable_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct Awaitable_AwaitableAsyncMethodBuilder_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::Awaitable_AwaitableAsyncMethodBuilder_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::Awaitable_AwaitableAsyncMethodBuilder_1, "UnityEngine", "Awaitable/AwaitableAsyncMethodBuilder`1");
// [ExcludeFromDocs]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.Awaitable/AwaitableAsyncMethodBuilder`1<T>
struct CORDL_TYPE Awaitable_AwaitableAsyncMethodBuilder_1 {
public:
// Declarations
using IStateMachineBox = ::UnityEngine::AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox<T>;

// Ctor Parameters []
// @brief default ctor
constexpr Awaitable_AwaitableAsyncMethodBuilder_1() ;

// Ctor Parameters [CppParam { name: "_stateMachineBox", ty: "::UnityEngine::AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox<T>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_resultingCoroutine", ty: "::UnityEngine::Awaitable_1<T>*", modifiers: "", def_value: None, comment: None }]
constexpr Awaitable_AwaitableAsyncMethodBuilder_1(::UnityEngine::AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox<T>*  _stateMachineBox, ::UnityEngine::Awaitable_1<T>*  _resultingCoroutine) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15048};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _stateMachineBox, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox<T>*  _stateMachineBox;

/// @brief Field _resultingCoroutine, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Awaitable_1<T>*  _resultingCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace

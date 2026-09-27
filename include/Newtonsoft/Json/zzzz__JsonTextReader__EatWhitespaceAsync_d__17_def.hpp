#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonTextReader__EatWhitespaceAsync_d__17.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonTextReader__EatWhitespaceAsync_d__17)
namespace Newtonsoft::Json {
class JsonTextReader;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct JsonTextReader__EatWhitespaceAsync_d__17;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JsonTextReader__EatWhitespaceAsync_d__17);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JsonTextReader__EatWhitespaceAsync_d__17, "Newtonsoft.Json", "JsonTextReader/<EatWhitespaceAsync>d__17");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<EatWhitespaceAsync>d__17
struct CORDL_TYPE JsonTextReader__EatWhitespaceAsync_d__17 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa381650, size 0x41c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa381a6c, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr JsonTextReader__EatWhitespaceAsync_d__17() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr JsonTextReader__EatWhitespaceAsync_d__17(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonTextReader*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23112};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// [Nullable(0)]
/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextReader*  __4__this;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// [Nullable(0)]
/// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__1;

/// @brief Field <>u__2, offset: 0x40, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JsonTextReader__EatWhitespaceAsync_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__EatWhitespaceAsync_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__EatWhitespaceAsync_d__17, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__EatWhitespaceAsync_d__17, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__EatWhitespaceAsync_d__17, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__EatWhitespaceAsync_d__17, __u__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JsonTextReader__EatWhitespaceAsync_d__17) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace

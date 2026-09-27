#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonTextReader__ReadFromFinishedAsync_d__5.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonTextReader__ReadFromFinishedAsync_d__5)
namespace Newtonsoft::Json {
class JsonTextReader;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct JsonTextReader__ReadFromFinishedAsync_d__5;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JsonTextReader__ReadFromFinishedAsync_d__5);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JsonTextReader__ReadFromFinishedAsync_d__5, "Newtonsoft.Json", "JsonTextReader/<ReadFromFinishedAsync>d__5");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ReadFromFinishedAsync>d__5
struct CORDL_TYPE JsonTextReader__ReadFromFinishedAsync_d__5 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa388384, size 0x59c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa388920, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr JsonTextReader__ReadFromFinishedAsync_d__5() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr JsonTextReader__ReadFromFinishedAsync_d__5(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::Newtonsoft::Json::JsonTextReader*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23132};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [Nullable(0)]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// [Nullable(0)]
/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextReader*  __4__this;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// [Nullable(0)]
/// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x40, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JsonTextReader__ReadFromFinishedAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ReadFromFinishedAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ReadFromFinishedAsync_d__5, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ReadFromFinishedAsync_d__5, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ReadFromFinishedAsync_d__5, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ReadFromFinishedAsync_d__5, __u__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JsonTextReader__ReadFromFinishedAsync_d__5) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace

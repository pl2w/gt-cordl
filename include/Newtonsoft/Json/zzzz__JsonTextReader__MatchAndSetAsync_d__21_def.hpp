#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonTextReader__MatchAndSetAsync_d__21.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonTextReader__MatchAndSetAsync_d__21)
namespace Newtonsoft::Json {
class JsonTextReader;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct JsonTextReader__MatchAndSetAsync_d__21;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JsonTextReader__MatchAndSetAsync_d__21);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JsonTextReader__MatchAndSetAsync_d__21, "Newtonsoft.Json", "JsonTextReader/<MatchAndSetAsync>d__21");
// [CompilerGenerated]
// Dependencies Newtonsoft.Json.JsonToken, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<MatchAndSetAsync>d__21
struct CORDL_TYPE JsonTextReader__MatchAndSetAsync_d__21 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa381ad4, size 0x32c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa381e00, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr JsonTextReader__MatchAndSetAsync_d__21() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "newToken", ty: "::Newtonsoft::Json::JsonToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "tokenValue", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None, comment: None }]
constexpr JsonTextReader__MatchAndSetAsync_d__21(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonTextReader*  __4__this, ::StringW  value, ::System::Threading::CancellationToken  cancellationToken, ::Newtonsoft::Json::JsonToken  newToken, ::System::Object*  tokenValue, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23113};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// [Nullable(0)]
/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextReader*  __4__this;

/// [Nullable(0)]
/// @brief Field value, offset: 0x28, size: 0x8, def value: None
 ::StringW  value;

/// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field newToken, offset: 0x38, size: 0x4, def value: None
 ::Newtonsoft::Json::JsonToken  newToken;

/// [Nullable(0)]
/// @brief Field tokenValue, offset: 0x40, size: 0x8, def value: None
 ::System::Object*  tokenValue;

/// [Nullable(0)]
/// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JsonTextReader__MatchAndSetAsync_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__MatchAndSetAsync_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__MatchAndSetAsync_d__21, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__MatchAndSetAsync_d__21, value) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__MatchAndSetAsync_d__21, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__MatchAndSetAsync_d__21, newToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__MatchAndSetAsync_d__21, tokenValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__MatchAndSetAsync_d__21, __u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JsonTextReader__MatchAndSetAsync_d__21) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace

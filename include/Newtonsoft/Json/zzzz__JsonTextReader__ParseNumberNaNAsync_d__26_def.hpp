#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonTextReader__ParseNumberNaNAsync_d__26.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__ReadType_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonTextReader__ParseNumberNaNAsync_d__26)
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
struct JsonTextReader__ParseNumberNaNAsync_d__26;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JsonTextReader__ParseNumberNaNAsync_d__26);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JsonTextReader__ParseNumberNaNAsync_d__26, "Newtonsoft.Json", "JsonTextReader/<ParseNumberNaNAsync>d__26");
// [CompilerGenerated]
// Dependencies Newtonsoft.Json.ReadType, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ParseNumberNaNAsync>d__26
struct CORDL_TYPE JsonTextReader__ParseNumberNaNAsync_d__26 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa383cc0, size 0x2e4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa383fa4, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr JsonTextReader__ParseNumberNaNAsync_d__26() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "readType", ty: "::Newtonsoft::Json::ReadType", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap1", ty: "::Newtonsoft::Json::ReadType", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None, comment: None }]
constexpr JsonTextReader__ParseNumberNaNAsync_d__26(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>  __t__builder, ::Newtonsoft::Json::ReadType  readType, ::Newtonsoft::Json::JsonTextReader*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::Newtonsoft::Json::ReadType  __7__wrap1, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23119};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [Nullable(0)]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>  __t__builder;

/// @brief Field readType, offset: 0x20, size: 0x4, def value: None
 ::Newtonsoft::Json::ReadType  readType;

/// [Nullable(0)]
/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextReader*  __4__this;

/// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>7__wrap1, offset: 0x38, size: 0x4, def value: None
 ::Newtonsoft::Json::ReadType  __7__wrap1;

/// [Nullable(0)]
/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JsonTextReader__ParseNumberNaNAsync_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ParseNumberNaNAsync_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ParseNumberNaNAsync_d__26, readType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ParseNumberNaNAsync_d__26, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ParseNumberNaNAsync_d__26, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ParseNumberNaNAsync_d__26, __7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ParseNumberNaNAsync_d__26, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JsonTextReader__ParseNumberNaNAsync_d__26) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace

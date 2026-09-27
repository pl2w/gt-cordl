#pragma once
// IWYU pragma private; include "Modio/API/ModioAPI_Authentication__AuthenticateViaSwitchAsJToken_d__22.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__SwitchAuthenticationRequest_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioAPI_Authentication__AuthenticateViaSwitchAsJToken_d__22)
namespace Modio::API {
class ModioAPIRequest;
}
namespace Modio {
class Error;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaSwitchAsJToken_d__22;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaSwitchAsJToken_d__22);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaSwitchAsJToken_d__22, "Modio.API", "ModioAPI/Authentication/<AuthenticateViaSwitchAsJToken>d__22");
// [CompilerGenerated]
// Dependencies Modio.API.SchemaDefinitions.SwitchAuthenticationRequest, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.API.ModioAPI/Authentication/<AuthenticateViaSwitchAsJToken>d__22
struct CORDL_TYPE Authentication_ModioAPI__AuthenticateViaSwitchAsJToken_d__22 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa0a25e0, size 0x610, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa0a2bf0, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr Authentication_ModioAPI__AuthenticateViaSwitchAsJToken_d__22() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "body", ty: "::System::Nullable_1<::Modio::API::SchemaDefinitions::SwitchAuthenticationRequest>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_request_5__2", ty: "::Modio::API::ModioAPIRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>", modifiers: "", def_value: None, comment: None }]
constexpr Authentication_ModioAPI__AuthenticateViaSwitchAsJToken_d__22(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>  __t__builder, ::System::Nullable_1<::Modio::API::SchemaDefinitions::SwitchAuthenticationRequest>  body, ::Modio::API::ModioAPIRequest*  _request_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17901};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [TupleElementNames(new[] { "error", "accessTokenObject" })]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>  __t__builder;

/// @brief Field body, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<::Modio::API::SchemaDefinitions::SwitchAuthenticationRequest>  body;

/// @brief Field <request>5__2, offset: 0x30, size: 0x8, def value: None
 ::Modio::API::ModioAPIRequest*  _request_5__2;

/// [TupleElementNames(new[] { "error", null })]
/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>  __u__1;

/// @brief Size padding 0x58 - 0x40 = 0x18, packed as 0x18
 uint8_t  _cordl_size_padding[0x18];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaSwitchAsJToken_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaSwitchAsJToken_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaSwitchAsJToken_d__22, body) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaSwitchAsJToken_d__22, _request_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaSwitchAsJToken_d__22, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaSwitchAsJToken_d__22) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace

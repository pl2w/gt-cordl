#pragma once
// IWYU pragma private; include "Modio/Customizations/ModioSteamAuthService__Authenticate_d__11.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__AccessTokenObject_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioSteamAuthService__Authenticate_d__11)
namespace Modio::Customizations {
class ModioSteamAuthService;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModioSteamAuthService__Authenticate_d__11;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModioSteamAuthService__Authenticate_d__11);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioSteamAuthService__Authenticate_d__11, "Modio.Customizations", "ModioSteamAuthService/<Authenticate>d__11");
// [CompilerGenerated]
// Dependencies Modio.API.SchemaDefinitions.AccessTokenObject, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Customizations.ModioSteamAuthService/<Authenticate>d__11
struct CORDL_TYPE ModioSteamAuthService__Authenticate_d__11 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa05919c, size 0xabc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa059c58, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModioSteamAuthService__Authenticate_d__11() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::Customizations::ModioSteamAuthService*", modifiers: "", def_value: None, comment: None }, CppParam { name: "displayedTerms", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "thirdPartyEmail", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AccessTokenObject>>>", modifiers: "", def_value: None, comment: None }]
constexpr ModioSteamAuthService__Authenticate_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::Customizations::ModioSteamAuthService*  __4__this, bool  displayedTerms, ::StringW  thirdPartyEmail, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AccessTokenObject>>>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17725};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::Customizations::ModioSteamAuthService*  __4__this;

/// @brief Field displayedTerms, offset: 0x28, size: 0x1, def value: None
 bool  displayedTerms;

/// @brief Field thirdPartyEmail, offset: 0x30, size: 0x8, def value: None
 ::StringW  thirdPartyEmail;

/// @brief Field <>u__1, offset: 0x38, size: 0x1, def value: None
 ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1;

/// [TupleElementNames(new[] { "error", "accessTokenObject" })]
/// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AccessTokenObject>>>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModioSteamAuthService__Authenticate_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioSteamAuthService__Authenticate_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioSteamAuthService__Authenticate_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioSteamAuthService__Authenticate_d__11, displayedTerms) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioSteamAuthService__Authenticate_d__11, thirdPartyEmail) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioSteamAuthService__Authenticate_d__11, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioSteamAuthService__Authenticate_d__11, __u__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModioSteamAuthService__Authenticate_d__11) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace

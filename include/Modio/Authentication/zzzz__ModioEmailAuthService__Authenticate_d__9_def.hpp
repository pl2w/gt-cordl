#pragma once
// IWYU pragma private; include "Modio/Authentication/ModioEmailAuthService__Authenticate_d__9.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__EmailRequestResponse_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioEmailAuthService__Authenticate_d__9)
namespace Modio::Authentication {
class ModioEmailAuthService;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModioEmailAuthService__Authenticate_d__9;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModioEmailAuthService__Authenticate_d__9);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioEmailAuthService__Authenticate_d__9, "Modio.Authentication", "ModioEmailAuthService/<Authenticate>d__9");
// [CompilerGenerated]
// Dependencies Modio.API.SchemaDefinitions.EmailRequestResponse, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Authentication.ModioEmailAuthService/<Authenticate>d__9
struct CORDL_TYPE ModioEmailAuthService__Authenticate_d__9 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa062924, size 0x668, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa062f8c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModioEmailAuthService__Authenticate_d__9() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::Authentication::ModioEmailAuthService*", modifiers: "", def_value: None, comment: None }, CppParam { name: "thirdPartyEmail", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::EmailRequestResponse>>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }]
constexpr ModioEmailAuthService__Authenticate_d__9(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::Authentication::ModioEmailAuthService*  __4__this, ::StringW  thirdPartyEmail, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::EmailRequestResponse>>>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17765};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::Authentication::ModioEmailAuthService*  __4__this;

/// @brief Field thirdPartyEmail, offset: 0x28, size: 0x8, def value: None
 ::StringW  thirdPartyEmail;

/// [TupleElementNames(new[] { "error", "emailRequestResponse" })]
/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::EmailRequestResponse>>>  __u__1;

/// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__2;

/// @brief Field <>u__3, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModioEmailAuthService__Authenticate_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioEmailAuthService__Authenticate_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioEmailAuthService__Authenticate_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioEmailAuthService__Authenticate_d__9, thirdPartyEmail) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioEmailAuthService__Authenticate_d__9, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioEmailAuthService__Authenticate_d__9, __u__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioEmailAuthService__Authenticate_d__9, __u__3) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModioEmailAuthService__Authenticate_d__9) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace

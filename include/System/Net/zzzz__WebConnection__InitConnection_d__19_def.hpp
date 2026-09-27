#pragma once
// IWYU pragma private; include "System/Net/WebConnection__InitConnection_d__19.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebConnection__InitConnection_d__19)
namespace System::Net {
class WebConnection;
}
namespace System::Net {
class WebOperation;
}
namespace System::Net {
class WebRequestStream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct WebConnection__InitConnection_d__19;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WebConnection__InitConnection_d__19);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WebConnection__InitConnection_d__19, "System.Net", "WebConnection/<InitConnection>d__19");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.WebConnection/<InitConnection>d__19
struct CORDL_TYPE WebConnection__InitConnection_d__19 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xacba6a8, size 0x580, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xacbae30, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WebConnection__InitConnection_d__19() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::WebRequestStream*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "operation", ty: "::System::Net::WebOperation*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebConnection*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_reused_5__2", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None, comment: None }]
constexpr WebConnection__InitConnection_d__19(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::WebRequestStream*>  __t__builder, ::System::Net::WebOperation*  operation, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::WebConnection*  __4__this, bool  _reused_5__2, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10737};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::WebRequestStream*>  __t__builder;

/// @brief Field operation, offset: 0x20, size: 0x8, def value: None
 ::System::Net::WebOperation*  operation;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::System::Net::WebConnection*  __4__this;

/// @brief Field <reused>5__2, offset: 0x38, size: 0x1, def value: None
 bool  _reused_5__2;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WebConnection__InitConnection_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebConnection__InitConnection_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebConnection__InitConnection_d__19, operation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebConnection__InitConnection_d__19, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebConnection__InitConnection_d__19, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebConnection__InitConnection_d__19, _reused_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebConnection__InitConnection_d__19, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebConnection__InitConnection_d__19, __u__2) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WebConnection__InitConnection_d__19) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/Requests/WitWebSocketJsonRequest__WaitForTimeout_d__75.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WitWebSocketJsonRequest__WaitForTimeout_d__75)
namespace Meta::Voice::Net::WebSockets::Requests {
class WitWebSocketJsonRequest;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct WitWebSocketJsonRequest__WaitForTimeout_d__75;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WitWebSocketJsonRequest__WaitForTimeout_d__75);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WitWebSocketJsonRequest__WaitForTimeout_d__75, "Meta.Voice.Net.WebSockets.Requests", "WitWebSocketJsonRequest/<WaitForTimeout>d__75");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.Voice.Net.WebSockets.Requests.WitWebSocketJsonRequest/<WaitForTimeout>d__75
struct CORDL_TYPE WitWebSocketJsonRequest__WaitForTimeout_d__75 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9e34b0c, size 0x2ec, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9e34df8, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WitWebSocketJsonRequest__WaitForTimeout_d__75() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr WitWebSocketJsonRequest__WaitForTimeout_d__75(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25487};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WitWebSocketJsonRequest__WaitForTimeout_d__75, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitWebSocketJsonRequest__WaitForTimeout_d__75, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitWebSocketJsonRequest__WaitForTimeout_d__75, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitWebSocketJsonRequest__WaitForTimeout_d__75, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WitWebSocketJsonRequest__WaitForTimeout_d__75) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

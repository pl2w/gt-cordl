#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/NativeWebSocketWrapper__Send_d__10.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeWebSocketWrapper__Send_d__10)
namespace Meta::Voice::Net::WebSockets {
class NativeWebSocketWrapper;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct NativeWebSocketWrapper__Send_d__10;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NativeWebSocketWrapper__Send_d__10);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NativeWebSocketWrapper__Send_d__10, "Meta.Voice.Net.WebSockets", "NativeWebSocketWrapper/<Send>d__10");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.Voice.Net.WebSockets.NativeWebSocketWrapper/<Send>d__10
struct CORDL_TYPE NativeWebSocketWrapper__Send_d__10 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9e28800, size 0x210, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9e28a10, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeWebSocketWrapper__Send_d__10() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*", modifiers: "", def_value: None, comment: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr NativeWebSocketWrapper__Send_d__10(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*  __4__this, ::ArrayW<uint8_t>  data, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25466};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*  __4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  data;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NativeWebSocketWrapper__Send_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeWebSocketWrapper__Send_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeWebSocketWrapper__Send_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeWebSocketWrapper__Send_d__10, data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeWebSocketWrapper__Send_d__10, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NativeWebSocketWrapper__Send_d__10) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaNetworkLeaveRoomTrigger__DisconnectAfterDelay_d__2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaNetworkLeaveRoomTrigger__DisconnectAfterDelay_d__2)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct GorillaNetworkLeaveRoomTrigger__DisconnectAfterDelay_d__2;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaNetworkLeaveRoomTrigger__DisconnectAfterDelay_d__2);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaNetworkLeaveRoomTrigger__DisconnectAfterDelay_d__2, "GorillaNetworking", "GorillaNetworkLeaveRoomTrigger/<DisconnectAfterDelay>d__2");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaNetworking.GorillaNetworkLeaveRoomTrigger/<DisconnectAfterDelay>d__2
struct CORDL_TYPE GorillaNetworkLeaveRoomTrigger__DisconnectAfterDelay_d__2 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5c8bcf8, size 0x2e8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5c8bfe0, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr GorillaNetworkLeaveRoomTrigger__DisconnectAfterDelay_d__2() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "seconds", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr GorillaNetworkLeaveRoomTrigger__DisconnectAfterDelay_d__2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, float_t  seconds, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4345};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field seconds, offset: 0x28, size: 0x4, def value: None
 float_t  seconds;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaNetworkLeaveRoomTrigger__DisconnectAfterDelay_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkLeaveRoomTrigger__DisconnectAfterDelay_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkLeaveRoomTrigger__DisconnectAfterDelay_d__2, seconds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkLeaveRoomTrigger__DisconnectAfterDelay_d__2, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaNetworkLeaveRoomTrigger__DisconnectAfterDelay_d__2) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

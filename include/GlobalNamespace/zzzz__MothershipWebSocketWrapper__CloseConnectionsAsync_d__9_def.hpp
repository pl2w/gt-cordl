#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipWebSocketWrapper__CloseConnectionsAsync_d__9.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipWebSocketWrapper__CloseConnectionsAsync_d__9)
namespace GlobalNamespace {
class ActiveWebSocket;
}
namespace GlobalNamespace {
class MothershipWebSocketWrapper;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct MothershipWebSocketWrapper__CloseConnectionsAsync_d__9;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9, "", "MothershipWebSocketWrapper/<CloseConnectionsAsync>d__9");
// [CompilerGenerated]
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: MothershipWebSocketWrapper/<CloseConnectionsAsync>d__9
struct CORDL_TYPE MothershipWebSocketWrapper__CloseConnectionsAsync_d__9 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x53c3e68, size 0x580, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x53c43e8, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MothershipWebSocketWrapper__CloseConnectionsAsync_d__9() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MothershipWebSocketWrapper*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap1", ty: "::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::ActiveWebSocket*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr MothershipWebSocketWrapper__CloseConnectionsAsync_d__9(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::MothershipWebSocketWrapper*  __4__this, ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::ActiveWebSocket*>  __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9783};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::MothershipWebSocketWrapper*  __4__this;

/// @brief Field <>7__wrap1, offset: 0x28, size: 0x18, def value: None
 ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::ActiveWebSocket*>  __7__wrap1;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9, __7__wrap1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace

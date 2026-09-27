#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemFusion__ConnectToRoom_d__59.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetJoinResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSystemFusion__ConnectToRoom_d__59)
namespace GlobalNamespace {
struct NetJoinResult;
}
namespace GlobalNamespace {
class NetworkSystemFusion;
}
namespace GlobalNamespace {
class RoomConfig;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetworkSystemFusion__ConnectToRoom_d__59;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkSystemFusion__ConnectToRoom_d__59);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystemFusion__ConnectToRoom_d__59, "", "NetworkSystemFusion/<ConnectToRoom>d__59");
// [CompilerGenerated]
// Dependencies NetJoinResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetworkSystemFusion/<ConnectToRoom>d__59
struct CORDL_TYPE NetworkSystemFusion__ConnectToRoom_d__59 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x56e3cdc, size 0x624, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x56e4300, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystemFusion__ConnectToRoom_d__59() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::NetJoinResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::NetworkSystemFusion>", modifiers: "", def_value: None, comment: None }, CppParam { name: "roomName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "opts", ty: "::GlobalNamespace::RoomConfig*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_makeOrJoinTask_5__2", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NetJoinResult>", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSystemFusion__ConnectToRoom_d__59(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::NetJoinResult>  __t__builder, ::UnityW<::GlobalNamespace::NetworkSystemFusion>  __4__this, ::StringW  roomName, ::GlobalNamespace::RoomConfig*  opts, ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*  _makeOrJoinTask_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NetJoinResult>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1099};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::NetJoinResult>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkSystemFusion>  __4__this;

/// @brief Field roomName, offset: 0x28, size: 0x8, def value: None
 ::StringW  roomName;

/// @brief Field opts, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::RoomConfig*  opts;

/// @brief Field <makeOrJoinTask>5__2, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*  _makeOrJoinTask_5__2;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NetJoinResult>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion__ConnectToRoom_d__59, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion__ConnectToRoom_d__59, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion__ConnectToRoom_d__59, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion__ConnectToRoom_d__59, roomName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion__ConnectToRoom_d__59, opts) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion__ConnectToRoom_d__59, _makeOrJoinTask_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion__ConnectToRoom_d__59, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSystemFusion__ConnectToRoom_d__59) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace

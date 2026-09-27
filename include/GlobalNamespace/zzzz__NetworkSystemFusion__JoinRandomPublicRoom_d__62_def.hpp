#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemFusion__JoinRandomPublicRoom_d__62.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetJoinResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSystemFusion__JoinRandomPublicRoom_d__62)
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
struct NetworkSystemFusion__JoinRandomPublicRoom_d__62;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62, "", "NetworkSystemFusion/<JoinRandomPublicRoom>d__62");
// [CompilerGenerated]
// Dependencies NetJoinResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetworkSystemFusion/<JoinRandomPublicRoom>d__62
struct CORDL_TYPE NetworkSystemFusion__JoinRandomPublicRoom_d__62 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x56e5970, size 0x55c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x56e6064, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystemFusion__JoinRandomPublicRoom_d__62() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::NetJoinResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "opts", ty: "::GlobalNamespace::RoomConfig*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::NetworkSystemFusion>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_shouldCreateIfNone_5__2", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_connectTask_5__3", ty: "::System::Threading::Tasks::Task_1<bool>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_createTask_5__4", ty: "::System::Threading::Tasks::Task_1<bool>*", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSystemFusion__JoinRandomPublicRoom_d__62(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::NetJoinResult>  __t__builder, ::GlobalNamespace::RoomConfig*  opts, ::UnityW<::GlobalNamespace::NetworkSystemFusion>  __4__this, bool  _shouldCreateIfNone_5__2, ::System::Threading::Tasks::Task_1<bool>*  _connectTask_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Threading::Tasks::Task_1<bool>*  _createTask_5__4) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1102};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::NetJoinResult>  __t__builder;

/// @brief Field opts, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::RoomConfig*  opts;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkSystemFusion>  __4__this;

/// @brief Field <shouldCreateIfNone>5__2, offset: 0x30, size: 0x1, def value: None
 bool  _shouldCreateIfNone_5__2;

/// @brief Field <connectTask>5__3, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<bool>*  _connectTask_5__3;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Field <createTask>5__4, offset: 0x48, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<bool>*  _createTask_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62, opts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62, _shouldCreateIfNone_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62, _connectTask_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62, _createTask_5__4) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSystemFusion__JoinRandomPublicRoom_d__62) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace

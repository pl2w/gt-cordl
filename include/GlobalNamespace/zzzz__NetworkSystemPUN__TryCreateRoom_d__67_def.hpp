#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemPUN__TryCreateRoom_d__67.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetJoinResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSystemPUN__TryCreateRoom_d__67)
namespace GlobalNamespace {
class NetworkSystemPUN;
}
namespace GlobalNamespace {
class RoomConfig;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetworkSystemPUN__TryCreateRoom_d__67;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkSystemPUN__TryCreateRoom_d__67);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystemPUN__TryCreateRoom_d__67, "", "NetworkSystemPUN/<TryCreateRoom>d__67");
// [CompilerGenerated]
// Dependencies NetJoinResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetworkSystemPUN/<TryCreateRoom>d__67
struct CORDL_TYPE NetworkSystemPUN__TryCreateRoom_d__67 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x570bc1c, size 0x568, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x570c184, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystemPUN__TryCreateRoom_d__67() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::NetJoinResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::NetworkSystemPUN>", modifiers: "", def_value: None, comment: None }, CppParam { name: "opts", ty: "::GlobalNamespace::RoomConfig*", modifiers: "", def_value: None, comment: None }, CppParam { name: "roomName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSystemPUN__TryCreateRoom_d__67(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::NetJoinResult>  __t__builder, ::UnityW<::GlobalNamespace::NetworkSystemPUN>  __4__this, ::GlobalNamespace::RoomConfig*  opts, ::StringW  roomName, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1153};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::NetJoinResult>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkSystemPUN>  __4__this;

/// @brief Field opts, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::RoomConfig*  opts;

/// @brief Field roomName, offset: 0x30, size: 0x8, def value: None
 ::StringW  roomName;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__TryCreateRoom_d__67, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__TryCreateRoom_d__67, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__TryCreateRoom_d__67, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__TryCreateRoom_d__67, opts) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__TryCreateRoom_d__67, roomName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__TryCreateRoom_d__67, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSystemPUN__TryCreateRoom_d__67) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace

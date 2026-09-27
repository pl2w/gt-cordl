#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/FriendsMatchmaking__RegisterGameRoom_d__27.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendsMatchmaking__RegisterGameRoom_d__27)
namespace Meta::XR::MultiplayerBlocks::Shared {
class FriendsMatchmaking;
}
namespace Oculus::Platform {
class Message;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct FriendsMatchmaking__RegisterGameRoom_d__27;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27, "Meta.XR.MultiplayerBlocks.Shared", "FriendsMatchmaking/<RegisterGameRoom>d__27");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking/<RegisterGameRoom>d__27
struct CORDL_TYPE FriendsMatchmaking__RegisterGameRoom_d__27 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f6eb0c, size 0x338, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f6ee44, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FriendsMatchmaking__RegisterGameRoom_d__27() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking>", modifiers: "", def_value: None, comment: None }, CppParam { name: "roomId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "roomPassword", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_i_5__2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*>", modifiers: "", def_value: None, comment: None }]
constexpr FriendsMatchmaking__RegisterGameRoom_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking>  __4__this, ::StringW  roomId, ::StringW  roomPassword, int32_t  _i_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30639};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking>  __4__this;

/// @brief Field roomId, offset: 0x28, size: 0x8, def value: None
 ::StringW  roomId;

/// @brief Field roomPassword, offset: 0x30, size: 0x8, def value: None
 ::StringW  roomPassword;

/// @brief Field <i>5__2, offset: 0x38, size: 0x4, def value: None
 int32_t  _i_5__2;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27, roomId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27, roomPassword) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27, _i_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace

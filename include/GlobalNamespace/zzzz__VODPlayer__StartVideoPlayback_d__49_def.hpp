#pragma once
// IWYU pragma private; include "GlobalNamespace/VODPlayer__StartVideoPlayback_d__49.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VODPlayer_VODStream_VODStreamChannel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VODPlayer__StartVideoPlayback_d__49)
namespace GlobalNamespace {
class VODPlayer;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct VODPlayer__StartVideoPlayback_d__49;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VODPlayer__StartVideoPlayback_d__49);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VODPlayer__StartVideoPlayback_d__49, "", "VODPlayer/<StartVideoPlayback>d__49");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter, VODPlayer::VODStream::VODStreamChannel
namespace GlobalNamespace {
// Is value type: true
// CS Name: VODPlayer/<StartVideoPlayback>d__49
struct CORDL_TYPE VODPlayer__StartVideoPlayback_d__49 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5d06a08, size 0x8c8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5d072d0, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr VODPlayer__StartVideoPlayback_d__49() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::VODPlayer>", modifiers: "", def_value: None, comment: None }, CppParam { name: "ch", ty: "::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel", modifiers: "", def_value: None, comment: None }, CppParam { name: "cachedUrl", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "fileId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr VODPlayer__StartVideoPlayback_d__49(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::VODPlayer>  __4__this, ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel  ch, ::StringW  cachedUrl, ::StringW  url, ::StringW  fileId, double_t  time, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{440};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VODPlayer>  __4__this;

/// @brief Field ch, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel  ch;

/// @brief Field cachedUrl, offset: 0x38, size: 0x8, def value: None
 ::StringW  cachedUrl;

/// @brief Field url, offset: 0x40, size: 0x8, def value: None
 ::StringW  url;

/// @brief Field fileId, offset: 0x48, size: 0x8, def value: None
 ::StringW  fileId;

/// @brief Field time, offset: 0x50, size: 0x8, def value: None
 double_t  time;

/// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1;

/// @brief Field <>u__2, offset: 0x60, size: 0x1, def value: None
 ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VODPlayer__StartVideoPlayback_d__49, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartVideoPlayback_d__49, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartVideoPlayback_d__49, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartVideoPlayback_d__49, ch) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartVideoPlayback_d__49, cachedUrl) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartVideoPlayback_d__49, url) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartVideoPlayback_d__49, fileId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartVideoPlayback_d__49, time) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartVideoPlayback_d__49, __u__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartVideoPlayback_d__49, __u__2) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VODPlayer__StartVideoPlayback_d__49) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace

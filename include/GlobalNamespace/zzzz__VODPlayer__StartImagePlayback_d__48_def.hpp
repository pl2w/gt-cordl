#pragma once
// IWYU pragma private; include "GlobalNamespace/VODPlayer__StartImagePlayback_d__48.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VODPlayer_VODStream_VODStreamChannel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VODPlayer__StartImagePlayback_d__48)
namespace GlobalNamespace {
class VODPlayer;
}
namespace GlobalNamespace {
class VODTarget;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine::Networking {
class DownloadHandlerTexture;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace GlobalNamespace {
struct VODPlayer__StartImagePlayback_d__48;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VODPlayer__StartImagePlayback_d__48);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VODPlayer__StartImagePlayback_d__48, "", "VODPlayer/<StartImagePlayback>d__48");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, VODPlayer::VODStream::VODStreamChannel
namespace GlobalNamespace {
// Is value type: true
// CS Name: VODPlayer/<StartImagePlayback>d__48
struct CORDL_TYPE VODPlayer__StartImagePlayback_d__48 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5d05de0, size 0xbb8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5d069fc, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr VODPlayer__StartImagePlayback_d__48() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "duration", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::VODPlayer>", modifiers: "", def_value: None, comment: None }, CppParam { name: "ch", ty: "::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel", modifiers: "", def_value: None, comment: None }, CppParam { name: "cachedUrl", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "fileId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_imageTargets_5__2", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VODTarget>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_www_5__3", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_downloadHandlerTexture_5__4", ty: "::UnityEngine::Networking::DownloadHandlerTexture*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr VODPlayer__StartImagePlayback_d__48(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, int32_t  duration, double_t  time, ::UnityW<::GlobalNamespace::VODPlayer>  __4__this, ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel  ch, ::StringW  cachedUrl, ::StringW  url, ::StringW  fileId, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VODTarget>>*  _imageTargets_5__2, ::UnityEngine::Networking::UnityWebRequest*  _www_5__3, ::UnityEngine::Networking::DownloadHandlerTexture*  _downloadHandlerTexture_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest*>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{439};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field duration, offset: 0x28, size: 0x4, def value: None
 int32_t  duration;

/// @brief Field time, offset: 0x30, size: 0x8, def value: None
 double_t  time;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VODPlayer>  __4__this;

/// @brief Field ch, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel  ch;

/// @brief Field cachedUrl, offset: 0x48, size: 0x8, def value: None
 ::StringW  cachedUrl;

/// @brief Field url, offset: 0x50, size: 0x8, def value: None
 ::StringW  url;

/// @brief Field fileId, offset: 0x58, size: 0x8, def value: None
 ::StringW  fileId;

/// @brief Field <imageTargets>5__2, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VODTarget>>*  _imageTargets_5__2;

/// @brief Field <www>5__3, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  _www_5__3;

/// @brief Field <downloadHandlerTexture>5__4, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Networking::DownloadHandlerTexture*  _downloadHandlerTexture_5__4;

/// @brief Field <>u__1, offset: 0x78, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1;

/// @brief Field <>u__2, offset: 0x80, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest*>  __u__2;

/// @brief Field <>u__3, offset: 0x88, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VODPlayer__StartImagePlayback_d__48, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartImagePlayback_d__48, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartImagePlayback_d__48, duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartImagePlayback_d__48, time) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartImagePlayback_d__48, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartImagePlayback_d__48, ch) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartImagePlayback_d__48, cachedUrl) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartImagePlayback_d__48, url) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartImagePlayback_d__48, fileId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartImagePlayback_d__48, _imageTargets_5__2) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartImagePlayback_d__48, _www_5__3) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartImagePlayback_d__48, _downloadHandlerTexture_5__4) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartImagePlayback_d__48, __u__1) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartImagePlayback_d__48, __u__2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__StartImagePlayback_d__48, __u__3) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VODPlayer__StartImagePlayback_d__48) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace

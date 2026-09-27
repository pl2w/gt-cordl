#pragma once
// IWYU pragma private; include "GlobalNamespace/VODPlayer__GetCachedFile_d__38.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VODPlayer__GetCachedFile_d__38)
namespace GlobalNamespace {
class VODPlayer;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace GlobalNamespace {
struct VODPlayer__GetCachedFile_d__38;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VODPlayer__GetCachedFile_d__38);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VODPlayer__GetCachedFile_d__38, "", "VODPlayer/<GetCachedFile>d__38");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: VODPlayer/<GetCachedFile>d__38
struct CORDL_TYPE VODPlayer__GetCachedFile_d__38 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5d04fe4, size 0x52c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5d05510, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr VODPlayer__GetCachedFile_d__38() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::VODPlayer>", modifiers: "", def_value: None, comment: None }, CppParam { name: "fileId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "extension", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_filePath_5__2", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_www_5__3", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest*>", modifiers: "", def_value: None, comment: None }]
constexpr VODPlayer__GetCachedFile_d__38(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::UnityW<::GlobalNamespace::VODPlayer>  __4__this, ::StringW  fileId, ::StringW  extension, ::StringW  url, ::StringW  _filePath_5__2, ::UnityEngine::Networking::UnityWebRequest*  _www_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{437};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VODPlayer>  __4__this;

/// @brief Field fileId, offset: 0x28, size: 0x8, def value: None
 ::StringW  fileId;

/// @brief Field extension, offset: 0x30, size: 0x8, def value: None
 ::StringW  extension;

/// @brief Field url, offset: 0x38, size: 0x8, def value: None
 ::StringW  url;

/// @brief Field <filePath>5__2, offset: 0x40, size: 0x8, def value: None
 ::StringW  _filePath_5__2;

/// @brief Field <www>5__3, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  _www_5__3;

/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VODPlayer__GetCachedFile_d__38, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__GetCachedFile_d__38, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__GetCachedFile_d__38, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__GetCachedFile_d__38, fileId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__GetCachedFile_d__38, extension) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__GetCachedFile_d__38, url) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__GetCachedFile_d__38, _filePath_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__GetCachedFile_d__38, _www_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer__GetCachedFile_d__38, __u__1) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VODPlayer__GetCachedFile_d__38) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace

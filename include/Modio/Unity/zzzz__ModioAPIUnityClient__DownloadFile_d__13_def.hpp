#pragma once
// IWYU pragma private; include "Modio/Unity/ModioAPIUnityClient__DownloadFile_d__13.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioAPIUnityClient__DownloadFile_d__13)
namespace Modio::Unity {
class ModioAPIUnityClient;
}
namespace Modio::Unity {
class StreamingDownloadHandler;
}
namespace Modio {
class Error;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModioAPIUnityClient__DownloadFile_d__13;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModioAPIUnityClient__DownloadFile_d__13);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioAPIUnityClient__DownloadFile_d__13, "Modio.Unity", "ModioAPIUnityClient/<DownloadFile>d__13");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Unity.ModioAPIUnityClient/<DownloadFile>d__13
struct CORDL_TYPE ModioAPIUnityClient__DownloadFile_d__13 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f936c4, size 0xc24, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f94438, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModioAPIUnityClient__DownloadFile_d__13() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::Unity::ModioAPIUnityClient*", modifiers: "", def_value: None, comment: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_handler_5__2", ty: "::Modio::Unity::StreamingDownloadHandler*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_webRequest_5__3", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr ModioAPIUnityClient__DownloadFile_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>  __t__builder, ::Modio::Unity::ModioAPIUnityClient*  __4__this, ::StringW  url, ::System::Threading::CancellationToken  token, ::Modio::Unity::StreamingDownloadHandler*  _handler_5__2, ::UnityEngine::Networking::UnityWebRequest*  _webRequest_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32058};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::Unity::ModioAPIUnityClient*  __4__this;

/// @brief Field url, offset: 0x28, size: 0x8, def value: None
 ::StringW  url;

/// @brief Field token, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  token;

/// @brief Field <handler>5__2, offset: 0x38, size: 0x8, def value: None
 ::Modio::Unity::StreamingDownloadHandler*  _handler_5__2;

/// @brief Field <webRequest>5__3, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  _webRequest_5__3;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1;

/// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModioAPIUnityClient__DownloadFile_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIUnityClient__DownloadFile_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIUnityClient__DownloadFile_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIUnityClient__DownloadFile_d__13, url) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIUnityClient__DownloadFile_d__13, token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIUnityClient__DownloadFile_d__13, _handler_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIUnityClient__DownloadFile_d__13, _webRequest_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIUnityClient__DownloadFile_d__13, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIUnityClient__DownloadFile_d__13, __u__2) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModioAPIUnityClient__DownloadFile_d__13) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace

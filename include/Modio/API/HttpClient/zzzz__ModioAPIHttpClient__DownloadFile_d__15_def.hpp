#pragma once
// IWYU pragma private; include "Modio/API/HttpClient/ModioAPIHttpClient__DownloadFile_d__15.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioAPIHttpClient__DownloadFile_d__15)
namespace Modio::API::HttpClient {
class ModioAPIHttpClient;
}
namespace Modio {
class Error;
}
namespace System::IO {
class StreamReader;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModioAPIHttpClient__DownloadFile_d__15;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15, "Modio.API.HttpClient", "ModioAPIHttpClient/<DownloadFile>d__15");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.API.HttpClient.ModioAPIHttpClient/<DownloadFile>d__15
struct CORDL_TYPE ModioAPIHttpClient__DownloadFile_d__15 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9fe0bf0, size 0x1338, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9fe1f28, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModioAPIHttpClient__DownloadFile_d__15() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::API::HttpClient::ModioAPIHttpClient*", modifiers: "", def_value: None, comment: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_target_5__2", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_httpRequest_5__3", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_cachedShutdownToken_5__4", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "_response_5__5", ty: "::System::Net::Http::HttpResponseMessage*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::IO::Stream*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_streamReader_5__6", ty: "::System::IO::StreamReader*", modifiers: "", def_value: None, comment: None }]
constexpr ModioAPIHttpClient__DownloadFile_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>  __t__builder, ::Modio::API::HttpClient::ModioAPIHttpClient*  __4__this, ::StringW  url, ::System::Threading::CancellationToken  token, ::StringW  _target_5__2, ::System::Net::Http::HttpRequestMessage*  _httpRequest_5__3, ::System::Threading::CancellationToken  _cachedShutdownToken_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2, ::System::Net::Http::HttpResponseMessage*  _response_5__5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>  __u__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::IO::Stream*>  __u__4, ::System::IO::StreamReader*  _streamReader_5__6) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18038};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::API::HttpClient::ModioAPIHttpClient*  __4__this;

/// @brief Field url, offset: 0x28, size: 0x8, def value: None
 ::StringW  url;

/// @brief Field token, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  token;

/// @brief Field <target>5__2, offset: 0x38, size: 0x8, def value: None
 ::StringW  _target_5__2;

/// @brief Field <httpRequest>5__3, offset: 0x40, size: 0x8, def value: None
 ::System::Net::Http::HttpRequestMessage*  _httpRequest_5__3;

/// @brief Field <cachedShutdownToken>5__4, offset: 0x48, size: 0x8, def value: None
 ::System::Threading::CancellationToken  _cachedShutdownToken_5__4;

/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1;

/// @brief Field <>u__2, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

/// @brief Field <response>5__5, offset: 0x60, size: 0x8, def value: None
 ::System::Net::Http::HttpResponseMessage*  _response_5__5;

/// @brief Field <>u__3, offset: 0x68, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>  __u__3;

/// @brief Field <>u__4, offset: 0x70, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::IO::Stream*>  __u__4;

/// @brief Field <streamReader>5__6, offset: 0x78, size: 0x8, def value: None
 ::System::IO::StreamReader*  _streamReader_5__6;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15, url) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15, token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15, _target_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15, _httpRequest_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15, _cachedShutdownToken_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15, __u__2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15, _response_5__5) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15, __u__3) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15, __u__4) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15, _streamReader_5__6) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace

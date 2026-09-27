#pragma once
// IWYU pragma private; include "System/Net/Http/MonoWebRequestHandler__SendAsync_d__99.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoWebRequestHandler__SendAsync_d__99)
namespace System::IO {
class Stream;
}
namespace System::Net::Http {
class HttpContent;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Net::Http {
class MonoWebRequestHandler;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
class HttpWebResponse;
}
namespace System::Net {
class WebResponse;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct MonoWebRequestHandler__SendAsync_d__99;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MonoWebRequestHandler__SendAsync_d__99);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonoWebRequestHandler__SendAsync_d__99, "System.Net.Http", "MonoWebRequestHandler/<SendAsync>d__99");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.Http.MonoWebRequestHandler/<SendAsync>d__99
struct CORDL_TYPE MonoWebRequestHandler__SendAsync_d__99 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa9dc694, size 0x18fc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa9de384, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MonoWebRequestHandler__SendAsync_d__99() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::Http::MonoWebRequestHandler*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "request", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_wrequest_5__2", ty: "::System::Net::HttpWebRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_wresponse_5__3", ty: "::System::Net::HttpWebResponse*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: None, comment: None }, CppParam { name: "_content_5__5", ty: "::System::Net::Http::HttpContent*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "_stream_5__6", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebResponse*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None, comment: None }]
constexpr MonoWebRequestHandler__SendAsync_d__99(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*>  __t__builder, ::System::Net::Http::MonoWebRequestHandler*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::Http::HttpRequestMessage*  request, ::System::Net::HttpWebRequest*  _wrequest_5__2, ::System::Net::HttpWebResponse*  _wresponse_5__3, ::System::Threading::CancellationTokenRegistration  __7__wrap3, ::System::Net::Http::HttpContent*  _content_5__5, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1, ::System::IO::Stream*  _stream_5__6, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*>  __u__2, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebResponse*>  __u__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>  __u__4) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30708};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa8};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::System::Net::Http::MonoWebRequestHandler*  __4__this;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field request, offset: 0x30, size: 0x8, def value: None
 ::System::Net::Http::HttpRequestMessage*  request;

/// @brief Field <wrequest>5__2, offset: 0x38, size: 0x8, def value: None
 ::System::Net::HttpWebRequest*  _wrequest_5__2;

/// @brief Field <wresponse>5__3, offset: 0x40, size: 0x8, def value: None
 ::System::Net::HttpWebResponse*  _wresponse_5__3;

/// @brief Field <>7__wrap3, offset: 0x48, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  __7__wrap3;

/// @brief Field <content>5__5, offset: 0x60, size: 0x8, def value: None
 ::System::Net::Http::HttpContent*  _content_5__5;

/// @brief Field <>u__1, offset: 0x68, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

/// @brief Field <stream>5__6, offset: 0x78, size: 0x8, def value: None
 ::System::IO::Stream*  _stream_5__6;

/// @brief Field <>u__2, offset: 0x80, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*>  __u__2;

/// @brief Field <>u__3, offset: 0x90, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebResponse*>  __u__3;

/// @brief Field <>u__4, offset: 0xa0, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>  __u__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonoWebRequestHandler__SendAsync_d__99, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoWebRequestHandler__SendAsync_d__99, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoWebRequestHandler__SendAsync_d__99, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoWebRequestHandler__SendAsync_d__99, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoWebRequestHandler__SendAsync_d__99, request) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoWebRequestHandler__SendAsync_d__99, _wrequest_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoWebRequestHandler__SendAsync_d__99, _wresponse_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoWebRequestHandler__SendAsync_d__99, __7__wrap3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoWebRequestHandler__SendAsync_d__99, _content_5__5) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoWebRequestHandler__SendAsync_d__99, __u__1) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoWebRequestHandler__SendAsync_d__99, _stream_5__6) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoWebRequestHandler__SendAsync_d__99, __u__2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoWebRequestHandler__SendAsync_d__99, __u__3) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoWebRequestHandler__SendAsync_d__99, __u__4) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonoWebRequestHandler__SendAsync_d__99) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace

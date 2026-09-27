#pragma once
// IWYU pragma private; include "System/Net/HttpWebRequest__MyGetResponseAsync_d__243.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ValueTuple_5_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpWebRequest__MyGetResponseAsync_d__243)
namespace System::Net {
class BufferOffsetSize;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
class HttpWebResponse;
}
namespace System::Net {
class WebCompletionSource;
}
namespace System::Net {
class WebException;
}
namespace System::Net {
class WebOperation;
}
namespace System::Net {
class WebRequestStream;
}
namespace System::Net {
class WebResponseStream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct HttpWebRequest__MyGetResponseAsync_d__243;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243, "System.Net", "HttpWebRequest/<MyGetResponseAsync>d__243");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken, System.ValueTuple`5<T1, T2, T3, T4, T5>
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.HttpWebRequest/<MyGetResponseAsync>d__243
struct CORDL_TYPE HttpWebRequest__MyGetResponseAsync_d__243 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xaca6b68, size 0x10d0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xaca7c38, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr HttpWebRequest__MyGetResponseAsync_d__243() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::HttpWebResponse*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::HttpWebRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_completion_5__2", ty: "::System::Net::WebCompletionSource*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_operation_5__3", ty: "::System::Net::WebOperation*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_throwMe_5__4", ty: "::System::Net::WebException*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_response_5__5", ty: "::System::Net::HttpWebResponse*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_stream_5__6", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_redirect_5__7", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_mustReadAll_5__8", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ntlm_5__9", ty: "::System::Net::WebOperation*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_writeBuffer_5__10", ty: "::System::Net::BufferOffsetSize*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__4", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::ValueTuple_5<::System::Net::HttpWebResponse*,bool,bool,::System::Net::BufferOffsetSize*,::System::Net::WebOperation*>>", modifiers: "", def_value: None, comment: None }]
constexpr HttpWebRequest__MyGetResponseAsync_d__243(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::HttpWebResponse*>  __t__builder, ::System::Net::HttpWebRequest*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::WebCompletionSource*  _completion_5__2, ::System::Net::WebOperation*  _operation_5__3, ::System::Net::WebException*  _throwMe_5__4, ::System::Net::HttpWebResponse*  _response_5__5, ::System::Net::WebResponseStream*  _stream_5__6, bool  _redirect_5__7, bool  _mustReadAll_5__8, ::System::Net::WebOperation*  _ntlm_5__9, ::System::Net::BufferOffsetSize*  _writeBuffer_5__10, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream*>  __u__3, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::ValueTuple_5<::System::Net::HttpWebResponse*,bool,bool,::System::Net::BufferOffsetSize*,::System::Net::WebOperation*>>  __u__4) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10695};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa8};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::HttpWebResponse*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::System::Net::HttpWebRequest*  __4__this;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <completion>5__2, offset: 0x30, size: 0x8, def value: None
 ::System::Net::WebCompletionSource*  _completion_5__2;

/// @brief Field <operation>5__3, offset: 0x38, size: 0x8, def value: None
 ::System::Net::WebOperation*  _operation_5__3;

/// @brief Field <throwMe>5__4, offset: 0x40, size: 0x8, def value: None
 ::System::Net::WebException*  _throwMe_5__4;

/// @brief Field <response>5__5, offset: 0x48, size: 0x8, def value: None
 ::System::Net::HttpWebResponse*  _response_5__5;

/// @brief Field <stream>5__6, offset: 0x50, size: 0x8, def value: None
 ::System::Net::WebResponseStream*  _stream_5__6;

/// @brief Field <redirect>5__7, offset: 0x58, size: 0x1, def value: None
 bool  _redirect_5__7;

/// @brief Field <mustReadAll>5__8, offset: 0x59, size: 0x1, def value: None
 bool  _mustReadAll_5__8;

/// @brief Field <ntlm>5__9, offset: 0x60, size: 0x8, def value: None
 ::System::Net::WebOperation*  _ntlm_5__9;

/// @brief Field <writeBuffer>5__10, offset: 0x68, size: 0x8, def value: None
 ::System::Net::BufferOffsetSize*  _writeBuffer_5__10;

/// @brief Field <>u__1, offset: 0x70, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>  __u__1;

/// @brief Field <>u__2, offset: 0x80, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2;

/// @brief Field <>u__3, offset: 0x90, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream*>  __u__3;

/// [TupleElementNames(new[] { "response", "redirect", "mustReadAll", "writeBuffer", "ntlm" })]
/// @brief Field <>u__4, offset: 0x98, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::ValueTuple_5<::System::Net::HttpWebResponse*,bool,bool,::System::Net::BufferOffsetSize*,::System::Net::WebOperation*>>  __u__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243, _completion_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243, _operation_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243, _throwMe_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243, _response_5__5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243, _stream_5__6) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243, _redirect_5__7) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243, _mustReadAll_5__8) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243, _ntlm_5__9) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243, _writeBuffer_5__10) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243, __u__1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243, __u__2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243, __u__3) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243, __u__4) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace

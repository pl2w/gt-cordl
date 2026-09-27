#pragma once
// IWYU pragma private; include "System/Net/HttpWebRequest__GetResponseFromData_d__244.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ValueTuple_5_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpWebRequest__GetResponseFromData_d__244)
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
class WebException;
}
namespace System::Net {
class WebOperation;
}
namespace System::Net {
class WebResponseStream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct HttpWebRequest__GetResponseFromData_d__244;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HttpWebRequest__GetResponseFromData_d__244);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HttpWebRequest__GetResponseFromData_d__244, "System.Net", "HttpWebRequest/<GetResponseFromData>d__244");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Threading.CancellationToken, System.ValueTuple`5<T1, T2, T3, T4, T5>
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.HttpWebRequest/<GetResponseFromData>d__244
struct CORDL_TYPE HttpWebRequest__GetResponseFromData_d__244 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xaca7cb4, size 0x894, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xaca8884, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr HttpWebRequest__GetResponseFromData_d__244() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_5<::System::Net::HttpWebResponse*,bool,bool,::System::Net::BufferOffsetSize*,::System::Net::WebOperation*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::HttpWebRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "stream", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_response_5__2", ty: "::System::Net::HttpWebResponse*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_throwMe_5__3", ty: "::System::Net::WebException*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_redirect_5__4", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_mustReadAll_5__5", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::BufferOffsetSize*>", modifiers: "", def_value: None, comment: None }]
constexpr HttpWebRequest__GetResponseFromData_d__244(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_5<::System::Net::HttpWebResponse*,bool,bool,::System::Net::BufferOffsetSize*,::System::Net::WebOperation*>>  __t__builder, ::System::Net::HttpWebRequest*  __4__this, ::System::Net::WebResponseStream*  stream, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::HttpWebResponse*  _response_5__2, ::System::Net::WebException*  _throwMe_5__3, bool  _redirect_5__4, bool  _mustReadAll_5__5, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::BufferOffsetSize*>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10696};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [TupleElementNames(new[] { "response", "redirect", "mustReadAll", "writeBuffer", "ntlm" })]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_5<::System::Net::HttpWebResponse*,bool,bool,::System::Net::BufferOffsetSize*,::System::Net::WebOperation*>>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::System::Net::HttpWebRequest*  __4__this;

/// @brief Field stream, offset: 0x28, size: 0x8, def value: None
 ::System::Net::WebResponseStream*  stream;

/// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <response>5__2, offset: 0x38, size: 0x8, def value: None
 ::System::Net::HttpWebResponse*  _response_5__2;

/// @brief Field <throwMe>5__3, offset: 0x40, size: 0x8, def value: None
 ::System::Net::WebException*  _throwMe_5__3;

/// @brief Field <redirect>5__4, offset: 0x48, size: 0x1, def value: None
 bool  _redirect_5__4;

/// @brief Field <mustReadAll>5__5, offset: 0x49, size: 0x1, def value: None
 bool  _mustReadAll_5__5;

/// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::BufferOffsetSize*>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HttpWebRequest__GetResponseFromData_d__244, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__GetResponseFromData_d__244, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__GetResponseFromData_d__244, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__GetResponseFromData_d__244, stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__GetResponseFromData_d__244, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__GetResponseFromData_d__244, _response_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__GetResponseFromData_d__244, _throwMe_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__GetResponseFromData_d__244, _redirect_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__GetResponseFromData_d__244, _mustReadAll_5__5) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__GetResponseFromData_d__244, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest__GetResponseFromData_d__244, __u__2) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HttpWebRequest__GetResponseFromData_d__244) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace

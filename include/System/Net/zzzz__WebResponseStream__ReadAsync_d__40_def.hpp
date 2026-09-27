#pragma once
// IWYU pragma private; include "System/Net/WebResponseStream__ReadAsync_d__40.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebResponseStream__ReadAsync_d__40)
namespace System::Net {
class WebCompletionSource;
}
namespace System::Net {
class WebResponseStream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct WebResponseStream__ReadAsync_d__40;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WebResponseStream__ReadAsync_d__40);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WebResponseStream__ReadAsync_d__40, "System.Net", "WebResponseStream/<ReadAsync>d__40");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.WebResponseStream/<ReadAsync>d__40
struct CORDL_TYPE WebResponseStream__ReadAsync_d__40 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xacc592c, size 0xa48, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xacc6374, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WebResponseStream__ReadAsync_d__40() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_completion_5__2", ty: "::System::Net::WebCompletionSource*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_nbytes_5__3", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_throwMe_5__4", ty: "::System::Exception*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr WebResponseStream__ReadAsync_d__40(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Net::WebResponseStream*  __4__this, ::System::Net::WebCompletionSource*  _completion_5__2, int32_t  _nbytes_5__3, ::System::Exception*  _throwMe_5__4, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10758};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  __t__builder;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field buffer, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  buffer;

/// @brief Field offset, offset: 0x30, size: 0x4, def value: None
 int32_t  offset;

/// @brief Field count, offset: 0x34, size: 0x4, def value: None
 int32_t  count;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::System::Net::WebResponseStream*  __4__this;

/// @brief Field <completion>5__2, offset: 0x40, size: 0x8, def value: None
 ::System::Net::WebCompletionSource*  _completion_5__2;

/// @brief Field <nbytes>5__3, offset: 0x48, size: 0x4, def value: None
 int32_t  _nbytes_5__3;

/// @brief Field <throwMe>5__4, offset: 0x50, size: 0x8, def value: None
 ::System::Exception*  _throwMe_5__4;

/// @brief Field <>u__1, offset: 0x58, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>  __u__1;

/// @brief Field <>u__2, offset: 0x68, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WebResponseStream__ReadAsync_d__40, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebResponseStream__ReadAsync_d__40, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebResponseStream__ReadAsync_d__40, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebResponseStream__ReadAsync_d__40, buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebResponseStream__ReadAsync_d__40, offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebResponseStream__ReadAsync_d__40, count) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebResponseStream__ReadAsync_d__40, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebResponseStream__ReadAsync_d__40, _completion_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebResponseStream__ReadAsync_d__40, _nbytes_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebResponseStream__ReadAsync_d__40, _throwMe_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebResponseStream__ReadAsync_d__40, __u__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebResponseStream__ReadAsync_d__40, __u__2) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WebResponseStream__ReadAsync_d__40) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace

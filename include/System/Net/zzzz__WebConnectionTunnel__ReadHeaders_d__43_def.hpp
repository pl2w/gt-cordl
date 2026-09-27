#pragma once
// IWYU pragma private; include "System/Net/WebConnectionTunnel__ReadHeaders_d__43.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebConnectionTunnel__ReadHeaders_d__43)
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class WebConnectionTunnel;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct WebConnectionTunnel__ReadHeaders_d__43;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WebConnectionTunnel__ReadHeaders_d__43);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WebConnectionTunnel__ReadHeaders_d__43, "System.Net", "WebConnectionTunnel/<ReadHeaders>d__43");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Threading.CancellationToken, System.ValueTuple`3<T1, T2, T3>
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.WebConnectionTunnel/<ReadHeaders>d__43
struct CORDL_TYPE WebConnectionTunnel__ReadHeaders_d__43 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xacbcf68, size 0x918, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xacbd880, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WebConnectionTunnel__ReadHeaders_d__43() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*,::ArrayW<uint8_t>,int32_t>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebConnectionTunnel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_retBuffer_5__2", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_status_5__3", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_buffer_5__4", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ms_5__5", ty: "::System::IO::MemoryStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr WebConnectionTunnel__ReadHeaders_d__43(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*,::ArrayW<uint8_t>,int32_t>>  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::System::IO::Stream*  stream, ::System::Net::WebConnectionTunnel*  __4__this, ::ArrayW<uint8_t>  _retBuffer_5__2, int32_t  _status_5__3, ::ArrayW<uint8_t>  _buffer_5__4, ::System::IO::MemoryStream*  _ms_5__5, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10742};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*,::ArrayW<uint8_t>,int32_t>>  __t__builder;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field stream, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  stream;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::System::Net::WebConnectionTunnel*  __4__this;

/// @brief Field <retBuffer>5__2, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<uint8_t>  _retBuffer_5__2;

/// @brief Field <status>5__3, offset: 0x40, size: 0x4, def value: None
 int32_t  _status_5__3;

/// @brief Field <buffer>5__4, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<uint8_t>  _buffer_5__4;

/// @brief Field <ms>5__5, offset: 0x50, size: 0x8, def value: None
 ::System::IO::MemoryStream*  _ms_5__5;

/// @brief Field <>u__1, offset: 0x58, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WebConnectionTunnel__ReadHeaders_d__43, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebConnectionTunnel__ReadHeaders_d__43, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebConnectionTunnel__ReadHeaders_d__43, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebConnectionTunnel__ReadHeaders_d__43, stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebConnectionTunnel__ReadHeaders_d__43, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebConnectionTunnel__ReadHeaders_d__43, _retBuffer_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebConnectionTunnel__ReadHeaders_d__43, _status_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebConnectionTunnel__ReadHeaders_d__43, _buffer_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebConnectionTunnel__ReadHeaders_d__43, _ms_5__5) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebConnectionTunnel__ReadHeaders_d__43, __u__1) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WebConnectionTunnel__ReadHeaders_d__43) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace

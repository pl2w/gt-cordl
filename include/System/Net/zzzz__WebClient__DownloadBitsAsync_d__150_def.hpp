#pragma once
// IWYU pragma private; include "System/Net/WebClient__DownloadBitsAsync_d__150.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable`1_ConfiguredValueTaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebClient__DownloadBitsAsync_d__150)
namespace System::ComponentModel {
class AsyncOperation;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class WebClient;
}
namespace System::Net {
class WebRequest;
}
namespace System::Net {
class WebResponse;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace GlobalNamespace {
struct WebClient__DownloadBitsAsync_d__150;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WebClient__DownloadBitsAsync_d__150);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WebClient__DownloadBitsAsync_d__150, "System.Net", "WebClient/<DownloadBitsAsync>d__150");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter, System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1::ConfiguredValueTaskAwaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.WebClient/<DownloadBitsAsync>d__150
struct CORDL_TYPE WebClient__DownloadBitsAsync_d__150 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xac50898, size 0xdd0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xac51668, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WebClient__DownloadBitsAsync_d__150() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebClient*", modifiers: "", def_value: None, comment: None }, CppParam { name: "request", ty: "::System::Net::WebRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "writeStream", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "asyncOp", ty: "::System::ComponentModel::AsyncOperation*", modifiers: "", def_value: None, comment: None }, CppParam { name: "completionDelegate", ty: "::System::Action_3<::ArrayW<uint8_t>,::System::Exception*,::System::ComponentModel::AsyncOperation*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_exception_5__2", ty: "::System::Exception*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_copyBuffer_5__3", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebResponse*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_readStream_5__5", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr WebClient__DownloadBitsAsync_d__150(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Net::WebClient*  __4__this, ::System::Net::WebRequest*  request, ::System::IO::Stream*  writeStream, ::System::ComponentModel::AsyncOperation*  asyncOp, ::System::Action_3<::ArrayW<uint8_t>,::System::Exception*,::System::ComponentModel::AsyncOperation*>*  completionDelegate, ::System::Exception*  _exception_5__2, ::ArrayW<uint8_t>  _copyBuffer_5__3, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebResponse*>  __u__1, ::System::IO::Stream*  __7__wrap3, ::System::IO::Stream*  _readStream_5__5, ::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>  __u__2, ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter  __u__3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10443};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa0};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::System::Net::WebClient*  __4__this;

/// @brief Field request, offset: 0x30, size: 0x8, def value: None
 ::System::Net::WebRequest*  request;

/// @brief Field writeStream, offset: 0x38, size: 0x8, def value: None
 ::System::IO::Stream*  writeStream;

/// @brief Field asyncOp, offset: 0x40, size: 0x8, def value: None
 ::System::ComponentModel::AsyncOperation*  asyncOp;

/// @brief Field completionDelegate, offset: 0x48, size: 0x8, def value: None
 ::System::Action_3<::ArrayW<uint8_t>,::System::Exception*,::System::ComponentModel::AsyncOperation*>*  completionDelegate;

/// @brief Field <exception>5__2, offset: 0x50, size: 0x8, def value: None
 ::System::Exception*  _exception_5__2;

/// @brief Field <copyBuffer>5__3, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<uint8_t>  _copyBuffer_5__3;

/// @brief Field <>u__1, offset: 0x60, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebResponse*>  __u__1;

/// @brief Field <>7__wrap3, offset: 0x70, size: 0x8, def value: None
 ::System::IO::Stream*  __7__wrap3;

/// @brief Field <readStream>5__5, offset: 0x78, size: 0x8, def value: None
 ::System::IO::Stream*  _readStream_5__5;

/// @brief Field <>u__2, offset: 0x80, size: 0x18, def value: None
 ::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>  __u__2;

/// @brief Field <>u__3, offset: 0x98, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter  __u__3;

/// @brief Size padding 0xa0 - 0xa8 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WebClient__DownloadBitsAsync_d__150, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__DownloadBitsAsync_d__150, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__DownloadBitsAsync_d__150, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__DownloadBitsAsync_d__150, request) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__DownloadBitsAsync_d__150, writeStream) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__DownloadBitsAsync_d__150, asyncOp) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__DownloadBitsAsync_d__150, completionDelegate) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__DownloadBitsAsync_d__150, _exception_5__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__DownloadBitsAsync_d__150, _copyBuffer_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__DownloadBitsAsync_d__150, __u__1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__DownloadBitsAsync_d__150, __7__wrap3) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__DownloadBitsAsync_d__150, _readStream_5__5) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__DownloadBitsAsync_d__150, __u__2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__DownloadBitsAsync_d__150, __u__3) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WebClient__DownloadBitsAsync_d__150) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace

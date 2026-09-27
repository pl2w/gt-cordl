#pragma once
// IWYU pragma private; include "System/Net/WebClient__UploadBitsAsync_d__152.hpp"
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
CORDL_MODULE_EXPORT(WebClient__UploadBitsAsync_d__152)
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
struct WebClient__UploadBitsAsync_d__152;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WebClient__UploadBitsAsync_d__152);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WebClient__UploadBitsAsync_d__152, "System.Net", "WebClient/<UploadBitsAsync>d__152");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter, System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1::ConfiguredValueTaskAwaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.WebClient/<UploadBitsAsync>d__152
struct CORDL_TYPE WebClient__UploadBitsAsync_d__152 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xac51674, size 0x1204, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xac52878, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WebClient__UploadBitsAsync_d__152() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebClient*", modifiers: "", def_value: None, comment: None }, CppParam { name: "request", ty: "::System::Net::WebRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "header", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "footer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "asyncOp", ty: "::System::ComponentModel::AsyncOperation*", modifiers: "", def_value: None, comment: None }, CppParam { name: "readStream", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "chunkSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "completionDelegate", ty: "::System::Action_3<::ArrayW<uint8_t>,::System::Exception*,::System::ComponentModel::AsyncOperation*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_exception_5__2", ty: "::System::Exception*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_writeStream_5__3", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_bytesRead_5__5", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_toWrite_5__6", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WebClient__UploadBitsAsync_d__152(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Net::WebClient*  __4__this, ::System::Net::WebRequest*  request, ::ArrayW<uint8_t>  header, ::ArrayW<uint8_t>  footer, ::System::ComponentModel::AsyncOperation*  asyncOp, ::System::IO::Stream*  readStream, ::ArrayW<uint8_t>  buffer, int32_t  chunkSize, ::System::Action_3<::ArrayW<uint8_t>,::System::Exception*,::System::ComponentModel::AsyncOperation*>*  completionDelegate, ::System::Exception*  _exception_5__2, ::System::IO::Stream*  _writeStream_5__3, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*>  __u__1, ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter  __u__2, ::System::IO::Stream*  __7__wrap3, int32_t  _bytesRead_5__5, ::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>  __u__3, int32_t  _toWrite_5__6) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10444};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc8};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::System::Net::WebClient*  __4__this;

/// @brief Field request, offset: 0x30, size: 0x8, def value: None
 ::System::Net::WebRequest*  request;

/// @brief Field header, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<uint8_t>  header;

/// @brief Field footer, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t>  footer;

/// @brief Field asyncOp, offset: 0x48, size: 0x8, def value: None
 ::System::ComponentModel::AsyncOperation*  asyncOp;

/// @brief Field readStream, offset: 0x50, size: 0x8, def value: None
 ::System::IO::Stream*  readStream;

/// @brief Field buffer, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<uint8_t>  buffer;

/// @brief Field chunkSize, offset: 0x60, size: 0x4, def value: None
 int32_t  chunkSize;

/// @brief Field completionDelegate, offset: 0x68, size: 0x8, def value: None
 ::System::Action_3<::ArrayW<uint8_t>,::System::Exception*,::System::ComponentModel::AsyncOperation*>*  completionDelegate;

/// @brief Field <exception>5__2, offset: 0x70, size: 0x8, def value: None
 ::System::Exception*  _exception_5__2;

/// @brief Field <writeStream>5__3, offset: 0x78, size: 0x8, def value: None
 ::System::IO::Stream*  _writeStream_5__3;

/// @brief Field <>u__1, offset: 0x80, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*>  __u__1;

/// @brief Field <>u__2, offset: 0x90, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter  __u__2;

/// @brief Field <>7__wrap3, offset: 0xa0, size: 0x8, def value: None
 ::System::IO::Stream*  __7__wrap3;

/// @brief Field <bytesRead>5__5, offset: 0xa8, size: 0x4, def value: None
 int32_t  _bytesRead_5__5;

/// @brief Field <>u__3, offset: 0xb0, size: 0x18, def value: None
 ::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>  __u__3;

/// @brief Size padding 0xc8 - 0xd0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

/// @brief Field <toWrite>5__6, offset: 0xc8, size: 0x4, def value: None
 int32_t  _toWrite_5__6;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WebClient__UploadBitsAsync_d__152, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__UploadBitsAsync_d__152, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__UploadBitsAsync_d__152, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__UploadBitsAsync_d__152, request) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__UploadBitsAsync_d__152, header) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__UploadBitsAsync_d__152, footer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__UploadBitsAsync_d__152, asyncOp) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__UploadBitsAsync_d__152, readStream) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__UploadBitsAsync_d__152, buffer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__UploadBitsAsync_d__152, chunkSize) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__UploadBitsAsync_d__152, completionDelegate) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__UploadBitsAsync_d__152, _exception_5__2) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__UploadBitsAsync_d__152, _writeStream_5__3) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__UploadBitsAsync_d__152, __u__1) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__UploadBitsAsync_d__152, __u__2) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__UploadBitsAsync_d__152, __7__wrap3) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__UploadBitsAsync_d__152, _bytesRead_5__5) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__UploadBitsAsync_d__152, __u__3) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__UploadBitsAsync_d__152, _toWrite_5__6) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WebClient__UploadBitsAsync_d__152) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace

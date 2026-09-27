#pragma once
// IWYU pragma private; include "System/Net/WebOperation__Run_d__58.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebOperation__Run_d__58)
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
struct WebOperation__Run_d__58;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WebOperation__Run_d__58);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WebOperation__Run_d__58, "System.Net", "WebOperation/<Run>d__58");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.WebOperation/<Run>d__58
struct CORDL_TYPE WebOperation__Run_d__58 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xacbe938, size 0x640, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xacbf1f8, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WebOperation__Run_d__58() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebOperation*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_requestStream_5__2", ty: "::System::Net::WebRequestStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_stream_5__3", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr WebOperation__Run_d__58(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Net::WebOperation*  __4__this, ::System::Net::WebRequestStream*  _requestStream_5__2, ::System::Net::WebResponseStream*  _stream_5__3, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10745};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::System::Net::WebOperation*  __4__this;

/// @brief Field <requestStream>5__2, offset: 0x30, size: 0x8, def value: None
 ::System::Net::WebRequestStream*  _requestStream_5__2;

/// @brief Field <stream>5__3, offset: 0x38, size: 0x8, def value: None
 ::System::Net::WebResponseStream*  _stream_5__3;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>  __u__1;

/// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WebOperation__Run_d__58, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebOperation__Run_d__58, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebOperation__Run_d__58, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebOperation__Run_d__58, _requestStream_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebOperation__Run_d__58, _stream_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebOperation__Run_d__58, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebOperation__Run_d__58, __u__2) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WebOperation__Run_d__58) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace

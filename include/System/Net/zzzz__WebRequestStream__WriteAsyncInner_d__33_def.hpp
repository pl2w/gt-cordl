#pragma once
// IWYU pragma private; include "System/Net/WebRequestStream__WriteAsyncInner_d__33.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebRequestStream__WriteAsyncInner_d__33)
namespace System::Net {
class WebCompletionSource;
}
namespace System::Net {
class WebRequestStream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct WebRequestStream__WriteAsyncInner_d__33;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WebRequestStream__WriteAsyncInner_d__33);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WebRequestStream__WriteAsyncInner_d__33, "System.Net", "WebRequestStream/<WriteAsyncInner>d__33");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.WebRequestStream/<WriteAsyncInner>d__33
struct CORDL_TYPE WebRequestStream__WriteAsyncInner_d__33 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xacc166c, size 0x588, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xacc1bf4, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WebRequestStream__WriteAsyncInner_d__33() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "completion", ty: "::System::Net::WebCompletionSource*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr WebRequestStream__WriteAsyncInner_d__33(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::WebRequestStream*  __4__this, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::WebCompletionSource*  completion, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10750};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::System::Net::WebRequestStream*  __4__this;

/// @brief Field buffer, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  buffer;

/// @brief Field offset, offset: 0x30, size: 0x4, def value: None
 int32_t  offset;

/// @brief Field size, offset: 0x34, size: 0x4, def value: None
 int32_t  size;

/// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field completion, offset: 0x40, size: 0x8, def value: None
 ::System::Net::WebCompletionSource*  completion;

/// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WebRequestStream__WriteAsyncInner_d__33, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebRequestStream__WriteAsyncInner_d__33, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebRequestStream__WriteAsyncInner_d__33, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebRequestStream__WriteAsyncInner_d__33, buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebRequestStream__WriteAsyncInner_d__33, offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebRequestStream__WriteAsyncInner_d__33, size) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebRequestStream__WriteAsyncInner_d__33, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebRequestStream__WriteAsyncInner_d__33, completion) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebRequestStream__WriteAsyncInner_d__33, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebRequestStream__WriteAsyncInner_d__33, __u__2) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WebRequestStream__WriteAsyncInner_d__33) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace

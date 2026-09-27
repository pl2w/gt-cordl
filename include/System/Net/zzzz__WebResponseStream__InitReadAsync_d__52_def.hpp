#pragma once
// IWYU pragma private; include "System/Net/WebResponseStream__InitReadAsync_d__52.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__ReadState_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebResponseStream__InitReadAsync_d__52)
namespace System::Net {
class BufferOffsetSize;
}
namespace System::Net {
class WebResponseStream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct WebResponseStream__InitReadAsync_d__52;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WebResponseStream__InitReadAsync_d__52);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WebResponseStream__InitReadAsync_d__52, "System.Net", "WebResponseStream/<InitReadAsync>d__52");
// [CompilerGenerated]
// Dependencies System.Net.ReadState, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.WebResponseStream/<InitReadAsync>d__52
struct CORDL_TYPE WebResponseStream__InitReadAsync_d__52 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xacc7704, size 0x7b8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xacc7ebc, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WebResponseStream__InitReadAsync_d__52() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_buffer_5__2", ty: "::System::Net::BufferOffsetSize*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_state_5__3", ty: "::System::Net::ReadState", modifiers: "", def_value: None, comment: None }, CppParam { name: "_position_5__4", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr WebResponseStream__InitReadAsync_d__52(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::WebResponseStream*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::BufferOffsetSize*  _buffer_5__2, ::System::Net::ReadState  _state_5__3, int32_t  _position_5__4, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10762};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::System::Net::WebResponseStream*  __4__this;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <buffer>5__2, offset: 0x30, size: 0x8, def value: None
 ::System::Net::BufferOffsetSize*  _buffer_5__2;

/// @brief Field <state>5__3, offset: 0x38, size: 0x4, def value: None
 ::System::Net::ReadState  _state_5__3;

/// @brief Field <position>5__4, offset: 0x3c, size: 0x4, def value: None
 int32_t  _position_5__4;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WebResponseStream__InitReadAsync_d__52, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebResponseStream__InitReadAsync_d__52, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebResponseStream__InitReadAsync_d__52, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebResponseStream__InitReadAsync_d__52, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebResponseStream__InitReadAsync_d__52, _buffer_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebResponseStream__InitReadAsync_d__52, _state_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebResponseStream__InitReadAsync_d__52, _position_5__4) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebResponseStream__InitReadAsync_d__52, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WebResponseStream__InitReadAsync_d__52) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace

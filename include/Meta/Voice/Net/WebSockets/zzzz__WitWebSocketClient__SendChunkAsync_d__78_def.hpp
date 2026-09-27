#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/WitWebSocketClient__SendChunkAsync_d__78.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WitWebSocketClient__SendChunkAsync_d__78)
namespace Meta::Voice::Net::WebSockets {
class IWitWebSocketRequest;
}
namespace Meta::Voice::Net::WebSockets {
class WitWebSocketClient;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct WitWebSocketClient__SendChunkAsync_d__78;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WitWebSocketClient__SendChunkAsync_d__78);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WitWebSocketClient__SendChunkAsync_d__78, "Meta.Voice.Net.WebSockets", "WitWebSocketClient/<SendChunkAsync>d__78");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.Voice.Net.WebSockets.WitWebSocketClient/<SendChunkAsync>d__78
struct CORDL_TYPE WitWebSocketClient__SendChunkAsync_d__78 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9e31488, size 0x728, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9e31bb0, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WitWebSocketClient__SendChunkAsync_d__78() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Meta::Voice::Net::WebSockets::WitWebSocketClient*", modifiers: "", def_value: None, comment: None }, CppParam { name: "requestId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "requestJsonData", ty: "::Meta::WitAi::Json::WitResponseNode*", modifiers: "", def_value: None, comment: None }, CppParam { name: "requestBinaryData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_request_5__2", ty: "::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr WitWebSocketClient__SendChunkAsync_d__78(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Meta::Voice::Net::WebSockets::WitWebSocketClient*  __4__this, ::StringW  requestId, ::Meta::WitAi::Json::WitResponseNode*  requestJsonData, ::ArrayW<uint8_t>  requestBinaryData, ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  _request_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25476};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Meta::Voice::Net::WebSockets::WitWebSocketClient*  __4__this;

/// @brief Field requestId, offset: 0x28, size: 0x8, def value: None
 ::StringW  requestId;

/// @brief Field requestJsonData, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  requestJsonData;

/// @brief Field requestBinaryData, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<uint8_t>  requestBinaryData;

/// @brief Field <request>5__2, offset: 0x40, size: 0x8, def value: None
 ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  _request_5__2;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WitWebSocketClient__SendChunkAsync_d__78, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitWebSocketClient__SendChunkAsync_d__78, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitWebSocketClient__SendChunkAsync_d__78, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitWebSocketClient__SendChunkAsync_d__78, requestId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitWebSocketClient__SendChunkAsync_d__78, requestJsonData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitWebSocketClient__SendChunkAsync_d__78, requestBinaryData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitWebSocketClient__SendChunkAsync_d__78, _request_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitWebSocketClient__SendChunkAsync_d__78, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitWebSocketClient__SendChunkAsync_d__78, __u__2) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WitWebSocketClient__SendChunkAsync_d__78) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace

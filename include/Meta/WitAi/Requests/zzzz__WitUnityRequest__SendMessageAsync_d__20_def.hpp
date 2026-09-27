#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/WitUnityRequest__SendMessageAsync_d__20.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Requests/zzzz__VRequestResponse_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WitUnityRequest__SendMessageAsync_d__20)
namespace Meta::WitAi::Requests {
class WitMessageVRequest;
}
namespace Meta::WitAi::Requests {
class WitUnityRequest;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct WitUnityRequest__SendMessageAsync_d__20;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20, "Meta.WitAi.Requests", "WitUnityRequest/<SendMessageAsync>d__20");
// [CompilerGenerated]
// Dependencies Meta.WitAi.Requests.VRequestResponse`1<TValue>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.WitAi.Requests.WitUnityRequest/<SendMessageAsync>d__20
struct CORDL_TYPE WitUnityRequest__SendMessageAsync_d__20 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9e947bc, size 0x30c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9e94ac8, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WitUnityRequest__SendMessageAsync_d__20() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "messageRequest", ty: "::Meta::WitAi::Requests::WitMessageVRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Meta::WitAi::Requests::WitUnityRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<::StringW>>", modifiers: "", def_value: None, comment: None }]
constexpr WitUnityRequest__SendMessageAsync_d__20(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Meta::WitAi::Requests::WitMessageVRequest*  messageRequest, ::Meta::WitAi::Requests::WitUnityRequest*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<::StringW>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25654};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field messageRequest, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Requests::WitMessageVRequest*  messageRequest;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Requests::WitUnityRequest*  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<::StringW>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20, messageRequest) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

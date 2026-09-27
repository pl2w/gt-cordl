#pragma once
// IWYU pragma private; include "GlobalNamespace/MockWarningServer__GetOptInFollowUpMessage_d__13.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerAgeGateWarningStatus_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MockWarningServer__GetOptInFollowUpMessage_d__13)
namespace GlobalNamespace {
class MockWarningServer;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct MockWarningServer__GetOptInFollowUpMessage_d__13;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MockWarningServer__GetOptInFollowUpMessage_d__13);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MockWarningServer__GetOptInFollowUpMessage_d__13, "", "MockWarningServer/<GetOptInFollowUpMessage>d__13");
// [CompilerGenerated]
// Dependencies PlayerAgeGateWarningStatus, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: MockWarningServer/<GetOptInFollowUpMessage>d__13
struct CORDL_TYPE MockWarningServer__GetOptInFollowUpMessage_d__13 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5a419d8, size 0x804, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5a421dc, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MockWarningServer__GetOptInFollowUpMessage_d__13() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::GlobalNamespace::PlayerAgeGateWarningStatus>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MockWarningServer>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr MockWarningServer__GetOptInFollowUpMessage_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::GlobalNamespace::PlayerAgeGateWarningStatus>>  __t__builder, ::System::Threading::CancellationToken  token, ::UnityW<::GlobalNamespace::MockWarningServer>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2965};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::GlobalNamespace::PlayerAgeGateWarningStatus>>  __t__builder;

/// @brief Field token, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  token;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MockWarningServer>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockWarningServer__GetOptInFollowUpMessage_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockWarningServer__GetOptInFollowUpMessage_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockWarningServer__GetOptInFollowUpMessage_d__13, token) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockWarningServer__GetOptInFollowUpMessage_d__13, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockWarningServer__GetOptInFollowUpMessage_d__13, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MockWarningServer__GetOptInFollowUpMessage_d__13) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

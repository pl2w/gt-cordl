#pragma once
// IWYU pragma private; include "GlobalNamespace/WarningScreens__StartOptInFollowUpScreen_d__17.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__WarningButtonResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WarningScreens__StartOptInFollowUpScreen_d__17)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct WarningScreens__StartOptInFollowUpScreen_d__17;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WarningScreens__StartOptInFollowUpScreen_d__17);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WarningScreens__StartOptInFollowUpScreen_d__17, "", "WarningScreens/<StartOptInFollowUpScreen>d__17");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken, WarningButtonResult
namespace GlobalNamespace {
// Is value type: true
// CS Name: WarningScreens/<StartOptInFollowUpScreen>d__17
struct CORDL_TYPE WarningScreens__StartOptInFollowUpScreen_d__17 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5a5c480, size 0x27c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5a5c6fc, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WarningScreens__StartOptInFollowUpScreen_d__17() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::WarningButtonResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::WarningButtonResult>", modifiers: "", def_value: None, comment: None }]
constexpr WarningScreens__StartOptInFollowUpScreen_d__17(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::WarningButtonResult>  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::WarningButtonResult>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3044};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::WarningButtonResult>  __t__builder;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::WarningButtonResult>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WarningScreens__StartOptInFollowUpScreen_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WarningScreens__StartOptInFollowUpScreen_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WarningScreens__StartOptInFollowUpScreen_d__17, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WarningScreens__StartOptInFollowUpScreen_d__17, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WarningScreens__StartOptInFollowUpScreen_d__17) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

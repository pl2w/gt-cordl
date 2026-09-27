#pragma once
// IWYU pragma private; include "GorillaNetworking/ScheduledEvents/ScheduledEventManager__FetchReferenceDate_d__69.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScheduledEventManager__FetchReferenceDate_d__69)
namespace GorillaNetworking::ScheduledEvents {
class ScheduledEventManager;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ScheduledEventManager__FetchReferenceDate_d__69;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScheduledEventManager__FetchReferenceDate_d__69);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScheduledEventManager__FetchReferenceDate_d__69, "GorillaNetworking.ScheduledEvents", "ScheduledEventManager/<FetchReferenceDate>d__69");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaNetworking.ScheduledEvents.ScheduledEventManager/<FetchReferenceDate>d__69
struct CORDL_TYPE ScheduledEventManager__FetchReferenceDate_d__69 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5ca1320, size 0x4b0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5ca17d0, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ScheduledEventManager__FetchReferenceDate_d__69() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventManager>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr ScheduledEventManager__FetchReferenceDate_d__69(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventManager>  __4__this, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4406};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventManager>  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x1, def value: None
 ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScheduledEventManager__FetchReferenceDate_d__69, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScheduledEventManager__FetchReferenceDate_d__69, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScheduledEventManager__FetchReferenceDate_d__69, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScheduledEventManager__FetchReferenceDate_d__69, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScheduledEventManager__FetchReferenceDate_d__69) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

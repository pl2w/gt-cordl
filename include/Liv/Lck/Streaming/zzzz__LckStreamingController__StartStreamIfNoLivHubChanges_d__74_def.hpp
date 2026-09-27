#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckStreamingController__StartStreamIfNoLivHubChanges_d__74.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckStreamingController__StartStreamIfNoLivHubChanges_d__74)
namespace Liv::Lck::Core {
template<typename T>
class Result_1;
}
namespace Liv::Lck::Streaming {
class LckStreamingController;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct LckStreamingController__StartStreamIfNoLivHubChanges_d__74;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckStreamingController__StartStreamIfNoLivHubChanges_d__74);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckStreamingController__StartStreamIfNoLivHubChanges_d__74, "Liv.Lck.Streaming", "LckStreamingController/<StartStreamIfNoLivHubChanges>d__74");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Streaming.LckStreamingController/<StartStreamIfNoLivHubChanges>d__74
struct CORDL_TYPE LckStreamingController__StartStreamIfNoLivHubChanges_d__74 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9d3d1f4, size 0x43c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9d3d630, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckStreamingController__StartStreamIfNoLivHubChanges_d__74() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Liv::Lck::Streaming::LckStreamingController>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::Core::Result_1<bool>*>", modifiers: "", def_value: None, comment: None }]
constexpr LckStreamingController__StartStreamIfNoLivHubChanges_d__74(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::Liv::Lck::Streaming::LckStreamingController>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::Core::Result_1<bool>*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24841};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Streaming::LckStreamingController>  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::Core::Result_1<bool>*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckStreamingController__StartStreamIfNoLivHubChanges_d__74, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckStreamingController__StartStreamIfNoLivHubChanges_d__74, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckStreamingController__StartStreamIfNoLivHubChanges_d__74, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckStreamingController__StartStreamIfNoLivHubChanges_d__74, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckStreamingController__StartStreamIfNoLivHubChanges_d__74) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

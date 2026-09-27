#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/ActiveStateModel`1__GetChildrenAsync_d__0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ActiveStateModel`1__GetChildrenAsync_d__0)
namespace Oculus::Interaction::PoseDetection::Debug {
template<typename TActiveState>
class ActiveStateModel_1;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TActiveState>
struct ActiveStateModel_1__GetChildrenAsync_d__0;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::ActiveStateModel_1__GetChildrenAsync_d__0);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::ActiveStateModel_1__GetChildrenAsync_d__0, "Oculus.Interaction.PoseDetection.Debug", "ActiveStateModel`1/<GetChildrenAsync>d__0");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// cpp template
template<typename TActiveState>
// Is value type: true
// CS Name: Oculus.Interaction.PoseDetection.Debug.ActiveStateModel`1/<GetChildrenAsync>d__0<TActiveState>
struct CORDL_TYPE ActiveStateModel_1__GetChildrenAsync_d__0 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ActiveStateModel_1__GetChildrenAsync_d__0() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "activeState", ty: "::Oculus::Interaction::IActiveState*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>", modifiers: "", def_value: None, comment: None }]
constexpr ActiveStateModel_1__GetChildrenAsync_d__0(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>  __t__builder, ::Oculus::Interaction::IActiveState*  activeState, ::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16182};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>  __t__builder;

/// @brief Field activeState, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::IActiveState*  activeState;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>*  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace

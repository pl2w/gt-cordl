#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GTLckController__StopEchoIfActiveAsync_d__134.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTLckController__StopEchoIfActiveAsync_d__134)
namespace Liv::Lck::GorillaTag {
class GTLckController;
}
namespace Liv::Lck {
class LckResult;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct GTLckController__StopEchoIfActiveAsync_d__134;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTLckController__StopEchoIfActiveAsync_d__134);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTLckController__StopEchoIfActiveAsync_d__134, "Liv.Lck.GorillaTag", "GTLckController/<StopEchoIfActiveAsync>d__134");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.GorillaTag.GTLckController/<StopEchoIfActiveAsync>d__134
struct CORDL_TYPE GTLckController__StopEchoIfActiveAsync_d__134 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9d28b1c, size 0x394, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9d28eb0, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr GTLckController__StopEchoIfActiveAsync_d__134() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Liv::Lck::GorillaTag::GTLckController>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::LckResult*>", modifiers: "", def_value: None, comment: None }]
constexpr GTLckController__StopEchoIfActiveAsync_d__134(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::UnityW<::Liv::Lck::GorillaTag::GTLckController>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::LckResult*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29639};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GTLckController>  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::LckResult*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTLckController__StopEchoIfActiveAsync_d__134, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTLckController__StopEchoIfActiveAsync_d__134, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTLckController__StopEchoIfActiveAsync_d__134, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTLckController__StopEchoIfActiveAsync_d__134, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTLckController__StopEchoIfActiveAsync_d__134) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

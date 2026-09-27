#pragma once
// IWYU pragma private; include "Liv/Lck/Core/LckCore__StartLoginAttemptAsync_d__9.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckCore__StartLoginAttemptAsync_d__9)
namespace Liv::Lck::Core {
template<typename T>
class Result_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct LckCore__StartLoginAttemptAsync_d__9;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckCore__StartLoginAttemptAsync_d__9);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckCore__StartLoginAttemptAsync_d__9, "Liv.Lck.Core", "LckCore/<StartLoginAttemptAsync>d__9");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Core.LckCore/<StartLoginAttemptAsync>d__9
struct CORDL_TYPE LckCore__StartLoginAttemptAsync_d__9 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9d009d8, size 0x54c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9d00f24, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckCore__StartLoginAttemptAsync_d__9() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Liv::Lck::Core::Result_1<::StringW>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr LckCore__StartLoginAttemptAsync_d__9(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Liv::Lck::Core::Result_1<::StringW>*>  __t__builder, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31921};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Liv::Lck::Core::Result_1<::StringW>*>  __t__builder;

/// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckCore__StartLoginAttemptAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCore__StartLoginAttemptAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCore__StartLoginAttemptAsync_d__9, __u__1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckCore__StartLoginAttemptAsync_d__9) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

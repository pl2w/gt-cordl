#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_AgeDiscrepancyScreen__ShowAgeDiscrepancyScreenWithAwait_d__9.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KIDUI_AgeDiscrepancyScreen__ShowAgeDiscrepancyScreenWithAwait_d__9)
namespace GlobalNamespace {
class KIDUI_AgeDiscrepancyScreen;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct KIDUI_AgeDiscrepancyScreen__ShowAgeDiscrepancyScreenWithAwait_d__9;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::KIDUI_AgeDiscrepancyScreen__ShowAgeDiscrepancyScreenWithAwait_d__9);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_AgeDiscrepancyScreen__ShowAgeDiscrepancyScreenWithAwait_d__9, "", "KIDUI_AgeDiscrepancyScreen/<ShowAgeDiscrepancyScreenWithAwait>d__9");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: KIDUI_AgeDiscrepancyScreen/<ShowAgeDiscrepancyScreenWithAwait>d__9
struct CORDL_TYPE KIDUI_AgeDiscrepancyScreen__ShowAgeDiscrepancyScreenWithAwait_d__9 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5a501ec, size 0x29c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5a50488, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_AgeDiscrepancyScreen__ShowAgeDiscrepancyScreenWithAwait_d__9() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::KIDUI_AgeDiscrepancyScreen>", modifiers: "", def_value: None, comment: None }, CppParam { name: "userAge", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "accAge", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lowestAge", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr KIDUI_AgeDiscrepancyScreen__ShowAgeDiscrepancyScreenWithAwait_d__9(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::KIDUI_AgeDiscrepancyScreen>  __4__this, int32_t  userAge, int32_t  accAge, int32_t  lowestAge, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3008};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_AgeDiscrepancyScreen>  __4__this;

/// @brief Field userAge, offset: 0x28, size: 0x4, def value: None
 int32_t  userAge;

/// @brief Field accAge, offset: 0x2c, size: 0x4, def value: None
 int32_t  accAge;

/// @brief Field lowestAge, offset: 0x30, size: 0x4, def value: None
 int32_t  lowestAge;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_AgeDiscrepancyScreen__ShowAgeDiscrepancyScreenWithAwait_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeDiscrepancyScreen__ShowAgeDiscrepancyScreenWithAwait_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeDiscrepancyScreen__ShowAgeDiscrepancyScreenWithAwait_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeDiscrepancyScreen__ShowAgeDiscrepancyScreenWithAwait_d__9, userAge) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeDiscrepancyScreen__ShowAgeDiscrepancyScreenWithAwait_d__9, accAge) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeDiscrepancyScreen__ShowAgeDiscrepancyScreenWithAwait_d__9, lowestAge) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeDiscrepancyScreen__ShowAgeDiscrepancyScreenWithAwait_d__9, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_AgeDiscrepancyScreen__ShowAgeDiscrepancyScreenWithAwait_d__9) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace

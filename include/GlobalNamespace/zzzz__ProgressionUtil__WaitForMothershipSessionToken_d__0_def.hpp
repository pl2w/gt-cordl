#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressionUtil__WaitForMothershipSessionToken_d__0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProgressionUtil__WaitForMothershipSessionToken_d__0)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ProgressionUtil__WaitForMothershipSessionToken_d__0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProgressionUtil__WaitForMothershipSessionToken_d__0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionUtil__WaitForMothershipSessionToken_d__0, "", "ProgressionUtil/<WaitForMothershipSessionToken>d__0");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: ProgressionUtil/<WaitForMothershipSessionToken>d__0
struct CORDL_TYPE ProgressionUtil__WaitForMothershipSessionToken_d__0 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x597d834, size 0x224, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x597da58, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ProgressionUtil__WaitForMothershipSessionToken_d__0() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr ProgressionUtil__WaitForMothershipSessionToken_d__0(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2519};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionUtil__WaitForMothershipSessionToken_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionUtil__WaitForMothershipSessionToken_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionUtil__WaitForMothershipSessionToken_d__0, __u__1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionUtil__WaitForMothershipSessionToken_d__0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

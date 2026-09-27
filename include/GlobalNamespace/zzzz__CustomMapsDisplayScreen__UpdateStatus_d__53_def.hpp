#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsDisplayScreen__UpdateStatus_d__53.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapsDisplayScreen__UpdateStatus_d__53)
namespace GlobalNamespace {
class CustomMapsDisplayScreen;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct CustomMapsDisplayScreen__UpdateStatus_d__53;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CustomMapsDisplayScreen__UpdateStatus_d__53);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsDisplayScreen__UpdateStatus_d__53, "", "CustomMapsDisplayScreen/<UpdateStatus>d__53");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: CustomMapsDisplayScreen/<UpdateStatus>d__53
struct CORDL_TYPE CustomMapsDisplayScreen__UpdateStatus_d__53 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x59fd8dc, size 0x3fc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x59fdcd8, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsDisplayScreen__UpdateStatus_d__53() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::CustomMapsDisplayScreen>", modifiers: "", def_value: None, comment: None }, CppParam { name: "errorEncountered", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<bool,int32_t>>", modifiers: "", def_value: None, comment: None }]
constexpr CustomMapsDisplayScreen__UpdateStatus_d__53(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::CustomMapsDisplayScreen>  __4__this, bool  errorEncountered, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<bool,int32_t>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2739};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsDisplayScreen>  __4__this;

/// @brief Field errorEncountered, offset: 0x28, size: 0x1, def value: None
 bool  errorEncountered;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<bool,int32_t>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen__UpdateStatus_d__53, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen__UpdateStatus_d__53, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen__UpdateStatus_d__53, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen__UpdateStatus_d__53, errorEncountered) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsDisplayScreen__UpdateStatus_d__53, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsDisplayScreen__UpdateStatus_d__53) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

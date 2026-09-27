#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDManager__AgeGateFlow_d__114.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "KID/Model/zzzz__AgeStatusType_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KIDManager__AgeGateFlow_d__114)
namespace GlobalNamespace {
class GetPlayerData_Data;
}
namespace GlobalNamespace {
class TMPSession;
}
namespace GlobalNamespace {
class VerifyAgeData;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct KIDManager__AgeGateFlow_d__114;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::KIDManager__AgeGateFlow_d__114);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDManager__AgeGateFlow_d__114, "", "KIDManager/<AgeGateFlow>d__114");
// [CompilerGenerated]
// Dependencies KID.Model.AgeStatusType, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: KIDManager/<AgeGateFlow>d__114
struct CORDL_TYPE KIDManager__AgeGateFlow_d__114 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5a32400, size 0x3f4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5a327f4, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr KIDManager__AgeGateFlow_d__114() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::KID::Model::AgeStatusType,::GlobalNamespace::TMPSession*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "newPlayerData", ty: "::GlobalNamespace::GetPlayerData_Data*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::VerifyAgeData*>", modifiers: "", def_value: None, comment: None }]
constexpr KIDManager__AgeGateFlow_d__114(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::KID::Model::AgeStatusType,::GlobalNamespace::TMPSession*>>  __t__builder, ::GlobalNamespace::GetPlayerData_Data*  newPlayerData, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::VerifyAgeData*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2921};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [TupleElementNames(new[] { "ageStatus", "resp" })]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::KID::Model::AgeStatusType,::GlobalNamespace::TMPSession*>>  __t__builder;

/// @brief Field newPlayerData, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::GetPlayerData_Data*  newPlayerData;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::VerifyAgeData*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDManager__AgeGateFlow_d__114, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__AgeGateFlow_d__114, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__AgeGateFlow_d__114, newPlayerData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__AgeGateFlow_d__114, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDManager__AgeGateFlow_d__114) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

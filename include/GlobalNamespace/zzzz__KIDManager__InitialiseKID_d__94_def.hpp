#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDManager__InitialiseKID_d__94.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "KID/Model/zzzz__AgeStatusType_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KIDManager__InitialiseKID_d__94)
namespace GlobalNamespace {
class GetPlayerData_Data;
}
namespace GlobalNamespace {
class GetRequirementsData;
}
namespace GlobalNamespace {
class TMPSession;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct KIDManager__InitialiseKID_d__94;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::KIDManager__InitialiseKID_d__94);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDManager__InitialiseKID_d__94, "", "KIDManager/<InitialiseKID>d__94");
// [CompilerGenerated]
// Dependencies KID.Model.AgeStatusType, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: KIDManager/<InitialiseKID>d__94
struct CORDL_TYPE KIDManager__InitialiseKID_d__94 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5a33a14, size 0x1d60, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5a35afc, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr KIDManager__InitialiseKID_d__94() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "_snapTurnDisabled_5__2", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_cachedTapHapticsStrength_5__3", ty: "::System::Nullable_1<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_newSessionData_5__6", ty: "::GlobalNamespace::GetPlayerData_Data*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_newSession_5__7", ty: "::GlobalNamespace::TMPSession*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetPlayerData_Data*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetRequirementsData*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::KID::Model::AgeStatusType,::GlobalNamespace::TMPSession*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__5", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__6", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__7", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr KIDManager__InitialiseKID_d__94(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, bool  _snapTurnDisabled_5__2, ::System::Nullable_1<float_t>  _cachedTapHapticsStrength_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::GlobalNamespace::GetPlayerData_Data*  _newSessionData_5__6, ::GlobalNamespace::TMPSession*  _newSession_5__7, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetPlayerData_Data*>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetRequirementsData*>  __u__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::KID::Model::AgeStatusType,::GlobalNamespace::TMPSession*>>  __u__4, ::System::Runtime::CompilerServices::TaskAwaiter  __u__5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__6, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__7) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2925};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <snapTurnDisabled>5__2, offset: 0x28, size: 0x1, def value: None
 bool  _snapTurnDisabled_5__2;

/// @brief Field <cachedTapHapticsStrength>5__3, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<float_t>  _cachedTapHapticsStrength_5__3;

/// @brief Field <>7__wrap3, offset: 0x40, size: 0x8, def value: None
 ::System::Object*  __7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x48, size: 0x4, def value: None
 int32_t  __7__wrap4;

/// @brief Field <newSessionData>5__6, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::GetPlayerData_Data*  _newSessionData_5__6;

/// @brief Field <newSession>5__7, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::TMPSession*  _newSession_5__7;

/// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x68, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetPlayerData_Data*>  __u__2;

/// @brief Field <>u__3, offset: 0x70, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetRequirementsData*>  __u__3;

/// [TupleElementNames(new[] { "ageStatus", "resp" })]
/// @brief Field <>u__4, offset: 0x78, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::KID::Model::AgeStatusType,::GlobalNamespace::TMPSession*>>  __u__4;

/// @brief Field <>u__5, offset: 0x80, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__5;

/// @brief Field <>u__6, offset: 0x88, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__6;

/// @brief Field <>u__7, offset: 0x90, size: 0x1, def value: None
 ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__7;

/// @brief Size padding 0x90 - 0x98 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDManager__InitialiseKID_d__94, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__InitialiseKID_d__94, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__InitialiseKID_d__94, _snapTurnDisabled_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__InitialiseKID_d__94, _cachedTapHapticsStrength_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__InitialiseKID_d__94, __7__wrap3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__InitialiseKID_d__94, __7__wrap4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__InitialiseKID_d__94, _newSessionData_5__6) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__InitialiseKID_d__94, _newSession_5__7) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__InitialiseKID_d__94, __u__1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__InitialiseKID_d__94, __u__2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__InitialiseKID_d__94, __u__3) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__InitialiseKID_d__94, __u__4) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__InitialiseKID_d__94, __u__5) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__InitialiseKID_d__94, __u__6) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__InitialiseKID_d__94, __u__7) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDManager__InitialiseKID_d__94) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace

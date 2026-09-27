#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDManager__UpdateSession_d__91.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KIDManager__UpdateSession_d__91)
namespace GlobalNamespace {
class GetPlayerData_Data;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct KIDManager__UpdateSession_d__91;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::KIDManager__UpdateSession_d__91);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDManager__UpdateSession_d__91, "", "KIDManager/<UpdateSession>d__91");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: KIDManager/<UpdateSession>d__91
struct CORDL_TYPE KIDManager__UpdateSession_d__91 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5a3cc90, size 0x35c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5a3cfec, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr KIDManager__UpdateSession_d__91() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "getDataCompleted", ty: "::System::Action_1<bool>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetPlayerData_Data*>", modifiers: "", def_value: None, comment: None }]
constexpr KIDManager__UpdateSession_d__91(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Action_1<bool>*  getDataCompleted, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetPlayerData_Data*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2953};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field getDataCompleted, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<bool>*  getDataCompleted;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetPlayerData_Data*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDManager__UpdateSession_d__91, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__UpdateSession_d__91, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__UpdateSession_d__91, getDataCompleted) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__UpdateSession_d__91, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDManager__UpdateSession_d__91) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

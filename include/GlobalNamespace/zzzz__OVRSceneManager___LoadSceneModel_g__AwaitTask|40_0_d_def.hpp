#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager___LoadSceneModel_g__AwaitTask|40_0_d.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSceneManager_LoadSceneModelResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneManager___LoadSceneModel_g__AwaitTask|40_0_d)
namespace GlobalNamespace {
class OVRSceneManager;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d, "", "OVRSceneManager/<<LoadSceneModel>g__AwaitTask|40_0>d");
// [CompilerGenerated]
// Dependencies OVRSceneManager::LoadSceneModelResult, OVRTask`1::Awaiter<TResult>, OVRTask`1<TResult>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/<<LoadSceneModel>g__AwaitTask|40_0>d
struct CORDL_TYPE OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa632f38, size 0x208, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa633140, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "task", ty: "::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::OVRSceneManager>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult>", modifiers: "", def_value: None, comment: None }]
constexpr OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult>  task, ::UnityW<::GlobalNamespace::OVRSceneManager>  __4__this, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12418};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x28, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult>  task;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSceneManager>  __4__this;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d, task) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace

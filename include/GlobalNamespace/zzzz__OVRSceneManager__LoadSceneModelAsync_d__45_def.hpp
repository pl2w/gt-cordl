#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager__LoadSceneModelAsync_d__45.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_LoadSceneModelResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_Metrics_def.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneManager__LoadSceneModelAsync_d__45)
namespace GlobalNamespace {
struct OVRSceneManager_Metrics;
}
namespace GlobalNamespace {
class OVRSceneManager;
}
namespace GlobalNamespace {
class OVRSceneManager___c__DisplayClass45_0;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSceneManager__LoadSceneModelAsync_d__45;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, "", "OVRSceneManager/<LoadSceneModelAsync>d__45");
// [CompilerGenerated]
// Dependencies OVRAnchor, OVRObjectPool::ListScope`1<T>, OVRSceneManager::LoadSceneModelResult, OVRSceneManager::Metrics, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>, OVRTask`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/<LoadSceneModelAsync>d__45
struct CORDL_TYPE OVRSceneManager__LoadSceneModelAsync_d__45 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa63490c, size 0x9c0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa6352cc, size 0x58, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager__LoadSceneModelAsync_d__45() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::OVRSceneManager>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_taskResults_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneManager_Metrics>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSceneManager_Metrics>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap4", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_result_5__6", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneManager_Metrics>*>", modifiers: "", def_value: None, comment: None }]
constexpr OVRSceneManager__LoadSceneModelAsync_d__45(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult>  __t__builder, ::UnityW<::GlobalNamespace::OVRSceneManager>  __4__this, ::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0*  __8__1, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneManager_Metrics>*  _taskResults_5__2, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSceneManager_Metrics>  __7__wrap2, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics>>  __7__wrap3, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap4, bool  _result_5__6, ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1, ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneManager_Metrics>*>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12425};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSceneManager>  __4__this;

/// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0*  __8__1;

/// @brief Field <taskResults>5__2, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneManager_Metrics>*  _taskResults_5__2;

/// @brief Field <>7__wrap2, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSceneManager_Metrics>  __7__wrap2;

/// @brief Field <>7__wrap3, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics>>  __7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap4;

/// @brief Field <result>5__6, offset: 0x50, size: 0x1, def value: None
 bool  _result_5__6;

/// @brief Field <>u__1, offset: 0x54, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x64, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneManager_Metrics>*>  __u__2;

/// @brief Size padding 0x80 - 0x78 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, _taskResults_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, __7__wrap2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, __7__wrap3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, __7__wrap4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, _result_5__6) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, __u__1) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45, __u__2) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_Tracker__ConfigureAsync_d__9.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_ConfigureTrackerResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_TrackerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_Tracker_AsyncLock_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_TaskScope_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRAnchor_Tracker__ConfigureAsync_d__9)
namespace GlobalNamespace {
class OVRAnchor_Tracker;
}
namespace GlobalNamespace {
struct OVRPlugin_Result;
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
struct Tracker_OVRAnchor__ConfigureAsync_d__9;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9, "", "OVRAnchor/Tracker/<ConfigureAsync>d__9");
// [CompilerGenerated]
// Dependencies OVRAnchor::ConfigureTrackerResult, OVRAnchor::Tracker::AsyncLock, OVRAnchor::TrackerConfiguration, OVRObjectPool::TaskScope`1<T>, OVRPlugin::Result, OVRResult`1<TStatus>, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/Tracker/<ConfigureAsync>d__9
struct CORDL_TYPE Tracker_OVRAnchor__ConfigureAsync_d__9 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa56faa4, size 0xa74, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa570518, size 0x58, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr Tracker_OVRAnchor__ConfigureAsync_d__9() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OVRAnchor_Tracker*", modifiers: "", def_value: None, comment: None }, CppParam { name: "configuration", ty: "::GlobalNamespace::OVRAnchor_TrackerConfiguration", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap1", ty: "::GlobalNamespace::Tracker_OVRAnchor_AsyncLock", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_results_5__3", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "::GlobalNamespace::OVRObjectPool_TaskScope_1<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*>", modifiers: "", def_value: None, comment: None }]
constexpr Tracker_OVRAnchor__ConfigureAsync_d__9(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>>  __t__builder, ::GlobalNamespace::OVRAnchor_Tracker*  __4__this, ::GlobalNamespace::OVRAnchor_TrackerConfiguration  configuration, ::GlobalNamespace::Tracker_OVRAnchor_AsyncLock  __7__wrap1, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>  __u__1, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*  _results_5__3, ::GlobalNamespace::OVRObjectPool_TaskScope_1<::GlobalNamespace::OVRPlugin_Result>  __7__wrap3, ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11827};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::OVRAnchor_Tracker*  __4__this;

/// @brief Field configuration, offset: 0x28, size: 0x2, def value: None
 ::GlobalNamespace::OVRAnchor_TrackerConfiguration  configuration;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::Tracker_OVRAnchor_AsyncLock  __7__wrap1;

/// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>  __u__1;

/// @brief Field <results>5__3, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*  _results_5__3;

/// @brief Field <>7__wrap3, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::OVRObjectPool_TaskScope_1<::GlobalNamespace::OVRPlugin_Result>  __7__wrap3;

/// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*>  __u__2;

/// @brief Size padding 0x78 - 0x70 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9, configuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9, __7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9, _results_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9, __7__wrap3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9, __u__2) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace

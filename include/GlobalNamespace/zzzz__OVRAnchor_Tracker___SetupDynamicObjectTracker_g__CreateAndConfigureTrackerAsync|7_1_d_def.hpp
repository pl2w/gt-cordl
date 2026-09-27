#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_Tracker___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync|7_1_d.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_TrackerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRAnchor_Tracker___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync|7_1_d)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d, "", "OVRAnchor/Tracker/<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync|7_1>d");
// [CompilerGenerated]
// Dependencies OVRAnchor::TrackerConfiguration, OVRPlugin::Result, OVRResult`1<TStatus>, OVRResult`2<TValue, TStatus>, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/Tracker/<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync|7_1>d
struct CORDL_TYPE Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa56eec8, size 0x644, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa56f50c, size 0x58, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "tracker", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "config", ty: "::GlobalNamespace::OVRAnchor_TrackerConfiguration", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap1", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRPlugin_Result>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>>", modifiers: "", def_value: None, comment: None }]
constexpr Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>>  __t__builder, uint64_t  tracker, ::GlobalNamespace::OVRAnchor_TrackerConfiguration  config, uint64_t  __7__wrap1, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRPlugin_Result>>  __u__1, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11825};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>>  __t__builder;

/// @brief Field tracker, offset: 0x20, size: 0x8, def value: None
 uint64_t  tracker;

/// @brief Field config, offset: 0x28, size: 0x2, def value: None
 ::GlobalNamespace::OVRAnchor_TrackerConfiguration  config;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
 uint64_t  __7__wrap1;

/// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRPlugin_Result>>  __u__1;

/// @brief Field <>u__2, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>>  __u__2;

/// @brief Size padding 0x60 - 0x58 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d, tracker) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d, config) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d, __7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d, __u__2) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace

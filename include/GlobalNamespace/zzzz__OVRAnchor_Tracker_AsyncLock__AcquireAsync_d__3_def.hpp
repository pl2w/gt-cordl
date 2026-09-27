#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_Tracker_AsyncLock__AcquireAsync_d__3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_Tracker_AsyncLock_def.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRAnchor_Tracker_AsyncLock__AcquireAsync_d__3)
namespace GlobalNamespace {
class OVRAnchor_Tracker;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3, "", "OVRAnchor/Tracker/AsyncLock/<AcquireAsync>d__3");
// [CompilerGenerated]
// Dependencies OVRAnchor::Tracker::AsyncLock, OVRTaskBuilder`1<T>, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/Tracker/AsyncLock/<AcquireAsync>d__3
struct CORDL_TYPE AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa56ec24, size 0x24c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa56ee70, size 0x58, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>", modifiers: "", def_value: None, comment: None }, CppParam { name: "tracker", ty: "::GlobalNamespace::OVRAnchor_Tracker*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>  __t__builder, ::GlobalNamespace::OVRAnchor_Tracker*  tracker, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11823};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>  __t__builder;

/// @brief Field tracker, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::OVRAnchor_Tracker*  tracker;

/// @brief Field <>u__1, offset: 0x28, size: 0x1, def value: None
 ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1;

/// @brief Size padding 0x38 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3, tracker) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

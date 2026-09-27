#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/ImmersiveSceneDebugger_<>c___GetLaunchSpaceSetupDebugger_b__80_0_d.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_LoadDeviceResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImmersiveSceneDebugger_<>c___GetLaunchSpaceSetupDebugger_b__80_0_d)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct __c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d, "Meta.XR.MRUtilityKit", "ImmersiveSceneDebugger/<>c/<<GetLaunchSpaceSetupDebugger>b__80_0>d");
// Dependencies Meta.XR.MRUtilityKit.MRUK::LoadDeviceResult, OVRTask`1::Awaiter<TResult>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger/<>c/<<GetLaunchSpaceSetupDebugger>b__80_0>d
struct CORDL_TYPE __c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f1efa0, size 0x374, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f1f440, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MRUK_LoadDeviceResult>", modifiers: "", def_value: None, comment: None }]
constexpr __c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25854};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d, __u__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace

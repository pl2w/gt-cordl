#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK__ConfigureTrackerAndLogResult_d__135.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_ConfigureTrackerResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_TrackerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUK__ConfigureTrackerAndLogResult_d__135)
namespace Meta::XR::MRUtilityKit {
class MRUK;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct MRUK__ConfigureTrackerAndLogResult_d__135;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUK__ConfigureTrackerAndLogResult_d__135);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUK__ConfigureTrackerAndLogResult_d__135, "Meta.XR.MRUtilityKit", "MRUK/<ConfigureTrackerAndLogResult>d__135");
// [CompilerGenerated]
// Dependencies OVRAnchor::ConfigureTrackerResult, OVRAnchor::TrackerConfiguration, OVRResult`1<TStatus>, OVRTask`1::Awaiter<TResult>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUK/<ConfigureTrackerAndLogResult>d__135
struct CORDL_TYPE MRUK__ConfigureTrackerAndLogResult_d__135 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f268f8, size 0x404, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f26cfc, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MRUK__ConfigureTrackerAndLogResult_d__135() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::MRUtilityKit::MRUK>", modifiers: "", def_value: None, comment: None }, CppParam { name: "config", ty: "::GlobalNamespace::OVRAnchor_TrackerConfiguration", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>>", modifiers: "", def_value: None, comment: None }]
constexpr MRUK__ConfigureTrackerAndLogResult_d__135(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Meta::XR::MRUtilityKit::MRUK>  __4__this, ::GlobalNamespace::OVRAnchor_TrackerConfiguration  config, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25868};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUK>  __4__this;

/// @brief Field config, offset: 0x30, size: 0x2, def value: None
 ::GlobalNamespace::OVRAnchor_TrackerConfiguration  config;

/// @brief Field <>u__1, offset: 0x34, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUK__ConfigureTrackerAndLogResult_d__135, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__ConfigureTrackerAndLogResult_d__135, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__ConfigureTrackerAndLogResult_d__135, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__ConfigureTrackerAndLogResult_d__135, config) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__ConfigureTrackerAndLogResult_d__135, __u__1) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUK__ConfigureTrackerAndLogResult_d__135) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace

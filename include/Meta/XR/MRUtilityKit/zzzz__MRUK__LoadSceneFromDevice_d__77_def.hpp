#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK__LoadSceneFromDevice_d__77.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_LoadDeviceResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUK__LoadSceneFromDevice_d__77)
namespace Meta::XR::MRUtilityKit {
class MRUK;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct MRUK__LoadSceneFromDevice_d__77;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUK__LoadSceneFromDevice_d__77);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUK__LoadSceneFromDevice_d__77, "Meta.XR.MRUtilityKit", "MRUK/<LoadSceneFromDevice>d__77");
// [CompilerGenerated]
// Dependencies Meta.XR.MRUtilityKit.MRUK::LoadDeviceResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUK/<LoadSceneFromDevice>d__77
struct CORDL_TYPE MRUK__LoadSceneFromDevice_d__77 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f27b38, size 0x278, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f27db0, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MRUK__LoadSceneFromDevice_d__77() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MRUK_LoadDeviceResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::MRUtilityKit::MRUK>", modifiers: "", def_value: None, comment: None }, CppParam { name: "requestSceneCaptureIfNoDataFound", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "removeMissingRooms", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MRUK_LoadDeviceResult>", modifiers: "", def_value: None, comment: None }]
constexpr MRUK__LoadSceneFromDevice_d__77(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __t__builder, ::UnityW<::Meta::XR::MRUtilityKit::MRUK>  __4__this, bool  requestSceneCaptureIfNoDataFound, bool  removeMissingRooms, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25871};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUK>  __4__this;

/// @brief Field requestSceneCaptureIfNoDataFound, offset: 0x28, size: 0x1, def value: None
 bool  requestSceneCaptureIfNoDataFound;

/// @brief Field removeMissingRooms, offset: 0x29, size: 0x1, def value: None
 bool  removeMissingRooms;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromDevice_d__77, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromDevice_d__77, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromDevice_d__77, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromDevice_d__77, requestSceneCaptureIfNoDataFound) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromDevice_d__77, removeMissingRooms) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromDevice_d__77, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUK__LoadSceneFromDevice_d__77) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

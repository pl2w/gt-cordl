#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK__LoadSceneFromDeviceSharedLib_d__93.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_LoadDeviceResult_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_SharedRoomsData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUK__LoadSceneFromDeviceSharedLib_d__93)
namespace Meta::XR::MRUtilityKit {
class MRUK;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct MRUK__LoadSceneFromDeviceSharedLib_d__93;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93, "Meta.XR.MRUtilityKit", "MRUK/<LoadSceneFromDeviceSharedLib>d__93");
// [CompilerGenerated]
// Dependencies Meta.XR.MRUtilityKit.MRUK::LoadDeviceResult, Meta.XR.MRUtilityKit.MRUK::SharedRoomsData, OVRTask`1::Awaiter<TResult>, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUK/<LoadSceneFromDeviceSharedLib>d__93
struct CORDL_TYPE MRUK__LoadSceneFromDeviceSharedLib_d__93 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f2825c, size 0x938, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f28b94, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MRUK__LoadSceneFromDeviceSharedLib_d__93() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MRUK_LoadDeviceResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::MRUtilityKit::MRUK>", modifiers: "", def_value: None, comment: None }, CppParam { name: "sharedRoomsData", ty: "::System::Nullable_1<::GlobalNamespace::MRUK_SharedRoomsData>", modifiers: "", def_value: None, comment: None }, CppParam { name: "removeMissingRooms", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "requestSceneCaptureIfNoDataFound", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_result_5__2", ty: "::GlobalNamespace::MRUK_LoadDeviceResult", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MRUK_LoadDeviceResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: None, comment: None }]
constexpr MRUK__LoadSceneFromDeviceSharedLib_d__93(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __t__builder, ::UnityW<::Meta::XR::MRUtilityKit::MRUK>  __4__this, ::System::Nullable_1<::GlobalNamespace::MRUK_SharedRoomsData>  sharedRoomsData, bool  removeMissingRooms, bool  requestSceneCaptureIfNoDataFound, ::GlobalNamespace::MRUK_LoadDeviceResult  _result_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __u__1, ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25873};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x98};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUK>  __4__this;

/// @brief Field sharedRoomsData, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::GlobalNamespace::MRUK_SharedRoomsData>  sharedRoomsData;

/// @brief Field removeMissingRooms, offset: 0x38, size: 0x1, def value: None
 bool  removeMissingRooms;

/// @brief Field requestSceneCaptureIfNoDataFound, offset: 0x39, size: 0x1, def value: None
 bool  requestSceneCaptureIfNoDataFound;

/// @brief Field <result>5__2, offset: 0x3c, size: 0x4, def value: None
 ::GlobalNamespace::MRUK_LoadDeviceResult  _result_5__2;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __u__1;

/// @brief Field <>u__2, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__2;

/// @brief Size padding 0x98 - 0x58 = 0x40, packed as 0x40
 uint8_t  _cordl_size_padding[0x40];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93, sharedRoomsData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93, removeMissingRooms) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93, requestSceneCaptureIfNoDataFound) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93, _result_5__2) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93, __u__2) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace

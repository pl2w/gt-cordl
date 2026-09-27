#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK__LoadSceneFromSharedRooms_d__73.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_LoadDeviceResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUK__LoadSceneFromSharedRooms_d__73)
namespace Meta::XR::MRUtilityKit {
class MRUK;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace GlobalNamespace {
struct MRUK__LoadSceneFromSharedRooms_d__73;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUK__LoadSceneFromSharedRooms_d__73);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUK__LoadSceneFromSharedRooms_d__73, "Meta.XR.MRUtilityKit", "MRUK/<LoadSceneFromSharedRooms>d__73");
// [CompilerGenerated]
// Dependencies Meta.XR.MRUtilityKit.MRUK::LoadDeviceResult, System.Guid, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>, UnityEngine.Pose
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUK/<LoadSceneFromSharedRooms>d__73
struct CORDL_TYPE MRUK__LoadSceneFromSharedRooms_d__73 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f2d0a8, size 0x4a4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f2d54c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MRUK__LoadSceneFromSharedRooms_d__73() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MRUK_LoadDeviceResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "alignmentData", ty: "::System::Nullable_1<::System::ValueTuple_2<::System::Guid,::UnityEngine::Pose>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::MRUtilityKit::MRUK>", modifiers: "", def_value: None, comment: None }, CppParam { name: "removeMissingRooms", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "roomUuids", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MRUK_LoadDeviceResult>", modifiers: "", def_value: None, comment: None }]
constexpr MRUK__LoadSceneFromSharedRooms_d__73(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __t__builder, ::System::Guid  groupUuid, ::System::Nullable_1<::System::ValueTuple_2<::System::Guid,::UnityEngine::Pose>>  alignmentData, ::UnityW<::Meta::XR::MRUtilityKit::MRUK>  __4__this, bool  removeMissingRooms, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  roomUuids, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25878};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __t__builder;

/// @brief Field groupUuid, offset: 0x20, size: 0x10, def value: None
 ::System::Guid  groupUuid;

/// [TupleElementNames(new[] { "alignmentRoomUuid", "floorWorldPoseOnHost" })]
/// @brief Field alignmentData, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<::System::ValueTuple_2<::System::Guid,::UnityEngine::Pose>>  alignmentData;

/// @brief Field <>4__this, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUK>  __4__this;

/// @brief Field removeMissingRooms, offset: 0x48, size: 0x1, def value: None
 bool  removeMissingRooms;

/// @brief Field roomUuids, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  roomUuids;

/// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __u__1;

/// @brief Size padding 0x80 - 0x60 = 0x20, packed as 0x20
 uint8_t  _cordl_size_padding[0x20];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromSharedRooms_d__73, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromSharedRooms_d__73, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromSharedRooms_d__73, groupUuid) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromSharedRooms_d__73, alignmentData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromSharedRooms_d__73, __4__this) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromSharedRooms_d__73, removeMissingRooms) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromSharedRooms_d__73, roomUuids) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromSharedRooms_d__73, __u__1) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUK__LoadSceneFromSharedRooms_d__73) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace

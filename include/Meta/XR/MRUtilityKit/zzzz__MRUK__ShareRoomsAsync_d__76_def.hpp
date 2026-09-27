#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK__ShareRoomsAsync_d__76.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_ShareResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUK__ShareRoomsAsync_d__76)
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace Meta::XR::MRUtilityKit {
class MRUKRoom;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
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
struct MRUK__ShareRoomsAsync_d__76;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUK__ShareRoomsAsync_d__76);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUK__ShareRoomsAsync_d__76, "Meta.XR.MRUtilityKit", "MRUK/<ShareRoomsAsync>d__76");
// [CompilerGenerated]
// Dependencies OVRAnchor, OVRAnchor::ShareResult, OVRObjectPool::ListScope`1<T>, OVRResult`1<TStatus>, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>, System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUK/<ShareRoomsAsync>d__76
struct CORDL_TYPE MRUK__ShareRoomsAsync_d__76 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f2e008, size 0xb40, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f2eba4, size 0x58, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MRUK__ShareRoomsAsync_d__76() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "rooms", ty: "::System::Collections::Generic::IEnumerable_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "_roomAnchors_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::ArrayW<bool>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>", modifiers: "", def_value: None, comment: None }]
constexpr MRUK__ShareRoomsAsync_d__76(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>  __t__builder, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms, ::System::Guid  groupUuid, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _roomAnchors_5__2, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap2, ::GlobalNamespace::OVRTask_1_Awaiter<::ArrayW<bool>>  __u__1, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25880};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>  __t__builder;

/// @brief Field rooms, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms;

/// @brief Field groupUuid, offset: 0x28, size: 0x10, def value: None
 ::System::Guid  groupUuid;

/// @brief Field <roomAnchors>5__2, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _roomAnchors_5__2;

/// @brief Field <>7__wrap2, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap2;

/// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<::ArrayW<bool>>  __u__1;

/// @brief Field <>u__2, offset: 0x58, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>  __u__2;

/// @brief Size padding 0x70 - 0x68 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUK__ShareRoomsAsync_d__76, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__ShareRoomsAsync_d__76, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__ShareRoomsAsync_d__76, rooms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__ShareRoomsAsync_d__76, groupUuid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__ShareRoomsAsync_d__76, _roomAnchors_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__ShareRoomsAsync_d__76, __7__wrap2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__ShareRoomsAsync_d__76, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__ShareRoomsAsync_d__76, __u__2) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUK__ShareRoomsAsync_d__76) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace

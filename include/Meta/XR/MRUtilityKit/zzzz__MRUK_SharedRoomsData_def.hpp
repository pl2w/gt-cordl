#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK_SharedRoomsData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MRUK_SharedRoomsData)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace GlobalNamespace {
struct MRUK_SharedRoomsData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUK_SharedRoomsData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUK_SharedRoomsData, "Meta.XR.MRUtilityKit", "MRUK/SharedRoomsData");
// Dependencies System.Guid, System.Nullable`1<T>, System.ValueTuple`2<T1, T2>, UnityEngine.Pose
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUK/SharedRoomsData
struct CORDL_TYPE MRUK_SharedRoomsData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MRUK_SharedRoomsData() ;

// Ctor Parameters [CppParam { name: "roomUuids", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "alignmentData", ty: "::System::Nullable_1<::System::ValueTuple_2<::System::Guid,::UnityEngine::Pose>>", modifiers: "", def_value: None, comment: None }]
constexpr MRUK_SharedRoomsData(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  roomUuids, ::System::Guid  groupUuid, ::System::Nullable_1<::System::ValueTuple_2<::System::Guid,::UnityEngine::Pose>>  alignmentData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25866};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field roomUuids, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  roomUuids;

/// @brief Field groupUuid, offset: 0x8, size: 0x10, def value: None
 ::System::Guid  groupUuid;

/// [TupleElementNames(new[] { "alignmentRoomUuid", "floorWorldPoseOnHost" })]
/// @brief Field alignmentData, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<::System::ValueTuple_2<::System::Guid,::UnityEngine::Pose>>  alignmentData;

/// @brief Size padding 0x48 - 0x28 = 0x20, packed as 0x20
 uint8_t  _cordl_size_padding[0x20];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUK_SharedRoomsData, roomUuids) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK_SharedRoomsData, groupUuid) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK_SharedRoomsData, alignmentData) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUK_SharedRoomsData) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace

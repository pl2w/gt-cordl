#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendingManager_FriendStationData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FriendingManager_FriendStationState_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendingManager_FriendStationData)
// Forward declare root types
namespace GlobalNamespace {
struct FriendingManager_FriendStationData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FriendingManager_FriendStationData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendingManager_FriendStationData, "", "FriendingManager/FriendStationData");
// Dependencies FriendingManager::FriendStationState, GTZone
namespace GlobalNamespace {
// Is value type: true
// CS Name: FriendingManager/FriendStationData
struct CORDL_TYPE FriendingManager_FriendStationData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FriendingManager_FriendStationData() ;

// Ctor Parameters [CppParam { name: "zone", ty: "::GlobalNamespace::GTZone", modifiers: "", def_value: None, comment: None }, CppParam { name: "actorNumberA", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "actorNumberB", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "state", ty: "::GlobalNamespace::FriendingManager_FriendStationState", modifiers: "", def_value: None, comment: None }, CppParam { name: "progressBarStartTime", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr FriendingManager_FriendStationData(::GlobalNamespace::GTZone  zone, int32_t  actorNumberA, int32_t  actorNumberB, ::GlobalNamespace::FriendingManager_FriendStationState  state, float_t  progressBarStartTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3265};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field zone, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  zone;

/// @brief Field actorNumberA, offset: 0x4, size: 0x4, def value: None
 int32_t  actorNumberA;

/// @brief Field actorNumberB, offset: 0x8, size: 0x4, def value: None
 int32_t  actorNumberB;

/// @brief Field state, offset: 0xc, size: 0x4, def value: None
 ::GlobalNamespace::FriendingManager_FriendStationState  state;

/// @brief Field progressBarStartTime, offset: 0x10, size: 0x4, def value: None
 float_t  progressBarStartTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendingManager_FriendStationData, zone) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendingManager_FriendStationData, actorNumberA) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendingManager_FriendStationData, actorNumberB) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendingManager_FriendStationData, state) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendingManager_FriendStationData, progressBarStartTime) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendingManager_FriendStationData) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace

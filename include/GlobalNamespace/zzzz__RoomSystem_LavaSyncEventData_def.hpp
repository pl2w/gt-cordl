#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomSystem_LavaSyncEventData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RoomSystem_LavaSyncEventData__votes_e__FixedBuffer_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomSystem_LavaSyncEventData)
namespace GlobalNamespace {
struct LavaSyncEventData_RoomSystem__votes_e__FixedBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct RoomSystem_LavaSyncEventData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RoomSystem_LavaSyncEventData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomSystem_LavaSyncEventData, "", "RoomSystem/LavaSyncEventData");
// Dependencies RoomSystem::LavaSyncEventData::<votes>e__FixedBuffer
namespace GlobalNamespace {
// Is value type: true
// CS Name: RoomSystem/LavaSyncEventData
struct CORDL_TYPE RoomSystem_LavaSyncEventData {
public:
// Declarations
using _votes_e__FixedBuffer = ::GlobalNamespace::LavaSyncEventData_RoomSystem__votes_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr RoomSystem_LavaSyncEventData() ;

// Ctor Parameters [CppParam { name: "zone", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "state", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "stateStartTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "activationProgress", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "voteCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "senderActorNumber", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "votes", ty: "::GlobalNamespace::LavaSyncEventData_RoomSystem__votes_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr RoomSystem_LavaSyncEventData(uint8_t  zone, uint8_t  state, double_t  stateStartTime, float_t  activationProgress, int32_t  voteCount, int32_t  senderActorNumber, ::GlobalNamespace::LavaSyncEventData_RoomSystem__votes_e__FixedBuffer  votes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3391};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field zone, offset: 0x0, size: 0x1, def value: None
 uint8_t  zone;

/// @brief Field state, offset: 0x1, size: 0x1, def value: None
 uint8_t  state;

/// @brief Field stateStartTime, offset: 0x8, size: 0x8, def value: None
 double_t  stateStartTime;

/// @brief Field activationProgress, offset: 0x10, size: 0x4, def value: None
 float_t  activationProgress;

/// @brief Field voteCount, offset: 0x14, size: 0x4, def value: None
 int32_t  voteCount;

/// @brief Field senderActorNumber, offset: 0x18, size: 0x4, def value: None
 int32_t  senderActorNumber;

/// [FixedBuffer(typeof(System.Int32), 20)]
/// @brief Field votes, offset: 0x1c, size: 0x50, def value: None
 ::GlobalNamespace::LavaSyncEventData_RoomSystem__votes_e__FixedBuffer  votes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomSystem_LavaSyncEventData, zone) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystem_LavaSyncEventData, state) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystem_LavaSyncEventData, stateStartTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystem_LavaSyncEventData, activationProgress) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystem_LavaSyncEventData, voteCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystem_LavaSyncEventData, senderActorNumber) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystem_LavaSyncEventData, votes) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoomSystem_LavaSyncEventData) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace

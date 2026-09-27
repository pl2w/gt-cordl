#pragma once
// IWYU pragma private; include "GorillaTagScripts/PlayerTimerManager_PlayerTimerData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerTimerManager_PlayerTimerData)
// Forward declare root types
namespace GlobalNamespace {
struct PlayerTimerManager_PlayerTimerData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerTimerManager_PlayerTimerData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerTimerManager_PlayerTimerData, "GorillaTagScripts", "PlayerTimerManager/PlayerTimerData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.PlayerTimerManager/PlayerTimerData
struct CORDL_TYPE PlayerTimerManager_PlayerTimerData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PlayerTimerManager_PlayerTimerData() ;

// Ctor Parameters [CppParam { name: "startTimeStamp", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "endTimeStamp", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isStarted", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastTimerDuration", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr PlayerTimerManager_PlayerTimerData(int32_t  startTimeStamp, int32_t  endTimeStamp, bool  isStarted, uint32_t  lastTimerDuration) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4006};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field startTimeStamp, offset: 0x0, size: 0x4, def value: None
 int32_t  startTimeStamp;

/// @brief Field endTimeStamp, offset: 0x4, size: 0x4, def value: None
 int32_t  endTimeStamp;

/// @brief Field isStarted, offset: 0x8, size: 0x1, def value: None
 bool  isStarted;

/// @brief Field lastTimerDuration, offset: 0xc, size: 0x4, def value: None
 uint32_t  lastTimerDuration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerTimerManager_PlayerTimerData, startTimeStamp) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTimerManager_PlayerTimerData, endTimeStamp) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTimerManager_PlayerTimerData, isStarted) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTimerManager_PlayerTimerData, lastTimerDuration) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerTimerManager_PlayerTimerData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

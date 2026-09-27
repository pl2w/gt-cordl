#pragma once
// IWYU pragma private; include "Constants/GamePlayConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GamePlayConfig)
// Forward declare root types
namespace Constants {
class GamePlayConfig;
}
// Write type traits
MARK_REF_T(::Constants::GamePlayConfig*);
DEFINE_IL2CPP_CLASS(::Constants::GamePlayConfig*, "Constants", "GamePlayConfig");
// Dependencies System.Object
namespace Constants {
// Is value type: false
// CS Name: Constants.GamePlayConfig
class CORDL_TYPE GamePlayConfig : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr GamePlayConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GamePlayConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GamePlayConfig(GamePlayConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GamePlayConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GamePlayConfig(GamePlayConfig const& ) = delete;

/// @brief Field GTFC_APPEND offset 0xffffffff size 0x8
static constexpr ::ConstString  GTFC_APPEND{u":GTFC"};

/// @brief Field MAX_NAME_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  MAX_NAME_LENGTH{static_cast<int32_t>(0xc)};

/// @brief Field MAX_ROOM_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  MAX_ROOM_SIZE{static_cast<int32_t>(0x14)};

/// @brief Field MAX_ROOM_SIZE_NOSUBS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_ROOM_SIZE_NOSUBS{static_cast<int32_t>(0xa)};

/// @brief Field MAX_THROW_VELOCITY offset 0xffffffff size 0x4
static constexpr float_t  MAX_THROW_VELOCITY{static_cast<float_t>(50.0f)};

/// @brief Field PROJECTILE_DISTANCE_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  PROJECTILE_DISTANCE_THRESHOLD{static_cast<float_t>(4.0f)};

/// @brief Field SPEED_TELEPORT_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  SPEED_TELEPORT_THRESHOLD{static_cast<float_t>(100.0f)};

/// @brief Field TAG_DISTANCE_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  TAG_DISTANCE_THRESHOLD{static_cast<float_t>(6.0f)};

/// @brief Field TAG_TIME_ROLLBACK offset 0xffffffff size 0x4
static constexpr float_t  TAG_TIME_ROLLBACK{static_cast<float_t>(0.2f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3847};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Constants::GamePlayConfig) == 0x10, "Size mismatch!");

} // namespace end def Constants

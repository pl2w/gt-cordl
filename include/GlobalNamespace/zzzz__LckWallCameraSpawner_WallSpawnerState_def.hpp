#pragma once
// IWYU pragma private; include "GlobalNamespace/LckWallCameraSpawner_WallSpawnerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckWallCameraSpawner_WallSpawnerState)
// Forward declare root types
namespace GlobalNamespace {
struct LckWallCameraSpawner_WallSpawnerState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState, "", "LckWallCameraSpawner/WallSpawnerState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: LckWallCameraSpawner/WallSpawnerState
struct CORDL_TYPE LckWallCameraSpawner_WallSpawnerState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LckWallCameraSpawner_WallSpawnerState_Unwrapped
enum struct __LckWallCameraSpawner_WallSpawnerState_Unwrapped : int32_t {
__E_CameraOnHook = static_cast<int32_t>(0x0),
__E_CameraDragging = static_cast<int32_t>(0x1),
__E_CameraOffHook = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LckWallCameraSpawner_WallSpawnerState_Unwrapped () const noexcept {
return static_cast<__LckWallCameraSpawner_WallSpawnerState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LckWallCameraSpawner_WallSpawnerState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckWallCameraSpawner_WallSpawnerState(int32_t  value__) noexcept;

/// @brief Field CameraDragging value: I32(1)
static ::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState const CameraDragging;

/// @brief Field CameraOffHook value: I32(2)
static ::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState const CameraOffHook;

/// @brief Field CameraOnHook value: I32(0)
static ::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState const CameraOnHook;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1043};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

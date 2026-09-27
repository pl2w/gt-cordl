#pragma once
// IWYU pragma private; include "GlobalNamespace/LckBodyCameraSpawner_CameraState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckBodyCameraSpawner_CameraState)
// Forward declare root types
namespace GlobalNamespace {
struct LckBodyCameraSpawner_CameraState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckBodyCameraSpawner_CameraState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckBodyCameraSpawner_CameraState, "", "LckBodyCameraSpawner/CameraState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: LckBodyCameraSpawner/CameraState
struct CORDL_TYPE LckBodyCameraSpawner_CameraState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LckBodyCameraSpawner_CameraState_Unwrapped
enum struct __LckBodyCameraSpawner_CameraState_Unwrapped : int32_t {
__E_CameraDisabled = static_cast<int32_t>(0x0),
__E_CameraOnNeck = static_cast<int32_t>(0x1),
__E_CameraSpawned = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LckBodyCameraSpawner_CameraState_Unwrapped () const noexcept {
return static_cast<__LckBodyCameraSpawner_CameraState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LckBodyCameraSpawner_CameraState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckBodyCameraSpawner_CameraState(int32_t  value__) noexcept;

/// @brief Field CameraDisabled value: I32(0)
static ::GlobalNamespace::LckBodyCameraSpawner_CameraState const CameraDisabled;

/// @brief Field CameraOnNeck value: I32(1)
static ::GlobalNamespace::LckBodyCameraSpawner_CameraState const CameraOnNeck;

/// @brief Field CameraSpawned value: I32(2)
static ::GlobalNamespace::LckBodyCameraSpawner_CameraState const CameraSpawned;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1011};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner_CameraState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckBodyCameraSpawner_CameraState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

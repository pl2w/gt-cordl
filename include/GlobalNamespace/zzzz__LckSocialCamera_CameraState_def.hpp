#pragma once
// IWYU pragma private; include "GlobalNamespace/LckSocialCamera_CameraState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckSocialCamera_CameraState)
// Forward declare root types
namespace GlobalNamespace {
struct LckSocialCamera_CameraState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckSocialCamera_CameraState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckSocialCamera_CameraState, "", "LckSocialCamera/CameraState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: LckSocialCamera/CameraState
struct CORDL_TYPE LckSocialCamera_CameraState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LckSocialCamera_CameraState_Unwrapped
enum struct __LckSocialCamera_CameraState_Unwrapped : int32_t {
__E_Empty = static_cast<int32_t>(0x0),
__E_Visible = static_cast<int32_t>(0x1),
__E_Recording = static_cast<int32_t>(0x2),
__E_OnNeck = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LckSocialCamera_CameraState_Unwrapped () const noexcept {
return static_cast<__LckSocialCamera_CameraState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LckSocialCamera_CameraState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckSocialCamera_CameraState(int32_t  value__) noexcept;

/// @brief Field Empty value: I32(0)
static ::GlobalNamespace::LckSocialCamera_CameraState const Empty;

/// @brief Field OnNeck value: I32(4)
static ::GlobalNamespace::LckSocialCamera_CameraState const OnNeck;

/// @brief Field Recording value: I32(2)
static ::GlobalNamespace::LckSocialCamera_CameraState const Recording;

/// @brief Field Visible value: I32(1)
static ::GlobalNamespace::LckSocialCamera_CameraState const Visible;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1036};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckSocialCamera_CameraState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckSocialCamera_CameraState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

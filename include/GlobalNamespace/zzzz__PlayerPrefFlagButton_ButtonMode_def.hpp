#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerPrefFlagButton_ButtonMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerPrefFlagButton_ButtonMode)
// Forward declare root types
namespace GlobalNamespace {
struct PlayerPrefFlagButton_ButtonMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerPrefFlagButton_ButtonMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerPrefFlagButton_ButtonMode, "", "PlayerPrefFlagButton/ButtonMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerPrefFlagButton/ButtonMode
struct CORDL_TYPE PlayerPrefFlagButton_ButtonMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayerPrefFlagButton_ButtonMode_Unwrapped
enum struct __PlayerPrefFlagButton_ButtonMode_Unwrapped : int32_t {
__E_SET_VALUE = static_cast<int32_t>(0x0),
__E_TOGGLE = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerPrefFlagButton_ButtonMode_Unwrapped () const noexcept {
return static_cast<__PlayerPrefFlagButton_ButtonMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerPrefFlagButton_ButtonMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PlayerPrefFlagButton_ButtonMode(int32_t  value__) noexcept;

/// @brief Field SET_VALUE value: I32(0)
static ::GlobalNamespace::PlayerPrefFlagButton_ButtonMode const SET_VALUE;

/// @brief Field TOGGLE value: I32(1)
static ::GlobalNamespace::PlayerPrefFlagButton_ButtonMode const TOGGLE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1181};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerPrefFlagButton_ButtonMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerPrefFlagButton_ButtonMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

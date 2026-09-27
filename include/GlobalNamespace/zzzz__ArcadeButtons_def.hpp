#pragma once
// IWYU pragma private; include "GlobalNamespace/ArcadeButtons.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArcadeButtons)
// Forward declare root types
namespace GlobalNamespace {
struct ArcadeButtons;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ArcadeButtons);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArcadeButtons, "", "ArcadeButtons");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ArcadeButtons
struct CORDL_TYPE ArcadeButtons {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ArcadeButtons_Unwrapped
enum struct __ArcadeButtons_Unwrapped : int32_t {
__E_GRAB = static_cast<int32_t>(0x1),
__E_UP = static_cast<int32_t>(0x2),
__E_DOWN = static_cast<int32_t>(0x4),
__E_LEFT = static_cast<int32_t>(0x8),
__E_RIGHT = static_cast<int32_t>(0x10),
__E_B0 = static_cast<int32_t>(0x20),
__E_B1 = static_cast<int32_t>(0x40),
__E_TRIGGER = static_cast<int32_t>(0x80),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ArcadeButtons_Unwrapped () const noexcept {
return static_cast<__ArcadeButtons_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ArcadeButtons() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ArcadeButtons(int32_t  value__) noexcept;

/// @brief Field B0 value: I32(32)
static ::GlobalNamespace::ArcadeButtons const B0;

/// @brief Field B1 value: I32(64)
static ::GlobalNamespace::ArcadeButtons const B1;

/// @brief Field DOWN value: I32(4)
static ::GlobalNamespace::ArcadeButtons const DOWN;

/// @brief Field GRAB value: I32(1)
static ::GlobalNamespace::ArcadeButtons const GRAB;

/// @brief Field LEFT value: I32(8)
static ::GlobalNamespace::ArcadeButtons const LEFT;

/// @brief Field RIGHT value: I32(16)
static ::GlobalNamespace::ArcadeButtons const RIGHT;

/// @brief Field TRIGGER value: I32(128)
static ::GlobalNamespace::ArcadeButtons const TRIGGER;

/// @brief Field UP value: I32(2)
static ::GlobalNamespace::ArcadeButtons const UP;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArcadeButtons, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ArcadeButtons) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

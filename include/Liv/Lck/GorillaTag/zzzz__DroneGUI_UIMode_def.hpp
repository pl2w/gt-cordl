#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/DroneGUI_UIMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DroneGUI_UIMode)
// Forward declare root types
namespace GlobalNamespace {
struct DroneGUI_UIMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DroneGUI_UIMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DroneGUI_UIMode, "Liv.Lck.GorillaTag", "DroneGUI/UIMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.GorillaTag.DroneGUI/UIMode
struct CORDL_TYPE DroneGUI_UIMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DroneGUI_UIMode_Unwrapped
enum struct __DroneGUI_UIMode_Unwrapped : int32_t {
__E_Settings = static_cast<int32_t>(0x0),
__E_Help = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DroneGUI_UIMode_Unwrapped () const noexcept {
return static_cast<__DroneGUI_UIMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DroneGUI_UIMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DroneGUI_UIMode(int32_t  value__) noexcept;

/// @brief Field Help value: I32(1)
static ::GlobalNamespace::DroneGUI_UIMode const Help;

/// @brief Field Settings value: I32(0)
static ::GlobalNamespace::DroneGUI_UIMode const Settings;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29603};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DroneGUI_UIMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DroneGUI_UIMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

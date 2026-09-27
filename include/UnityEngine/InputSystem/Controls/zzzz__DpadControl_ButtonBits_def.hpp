#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/DpadControl_ButtonBits.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DpadControl_ButtonBits)
// Forward declare root types
namespace GlobalNamespace {
struct DpadControl_ButtonBits;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DpadControl_ButtonBits);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DpadControl_ButtonBits, "UnityEngine.InputSystem.Controls", "DpadControl/ButtonBits");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Controls.DpadControl/ButtonBits
struct CORDL_TYPE DpadControl_ButtonBits {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DpadControl_ButtonBits_Unwrapped
enum struct __DpadControl_ButtonBits_Unwrapped : int32_t {
__E_Up = static_cast<int32_t>(0x0),
__E_Down = static_cast<int32_t>(0x1),
__E_Left = static_cast<int32_t>(0x2),
__E_Right = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DpadControl_ButtonBits_Unwrapped () const noexcept {
return static_cast<__DpadControl_ButtonBits_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DpadControl_ButtonBits() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DpadControl_ButtonBits(int32_t  value__) noexcept;

/// @brief Field Down value: I32(1)
static ::GlobalNamespace::DpadControl_ButtonBits const Down;

/// @brief Field Left value: I32(2)
static ::GlobalNamespace::DpadControl_ButtonBits const Left;

/// @brief Field Right value: I32(3)
static ::GlobalNamespace::DpadControl_ButtonBits const Right;

/// @brief Field Up value: I32(0)
static ::GlobalNamespace::DpadControl_ButtonBits const Up;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13859};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DpadControl_ButtonBits, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DpadControl_ButtonBits) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

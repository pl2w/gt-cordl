#pragma once
// IWYU pragma private; include "UnityEngine/UI/Navigation_Mode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Navigation_Mode)
// Forward declare root types
namespace GlobalNamespace {
struct Navigation_Mode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Navigation_Mode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Navigation_Mode, "UnityEngine.UI", "Navigation/Mode");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UI.Navigation/Mode
struct CORDL_TYPE Navigation_Mode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Navigation_Mode_Unwrapped
enum struct __Navigation_Mode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Horizontal = static_cast<int32_t>(0x1),
__E_Vertical = static_cast<int32_t>(0x2),
__E_Automatic = static_cast<int32_t>(0x3),
__E_Explicit = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Navigation_Mode_Unwrapped () const noexcept {
return static_cast<__Navigation_Mode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Navigation_Mode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Navigation_Mode(int32_t  value__) noexcept;

/// @brief Field Automatic value: I32(3)
static ::GlobalNamespace::Navigation_Mode const Automatic;

/// @brief Field Explicit value: I32(4)
static ::GlobalNamespace::Navigation_Mode const Explicit;

/// @brief Field Horizontal value: I32(1)
static ::GlobalNamespace::Navigation_Mode const Horizontal;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::Navigation_Mode const None;

/// @brief Field Vertical value: I32(2)
static ::GlobalNamespace::Navigation_Mode const Vertical;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26082};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Navigation_Mode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Navigation_Mode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

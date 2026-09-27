#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ControllerButtonEvent_ButtonType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerButtonEvent_ButtonType)
// Forward declare root types
namespace GlobalNamespace {
struct ControllerButtonEvent_ButtonType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ControllerButtonEvent_ButtonType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ControllerButtonEvent_ButtonType, "GorillaTag.Cosmetics", "ControllerButtonEvent/ButtonType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.ControllerButtonEvent/ButtonType
struct CORDL_TYPE ControllerButtonEvent_ButtonType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ControllerButtonEvent_ButtonType_Unwrapped
enum struct __ControllerButtonEvent_ButtonType_Unwrapped : int32_t {
__E_trigger = static_cast<int32_t>(0x0),
__E_primary = static_cast<int32_t>(0x1),
__E_secondary = static_cast<int32_t>(0x2),
__E_grip = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ControllerButtonEvent_ButtonType_Unwrapped () const noexcept {
return static_cast<__ControllerButtonEvent_ButtonType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ControllerButtonEvent_ButtonType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ControllerButtonEvent_ButtonType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4899};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field grip value: I32(3)
static ::GlobalNamespace::ControllerButtonEvent_ButtonType const grip;

/// @brief Field primary value: I32(1)
static ::GlobalNamespace::ControllerButtonEvent_ButtonType const primary;

/// @brief Field secondary value: I32(2)
static ::GlobalNamespace::ControllerButtonEvent_ButtonType const secondary;

/// @brief Field trigger value: I32(0)
static ::GlobalNamespace::ControllerButtonEvent_ButtonType const trigger;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ControllerButtonEvent_ButtonType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ControllerButtonEvent_ButtonType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

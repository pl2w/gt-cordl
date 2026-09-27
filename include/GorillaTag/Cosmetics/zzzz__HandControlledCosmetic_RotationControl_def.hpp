#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/HandControlledCosmetic_RotationControl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandControlledCosmetic_RotationControl)
// Forward declare root types
namespace GlobalNamespace {
struct HandControlledCosmetic_RotationControl;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandControlledCosmetic_RotationControl);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandControlledCosmetic_RotationControl, "GorillaTag.Cosmetics", "HandControlledCosmetic/RotationControl");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.HandControlledCosmetic/RotationControl
struct CORDL_TYPE HandControlledCosmetic_RotationControl {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HandControlledCosmetic_RotationControl_Unwrapped
enum struct __HandControlledCosmetic_RotationControl_Unwrapped : int32_t {
__E_Angle = static_cast<int32_t>(0x0),
__E_Translation = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HandControlledCosmetic_RotationControl_Unwrapped () const noexcept {
return static_cast<__HandControlledCosmetic_RotationControl_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HandControlledCosmetic_RotationControl() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HandControlledCosmetic_RotationControl(int32_t  value__) noexcept;

/// @brief Field Angle value: I32(0)
static ::GlobalNamespace::HandControlledCosmetic_RotationControl const Angle;

/// @brief Field Translation value: I32(1)
static ::GlobalNamespace::HandControlledCosmetic_RotationControl const Translation;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4942};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandControlledCosmetic_RotationControl, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandControlledCosmetic_RotationControl) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

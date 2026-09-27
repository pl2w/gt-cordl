#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/RotationDirection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RotationDirection)
// Forward declare root types
namespace GorillaTag::Gravity {
struct RotationDirection;
}
// Write type traits
MARK_VAL_T(::GorillaTag::Gravity::RotationDirection);
DEFINE_IL2CPP_CLASS(::GorillaTag::Gravity::RotationDirection, "GorillaTag.Gravity", "RotationDirection");
// Dependencies 
namespace GorillaTag::Gravity {
// Is value type: true
// CS Name: GorillaTag.Gravity.RotationDirection
struct CORDL_TYPE RotationDirection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RotationDirection_Unwrapped
enum struct __RotationDirection_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Forward = static_cast<int32_t>(0x1),
__E_Backward = static_cast<int32_t>(0x2),
__E_Left = static_cast<int32_t>(0x3),
__E_Right = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RotationDirection_Unwrapped () const noexcept {
return static_cast<__RotationDirection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RotationDirection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RotationDirection(int32_t  value__) noexcept;

/// @brief Field Backward value: I32(2)
static ::GorillaTag::Gravity::RotationDirection const Backward;

/// @brief Field Forward value: I32(1)
static ::GorillaTag::Gravity::RotationDirection const Forward;

/// @brief Field Left value: I32(3)
static ::GorillaTag::Gravity::RotationDirection const Left;

/// @brief Field None value: I32(0)
static ::GorillaTag::Gravity::RotationDirection const None;

/// @brief Field Right value: I32(4)
static ::GorillaTag::Gravity::RotationDirection const Right;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4682};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Gravity::RotationDirection, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Gravity::RotationDirection) == 0x4, "Size mismatch!");

} // namespace end def GorillaTag::Gravity

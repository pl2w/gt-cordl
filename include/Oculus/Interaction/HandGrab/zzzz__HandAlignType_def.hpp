#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandAlignType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandAlignType)
// Forward declare root types
namespace Oculus::Interaction::HandGrab {
struct HandAlignType;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::HandGrab::HandAlignType);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::HandAlignType, "Oculus.Interaction.HandGrab", "HandAlignType");
// Dependencies 
namespace Oculus::Interaction::HandGrab {
// Is value type: true
// CS Name: Oculus.Interaction.HandGrab.HandAlignType
struct CORDL_TYPE HandAlignType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HandAlignType_Unwrapped
enum struct __HandAlignType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_AlignOnGrab = static_cast<int32_t>(0x1),
__E_AttractOnHover = static_cast<int32_t>(0x2),
__E_AlignFingersOnHover = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HandAlignType_Unwrapped () const noexcept {
return static_cast<__HandAlignType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HandAlignType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HandAlignType(int32_t  value__) noexcept;

/// @brief Field AlignFingersOnHover value: I32(3)
static ::Oculus::Interaction::HandGrab::HandAlignType const AlignFingersOnHover;

/// @brief Field AlignOnGrab value: I32(1)
static ::Oculus::Interaction::HandGrab::HandAlignType const AlignOnGrab;

/// @brief Field AttractOnHover value: I32(2)
static ::Oculus::Interaction::HandGrab::HandAlignType const AttractOnHover;

/// @brief Field None value: I32(0)
static ::Oculus::Interaction::HandGrab::HandAlignType const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16335};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::HandAlignType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::HandAlignType) == 0x4, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab

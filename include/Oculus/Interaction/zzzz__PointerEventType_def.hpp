#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointerEventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerEventType)
// Forward declare root types
namespace Oculus::Interaction {
struct PointerEventType;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::PointerEventType);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PointerEventType, "Oculus.Interaction", "PointerEventType");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: true
// CS Name: Oculus.Interaction.PointerEventType
struct CORDL_TYPE PointerEventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PointerEventType_Unwrapped
enum struct __PointerEventType_Unwrapped : int32_t {
__E_Hover = static_cast<int32_t>(0x0),
__E_Unhover = static_cast<int32_t>(0x1),
__E_Select = static_cast<int32_t>(0x2),
__E_Unselect = static_cast<int32_t>(0x3),
__E_Move = static_cast<int32_t>(0x4),
__E_Cancel = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PointerEventType_Unwrapped () const noexcept {
return static_cast<__PointerEventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PointerEventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PointerEventType(int32_t  value__) noexcept;

/// @brief Field Cancel value: I32(5)
static ::Oculus::Interaction::PointerEventType const Cancel;

/// @brief Field Hover value: I32(0)
static ::Oculus::Interaction::PointerEventType const Hover;

/// @brief Field Move value: I32(4)
static ::Oculus::Interaction::PointerEventType const Move;

/// @brief Field Select value: I32(2)
static ::Oculus::Interaction::PointerEventType const Select;

/// @brief Field Unhover value: I32(1)
static ::Oculus::Interaction::PointerEventType const Unhover;

/// @brief Field Unselect value: I32(3)
static ::Oculus::Interaction::PointerEventType const Unselect;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15900};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PointerEventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PointerEventType) == 0x4, "Size mismatch!");

} // namespace end def Oculus::Interaction

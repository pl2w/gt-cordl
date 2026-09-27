#pragma once
// IWYU pragma private; include "System/ComponentModel/BindingDirection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BindingDirection)
// Forward declare root types
namespace System::ComponentModel {
struct BindingDirection;
}
// Write type traits
MARK_VAL_T(::System::ComponentModel::BindingDirection);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::BindingDirection, "System.ComponentModel", "BindingDirection");
// Dependencies 
namespace System::ComponentModel {
// Is value type: true
// CS Name: System.ComponentModel.BindingDirection
struct CORDL_TYPE BindingDirection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BindingDirection_Unwrapped
enum struct __BindingDirection_Unwrapped : int32_t {
__E_OneWay = static_cast<int32_t>(0x0),
__E_TwoWay = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BindingDirection_Unwrapped () const noexcept {
return static_cast<__BindingDirection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BindingDirection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BindingDirection(int32_t  value__) noexcept;

/// @brief Field OneWay value: I32(0)
static ::System::ComponentModel::BindingDirection const OneWay;

/// @brief Field TwoWay value: I32(1)
static ::System::ComponentModel::BindingDirection const TwoWay;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10124};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::BindingDirection, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::BindingDirection) == 0x4, "Size mismatch!");

} // namespace end def System::ComponentModel

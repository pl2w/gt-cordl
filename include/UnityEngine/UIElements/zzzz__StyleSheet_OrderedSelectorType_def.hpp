#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheet_OrderedSelectorType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleSheet_OrderedSelectorType)
// Forward declare root types
namespace GlobalNamespace {
struct StyleSheet_OrderedSelectorType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StyleSheet_OrderedSelectorType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StyleSheet_OrderedSelectorType, "UnityEngine.UIElements", "StyleSheet/OrderedSelectorType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheet/OrderedSelectorType
struct CORDL_TYPE StyleSheet_OrderedSelectorType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StyleSheet_OrderedSelectorType_Unwrapped
enum struct __StyleSheet_OrderedSelectorType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0xffffffff),
__E_Name = static_cast<int32_t>(0x0),
__E_Type = static_cast<int32_t>(0x1),
__E_Class = static_cast<int32_t>(0x2),
__E_Length = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StyleSheet_OrderedSelectorType_Unwrapped () const noexcept {
return static_cast<__StyleSheet_OrderedSelectorType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StyleSheet_OrderedSelectorType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StyleSheet_OrderedSelectorType(int32_t  value__) noexcept;

/// @brief Field Class value: I32(2)
static ::GlobalNamespace::StyleSheet_OrderedSelectorType const Class;

/// @brief Field Length value: I32(3)
static ::GlobalNamespace::StyleSheet_OrderedSelectorType const Length;

/// @brief Field Name value: I32(0)
static ::GlobalNamespace::StyleSheet_OrderedSelectorType const Name;

/// @brief Field None value: I32(-1)
static ::GlobalNamespace::StyleSheet_OrderedSelectorType const None;

/// @brief Field Type value: I32(1)
static ::GlobalNamespace::StyleSheet_OrderedSelectorType const Type;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8273};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StyleSheet_OrderedSelectorType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StyleSheet_OrderedSelectorType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

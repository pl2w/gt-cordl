#pragma once
// IWYU pragma private; include "XNode/Node_ShowBackingValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Node_ShowBackingValue)
// Forward declare root types
namespace GlobalNamespace {
struct Node_ShowBackingValue;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Node_ShowBackingValue);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Node_ShowBackingValue, "XNode", "Node/ShowBackingValue");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: XNode.Node/ShowBackingValue
struct CORDL_TYPE Node_ShowBackingValue {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Node_ShowBackingValue_Unwrapped
enum struct __Node_ShowBackingValue_Unwrapped : int32_t {
__E_Never = static_cast<int32_t>(0x0),
__E_Unconnected = static_cast<int32_t>(0x1),
__E_Always = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Node_ShowBackingValue_Unwrapped () const noexcept {
return static_cast<__Node_ShowBackingValue_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Node_ShowBackingValue() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Node_ShowBackingValue(int32_t  value__) noexcept;

/// @brief Field Always value: I32(2)
static ::GlobalNamespace::Node_ShowBackingValue const Always;

/// @brief Field Never value: I32(0)
static ::GlobalNamespace::Node_ShowBackingValue const Never;

/// @brief Field Unconnected value: I32(1)
static ::GlobalNamespace::Node_ShowBackingValue const Unconnected;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32256};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Node_ShowBackingValue, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Node_ShowBackingValue) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

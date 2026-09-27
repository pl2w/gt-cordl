#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/SimpleCollator_ExtenderType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleCollator_ExtenderType)
// Forward declare root types
namespace GlobalNamespace {
struct SimpleCollator_ExtenderType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SimpleCollator_ExtenderType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimpleCollator_ExtenderType, "Mono.Globalization.Unicode", "SimpleCollator/ExtenderType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.Globalization.Unicode.SimpleCollator/ExtenderType
struct CORDL_TYPE SimpleCollator_ExtenderType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SimpleCollator_ExtenderType_Unwrapped
enum struct __SimpleCollator_ExtenderType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Simple = static_cast<int32_t>(0x1),
__E_Voiced = static_cast<int32_t>(0x2),
__E_Conditional = static_cast<int32_t>(0x3),
__E_Buggy = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SimpleCollator_ExtenderType_Unwrapped () const noexcept {
return static_cast<__SimpleCollator_ExtenderType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SimpleCollator_ExtenderType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SimpleCollator_ExtenderType(int32_t  value__) noexcept;

/// @brief Field Buggy value: I32(4)
static ::GlobalNamespace::SimpleCollator_ExtenderType const Buggy;

/// @brief Field Conditional value: I32(3)
static ::GlobalNamespace::SimpleCollator_ExtenderType const Conditional;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::SimpleCollator_ExtenderType const None;

/// @brief Field Simple value: I32(1)
static ::GlobalNamespace::SimpleCollator_ExtenderType const Simple;

/// @brief Field Voiced value: I32(2)
static ::GlobalNamespace::SimpleCollator_ExtenderType const Voiced;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5370};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleCollator_ExtenderType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimpleCollator_ExtenderType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

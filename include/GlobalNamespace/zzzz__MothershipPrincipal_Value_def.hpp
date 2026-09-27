#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipPrincipal_Value.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipPrincipal_Value)
// Forward declare root types
namespace GlobalNamespace {
struct MothershipPrincipal_Value;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MothershipPrincipal_Value);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipPrincipal_Value, "", "MothershipPrincipal/Value");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MothershipPrincipal/Value
struct CORDL_TYPE MothershipPrincipal_Value {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MothershipPrincipal_Value_Unwrapped
enum struct __MothershipPrincipal_Value_Unwrapped : int32_t {
__E_CLIENT = static_cast<int32_t>(0x0),
__E_SERVER = static_cast<int32_t>(0x1),
__E_AUTOMATION = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MothershipPrincipal_Value_Unwrapped () const noexcept {
return static_cast<__MothershipPrincipal_Value_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MothershipPrincipal_Value() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MothershipPrincipal_Value(int32_t  value__) noexcept;

/// @brief Field AUTOMATION value: I32(2)
static ::GlobalNamespace::MothershipPrincipal_Value const AUTOMATION;

/// @brief Field CLIENT value: I32(0)
static ::GlobalNamespace::MothershipPrincipal_Value const CLIENT;

/// @brief Field SERVER value: I32(1)
static ::GlobalNamespace::MothershipPrincipal_Value const SERVER;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9347};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipPrincipal_Value, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipPrincipal_Value) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

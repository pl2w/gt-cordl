#pragma once
// IWYU pragma private; include "GlobalNamespace/GameModeSpecificObject_ValidationMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameModeSpecificObject_ValidationMethod)
// Forward declare root types
namespace GlobalNamespace {
struct GameModeSpecificObject_ValidationMethod;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameModeSpecificObject_ValidationMethod);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameModeSpecificObject_ValidationMethod, "", "GameModeSpecificObject/ValidationMethod");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameModeSpecificObject/ValidationMethod
struct CORDL_TYPE GameModeSpecificObject_ValidationMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GameModeSpecificObject_ValidationMethod_Unwrapped
enum struct __GameModeSpecificObject_ValidationMethod_Unwrapped : int32_t {
__E_Inclusion = static_cast<int32_t>(0x0),
__E_Exclusion = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GameModeSpecificObject_ValidationMethod_Unwrapped () const noexcept {
return static_cast<__GameModeSpecificObject_ValidationMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GameModeSpecificObject_ValidationMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GameModeSpecificObject_ValidationMethod(int32_t  value__) noexcept;

/// @brief Field Exclusion value: I32(1)
static ::GlobalNamespace::GameModeSpecificObject_ValidationMethod const Exclusion;

/// @brief Field Inclusion value: I32(0)
static ::GlobalNamespace::GameModeSpecificObject_ValidationMethod const Inclusion;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{169};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameModeSpecificObject_ValidationMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameModeSpecificObject_ValidationMethod) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

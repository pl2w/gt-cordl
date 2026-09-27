#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/Expander_InsertLocation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Expander_InsertLocation)
// Forward declare root types
namespace GlobalNamespace {
struct Expander_InsertLocation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Expander_InsertLocation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Expander_InsertLocation, "UnityEngine.Localization.Pseudo", "Expander/InsertLocation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Localization.Pseudo.Expander/InsertLocation
struct CORDL_TYPE Expander_InsertLocation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Expander_InsertLocation_Unwrapped
enum struct __Expander_InsertLocation_Unwrapped : int32_t {
__E_Start = static_cast<int32_t>(0x0),
__E_End = static_cast<int32_t>(0x1),
__E_Both = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Expander_InsertLocation_Unwrapped () const noexcept {
return static_cast<__Expander_InsertLocation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Expander_InsertLocation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Expander_InsertLocation(int32_t  value__) noexcept;

/// @brief Field Both value: I32(2)
static ::GlobalNamespace::Expander_InsertLocation const Both;

/// @brief Field End value: I32(1)
static ::GlobalNamespace::Expander_InsertLocation const End;

/// @brief Field Start value: I32(0)
static ::GlobalNamespace::Expander_InsertLocation const Start;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25127};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Expander_InsertLocation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Expander_InsertLocation) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

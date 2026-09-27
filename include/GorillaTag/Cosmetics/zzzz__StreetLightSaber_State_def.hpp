#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/StreetLightSaber_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreetLightSaber_State)
// Forward declare root types
namespace GlobalNamespace {
struct StreetLightSaber_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StreetLightSaber_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StreetLightSaber_State, "GorillaTag.Cosmetics", "StreetLightSaber/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.StreetLightSaber/State
struct CORDL_TYPE StreetLightSaber_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StreetLightSaber_State_Unwrapped
enum struct __StreetLightSaber_State_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_Green = static_cast<int32_t>(0x1),
__E_Red = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StreetLightSaber_State_Unwrapped () const noexcept {
return static_cast<__StreetLightSaber_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StreetLightSaber_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StreetLightSaber_State(int32_t  value__) noexcept;

/// @brief Field Green value: I32(1)
static ::GlobalNamespace::StreetLightSaber_State const Green;

/// @brief Field Off value: I32(0)
static ::GlobalNamespace::StreetLightSaber_State const Off;

/// @brief Field Red value: I32(2)
static ::GlobalNamespace::StreetLightSaber_State const Red;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4977};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StreetLightSaber_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StreetLightSaber_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

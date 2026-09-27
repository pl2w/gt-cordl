#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderTrafficLight_LightState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderTrafficLight_LightState)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderTrafficLight_LightState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderTrafficLight_LightState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderTrafficLight_LightState, "GorillaTagScripts.Builder", "BuilderTrafficLight/LightState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.Builder.BuilderTrafficLight/LightState
struct CORDL_TYPE BuilderTrafficLight_LightState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderTrafficLight_LightState_Unwrapped
enum struct __BuilderTrafficLight_LightState_Unwrapped : int32_t {
__E_Red = static_cast<int32_t>(0x0),
__E_Yellow = static_cast<int32_t>(0x1),
__E_Green = static_cast<int32_t>(0x2),
__E_Off = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderTrafficLight_LightState_Unwrapped () const noexcept {
return static_cast<__BuilderTrafficLight_LightState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderTrafficLight_LightState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderTrafficLight_LightState(int32_t  value__) noexcept;

/// @brief Field Green value: I32(2)
static ::GlobalNamespace::BuilderTrafficLight_LightState const Green;

/// @brief Field Off value: I32(3)
static ::GlobalNamespace::BuilderTrafficLight_LightState const Off;

/// @brief Field Red value: I32(0)
static ::GlobalNamespace::BuilderTrafficLight_LightState const Red;

/// @brief Field Yellow value: I32(1)
static ::GlobalNamespace::BuilderTrafficLight_LightState const Yellow;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4179};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderTrafficLight_LightState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderTrafficLight_LightState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

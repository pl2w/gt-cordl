#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/ControlZoneProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControlZoneProperty)
// Forward declare root types
namespace Meta::XR::Acoustics {
struct ControlZoneProperty;
}
// Write type traits
MARK_VAL_T(::Meta::XR::Acoustics::ControlZoneProperty);
DEFINE_IL2CPP_CLASS(::Meta::XR::Acoustics::ControlZoneProperty, "Meta.XR.Acoustics", "ControlZoneProperty");
// Dependencies 
namespace Meta::XR::Acoustics {
// Is value type: true
// CS Name: Meta.XR.Acoustics.ControlZoneProperty
struct CORDL_TYPE ControlZoneProperty {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __ControlZoneProperty_Unwrapped
enum struct __ControlZoneProperty_Unwrapped : uint32_t {
__E_RT60 = static_cast<uint32_t>(0x0u),
__E_REVERB_LEVEL = static_cast<uint32_t>(0x1u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ControlZoneProperty_Unwrapped () const noexcept {
return static_cast<__ControlZoneProperty_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ControlZoneProperty() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr ControlZoneProperty(uint32_t  value__) noexcept;

/// @brief Field REVERB_LEVEL value: U32(1)
static ::Meta::XR::Acoustics::ControlZoneProperty const REVERB_LEVEL;

/// @brief Field RT60 value: U32(0)
static ::Meta::XR::Acoustics::ControlZoneProperty const RT60;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29981};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::Acoustics::ControlZoneProperty, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::Acoustics::ControlZoneProperty) == 0x4, "Size mismatch!");

} // namespace end def Meta::XR::Acoustics

#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/MaterialProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialProperty)
// Forward declare root types
namespace Meta::XR::Acoustics {
struct MaterialProperty;
}
// Write type traits
MARK_VAL_T(::Meta::XR::Acoustics::MaterialProperty);
DEFINE_IL2CPP_CLASS(::Meta::XR::Acoustics::MaterialProperty, "Meta.XR.Acoustics", "MaterialProperty");
// Dependencies 
namespace Meta::XR::Acoustics {
// Is value type: true
// CS Name: Meta.XR.Acoustics.MaterialProperty
struct CORDL_TYPE MaterialProperty {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __MaterialProperty_Unwrapped
enum struct __MaterialProperty_Unwrapped : uint32_t {
__E_ABSORPTION = static_cast<uint32_t>(0x0u),
__E_TRANSMISSION = static_cast<uint32_t>(0x1u),
__E_SCATTERING = static_cast<uint32_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MaterialProperty_Unwrapped () const noexcept {
return static_cast<__MaterialProperty_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MaterialProperty() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr MaterialProperty(uint32_t  value__) noexcept;

/// @brief Field ABSORPTION value: U32(0)
static ::Meta::XR::Acoustics::MaterialProperty const ABSORPTION;

/// @brief Field SCATTERING value: U32(2)
static ::Meta::XR::Acoustics::MaterialProperty const SCATTERING;

/// @brief Field TRANSMISSION value: U32(1)
static ::Meta::XR::Acoustics::MaterialProperty const TRANSMISSION;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29971};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::Acoustics::MaterialProperty, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::Acoustics::MaterialProperty) == 0x4, "Size mismatch!");

} // namespace end def Meta::XR::Acoustics

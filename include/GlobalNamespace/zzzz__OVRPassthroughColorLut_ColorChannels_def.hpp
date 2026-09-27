#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPassthroughColorLut_ColorChannels.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPassthroughColorLut_ColorChannels)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPassthroughColorLut_ColorChannels;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPassthroughColorLut_ColorChannels);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPassthroughColorLut_ColorChannels, "", "OVRPassthroughColorLut/ColorChannels");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPassthroughColorLut/ColorChannels
struct CORDL_TYPE OVRPassthroughColorLut_ColorChannels {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPassthroughColorLut_ColorChannels_Unwrapped
enum struct __OVRPassthroughColorLut_ColorChannels_Unwrapped : int32_t {
__E_Rgb = static_cast<int32_t>(0x1),
__E_Rgba = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPassthroughColorLut_ColorChannels_Unwrapped () const noexcept {
return static_cast<__OVRPassthroughColorLut_ColorChannels_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPassthroughColorLut_ColorChannels() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPassthroughColorLut_ColorChannels(int32_t  value__) noexcept;

/// @brief Field Rgb value: I32(1)
static ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels const Rgb;

/// @brief Field Rgba value: I32(2)
static ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels const Rgba;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12730};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut_ColorChannels, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPassthroughColorLut_ColorChannels) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

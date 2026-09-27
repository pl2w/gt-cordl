#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_HapticsConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_HapticsConstants)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_HapticsConstants;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_HapticsConstants);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_HapticsConstants, "", "OVRPlugin/HapticsConstants");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/HapticsConstants
struct CORDL_TYPE OVRPlugin_HapticsConstants {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_HapticsConstants_Unwrapped
enum struct __OVRPlugin_HapticsConstants_Unwrapped : int32_t {
__E_ParametricHapticsUnspecifiedFrequency = static_cast<int32_t>(0x0),
__E_MaxSamples = static_cast<int32_t>(0xfa0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_HapticsConstants_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_HapticsConstants_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_HapticsConstants() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_HapticsConstants(int32_t  value__) noexcept;

/// @brief Field MaxSamples value: I32(4000)
static ::GlobalNamespace::OVRPlugin_HapticsConstants const MaxSamples;

/// @brief Field ParametricHapticsUnspecifiedFrequency value: I32(0)
static ::GlobalNamespace::OVRPlugin_HapticsConstants const ParametricHapticsUnspecifiedFrequency;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12102};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_HapticsConstants, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_HapticsConstants) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

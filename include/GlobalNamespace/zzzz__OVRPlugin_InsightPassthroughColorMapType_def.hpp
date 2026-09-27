#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_InsightPassthroughColorMapType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_InsightPassthroughColorMapType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_InsightPassthroughColorMapType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType, "", "OVRPlugin/InsightPassthroughColorMapType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/InsightPassthroughColorMapType
struct CORDL_TYPE OVRPlugin_InsightPassthroughColorMapType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_InsightPassthroughColorMapType_Unwrapped
enum struct __OVRPlugin_InsightPassthroughColorMapType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_MonoToRgba = static_cast<int32_t>(0x1),
__E_MonoToMono = static_cast<int32_t>(0x2),
__E_BrightnessContrastSaturation = static_cast<int32_t>(0x4),
__E_ColorLut = static_cast<int32_t>(0x6),
__E_InterpolatedColorLut = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_InsightPassthroughColorMapType_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_InsightPassthroughColorMapType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_InsightPassthroughColorMapType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_InsightPassthroughColorMapType(int32_t  value__) noexcept;

/// @brief Field BrightnessContrastSaturation value: I32(4)
static ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType const BrightnessContrastSaturation;

/// @brief Field ColorLut value: I32(6)
static ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType const ColorLut;

/// @brief Field InterpolatedColorLut value: I32(7)
static ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType const InterpolatedColorLut;

/// @brief Field MonoToMono value: I32(2)
static ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType const MonoToMono;

/// @brief Field MonoToRgba value: I32(1)
static ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType const MonoToRgba;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12198};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPassthroughLayer_ColorMapEditorType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPassthroughLayer_ColorMapEditorType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPassthroughLayer_ColorMapEditorType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType, "", "OVRPassthroughLayer/ColorMapEditorType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPassthroughLayer/ColorMapEditorType
struct CORDL_TYPE OVRPassthroughLayer_ColorMapEditorType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPassthroughLayer_ColorMapEditorType_Unwrapped
enum struct __OVRPassthroughLayer_ColorMapEditorType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_GrayscaleToColor = static_cast<int32_t>(0x1),
__E_Controls = static_cast<int32_t>(0x1),
__E_Custom = static_cast<int32_t>(0x2),
__E_Grayscale = static_cast<int32_t>(0x3),
__E_ColorAdjustment = static_cast<int32_t>(0x4),
__E_ColorLut = static_cast<int32_t>(0x5),
__E_InterpolatedColorLut = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPassthroughLayer_ColorMapEditorType_Unwrapped () const noexcept {
return static_cast<__OVRPassthroughLayer_ColorMapEditorType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPassthroughLayer_ColorMapEditorType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPassthroughLayer_ColorMapEditorType(int32_t  value__) noexcept;

/// @brief Field ColorAdjustment value: I32(4)
static ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType const ColorAdjustment;

/// @brief Field ColorLut value: I32(5)
static ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType const ColorLut;

/// @brief Field Controls value: I32(1)
static ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType const Controls;

/// @brief Field Custom value: I32(2)
static ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType const Custom;

/// @brief Field Grayscale value: I32(3)
static ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType const Grayscale;

/// @brief Field GrayscaleToColor value: I32(1)
static ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType const GrayscaleToColor;

/// @brief Field InterpolatedColorLut value: I32(6)
static ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType const InterpolatedColorLut;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12021};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

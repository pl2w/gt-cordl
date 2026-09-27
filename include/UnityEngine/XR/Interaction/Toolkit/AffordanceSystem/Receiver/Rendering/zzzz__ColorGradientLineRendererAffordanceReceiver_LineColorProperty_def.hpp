#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Rendering/ColorGradientLineRendererAffordanceReceiver_LineColorProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorGradientLineRendererAffordanceReceiver_LineColorProperty)
// Forward declare root types
namespace GlobalNamespace {
struct ColorGradientLineRendererAffordanceReceiver_LineColorProperty;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ColorGradientLineRendererAffordanceReceiver_LineColorProperty);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColorGradientLineRendererAffordanceReceiver_LineColorProperty, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering", "ColorGradientLineRendererAffordanceReceiver/LineColorProperty");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.ColorGradientLineRendererAffordanceReceiver/LineColorProperty
struct CORDL_TYPE ColorGradientLineRendererAffordanceReceiver_LineColorProperty {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ColorGradientLineRendererAffordanceReceiver_LineColorProperty_Unwrapped
enum struct __ColorGradientLineRendererAffordanceReceiver_LineColorProperty_Unwrapped : int32_t {
__E_StartColor = static_cast<int32_t>(0x0),
__E_EndColor = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ColorGradientLineRendererAffordanceReceiver_LineColorProperty_Unwrapped () const noexcept {
return static_cast<__ColorGradientLineRendererAffordanceReceiver_LineColorProperty_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ColorGradientLineRendererAffordanceReceiver_LineColorProperty() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ColorGradientLineRendererAffordanceReceiver_LineColorProperty(int32_t  value__) noexcept;

/// @brief Field EndColor value: I32(1)
static ::GlobalNamespace::ColorGradientLineRendererAffordanceReceiver_LineColorProperty const EndColor;

/// @brief Field StartColor value: I32(0)
static ::GlobalNamespace::ColorGradientLineRendererAffordanceReceiver_LineColorProperty const StartColor;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11754};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorGradientLineRendererAffordanceReceiver_LineColorProperty, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ColorGradientLineRendererAffordanceReceiver_LineColorProperty) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

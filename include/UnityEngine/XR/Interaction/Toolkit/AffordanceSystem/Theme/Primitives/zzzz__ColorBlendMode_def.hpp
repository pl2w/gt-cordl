#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Primitives/ColorBlendMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorBlendMode)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
struct ColorBlendMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives", "ColorBlendMode");
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorBlendMode
struct CORDL_TYPE ColorBlendMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __ColorBlendMode_Unwrapped
enum struct __ColorBlendMode_Unwrapped : uint8_t {
__E_Solid = static_cast<uint8_t>(0x0u),
__E_Add = static_cast<uint8_t>(0x1u),
__E_Mix = static_cast<uint8_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ColorBlendMode_Unwrapped () const noexcept {
return static_cast<__ColorBlendMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ColorBlendMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr ColorBlendMode(uint8_t  value__) noexcept;

/// @brief Field Add value: U8(1)
static ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode const Add;

/// @brief Field Mix value: U8(2)
static ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode const Mix;

/// @brief Field Solid value: U8(0)
static ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode const Solid;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11708};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives

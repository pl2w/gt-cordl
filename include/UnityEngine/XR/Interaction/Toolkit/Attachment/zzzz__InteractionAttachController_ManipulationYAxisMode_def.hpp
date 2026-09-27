#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Attachment/InteractionAttachController_ManipulationYAxisMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InteractionAttachController_ManipulationYAxisMode)
// Forward declare root types
namespace GlobalNamespace {
struct InteractionAttachController_ManipulationYAxisMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode, "UnityEngine.XR.Interaction.Toolkit.Attachment", "InteractionAttachController/ManipulationYAxisMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Attachment.InteractionAttachController/ManipulationYAxisMode
struct CORDL_TYPE InteractionAttachController_ManipulationYAxisMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InteractionAttachController_ManipulationYAxisMode_Unwrapped
enum struct __InteractionAttachController_ManipulationYAxisMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_VerticalRotation = static_cast<int32_t>(0x1),
__E_Translate = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InteractionAttachController_ManipulationYAxisMode_Unwrapped () const noexcept {
return static_cast<__InteractionAttachController_ManipulationYAxisMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InteractionAttachController_ManipulationYAxisMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InteractionAttachController_ManipulationYAxisMode(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode const None;

/// @brief Field Translate value: I32(2)
static ::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode const Translate;

/// @brief Field VerticalRotation value: I32(1)
static ::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode const VerticalRotation;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11584};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

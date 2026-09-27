#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Attachment/InteractionAttachController_ManipulationXAxisMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InteractionAttachController_ManipulationXAxisMode)
// Forward declare root types
namespace GlobalNamespace {
struct InteractionAttachController_ManipulationXAxisMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode, "UnityEngine.XR.Interaction.Toolkit.Attachment", "InteractionAttachController/ManipulationXAxisMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Attachment.InteractionAttachController/ManipulationXAxisMode
struct CORDL_TYPE InteractionAttachController_ManipulationXAxisMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InteractionAttachController_ManipulationXAxisMode_Unwrapped
enum struct __InteractionAttachController_ManipulationXAxisMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_HorizontalRotation = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InteractionAttachController_ManipulationXAxisMode_Unwrapped () const noexcept {
return static_cast<__InteractionAttachController_ManipulationXAxisMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InteractionAttachController_ManipulationXAxisMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InteractionAttachController_ManipulationXAxisMode(int32_t  value__) noexcept;

/// @brief Field HorizontalRotation value: I32(1)
static ::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode const HorizontalRotation;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11583};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/InteractableFocusMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InteractableFocusMode)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
struct InteractableFocusMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode, "UnityEngine.XR.Interaction.Toolkit.Interactables", "InteractableFocusMode");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.InteractableFocusMode
struct CORDL_TYPE InteractableFocusMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InteractableFocusMode_Unwrapped
enum struct __InteractableFocusMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Single = static_cast<int32_t>(0x1),
__E_Multiple = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InteractableFocusMode_Unwrapped () const noexcept {
return static_cast<__InteractableFocusMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InteractableFocusMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InteractableFocusMode(int32_t  value__) noexcept;

/// @brief Field Multiple value: I32(2)
static ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode const Multiple;

/// @brief Field None value: I32(0)
static ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode const None;

/// @brief Field Single value: I32(1)
static ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode const Single;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11510};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactables

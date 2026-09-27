#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccessibilityState)
// Forward declare root types
namespace UnityEngine::Accessibility {
struct AccessibilityState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Accessibility::AccessibilityState);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityState, "UnityEngine.Accessibility", "AccessibilityState");
// [NativeHeader("Modules/Accessibility/Native/AccessibilityNodeData.h")]
// [Flags]
// Dependencies 
namespace UnityEngine::Accessibility {
// Is value type: true
// CS Name: UnityEngine.Accessibility.AccessibilityState
struct CORDL_TYPE AccessibilityState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint16_t;

/// @brief Nested struct __AccessibilityState_Unwrapped
enum struct __AccessibilityState_Unwrapped : uint16_t {
__E_None = static_cast<uint16_t>(0x0u),
__E_Disabled = static_cast<uint16_t>(0x1u),
__E_Selected = static_cast<uint16_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AccessibilityState_Unwrapped () const noexcept {
return static_cast<__AccessibilityState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint16_t () const noexcept {
return static_cast<uint16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
constexpr AccessibilityState(uint16_t  value__) noexcept;

/// @brief Field Disabled value: U16(1)
static ::UnityEngine::Accessibility::AccessibilityState const Disabled;

/// @brief Field None value: U16(0)
static ::UnityEngine::Accessibility::AccessibilityState const None;

/// @brief Field Selected value: U16(2)
static ::UnityEngine::Accessibility::AccessibilityState const Selected;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32527};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x0, size: 0x2, def value: None
 uint16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityState) == 0x2, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility

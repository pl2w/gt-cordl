#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractorActiveState_InteractorProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InteractorActiveState_InteractorProperty)
// Forward declare root types
namespace GlobalNamespace {
struct InteractorActiveState_InteractorProperty;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InteractorActiveState_InteractorProperty);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InteractorActiveState_InteractorProperty, "Oculus.Interaction", "InteractorActiveState/InteractorProperty");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.InteractorActiveState/InteractorProperty
struct CORDL_TYPE InteractorActiveState_InteractorProperty {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InteractorActiveState_InteractorProperty_Unwrapped
enum struct __InteractorActiveState_InteractorProperty_Unwrapped : int32_t {
__E_HasCandidate = static_cast<int32_t>(0x1),
__E_HasInteractable = static_cast<int32_t>(0x2),
__E_IsSelecting = static_cast<int32_t>(0x4),
__E_HasSelectedInteractable = static_cast<int32_t>(0x8),
__E_IsNormal = static_cast<int32_t>(0x10),
__E_IsHovering = static_cast<int32_t>(0x20),
__E_IsDisabled = static_cast<int32_t>(0x40),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InteractorActiveState_InteractorProperty_Unwrapped () const noexcept {
return static_cast<__InteractorActiveState_InteractorProperty_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InteractorActiveState_InteractorProperty() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InteractorActiveState_InteractorProperty(int32_t  value__) noexcept;

/// @brief Field HasCandidate value: I32(1)
static ::GlobalNamespace::InteractorActiveState_InteractorProperty const HasCandidate;

/// @brief Field HasInteractable value: I32(2)
static ::GlobalNamespace::InteractorActiveState_InteractorProperty const HasInteractable;

/// @brief Field HasSelectedInteractable value: I32(8)
static ::GlobalNamespace::InteractorActiveState_InteractorProperty const HasSelectedInteractable;

/// @brief Field IsDisabled value: I32(64)
static ::GlobalNamespace::InteractorActiveState_InteractorProperty const IsDisabled;

/// @brief Field IsHovering value: I32(32)
static ::GlobalNamespace::InteractorActiveState_InteractorProperty const IsHovering;

/// @brief Field IsNormal value: I32(16)
static ::GlobalNamespace::InteractorActiveState_InteractorProperty const IsNormal;

/// @brief Field IsSelecting value: I32(4)
static ::GlobalNamespace::InteractorActiveState_InteractorProperty const IsSelecting;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15787};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InteractorActiveState_InteractorProperty, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InteractorActiveState_InteractorProperty) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

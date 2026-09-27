#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrabGlow_GlowState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandGrabGlow_GlowState)
// Forward declare root types
namespace GlobalNamespace {
struct HandGrabGlow_GlowState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandGrabGlow_GlowState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandGrabGlow_GlowState, "Oculus.Interaction", "HandGrabGlow/GlowState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.HandGrabGlow/GlowState
struct CORDL_TYPE HandGrabGlow_GlowState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HandGrabGlow_GlowState_Unwrapped
enum struct __HandGrabGlow_GlowState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Hover = static_cast<int32_t>(0x1),
__E_Selected = static_cast<int32_t>(0x2),
__E_SelectedGlowOut = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HandGrabGlow_GlowState_Unwrapped () const noexcept {
return static_cast<__HandGrabGlow_GlowState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HandGrabGlow_GlowState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HandGrabGlow_GlowState(int32_t  value__) noexcept;

/// @brief Field Hover value: I32(1)
static ::GlobalNamespace::HandGrabGlow_GlowState const Hover;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::HandGrabGlow_GlowState const None;

/// @brief Field Selected value: I32(2)
static ::GlobalNamespace::HandGrabGlow_GlowState const Selected;

/// @brief Field SelectedGlowOut value: I32(3)
static ::GlobalNamespace::HandGrabGlow_GlowState const SelectedGlowOut;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15713};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandGrabGlow_GlowState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandGrabGlow_GlowState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

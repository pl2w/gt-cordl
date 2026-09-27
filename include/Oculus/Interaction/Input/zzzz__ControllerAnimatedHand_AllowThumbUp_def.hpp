#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ControllerAnimatedHand_AllowThumbUp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerAnimatedHand_AllowThumbUp)
// Forward declare root types
namespace GlobalNamespace {
struct ControllerAnimatedHand_AllowThumbUp;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ControllerAnimatedHand_AllowThumbUp);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ControllerAnimatedHand_AllowThumbUp, "Oculus.Interaction.Input", "ControllerAnimatedHand/AllowThumbUp");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Input.ControllerAnimatedHand/AllowThumbUp
struct CORDL_TYPE ControllerAnimatedHand_AllowThumbUp {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ControllerAnimatedHand_AllowThumbUp_Unwrapped
enum struct __ControllerAnimatedHand_AllowThumbUp_Unwrapped : int32_t {
__E_Always = static_cast<int32_t>(0x0),
__E_GripRequired = static_cast<int32_t>(0x1),
__E_TriggerAndGripRequired = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ControllerAnimatedHand_AllowThumbUp_Unwrapped () const noexcept {
return static_cast<__ControllerAnimatedHand_AllowThumbUp_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ControllerAnimatedHand_AllowThumbUp() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ControllerAnimatedHand_AllowThumbUp(int32_t  value__) noexcept;

/// @brief Field Always value: I32(0)
static ::GlobalNamespace::ControllerAnimatedHand_AllowThumbUp const Always;

/// @brief Field GripRequired value: I32(1)
static ::GlobalNamespace::ControllerAnimatedHand_AllowThumbUp const GripRequired;

/// @brief Field TriggerAndGripRequired value: I32(2)
static ::GlobalNamespace::ControllerAnimatedHand_AllowThumbUp const TriggerAndGripRequired;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16471};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ControllerAnimatedHand_AllowThumbUp, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ControllerAnimatedHand_AllowThumbUp) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

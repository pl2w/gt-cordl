#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/RCRemoteHoldable_RCInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RCRemoteHoldable_RCInput)
// Forward declare root types
namespace GlobalNamespace {
struct RCRemoteHoldable_RCInput;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RCRemoteHoldable_RCInput);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RCRemoteHoldable_RCInput, "GorillaTag.Cosmetics", "RCRemoteHoldable/RCInput");
// Dependencies UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.RCRemoteHoldable/RCInput
struct CORDL_TYPE RCRemoteHoldable_RCInput {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RCRemoteHoldable_RCInput() ;

// Ctor Parameters [CppParam { name: "joystick", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "trigger", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "buttons", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr RCRemoteHoldable_RCInput(::UnityEngine::Vector2  joystick, float_t  trigger, uint8_t  buttons) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4838};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field joystick, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2  joystick;

/// @brief Field trigger, offset: 0x8, size: 0x4, def value: None
 float_t  trigger;

/// @brief Field buttons, offset: 0xc, size: 0x1, def value: None
 uint8_t  buttons;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RCRemoteHoldable_RCInput, joystick) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCRemoteHoldable_RCInput, trigger) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCRemoteHoldable_RCInput, buttons) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RCRemoteHoldable_RCInput) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

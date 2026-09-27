#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/JoystickState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoystickState)
namespace GlobalNamespace {
struct JoystickState_Button;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct JoystickState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::JoystickState);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::LowLevel::JoystickState, "UnityEngine.InputSystem.LowLevel", "JoystickState");
// Dependencies UnityEngine.Vector2
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.JoystickState
struct CORDL_TYPE JoystickState {
public:
// Declarations
using Button = ::GlobalNamespace::JoystickState_Button;

 __declspec(property(get=get_format)) ::UnityEngine::InputSystem::Utilities::FourCC  format;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() ;

/// @brief Method get_format, addr 0xafedde4, size 0x30, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

/// @brief Method get_kFormat, addr 0xafeddb4, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_kFormat() ;

/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo() ;

// Ctor Parameters []
// @brief default ctor
constexpr JoystickState() ;

// Ctor Parameters [CppParam { name: "buttons", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "stick", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }]
constexpr JoystickState(int32_t  buttons, ::UnityEngine::Vector2  stick) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13725};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// [InputControl(name = "trigger", displayName = "Trigger", layout = "Button", usages = new[] { "PrimaryTrigger", "PrimaryAction", "Submit" }, bit = 4)]
/// @brief Field buttons, offset: 0x0, size: 0x4, def value: None
 int32_t  buttons;

/// [InputControl(displayName = "Stick", layout = "Stick", usage = "Primary2DMotion", processors = "stickDeadzone")]
/// @brief Field stick, offset: 0x4, size: 0x8, def value: None
 ::UnityEngine::Vector2  stick;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::JoystickState, buttons) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::JoystickState, stick) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::JoystickState) == 0xc, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel

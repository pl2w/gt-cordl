#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Users/InputUser_OngoingAccountSelection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUser_OngoingAccountSelection)
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputUser_OngoingAccountSelection;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputUser_OngoingAccountSelection);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputUser_OngoingAccountSelection, "UnityEngine.InputSystem.Users", "InputUser/OngoingAccountSelection");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct CORDL_TYPE InputUser_OngoingAccountSelection {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputUser_OngoingAccountSelection() ;

// Ctor Parameters [CppParam { name: "device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: None, comment: None }, CppParam { name: "userId", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputUser_OngoingAccountSelection(::UnityEngine::InputSystem::InputDevice*  device, uint32_t  userId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13578};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field device, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputDevice*  device;

/// @brief Field userId, offset: 0x8, size: 0x4, def value: None
 uint32_t  userId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputUser_OngoingAccountSelection, device) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_OngoingAccountSelection, userId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputUser_OngoingAccountSelection) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

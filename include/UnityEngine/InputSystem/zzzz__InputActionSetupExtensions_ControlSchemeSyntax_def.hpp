#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionSetupExtensions_ControlSchemeSyntax.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionSetupExtensions_ControlSchemeSyntax)
namespace GlobalNamespace {
struct DeviceRequirement_InputControlScheme_Flags;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionSetupExtensions_ControlSchemeSyntax;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionSetupExtensions_ControlSchemeSyntax);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionSetupExtensions_ControlSchemeSyntax, "UnityEngine.InputSystem", "InputActionSetupExtensions/ControlSchemeSyntax");
// Dependencies UnityEngine.InputSystem.InputControlScheme, UnityEngine.InputSystem.InputDevice
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct CORDL_TYPE InputActionSetupExtensions_ControlSchemeSyntax {
public:
// Declarations
/// @brief Method AddDeviceEntry, addr 0xaf28374, size 0x20c, virtual false, abstract: false, final false
inline void AddDeviceEntry(::StringW  controlPath, ::GlobalNamespace::DeviceRequirement_InputControlScheme_Flags  flags) ;

/// @brief Method DeviceTypeToControlPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevice>
requires(::cordl_internals::type_constraint<TDevice, ::UnityEngine::InputSystem::InputDevice*>)
inline ::StringW DeviceTypeToControlPath() ;

/// @brief Method Done, addr 0xaf26330, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputControlScheme Done() ;

/// @brief Method OrWithOptionalDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevice>
requires(::cordl_internals::type_constraint<TDevice, ::UnityEngine::InputSystem::InputDevice*>)
inline ::GlobalNamespace::InputActionSetupExtensions_ControlSchemeSyntax OrWithOptionalDevice() ;

/// @brief Method OrWithOptionalDevice, addr 0xaf2688c, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_ControlSchemeSyntax OrWithOptionalDevice(::StringW  controlPath) ;

/// @brief Method OrWithRequiredDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevice>
requires(::cordl_internals::type_constraint<TDevice, ::UnityEngine::InputSystem::InputDevice*>)
inline ::GlobalNamespace::InputActionSetupExtensions_ControlSchemeSyntax OrWithRequiredDevice() ;

/// @brief Method OrWithRequiredDevice, addr 0xaf267a0, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_ControlSchemeSyntax OrWithRequiredDevice(::StringW  controlPath) ;

/// @brief Method WithBindingGroup, addr 0xaf26208, size 0x128, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_ControlSchemeSyntax WithBindingGroup(::StringW  bindingGroup) ;

/// @brief Method WithOptionalDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevice>
requires(::cordl_internals::type_constraint<TDevice, ::UnityEngine::InputSystem::InputDevice*>)
inline ::GlobalNamespace::InputActionSetupExtensions_ControlSchemeSyntax WithOptionalDevice() ;

/// @brief Method WithOptionalDevice, addr 0xaf26544, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_ControlSchemeSyntax WithOptionalDevice(::StringW  controlPath) ;

/// @brief Method WithRequiredDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevice>
requires(::cordl_internals::type_constraint<TDevice, ::UnityEngine::InputSystem::InputDevice*>)
inline ::GlobalNamespace::InputActionSetupExtensions_ControlSchemeSyntax WithRequiredDevice() ;

/// @brief Method WithRequiredDevice, addr 0xaf26510, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionSetupExtensions_ControlSchemeSyntax WithRequiredDevice(::StringW  controlPath) ;

/// @brief Method .ctor, addr 0xaf25f90, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::InputActionAsset*  asset, int32_t  index) ;

/// @brief Method .ctor, addr 0xaf261c0, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::InputControlScheme  controlScheme) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputActionSetupExtensions_ControlSchemeSyntax() ;

// Ctor Parameters [CppParam { name: "m_Asset", ty: "::UnityW<::UnityEngine::InputSystem::InputActionAsset>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ControlSchemeIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ControlScheme", ty: "::UnityEngine::InputSystem::InputControlScheme", modifiers: "", def_value: None, comment: None }]
constexpr InputActionSetupExtensions_ControlSchemeSyntax(::UnityW<::UnityEngine::InputSystem::InputActionAsset>  m_Asset, int32_t  m_ControlSchemeIndex, ::UnityEngine::InputSystem::InputControlScheme  m_ControlScheme) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13378};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_Asset, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  m_Asset;

/// @brief Field m_ControlSchemeIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  m_ControlSchemeIndex;

/// @brief Field m_ControlScheme, offset: 0x10, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputControlScheme  m_ControlScheme;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionSetupExtensions_ControlSchemeSyntax, m_Asset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionSetupExtensions_ControlSchemeSyntax, m_ControlSchemeIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionSetupExtensions_ControlSchemeSyntax, m_ControlScheme) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionSetupExtensions_ControlSchemeSyntax) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

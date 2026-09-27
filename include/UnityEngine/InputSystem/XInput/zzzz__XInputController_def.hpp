#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XInput/XInputController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_DeviceFlags_def.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_DeviceSubType_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Gamepad_def.hpp"
CORDL_MODULE_EXPORT(XInputController)
namespace GlobalNamespace {
struct XInputController_Capabilities;
}
namespace GlobalNamespace {
struct XInputController_DeviceFlags;
}
namespace GlobalNamespace {
struct XInputController_DeviceSubType;
}
namespace GlobalNamespace {
struct XInputController_DeviceType;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XInput {
class XInputController;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::XInput::XInputController*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::XInput::XInputController*, "UnityEngine.InputSystem.XInput", "XInputController");
// [InputControlLayout(displayName = "Xbox Controller")]
// Dependencies UnityEngine.InputSystem.Gamepad, UnityEngine.InputSystem.XInput.XInputController::DeviceFlags, UnityEngine.InputSystem.XInput.XInputController::DeviceSubType
namespace UnityEngine::InputSystem::XInput {
// Is value type: false
// CS Name: UnityEngine.InputSystem.XInput.XInputController
class CORDL_TYPE XInputController : public ::UnityEngine::InputSystem::Gamepad {
public:
// Declarations
using Capabilities = ::GlobalNamespace::XInputController_Capabilities;

using DeviceFlags = ::GlobalNamespace::XInputController_DeviceFlags;

using DeviceSubType = ::GlobalNamespace::XInputController_DeviceSubType;

using DeviceType = ::GlobalNamespace::XInputController_DeviceType;

/// @brief Field <menu>k__BackingField, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get__menu_k__BackingField, put=__cordl_internal_set__menu_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _menu_k__BackingField;

/// @brief Field <view>k__BackingField, offset 0x210, size 0x8 
 __declspec(property(get=__cordl_internal_get__view_k__BackingField, put=__cordl_internal_set__view_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _view_k__BackingField;

 __declspec(property(get=get_flags)) ::GlobalNamespace::XInputController_DeviceFlags  flags;

/// @brief Field m_Flags, offset 0x220, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Flags, put=__cordl_internal_set_m_Flags)) ::GlobalNamespace::XInputController_DeviceFlags  m_Flags;

/// @brief Field m_HaveParsedCapabilities, offset 0x218, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HaveParsedCapabilities, put=__cordl_internal_set_m_HaveParsedCapabilities)) bool  m_HaveParsedCapabilities;

/// @brief Field m_SubType, offset 0x21c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SubType, put=__cordl_internal_set_m_SubType)) ::GlobalNamespace::XInputController_DeviceSubType  m_SubType;

/// [InputControl(name = "buttonSouth", displayName = "A")]
/// [InputControl(name = "buttonEast", displayName = "B")]
/// [InputControl(name = "buttonWest", displayName = "X")]
/// [InputControl(name = "buttonNorth", displayName = "Y")]
/// [InputControl(name = "leftShoulder", displayName = "Left Bumper", shortDisplayName = "LB")]
/// [InputControl(name = "rightShoulder", displayName = "Right Bumper", shortDisplayName = "RB")]
/// [InputControl(name = "leftTrigger", shortDisplayName = "LT")]
/// [InputControl(name = "rightTrigger", shortDisplayName = "RT")]
/// [InputControl(name = "start", displayName = "Menu", alias = "menu")]
/// @brief [InputControl(name = "select", displayName = "View", alias = "view")]
 __declspec(property(get=get_menu, put=set_menu)) ::UnityEngine::InputSystem::Controls::ButtonControl*  menu;

 __declspec(property(get=get_subType)) ::GlobalNamespace::XInputController_DeviceSubType  subType;

 __declspec(property(get=get_view, put=set_view)) ::UnityEngine::InputSystem::Controls::ButtonControl*  view;

/// @brief Method FinishSetup, addr 0xafcb92c, size 0x34, virtual true, abstract: false, final false
inline void FinishSetup() ;

static inline ::UnityEngine::InputSystem::XInput::XInputController* New_ctor() ;

/// @brief Method ParseCapabilities, addr 0xafcb898, size 0x70, virtual false, abstract: false, final false
inline void ParseCapabilities() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__menu_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__menu_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__view_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__view_k__BackingField() ;

constexpr ::GlobalNamespace::XInputController_DeviceFlags const& __cordl_internal_get_m_Flags() const;

constexpr ::GlobalNamespace::XInputController_DeviceFlags& __cordl_internal_get_m_Flags() ;

constexpr bool const& __cordl_internal_get_m_HaveParsedCapabilities() const;

constexpr bool& __cordl_internal_get_m_HaveParsedCapabilities() ;

constexpr ::GlobalNamespace::XInputController_DeviceSubType const& __cordl_internal_get_m_SubType() const;

constexpr ::GlobalNamespace::XInputController_DeviceSubType& __cordl_internal_get_m_SubType() ;

constexpr void __cordl_internal_set__menu_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__view_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set_m_Flags(::GlobalNamespace::XInputController_DeviceFlags  value) ;

constexpr void __cordl_internal_set_m_HaveParsedCapabilities(bool  value) ;

constexpr void __cordl_internal_set_m_SubType(::GlobalNamespace::XInputController_DeviceSubType  value) ;

/// @brief Method .ctor, addr 0xafcb960, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_flags, addr 0xafcb908, size 0x24, virtual false, abstract: false, final false
inline ::GlobalNamespace::XInputController_DeviceFlags get_flags() ;

/// [CompilerGenerated]
/// @brief Method get_menu, addr 0xafcb844, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_menu() ;

/// @brief Method get_subType, addr 0xafcb874, size 0x24, virtual false, abstract: false, final false
inline ::GlobalNamespace::XInputController_DeviceSubType get_subType() ;

/// [CompilerGenerated]
/// @brief Method get_view, addr 0xafcb85c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_view() ;

/// [CompilerGenerated]
/// @brief Method set_menu, addr 0xafcb84c, size 0x10, virtual false, abstract: false, final false
inline void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_view, addr 0xafcb864, size 0x10, virtual false, abstract: false, final false
inline void set_view(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XInputController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XInputController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XInputController(XInputController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XInputController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XInputController(XInputController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13572};

/// [CompilerGenerated]
/// @brief Field <menu>k__BackingField, offset: 0x208, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____menu_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <view>k__BackingField, offset: 0x210, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____view_k__BackingField;

/// @brief Field m_HaveParsedCapabilities, offset: 0x218, size: 0x1, def value: None
 bool  ___m_HaveParsedCapabilities;

/// @brief Field m_SubType, offset: 0x21c, size: 0x4, def value: None
 ::GlobalNamespace::XInputController_DeviceSubType  ___m_SubType;

/// @brief Field m_Flags, offset: 0x220, size: 0x4, def value: None
 ::GlobalNamespace::XInputController_DeviceFlags  ___m_Flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::XInput::XInputController, ____menu_k__BackingField) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XInput::XInputController, ____view_k__BackingField) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XInput::XInputController, ___m_HaveParsedCapabilities) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XInput::XInputController, ___m_SubType) == 0x21c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XInput::XInputController, ___m_Flags) == 0x220, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::XInput::XInputController) == 0x228, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::XInput

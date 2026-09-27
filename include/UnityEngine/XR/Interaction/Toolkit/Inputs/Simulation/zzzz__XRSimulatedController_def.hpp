#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/XRSimulatedController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRSimulatedController)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class XRSimulatedController;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRSimulatedController");
// [InputControlLayout(stateType = typeof(UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState), commonUsages = new[] { "LeftHand", "RightHand" }, isGenericTypeOfDevice = false, displayName = "XR Simulated Controller", updateBeforeRender = true)]
// [Preserve]
// Dependencies UnityEngine.InputSystem.XR.XRController
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController
class CORDL_TYPE XRSimulatedController : public ::UnityEngine::InputSystem::XR::XRController {
public:
// Declarations
/// @brief Field <batteryLevel>k__BackingField, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get__batteryLevel_k__BackingField, put=__cordl_internal_set__batteryLevel_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl*  _batteryLevel_k__BackingField;

/// @brief Field <gripButton>k__BackingField, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get__gripButton_k__BackingField, put=__cordl_internal_set__gripButton_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _gripButton_k__BackingField;

/// @brief Field <grip>k__BackingField, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get__grip_k__BackingField, put=__cordl_internal_set__grip_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl*  _grip_k__BackingField;

/// @brief Field <menuButton>k__BackingField, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get__menuButton_k__BackingField, put=__cordl_internal_set__menuButton_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _menuButton_k__BackingField;

/// @brief Field <primary2DAxisClick>k__BackingField, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get__primary2DAxisClick_k__BackingField, put=__cordl_internal_set__primary2DAxisClick_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _primary2DAxisClick_k__BackingField;

/// @brief Field <primary2DAxisTouch>k__BackingField, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get__primary2DAxisTouch_k__BackingField, put=__cordl_internal_set__primary2DAxisTouch_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _primary2DAxisTouch_k__BackingField;

/// @brief Field <primary2DAxis>k__BackingField, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get__primary2DAxis_k__BackingField, put=__cordl_internal_set__primary2DAxis_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector2Control*  _primary2DAxis_k__BackingField;

/// @brief Field <primaryButton>k__BackingField, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get__primaryButton_k__BackingField, put=__cordl_internal_set__primaryButton_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _primaryButton_k__BackingField;

/// @brief Field <primaryTouch>k__BackingField, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get__primaryTouch_k__BackingField, put=__cordl_internal_set__primaryTouch_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _primaryTouch_k__BackingField;

/// @brief Field <secondary2DAxisClick>k__BackingField, offset 0x210, size 0x8 
 __declspec(property(get=__cordl_internal_get__secondary2DAxisClick_k__BackingField, put=__cordl_internal_set__secondary2DAxisClick_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _secondary2DAxisClick_k__BackingField;

/// @brief Field <secondary2DAxisTouch>k__BackingField, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get__secondary2DAxisTouch_k__BackingField, put=__cordl_internal_set__secondary2DAxisTouch_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _secondary2DAxisTouch_k__BackingField;

/// @brief Field <secondary2DAxis>k__BackingField, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get__secondary2DAxis_k__BackingField, put=__cordl_internal_set__secondary2DAxis_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector2Control*  _secondary2DAxis_k__BackingField;

/// @brief Field <secondaryButton>k__BackingField, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get__secondaryButton_k__BackingField, put=__cordl_internal_set__secondaryButton_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _secondaryButton_k__BackingField;

/// @brief Field <secondaryTouch>k__BackingField, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get__secondaryTouch_k__BackingField, put=__cordl_internal_set__secondaryTouch_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _secondaryTouch_k__BackingField;

/// @brief Field <triggerButton>k__BackingField, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get__triggerButton_k__BackingField, put=__cordl_internal_set__triggerButton_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _triggerButton_k__BackingField;

/// @brief Field <trigger>k__BackingField, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get__trigger_k__BackingField, put=__cordl_internal_set__trigger_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl*  _trigger_k__BackingField;

/// @brief Field <userPresence>k__BackingField, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get__userPresence_k__BackingField, put=__cordl_internal_set__userPresence_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _userPresence_k__BackingField;

 __declspec(property(get=get_batteryLevel, put=set_batteryLevel)) ::UnityEngine::InputSystem::Controls::AxisControl*  batteryLevel;

 __declspec(property(get=get_grip, put=set_grip)) ::UnityEngine::InputSystem::Controls::AxisControl*  grip;

 __declspec(property(get=get_gripButton, put=set_gripButton)) ::UnityEngine::InputSystem::Controls::ButtonControl*  gripButton;

 __declspec(property(get=get_menuButton, put=set_menuButton)) ::UnityEngine::InputSystem::Controls::ButtonControl*  menuButton;

 __declspec(property(get=get_primary2DAxis, put=set_primary2DAxis)) ::UnityEngine::InputSystem::Controls::Vector2Control*  primary2DAxis;

 __declspec(property(get=get_primary2DAxisClick, put=set_primary2DAxisClick)) ::UnityEngine::InputSystem::Controls::ButtonControl*  primary2DAxisClick;

 __declspec(property(get=get_primary2DAxisTouch, put=set_primary2DAxisTouch)) ::UnityEngine::InputSystem::Controls::ButtonControl*  primary2DAxisTouch;

 __declspec(property(get=get_primaryButton, put=set_primaryButton)) ::UnityEngine::InputSystem::Controls::ButtonControl*  primaryButton;

 __declspec(property(get=get_primaryTouch, put=set_primaryTouch)) ::UnityEngine::InputSystem::Controls::ButtonControl*  primaryTouch;

 __declspec(property(get=get_secondary2DAxis, put=set_secondary2DAxis)) ::UnityEngine::InputSystem::Controls::Vector2Control*  secondary2DAxis;

 __declspec(property(get=get_secondary2DAxisClick, put=set_secondary2DAxisClick)) ::UnityEngine::InputSystem::Controls::ButtonControl*  secondary2DAxisClick;

 __declspec(property(get=get_secondary2DAxisTouch, put=set_secondary2DAxisTouch)) ::UnityEngine::InputSystem::Controls::ButtonControl*  secondary2DAxisTouch;

 __declspec(property(get=get_secondaryButton, put=set_secondaryButton)) ::UnityEngine::InputSystem::Controls::ButtonControl*  secondaryButton;

 __declspec(property(get=get_secondaryTouch, put=set_secondaryTouch)) ::UnityEngine::InputSystem::Controls::ButtonControl*  secondaryTouch;

 __declspec(property(get=get_trigger, put=set_trigger)) ::UnityEngine::InputSystem::Controls::AxisControl*  trigger;

 __declspec(property(get=get_triggerButton, put=set_triggerButton)) ::UnityEngine::InputSystem::Controls::ButtonControl*  triggerButton;

 __declspec(property(get=get_userPresence, put=set_userPresence)) ::UnityEngine::InputSystem::Controls::ButtonControl*  userPresence;

/// @brief Method ExecuteCommand, addr 0xb4c7f0c, size 0x90, virtual true, abstract: false, final false
inline int64_t ExecuteCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand*  commandPtr) ;

/// @brief Method FinishSetup, addr 0xb4c7b08, size 0x404, virtual true, abstract: false, final false
inline void FinishSetup() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController* New_ctor() ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__batteryLevel_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__batteryLevel_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__gripButton_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__gripButton_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__grip_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__grip_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__menuButton_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__menuButton_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__primary2DAxisClick_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__primary2DAxisClick_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__primary2DAxisTouch_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__primary2DAxisTouch_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& __cordl_internal_get__primary2DAxis_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__primary2DAxis_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__primaryButton_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__primaryButton_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__primaryTouch_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__primaryTouch_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__secondary2DAxisClick_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__secondary2DAxisClick_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__secondary2DAxisTouch_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__secondary2DAxisTouch_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& __cordl_internal_get__secondary2DAxis_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__secondary2DAxis_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__secondaryButton_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__secondaryButton_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__secondaryTouch_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__secondaryTouch_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__triggerButton_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__triggerButton_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__trigger_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__trigger_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__userPresence_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__userPresence_k__BackingField() ;

constexpr void __cordl_internal_set__batteryLevel_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

constexpr void __cordl_internal_set__gripButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

constexpr void __cordl_internal_set__menuButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__primary2DAxisClick_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__primary2DAxisTouch_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__primary2DAxis_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control*  value) ;

constexpr void __cordl_internal_set__primaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__primaryTouch_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__secondary2DAxisClick_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__secondary2DAxisTouch_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__secondary2DAxis_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control*  value) ;

constexpr void __cordl_internal_set__secondaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__secondaryTouch_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__triggerButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

constexpr void __cordl_internal_set__userPresence_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method .ctor, addr 0xb4c8008, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_batteryLevel, addr 0xb4c7ad8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* get_batteryLevel() ;

/// [CompilerGenerated]
/// @brief Method get_grip, addr 0xb4c79a0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* get_grip() ;

/// [CompilerGenerated]
/// @brief Method get_gripButton, addr 0xb4c7a30, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_gripButton() ;

/// [CompilerGenerated]
/// @brief Method get_menuButton, addr 0xb4c7a60, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_menuButton() ;

/// [CompilerGenerated]
/// @brief Method get_primary2DAxis, addr 0xb4c7970, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_primary2DAxis() ;

/// [CompilerGenerated]
/// @brief Method get_primary2DAxisClick, addr 0xb4c7a78, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_primary2DAxisClick() ;

/// [CompilerGenerated]
/// @brief Method get_primary2DAxisTouch, addr 0xb4c7a90, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_primary2DAxisTouch() ;

/// [CompilerGenerated]
/// @brief Method get_primaryButton, addr 0xb4c79d0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_primaryButton() ;

/// [CompilerGenerated]
/// @brief Method get_primaryTouch, addr 0xb4c79e8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_primaryTouch() ;

/// [CompilerGenerated]
/// @brief Method get_secondary2DAxis, addr 0xb4c79b8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_secondary2DAxis() ;

/// [CompilerGenerated]
/// @brief Method get_secondary2DAxisClick, addr 0xb4c7aa8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_secondary2DAxisClick() ;

/// [CompilerGenerated]
/// @brief Method get_secondary2DAxisTouch, addr 0xb4c7ac0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_secondary2DAxisTouch() ;

/// [CompilerGenerated]
/// @brief Method get_secondaryButton, addr 0xb4c7a00, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_secondaryButton() ;

/// [CompilerGenerated]
/// @brief Method get_secondaryTouch, addr 0xb4c7a18, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_secondaryTouch() ;

/// [CompilerGenerated]
/// @brief Method get_trigger, addr 0xb4c7988, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* get_trigger() ;

/// [CompilerGenerated]
/// @brief Method get_triggerButton, addr 0xb4c7a48, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerButton() ;

/// [CompilerGenerated]
/// @brief Method get_userPresence, addr 0xb4c7af0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_userPresence() ;

/// [CompilerGenerated]
/// @brief Method set_batteryLevel, addr 0xb4c7ae0, size 0x10, virtual false, abstract: false, final false
inline void set_batteryLevel(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_grip, addr 0xb4c79a8, size 0x10, virtual false, abstract: false, final false
inline void set_grip(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_gripButton, addr 0xb4c7a38, size 0x10, virtual false, abstract: false, final false
inline void set_gripButton(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_menuButton, addr 0xb4c7a68, size 0x10, virtual false, abstract: false, final false
inline void set_menuButton(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_primary2DAxis, addr 0xb4c7978, size 0x10, virtual false, abstract: false, final false
inline void set_primary2DAxis(::UnityEngine::InputSystem::Controls::Vector2Control*  value) ;

/// [CompilerGenerated]
/// @brief Method set_primary2DAxisClick, addr 0xb4c7a80, size 0x10, virtual false, abstract: false, final false
inline void set_primary2DAxisClick(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_primary2DAxisTouch, addr 0xb4c7a98, size 0x10, virtual false, abstract: false, final false
inline void set_primary2DAxisTouch(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_primaryButton, addr 0xb4c79d8, size 0x10, virtual false, abstract: false, final false
inline void set_primaryButton(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_primaryTouch, addr 0xb4c79f0, size 0x10, virtual false, abstract: false, final false
inline void set_primaryTouch(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_secondary2DAxis, addr 0xb4c79c0, size 0x10, virtual false, abstract: false, final false
inline void set_secondary2DAxis(::UnityEngine::InputSystem::Controls::Vector2Control*  value) ;

/// [CompilerGenerated]
/// @brief Method set_secondary2DAxisClick, addr 0xb4c7ab0, size 0x10, virtual false, abstract: false, final false
inline void set_secondary2DAxisClick(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_secondary2DAxisTouch, addr 0xb4c7ac8, size 0x10, virtual false, abstract: false, final false
inline void set_secondary2DAxisTouch(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_secondaryButton, addr 0xb4c7a08, size 0x10, virtual false, abstract: false, final false
inline void set_secondaryButton(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_secondaryTouch, addr 0xb4c7a20, size 0x10, virtual false, abstract: false, final false
inline void set_secondaryTouch(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_trigger, addr 0xb4c7990, size 0x10, virtual false, abstract: false, final false
inline void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_triggerButton, addr 0xb4c7a50, size 0x10, virtual false, abstract: false, final false
inline void set_triggerButton(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_userPresence, addr 0xb4c7af8, size 0x10, virtual false, abstract: false, final false
inline void set_userPresence(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRSimulatedController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRSimulatedController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRSimulatedController(XRSimulatedController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRSimulatedController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRSimulatedController(XRSimulatedController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11629};

/// [CompilerGenerated]
/// @brief Field <primary2DAxis>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::Vector2Control*  ____primary2DAxis_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <trigger>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::AxisControl*  ____trigger_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <grip>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::AxisControl*  ____grip_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <secondary2DAxis>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::Vector2Control*  ____secondary2DAxis_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <primaryButton>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____primaryButton_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <primaryTouch>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____primaryTouch_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <secondaryButton>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____secondaryButton_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <secondaryTouch>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____secondaryTouch_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <gripButton>k__BackingField, offset: 0x1e8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____gripButton_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <triggerButton>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____triggerButton_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <menuButton>k__BackingField, offset: 0x1f8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____menuButton_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <primary2DAxisClick>k__BackingField, offset: 0x200, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____primary2DAxisClick_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <primary2DAxisTouch>k__BackingField, offset: 0x208, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____primary2DAxisTouch_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <secondary2DAxisClick>k__BackingField, offset: 0x210, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____secondary2DAxisClick_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <secondary2DAxisTouch>k__BackingField, offset: 0x218, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____secondary2DAxisTouch_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <batteryLevel>k__BackingField, offset: 0x220, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::AxisControl*  ____batteryLevel_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <userPresence>k__BackingField, offset: 0x228, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____userPresence_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____primary2DAxis_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____trigger_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____grip_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____secondary2DAxis_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____primaryButton_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____primaryTouch_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____secondaryButton_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____secondaryTouch_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____gripButton_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____triggerButton_k__BackingField) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____menuButton_k__BackingField) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____primary2DAxisClick_k__BackingField) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____primary2DAxisTouch_k__BackingField) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____secondary2DAxisClick_k__BackingField) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____secondary2DAxisTouch_k__BackingField) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____batteryLevel_k__BackingField) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController, ____userPresence_k__BackingField) == 0x228, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController) == 0x230, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation

#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InputHelpers_Axis2D_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InputHelpers_Button_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseController_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRController)
namespace GlobalNamespace {
struct InputHelpers_Axis2D;
}
namespace GlobalNamespace {
struct InputHelpers_Button;
}
namespace UnityEngine::Experimental::XR::Interaction {
class BasePoseProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRControllerState;
}
namespace UnityEngine::XR {
struct InputDevice;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRController;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::XRController*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::XRController*, "UnityEngine.XR.Interaction.Toolkit", "XRController");
// [AddComponentMenu("/XR Controller (Device-based)", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.XRController.html")]
// [Obsolete("XRController has been deprecated in version 3.0.0. Its functionality has been distributed into different components.")]
// Dependencies UnityEngine.XR.InputDevice, UnityEngine.XR.Interaction.Toolkit.InputHelpers::Axis2D, UnityEngine.XR.Interaction.Toolkit.InputHelpers::Button, UnityEngine.XR.Interaction.Toolkit.XRBaseController, UnityEngine.XR.XRNode
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.XRController
class CORDL_TYPE XRController : public ::UnityEngine::XR::Interaction::Toolkit::XRBaseController {
public:
// Declarations
 __declspec(property(get=get_activateUsage, put=set_activateUsage)) ::GlobalNamespace::InputHelpers_Button  activateUsage;

 __declspec(property(get=get_axisToPressThreshold, put=set_axisToPressThreshold)) float_t  axisToPressThreshold;

 __declspec(property(get=get_controllerNode, put=set_controllerNode)) ::UnityEngine::XR::XRNode  controllerNode;

 __declspec(property(get=get_directionalAnchorRotation, put=set_directionalAnchorRotation)) ::GlobalNamespace::InputHelpers_Axis2D  directionalAnchorRotation;

 __declspec(property(get=get_inputDevice)) ::UnityEngine::XR::InputDevice  inputDevice;

/// @brief Field m_ActivateUsage, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ActivateUsage, put=__cordl_internal_set_m_ActivateUsage)) ::GlobalNamespace::InputHelpers_Button  m_ActivateUsage;

/// @brief Field m_AxisToPressThreshold, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AxisToPressThreshold, put=__cordl_internal_set_m_AxisToPressThreshold)) float_t  m_AxisToPressThreshold;

/// @brief Field m_ControllerNode, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ControllerNode, put=__cordl_internal_set_m_ControllerNode)) ::UnityEngine::XR::XRNode  m_ControllerNode;

/// @brief Field m_DirectionalAnchorRotation, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DirectionalAnchorRotation, put=__cordl_internal_set_m_DirectionalAnchorRotation)) ::GlobalNamespace::InputHelpers_Axis2D  m_DirectionalAnchorRotation;

/// @brief Field m_InputDevice, offset 0xe8, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_InputDevice, put=__cordl_internal_set_m_InputDevice)) ::UnityEngine::XR::InputDevice  m_InputDevice;

/// @brief Field m_InputDeviceControllerNode, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_InputDeviceControllerNode, put=__cordl_internal_set_m_InputDeviceControllerNode)) ::UnityEngine::XR::XRNode  m_InputDeviceControllerNode;

/// @brief Field m_MoveObjectIn, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MoveObjectIn, put=__cordl_internal_set_m_MoveObjectIn)) ::GlobalNamespace::InputHelpers_Button  m_MoveObjectIn;

/// @brief Field m_MoveObjectOut, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MoveObjectOut, put=__cordl_internal_set_m_MoveObjectOut)) ::GlobalNamespace::InputHelpers_Button  m_MoveObjectOut;

/// @brief Field m_PoseProvider, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PoseProvider, put=__cordl_internal_set_m_PoseProvider)) ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider>  m_PoseProvider;

/// @brief Field m_RotateAnchorLeft, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RotateAnchorLeft, put=__cordl_internal_set_m_RotateAnchorLeft)) ::GlobalNamespace::InputHelpers_Button  m_RotateAnchorLeft;

/// @brief Field m_RotateAnchorRight, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RotateAnchorRight, put=__cordl_internal_set_m_RotateAnchorRight)) ::GlobalNamespace::InputHelpers_Button  m_RotateAnchorRight;

/// @brief Field m_SelectUsage, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SelectUsage, put=__cordl_internal_set_m_SelectUsage)) ::GlobalNamespace::InputHelpers_Button  m_SelectUsage;

/// @brief Field m_UIPressUsage, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UIPressUsage, put=__cordl_internal_set_m_UIPressUsage)) ::GlobalNamespace::InputHelpers_Button  m_UIPressUsage;

 __declspec(property(get=get_moveObjectIn, put=set_moveObjectIn)) ::GlobalNamespace::InputHelpers_Button  moveObjectIn;

 __declspec(property(get=get_moveObjectOut, put=set_moveObjectOut)) ::GlobalNamespace::InputHelpers_Button  moveObjectOut;

 __declspec(property(get=get_poseProvider, put=set_poseProvider)) ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider>  poseProvider;

 __declspec(property(get=get_rotateObjectLeft, put=set_rotateObjectLeft)) ::GlobalNamespace::InputHelpers_Button  rotateObjectLeft;

 __declspec(property(get=get_rotateObjectRight, put=set_rotateObjectRight)) ::GlobalNamespace::InputHelpers_Button  rotateObjectRight;

 __declspec(property(get=get_selectUsage, put=set_selectUsage)) ::GlobalNamespace::InputHelpers_Button  selectUsage;

 __declspec(property(get=get_uiPressUsage, put=set_uiPressUsage)) ::GlobalNamespace::InputHelpers_Button  uiPressUsage;

/// @brief Method Awake, addr 0xb4012c4, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method IsPressed, addr 0xb40167c, size 0xa4, virtual true, abstract: false, final false
inline bool IsPressed(::GlobalNamespace::InputHelpers_Button  button) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::XRController* New_ctor() ;

/// @brief Method ReadValue, addr 0xb401720, size 0x8c, virtual true, abstract: false, final false
inline float_t ReadValue(::GlobalNamespace::InputHelpers_Button  button) ;

/// @brief Method SendHapticImpulse, addr 0xb4017ac, size 0x98, virtual true, abstract: false, final false
inline bool SendHapticImpulse(float_t  amplitude, float_t  duration) ;

/// @brief Method UpdateInput, addr 0xb401528, size 0x154, virtual true, abstract: false, final false
inline void UpdateInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  controllerState) ;

/// @brief Method UpdateTrackingInput, addr 0xb4012c8, size 0x260, virtual true, abstract: false, final false
inline void UpdateTrackingInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  controllerState) ;

constexpr ::GlobalNamespace::InputHelpers_Button const& __cordl_internal_get_m_ActivateUsage() const;

constexpr ::GlobalNamespace::InputHelpers_Button& __cordl_internal_get_m_ActivateUsage() ;

constexpr float_t const& __cordl_internal_get_m_AxisToPressThreshold() const;

constexpr float_t& __cordl_internal_get_m_AxisToPressThreshold() ;

constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get_m_ControllerNode() const;

constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get_m_ControllerNode() ;

constexpr ::GlobalNamespace::InputHelpers_Axis2D const& __cordl_internal_get_m_DirectionalAnchorRotation() const;

constexpr ::GlobalNamespace::InputHelpers_Axis2D& __cordl_internal_get_m_DirectionalAnchorRotation() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get_m_InputDevice() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get_m_InputDevice() ;

constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get_m_InputDeviceControllerNode() const;

constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get_m_InputDeviceControllerNode() ;

constexpr ::GlobalNamespace::InputHelpers_Button const& __cordl_internal_get_m_MoveObjectIn() const;

constexpr ::GlobalNamespace::InputHelpers_Button& __cordl_internal_get_m_MoveObjectIn() ;

constexpr ::GlobalNamespace::InputHelpers_Button const& __cordl_internal_get_m_MoveObjectOut() const;

constexpr ::GlobalNamespace::InputHelpers_Button& __cordl_internal_get_m_MoveObjectOut() ;

constexpr ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> const& __cordl_internal_get_m_PoseProvider() const;

constexpr ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider>& __cordl_internal_get_m_PoseProvider() ;

constexpr ::GlobalNamespace::InputHelpers_Button const& __cordl_internal_get_m_RotateAnchorLeft() const;

constexpr ::GlobalNamespace::InputHelpers_Button& __cordl_internal_get_m_RotateAnchorLeft() ;

constexpr ::GlobalNamespace::InputHelpers_Button const& __cordl_internal_get_m_RotateAnchorRight() const;

constexpr ::GlobalNamespace::InputHelpers_Button& __cordl_internal_get_m_RotateAnchorRight() ;

constexpr ::GlobalNamespace::InputHelpers_Button const& __cordl_internal_get_m_SelectUsage() const;

constexpr ::GlobalNamespace::InputHelpers_Button& __cordl_internal_get_m_SelectUsage() ;

constexpr ::GlobalNamespace::InputHelpers_Button const& __cordl_internal_get_m_UIPressUsage() const;

constexpr ::GlobalNamespace::InputHelpers_Button& __cordl_internal_get_m_UIPressUsage() ;

constexpr void __cordl_internal_set_m_ActivateUsage(::GlobalNamespace::InputHelpers_Button  value) ;

constexpr void __cordl_internal_set_m_AxisToPressThreshold(float_t  value) ;

constexpr void __cordl_internal_set_m_ControllerNode(::UnityEngine::XR::XRNode  value) ;

constexpr void __cordl_internal_set_m_DirectionalAnchorRotation(::GlobalNamespace::InputHelpers_Axis2D  value) ;

constexpr void __cordl_internal_set_m_InputDevice(::UnityEngine::XR::InputDevice  value) ;

constexpr void __cordl_internal_set_m_InputDeviceControllerNode(::UnityEngine::XR::XRNode  value) ;

constexpr void __cordl_internal_set_m_MoveObjectIn(::GlobalNamespace::InputHelpers_Button  value) ;

constexpr void __cordl_internal_set_m_MoveObjectOut(::GlobalNamespace::InputHelpers_Button  value) ;

constexpr void __cordl_internal_set_m_PoseProvider(::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider>  value) ;

constexpr void __cordl_internal_set_m_RotateAnchorLeft(::GlobalNamespace::InputHelpers_Button  value) ;

constexpr void __cordl_internal_set_m_RotateAnchorRight(::GlobalNamespace::InputHelpers_Button  value) ;

constexpr void __cordl_internal_set_m_SelectUsage(::GlobalNamespace::InputHelpers_Button  value) ;

constexpr void __cordl_internal_set_m_UIPressUsage(::GlobalNamespace::InputHelpers_Button  value) ;

/// @brief Method .ctor, addr 0xb401844, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_activateUsage, addr 0xb4011e8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputHelpers_Button get_activateUsage() ;

/// @brief Method get_axisToPressThreshold, addr 0xb401208, size 0x8, virtual false, abstract: false, final false
inline float_t get_axisToPressThreshold() ;

/// @brief Method get_controllerNode, addr 0xb4011c8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::XRNode get_controllerNode() ;

/// @brief Method get_directionalAnchorRotation, addr 0xb401258, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputHelpers_Axis2D get_directionalAnchorRotation() ;

/// @brief Method get_inputDevice, addr 0xb401278, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::XR::InputDevice get_inputDevice() ;

/// @brief Method get_moveObjectIn, addr 0xb401238, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputHelpers_Button get_moveObjectIn() ;

/// @brief Method get_moveObjectOut, addr 0xb401248, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputHelpers_Button get_moveObjectOut() ;

/// @brief Method get_poseProvider, addr 0xb401268, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> get_poseProvider() ;

/// @brief Method get_rotateObjectLeft, addr 0xb401218, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputHelpers_Button get_rotateObjectLeft() ;

/// @brief Method get_rotateObjectRight, addr 0xb401228, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputHelpers_Button get_rotateObjectRight() ;

/// @brief Method get_selectUsage, addr 0xb4011d8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputHelpers_Button get_selectUsage() ;

/// @brief Method get_uiPressUsage, addr 0xb4011f8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputHelpers_Button get_uiPressUsage() ;

/// @brief Method set_activateUsage, addr 0xb4011f0, size 0x8, virtual false, abstract: false, final false
inline void set_activateUsage(::GlobalNamespace::InputHelpers_Button  value) ;

/// @brief Method set_axisToPressThreshold, addr 0xb401210, size 0x8, virtual false, abstract: false, final false
inline void set_axisToPressThreshold(float_t  value) ;

/// @brief Method set_controllerNode, addr 0xb4011d0, size 0x8, virtual false, abstract: false, final false
inline void set_controllerNode(::UnityEngine::XR::XRNode  value) ;

/// @brief Method set_directionalAnchorRotation, addr 0xb401260, size 0x8, virtual false, abstract: false, final false
inline void set_directionalAnchorRotation(::GlobalNamespace::InputHelpers_Axis2D  value) ;

/// @brief Method set_moveObjectIn, addr 0xb401240, size 0x8, virtual false, abstract: false, final false
inline void set_moveObjectIn(::GlobalNamespace::InputHelpers_Button  value) ;

/// @brief Method set_moveObjectOut, addr 0xb401250, size 0x8, virtual false, abstract: false, final false
inline void set_moveObjectOut(::GlobalNamespace::InputHelpers_Button  value) ;

/// @brief Method set_poseProvider, addr 0xb401270, size 0x8, virtual false, abstract: false, final false
inline void set_poseProvider(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*  value) ;

/// @brief Method set_rotateObjectLeft, addr 0xb401220, size 0x8, virtual false, abstract: false, final false
inline void set_rotateObjectLeft(::GlobalNamespace::InputHelpers_Button  value) ;

/// @brief Method set_rotateObjectRight, addr 0xb401230, size 0x8, virtual false, abstract: false, final false
inline void set_rotateObjectRight(::GlobalNamespace::InputHelpers_Button  value) ;

/// @brief Method set_selectUsage, addr 0xb4011e0, size 0x8, virtual false, abstract: false, final false
inline void set_selectUsage(::GlobalNamespace::InputHelpers_Button  value) ;

/// @brief Method set_uiPressUsage, addr 0xb401200, size 0x8, virtual false, abstract: false, final false
inline void set_uiPressUsage(::GlobalNamespace::InputHelpers_Button  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRController(XRController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRController(XRController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11070};

/// [SerializeField]
/// @brief Field m_ControllerNode, offset: 0xb0, size: 0x4, def value: None
 ::UnityEngine::XR::XRNode  ___m_ControllerNode;

/// @brief Field m_InputDeviceControllerNode, offset: 0xb4, size: 0x4, def value: None
 ::UnityEngine::XR::XRNode  ___m_InputDeviceControllerNode;

/// [SerializeField]
/// @brief Field m_SelectUsage, offset: 0xb8, size: 0x4, def value: None
 ::GlobalNamespace::InputHelpers_Button  ___m_SelectUsage;

/// [SerializeField]
/// @brief Field m_ActivateUsage, offset: 0xbc, size: 0x4, def value: None
 ::GlobalNamespace::InputHelpers_Button  ___m_ActivateUsage;

/// [SerializeField]
/// @brief Field m_UIPressUsage, offset: 0xc0, size: 0x4, def value: None
 ::GlobalNamespace::InputHelpers_Button  ___m_UIPressUsage;

/// [SerializeField]
/// @brief Field m_AxisToPressThreshold, offset: 0xc4, size: 0x4, def value: None
 float_t  ___m_AxisToPressThreshold;

/// [SerializeField]
/// @brief Field m_RotateAnchorLeft, offset: 0xc8, size: 0x4, def value: None
 ::GlobalNamespace::InputHelpers_Button  ___m_RotateAnchorLeft;

/// [SerializeField]
/// @brief Field m_RotateAnchorRight, offset: 0xcc, size: 0x4, def value: None
 ::GlobalNamespace::InputHelpers_Button  ___m_RotateAnchorRight;

/// [SerializeField]
/// @brief Field m_MoveObjectIn, offset: 0xd0, size: 0x4, def value: None
 ::GlobalNamespace::InputHelpers_Button  ___m_MoveObjectIn;

/// [SerializeField]
/// @brief Field m_MoveObjectOut, offset: 0xd4, size: 0x4, def value: None
 ::GlobalNamespace::InputHelpers_Button  ___m_MoveObjectOut;

/// [SerializeField]
/// @brief Field m_DirectionalAnchorRotation, offset: 0xd8, size: 0x4, def value: None
 ::GlobalNamespace::InputHelpers_Axis2D  ___m_DirectionalAnchorRotation;

/// [SerializeField]
/// @brief Field m_PoseProvider, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider>  ___m_PoseProvider;

/// @brief Field m_InputDevice, offset: 0xe8, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ___m_InputDevice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_ControllerNode) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_InputDeviceControllerNode) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_SelectUsage) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_ActivateUsage) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_UIPressUsage) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_AxisToPressThreshold) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_RotateAnchorLeft) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_RotateAnchorRight) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_MoveObjectIn) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_MoveObjectOut) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_DirectionalAnchorRotation) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_PoseProvider) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRController, ___m_InputDevice) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRController) == 0xf8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit

#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRControllerHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRControllerHelper_ControllerType_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_ControllerInHandState_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Controller_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_InputDeviceShowState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRControllerHelper)
namespace GlobalNamespace {
struct OVRControllerHelper_ControllerType;
}
namespace GlobalNamespace {
struct OVRInputRayData;
}
namespace GlobalNamespace {
struct OVRPlugin_Hand;
}
namespace GlobalNamespace {
class OVRRayHelper;
}
namespace UnityEngine::EventSystems {
class OVRInputModule_InputSource;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRControllerHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRControllerHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRControllerHelper*, "", "OVRControllerHelper");
// [HelpURL("https://developer.oculus.com/documentation/unity/controller-animations/")]
// Dependencies OVRControllerHelper::ControllerType, OVRInput::Controller, OVRInput::ControllerInHandState, OVRInput::InputDeviceShowState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRControllerHelper
class CORDL_TYPE OVRControllerHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ControllerType = ::GlobalNamespace::OVRControllerHelper_ControllerType;

/// @brief Field RayHelper, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_RayHelper, put=__cordl_internal_set_RayHelper)) ::UnityW<::GlobalNamespace::OVRRayHelper>  RayHelper;

/// @brief Field activeControllerType, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_activeControllerType, put=__cordl_internal_set_activeControllerType)) ::GlobalNamespace::OVRControllerHelper_ControllerType  activeControllerType;

/// @brief Field m_activeController, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_activeController, put=__cordl_internal_set_m_activeController)) ::UnityW<::UnityEngine::GameObject>  m_activeController;

/// @brief Field m_animator, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_animator, put=__cordl_internal_set_m_animator)) ::UnityW<::UnityEngine::Animator>  m_animator;

/// @brief Field m_controller, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_controller, put=__cordl_internal_set_m_controller)) ::GlobalNamespace::OVRInput_Controller  m_controller;

/// @brief Field m_controllerModelsInitialized, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_controllerModelsInitialized, put=__cordl_internal_set_m_controllerModelsInitialized)) bool  m_controllerModelsInitialized;

/// @brief Field m_hasInputFocus, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_hasInputFocus, put=__cordl_internal_set_m_hasInputFocus)) bool  m_hasInputFocus;

/// @brief Field m_hasInputFocusPrev, offset 0x9a, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_hasInputFocusPrev, put=__cordl_internal_set_m_hasInputFocusPrev)) bool  m_hasInputFocusPrev;

/// @brief Field m_isActive, offset 0x9b, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_isActive, put=__cordl_internal_set_m_isActive)) bool  m_isActive;

/// @brief Field m_modelMetaTouchPlusLeftController, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_modelMetaTouchPlusLeftController, put=__cordl_internal_set_m_modelMetaTouchPlusLeftController)) ::UnityW<::UnityEngine::GameObject>  m_modelMetaTouchPlusLeftController;

/// @brief Field m_modelMetaTouchPlusRightController, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_modelMetaTouchPlusRightController, put=__cordl_internal_set_m_modelMetaTouchPlusRightController)) ::UnityW<::UnityEngine::GameObject>  m_modelMetaTouchPlusRightController;

/// @brief Field m_modelMetaTouchProLeftController, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_modelMetaTouchProLeftController, put=__cordl_internal_set_m_modelMetaTouchProLeftController)) ::UnityW<::UnityEngine::GameObject>  m_modelMetaTouchProLeftController;

/// @brief Field m_modelMetaTouchProRightController, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_modelMetaTouchProRightController, put=__cordl_internal_set_m_modelMetaTouchProRightController)) ::UnityW<::UnityEngine::GameObject>  m_modelMetaTouchProRightController;

/// @brief Field m_modelOculusTouchQuest2LeftController, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_modelOculusTouchQuest2LeftController, put=__cordl_internal_set_m_modelOculusTouchQuest2LeftController)) ::UnityW<::UnityEngine::GameObject>  m_modelOculusTouchQuest2LeftController;

/// @brief Field m_modelOculusTouchQuest2RightController, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_modelOculusTouchQuest2RightController, put=__cordl_internal_set_m_modelOculusTouchQuest2RightController)) ::UnityW<::UnityEngine::GameObject>  m_modelOculusTouchQuest2RightController;

/// @brief Field m_modelOculusTouchQuestAndRiftSLeftController, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_modelOculusTouchQuestAndRiftSLeftController, put=__cordl_internal_set_m_modelOculusTouchQuestAndRiftSLeftController)) ::UnityW<::UnityEngine::GameObject>  m_modelOculusTouchQuestAndRiftSLeftController;

/// @brief Field m_modelOculusTouchQuestAndRiftSRightController, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_modelOculusTouchQuestAndRiftSRightController, put=__cordl_internal_set_m_modelOculusTouchQuestAndRiftSRightController)) ::UnityW<::UnityEngine::GameObject>  m_modelOculusTouchQuestAndRiftSRightController;

/// @brief Field m_modelOculusTouchRiftLeftController, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_modelOculusTouchRiftLeftController, put=__cordl_internal_set_m_modelOculusTouchRiftLeftController)) ::UnityW<::UnityEngine::GameObject>  m_modelOculusTouchRiftLeftController;

/// @brief Field m_modelOculusTouchRiftRightController, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_modelOculusTouchRiftRightController, put=__cordl_internal_set_m_modelOculusTouchRiftRightController)) ::UnityW<::UnityEngine::GameObject>  m_modelOculusTouchRiftRightController;

/// @brief Field m_prevControllerConnected, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_prevControllerConnected, put=__cordl_internal_set_m_prevControllerConnected)) bool  m_prevControllerConnected;

/// @brief Field m_prevControllerConnectedCached, offset 0xa1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_prevControllerConnectedCached, put=__cordl_internal_set_m_prevControllerConnectedCached)) bool  m_prevControllerConnectedCached;

/// @brief Field m_prevControllerInHandState, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_prevControllerInHandState, put=__cordl_internal_set_m_prevControllerInHandState)) ::GlobalNamespace::OVRInput_ControllerInHandState  m_prevControllerInHandState;

/// @brief Field m_showState, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_showState, put=__cordl_internal_set_m_showState)) ::GlobalNamespace::OVRInput_InputDeviceShowState  m_showState;

/// @brief Field showWhenHandsArePoweredByNaturalControllerPoses, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_showWhenHandsArePoweredByNaturalControllerPoses, put=__cordl_internal_set_showWhenHandsArePoweredByNaturalControllerPoses)) bool  showWhenHandsArePoweredByNaturalControllerPoses;

/// @brief Convert operator to "::UnityEngine::EventSystems::OVRInputModule_InputSource"
constexpr operator  ::UnityEngine::EventSystems::OVRInputModule_InputSource*() noexcept;

/// @brief Method GetHand, addr 0xa65a590, size 0x10, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRPlugin_Hand GetHand() ;

/// @brief Method GetPointerRayTransform, addr 0xa65a524, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> GetPointerRayTransform() ;

/// @brief Method InitializeControllerModels, addr 0xa6591e8, size 0x4e8, virtual false, abstract: false, final false
inline void InitializeControllerModels() ;

/// @brief Method InputFocusAquired, addr 0xa65a450, size 0xc, virtual false, abstract: false, final false
inline void InputFocusAquired() ;

/// @brief Method InputFocusLost, addr 0xa65a45c, size 0x8, virtual false, abstract: false, final false
inline void InputFocusLost() ;

/// @brief Method IsActive, addr 0xa65a588, size 0x8, virtual true, abstract: false, final true
inline bool IsActive() ;

/// @brief Method IsPressed, addr 0xa65a464, size 0x60, virtual true, abstract: false, final true
inline bool IsPressed() ;

/// @brief Method IsReleased, addr 0xa65a4c4, size 0x60, virtual true, abstract: false, final true
inline bool IsReleased() ;

/// @brief Method IsValid, addr 0xa65a52c, size 0x5c, virtual true, abstract: false, final true
inline bool IsValid() ;

static inline ::GlobalNamespace::OVRControllerHelper* New_ctor() ;

/// @brief Method OnDisable, addr 0xa6597a4, size 0xd4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa6596d0, size 0xd4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSceneChanged, addr 0xa659878, size 0x58, virtual false, abstract: false, final false
inline void OnSceneChanged(::UnityEngine::SceneManagement::Scene  unloading, ::UnityEngine::SceneManagement::Scene  loading) ;

/// @brief Method Start, addr 0xa659178, size 0x70, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa6598d0, size 0xb80, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdatePointerRay, addr 0xa65a5a0, size 0xf4, virtual true, abstract: false, final true
inline void UpdatePointerRay(::GlobalNamespace::OVRInputRayData  rayData) ;

constexpr ::UnityW<::GlobalNamespace::OVRRayHelper> const& __cordl_internal_get_RayHelper() const;

constexpr ::UnityW<::GlobalNamespace::OVRRayHelper>& __cordl_internal_get_RayHelper() ;

constexpr ::GlobalNamespace::OVRControllerHelper_ControllerType const& __cordl_internal_get_activeControllerType() const;

constexpr ::GlobalNamespace::OVRControllerHelper_ControllerType& __cordl_internal_get_activeControllerType() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_activeController() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_activeController() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_m_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_m_animator() ;

constexpr ::GlobalNamespace::OVRInput_Controller const& __cordl_internal_get_m_controller() const;

constexpr ::GlobalNamespace::OVRInput_Controller& __cordl_internal_get_m_controller() ;

constexpr bool const& __cordl_internal_get_m_controllerModelsInitialized() const;

constexpr bool& __cordl_internal_get_m_controllerModelsInitialized() ;

constexpr bool const& __cordl_internal_get_m_hasInputFocus() const;

constexpr bool& __cordl_internal_get_m_hasInputFocus() ;

constexpr bool const& __cordl_internal_get_m_hasInputFocusPrev() const;

constexpr bool& __cordl_internal_get_m_hasInputFocusPrev() ;

constexpr bool const& __cordl_internal_get_m_isActive() const;

constexpr bool& __cordl_internal_get_m_isActive() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_modelMetaTouchPlusLeftController() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_modelMetaTouchPlusLeftController() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_modelMetaTouchPlusRightController() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_modelMetaTouchPlusRightController() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_modelMetaTouchProLeftController() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_modelMetaTouchProLeftController() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_modelMetaTouchProRightController() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_modelMetaTouchProRightController() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_modelOculusTouchQuest2LeftController() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_modelOculusTouchQuest2LeftController() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_modelOculusTouchQuest2RightController() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_modelOculusTouchQuest2RightController() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_modelOculusTouchQuestAndRiftSLeftController() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_modelOculusTouchQuestAndRiftSLeftController() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_modelOculusTouchQuestAndRiftSRightController() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_modelOculusTouchQuestAndRiftSRightController() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_modelOculusTouchRiftLeftController() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_modelOculusTouchRiftLeftController() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_modelOculusTouchRiftRightController() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_modelOculusTouchRiftRightController() ;

constexpr bool const& __cordl_internal_get_m_prevControllerConnected() const;

constexpr bool& __cordl_internal_get_m_prevControllerConnected() ;

constexpr bool const& __cordl_internal_get_m_prevControllerConnectedCached() const;

constexpr bool& __cordl_internal_get_m_prevControllerConnectedCached() ;

constexpr ::GlobalNamespace::OVRInput_ControllerInHandState const& __cordl_internal_get_m_prevControllerInHandState() const;

constexpr ::GlobalNamespace::OVRInput_ControllerInHandState& __cordl_internal_get_m_prevControllerInHandState() ;

constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState const& __cordl_internal_get_m_showState() const;

constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState& __cordl_internal_get_m_showState() ;

constexpr bool const& __cordl_internal_get_showWhenHandsArePoweredByNaturalControllerPoses() const;

constexpr bool& __cordl_internal_get_showWhenHandsArePoweredByNaturalControllerPoses() ;

constexpr void __cordl_internal_set_RayHelper(::UnityW<::GlobalNamespace::OVRRayHelper>  value) ;

constexpr void __cordl_internal_set_activeControllerType(::GlobalNamespace::OVRControllerHelper_ControllerType  value) ;

constexpr void __cordl_internal_set_m_activeController(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_m_controller(::GlobalNamespace::OVRInput_Controller  value) ;

constexpr void __cordl_internal_set_m_controllerModelsInitialized(bool  value) ;

constexpr void __cordl_internal_set_m_hasInputFocus(bool  value) ;

constexpr void __cordl_internal_set_m_hasInputFocusPrev(bool  value) ;

constexpr void __cordl_internal_set_m_isActive(bool  value) ;

constexpr void __cordl_internal_set_m_modelMetaTouchPlusLeftController(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_modelMetaTouchPlusRightController(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_modelMetaTouchProLeftController(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_modelMetaTouchProRightController(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_modelOculusTouchQuest2LeftController(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_modelOculusTouchQuest2RightController(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_modelOculusTouchQuestAndRiftSLeftController(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_modelOculusTouchQuestAndRiftSRightController(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_modelOculusTouchRiftLeftController(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_modelOculusTouchRiftRightController(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_prevControllerConnected(bool  value) ;

constexpr void __cordl_internal_set_m_prevControllerConnectedCached(bool  value) ;

constexpr void __cordl_internal_set_m_prevControllerInHandState(::GlobalNamespace::OVRInput_ControllerInHandState  value) ;

constexpr void __cordl_internal_set_m_showState(::GlobalNamespace::OVRInput_InputDeviceShowState  value) ;

constexpr void __cordl_internal_set_showWhenHandsArePoweredByNaturalControllerPoses(bool  value) ;

/// @brief Method .ctor, addr 0xa65a694, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::EventSystems::OVRInputModule_InputSource"
constexpr ::UnityEngine::EventSystems::OVRInputModule_InputSource* i___UnityEngine__EventSystems__OVRInputModule_InputSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRControllerHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRControllerHelper(OVRControllerHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRControllerHelper(OVRControllerHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12596};

/// @brief Field m_modelOculusTouchQuestAndRiftSLeftController, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_modelOculusTouchQuestAndRiftSLeftController;

/// @brief Field m_modelOculusTouchQuestAndRiftSRightController, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_modelOculusTouchQuestAndRiftSRightController;

/// @brief Field m_modelOculusTouchRiftLeftController, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_modelOculusTouchRiftLeftController;

/// @brief Field m_modelOculusTouchRiftRightController, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_modelOculusTouchRiftRightController;

/// @brief Field m_modelOculusTouchQuest2LeftController, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_modelOculusTouchQuest2LeftController;

/// @brief Field m_modelOculusTouchQuest2RightController, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_modelOculusTouchQuest2RightController;

/// @brief Field m_modelMetaTouchProLeftController, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_modelMetaTouchProLeftController;

/// @brief Field m_modelMetaTouchProRightController, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_modelMetaTouchProRightController;

/// @brief Field m_modelMetaTouchPlusLeftController, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_modelMetaTouchPlusLeftController;

/// @brief Field m_modelMetaTouchPlusRightController, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_modelMetaTouchPlusRightController;

/// @brief Field m_controller, offset: 0x70, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Controller  ___m_controller;

/// @brief Field m_showState, offset: 0x74, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_InputDeviceShowState  ___m_showState;

/// @brief Field showWhenHandsArePoweredByNaturalControllerPoses, offset: 0x78, size: 0x1, def value: None
 bool  ___showWhenHandsArePoweredByNaturalControllerPoses;

/// @brief Field m_animator, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___m_animator;

/// @brief Field RayHelper, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRRayHelper>  ___RayHelper;

/// @brief Field m_activeController, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_activeController;

/// @brief Field m_controllerModelsInitialized, offset: 0x98, size: 0x1, def value: None
 bool  ___m_controllerModelsInitialized;

/// @brief Field m_hasInputFocus, offset: 0x99, size: 0x1, def value: None
 bool  ___m_hasInputFocus;

/// @brief Field m_hasInputFocusPrev, offset: 0x9a, size: 0x1, def value: None
 bool  ___m_hasInputFocusPrev;

/// @brief Field m_isActive, offset: 0x9b, size: 0x1, def value: None
 bool  ___m_isActive;

/// @brief Field activeControllerType, offset: 0x9c, size: 0x4, def value: None
 ::GlobalNamespace::OVRControllerHelper_ControllerType  ___activeControllerType;

/// @brief Field m_prevControllerConnected, offset: 0xa0, size: 0x1, def value: None
 bool  ___m_prevControllerConnected;

/// @brief Field m_prevControllerConnectedCached, offset: 0xa1, size: 0x1, def value: None
 bool  ___m_prevControllerConnectedCached;

/// @brief Field m_prevControllerInHandState, offset: 0xa4, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_ControllerInHandState  ___m_prevControllerInHandState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelOculusTouchQuestAndRiftSLeftController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelOculusTouchQuestAndRiftSRightController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelOculusTouchRiftLeftController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelOculusTouchRiftRightController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelOculusTouchQuest2LeftController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelOculusTouchQuest2RightController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelMetaTouchProLeftController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelMetaTouchProRightController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelMetaTouchPlusLeftController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelMetaTouchPlusRightController) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_controller) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_showState) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___showWhenHandsArePoweredByNaturalControllerPoses) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_animator) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___RayHelper) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_activeController) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_controllerModelsInitialized) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_hasInputFocus) == 0x99, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_hasInputFocusPrev) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_isActive) == 0x9b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___activeControllerType) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_prevControllerConnected) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_prevControllerConnectedCached) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_prevControllerInHandState) == 0xa4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRControllerHelper) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace

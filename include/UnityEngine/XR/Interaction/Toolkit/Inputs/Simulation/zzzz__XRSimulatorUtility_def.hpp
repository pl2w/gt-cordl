#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/XRSimulatorUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRSimulatorUtility)
namespace GlobalNamespace {
struct InputAction_CallbackContext;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands {
struct XRSimulatedHandState;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class SimulatedDeviceLifecycleManager;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class SimulatedHandExpressionManager;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct Space;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct XRSimulatedControllerState;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct XRSimulatedHMDState;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class XRSimulatorUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRSimulatorUtility");
// Dependencies System.Object, UnityEngine.Vector3
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatorUtility
class CORDL_TYPE XRSimulatorUtility : public ::System::Object {
public:
// Declarations
/// @brief Field cameraMaxXAngle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_cameraMaxXAngle, put=setStaticF_cameraMaxXAngle)) float_t  cameraMaxXAngle;

/// @brief Field leftDeviceDefaultInitialPosition, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_leftDeviceDefaultInitialPosition, put=setStaticF_leftDeviceDefaultInitialPosition)) ::UnityEngine::Vector3  leftDeviceDefaultInitialPosition;

/// @brief Field rightDeviceDefaultInitialPosition, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_rightDeviceDefaultInitialPosition, put=setStaticF_rightDeviceDefaultInitialPosition)) ::UnityEngine::Vector3  rightDeviceDefaultInitialPosition;

/// @brief Method FindCameraTransform, addr 0xb4c4674, size 0x22c, virtual false, abstract: false, final false
static inline bool FindCameraTransform(/* [TupleElementNames(new[] { "transform", "camera" })] */ ::by_ref<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Camera>>>  cachedCamera, ::by_ref<::UnityEngine::Transform*>  cameraTransform) ;

/// @brief Method FindCreateSimulatedDeviceLifecycleManager, addr 0xb4c4288, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager> FindCreateSimulatedDeviceLifecycleManager(::UnityEngine::GameObject*  simulator) ;

/// @brief Method FindCreateSimulatedHandExpressionManager, addr 0xb4c433c, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager> FindCreateSimulatedHandExpressionManager(::UnityEngine::GameObject*  simulator) ;

/// @brief Method GetAxes, addr 0xb4c8414, size 0x2e4, virtual false, abstract: false, final false
static inline void GetAxes(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space  translateSpace, ::UnityEngine::Transform*  cameraTransform, ::by_ref<::UnityEngine::Vector3>  right, ::by_ref<::UnityEngine::Vector3>  up, ::by_ref<::UnityEngine::Vector3>  forward) ;

/// @brief Method GetDeltaRotation, addr 0xb4c8334, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion GetDeltaRotation(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space  translateSpace, ::UnityEngine::Quaternion  rotation, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  inverseCameraParentRotation) ;

/// @brief Method GetDeltaRotation, addr 0xb4c6598, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion GetDeltaRotation(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space  translateSpace, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState>  state, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  inverseCameraParentRotation) ;

/// @brief Method GetDeltaRotation, addr 0xb4c6500, size 0x98, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion GetDeltaRotation(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space  translateSpace, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>  state, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  inverseCameraParentRotation) ;

/// @brief Method GetDeltaRotation, addr 0xb4c6628, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion GetDeltaRotation(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space  translateSpace, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState>  state, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  inverseCameraParentRotation) ;

/// @brief Method GetInputAction, addr 0xb4c820c, size 0x84, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputAction* GetInputAction(::UnityEngine::InputSystem::InputActionReference*  actionReference) ;

/// @brief Method GetTranslationInDeviceSpace, addr 0xb4c63d0, size 0x130, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetTranslationInDeviceSpace(float_t  xTranslateInput, float_t  yTranslateInput, float_t  zTranslateInput, ::UnityEngine::Transform*  cameraTransform, ::UnityEngine::Quaternion  cameraParentRotation, ::UnityEngine::Quaternion  inverseCameraParentRotation) ;

/// @brief Method GetTranslationInWorldSpace, addr 0xb4c86f8, size 0x208, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetTranslationInWorldSpace(float_t  xTranslateInput, float_t  yTranslateInput, float_t  zTranslateInput, ::UnityEngine::Transform*  cameraTransform, ::UnityEngine::Quaternion  cameraParentRotation) ;

/// @brief Method Subscribe, addr 0xb4c8168, size 0xa4, virtual false, abstract: false, final false
static inline void Subscribe(::UnityEngine::InputSystem::InputActionReference*  reference, ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  performed, ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  canceled) ;

/// @brief Method TryExecuteCommand, addr 0xb4c7f9c, size 0x6c, virtual false, abstract: false, final false
static inline bool TryExecuteCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand*  commandPtr, ::by_ref<int64_t>  result) ;

/// @brief Method Unsubscribe, addr 0xb4c8290, size 0xa4, virtual false, abstract: false, final false
static inline void Unsubscribe(::UnityEngine::InputSystem::InputActionReference*  reference, ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  performed, ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  canceled) ;

static inline float_t getStaticF_cameraMaxXAngle() ;

static inline ::UnityEngine::Vector3 getStaticF_leftDeviceDefaultInitialPosition() ;

static inline ::UnityEngine::Vector3 getStaticF_rightDeviceDefaultInitialPosition() ;

static inline void setStaticF_cameraMaxXAngle(float_t  value) ;

static inline void setStaticF_leftDeviceDefaultInitialPosition(::UnityEngine::Vector3  value) ;

static inline void setStaticF_rightDeviceDefaultInitialPosition(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRSimulatorUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRSimulatorUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRSimulatorUtility(XRSimulatorUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRSimulatorUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRSimulatorUtility(XRSimulatorUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11638};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation

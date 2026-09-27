#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRInteractionUpdateOrder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRInteractionUpdateOrder)
namespace GlobalNamespace {
struct XRInteractionUpdateOrder_UpdatePhase;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionUpdateOrder;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::XRInteractionUpdateOrder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::XRInteractionUpdateOrder*, "UnityEngine.XR.Interaction.Toolkit", "XRInteractionUpdateOrder");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder
class CORDL_TYPE XRInteractionUpdateOrder : public ::System::Object {
public:
// Declarations
using UpdatePhase = ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInteractionUpdateOrder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractionUpdateOrder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractionUpdateOrder(XRInteractionUpdateOrder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractionUpdateOrder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractionUpdateOrder(XRInteractionUpdateOrder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11110};

/// @brief Field k_BeforeRenderGazeAssistance offset 0xffffffff size 0x4
static constexpr int32_t  k_BeforeRenderGazeAssistance{static_cast<int32_t>(0x5f)};

/// @brief Field k_BeforeRenderLineVisual offset 0xffffffff size 0x4
static constexpr int32_t  k_BeforeRenderLineVisual{static_cast<int32_t>(0x65)};

/// @brief Field k_BeforeRenderOrder offset 0xffffffff size 0x4
static constexpr int32_t  k_BeforeRenderOrder{static_cast<int32_t>(0x64)};

/// @brief Field k_ControllerRecorder offset 0xffffffff size 0x4
static constexpr int32_t  k_ControllerRecorder{static_cast<int32_t>(0xffff8ad0)};

/// @brief Field k_Controllers offset 0xffffffff size 0x4
static constexpr int32_t  k_Controllers{static_cast<int32_t>(0xffff8ada)};

/// @brief Field k_DeviceSimulator offset 0xffffffff size 0x4
static constexpr int32_t  k_DeviceSimulator{static_cast<int32_t>(0xffff8ad9)};

/// @brief Field k_GazeAssistance offset 0xffffffff size 0x4
static constexpr int32_t  k_GazeAssistance{static_cast<int32_t>(0xffff8ae4)};

/// @brief Field k_GravityProvider offset 0xffffffff size 0x4
static constexpr int32_t  k_GravityProvider{static_cast<int32_t>(0xffffff31)};

/// @brief Field k_InteractableSnapVolume offset 0xffffffff size 0x4
static constexpr int32_t  k_InteractableSnapVolume{static_cast<int32_t>(0xffffff9d)};

/// @brief Field k_Interactables offset 0xffffffff size 0x4
static constexpr int32_t  k_Interactables{static_cast<int32_t>(0xffffff9e)};

/// @brief Field k_InteractionGroups offset 0xffffffff size 0x4
static constexpr int32_t  k_InteractionGroups{static_cast<int32_t>(0xffffff9c)};

/// @brief Field k_InteractionManager offset 0xffffffff size 0x4
static constexpr int32_t  k_InteractionManager{static_cast<int32_t>(0xffffff97)};

/// @brief Field k_InteractionSimulator offset 0xffffffff size 0x4
static constexpr int32_t  k_InteractionSimulator{static_cast<int32_t>(0xffff8ad9)};

/// @brief Field k_Interactors offset 0xffffffff size 0x4
static constexpr int32_t  k_Interactors{static_cast<int32_t>(0xffffff9d)};

/// @brief Field k_LineVisual offset 0xffffffff size 0x4
static constexpr int32_t  k_LineVisual{static_cast<int32_t>(0x64)};

/// @brief Field k_LocomotionProviders offset 0xffffffff size 0x4
static constexpr int32_t  k_LocomotionProviders{static_cast<int32_t>(0xffffff2e)};

/// @brief Field k_ScreenSpaceRayPoseDriver offset 0xffffffff size 0x4
static constexpr int32_t  k_ScreenSpaceRayPoseDriver{static_cast<int32_t>(0xffff86e8)};

/// @brief Field k_ScreenSpaceSelectInput offset 0xffffffff size 0x4
static constexpr int32_t  k_ScreenSpaceSelectInput{static_cast<int32_t>(0xffff8a9e)};

/// @brief Field k_SimulatedDeviceLifecycleManager offset 0xffffffff size 0x4
static constexpr int32_t  k_SimulatedDeviceLifecycleManager{static_cast<int32_t>(0xffff8ad5)};

/// @brief Field k_SimulatedHandExpressionManager offset 0xffffffff size 0x4
static constexpr int32_t  k_SimulatedHandExpressionManager{static_cast<int32_t>(0xffff8ad6)};

/// @brief Field k_TransformStabilizer offset 0xffffffff size 0x4
static constexpr int32_t  k_TransformStabilizer{static_cast<int32_t>(0xffff8adf)};

/// @brief Field k_TwoHandedGrabMoveProviders offset 0xffffffff size 0x4
static constexpr int32_t  k_TwoHandedGrabMoveProviders{static_cast<int32_t>(0xffffff2f)};

/// @brief Field k_UIInputModule offset 0xffffffff size 0x4
static constexpr int32_t  k_UIInputModule{static_cast<int32_t>(0xffffff38)};

/// @brief Field k_XRBodyTransformer offset 0xffffffff size 0x4
static constexpr int32_t  k_XRBodyTransformer{static_cast<int32_t>(0xffffff33)};

/// @brief Field k_XRInputDeviceButtonReader offset 0xffffffff size 0x4
static constexpr int32_t  k_XRInputDeviceButtonReader{static_cast<int32_t>(0xffff86e8)};

/// @brief Field k_XRUIToolkitManager offset 0xffffffff size 0x4
static constexpr int32_t  k_XRUIToolkitManager{static_cast<int32_t>(0xffffff38)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionUpdateOrder) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit

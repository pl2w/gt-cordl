#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/XRInputTrackingAggregator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRInputTrackingAggregator)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::InputSystem {
class TrackedDevice;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
struct TrackingStatus;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRInputTrackingAggregator_Characteristics;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class EyeGazeInteraction_EyeGazeDevice;
}
namespace UnityEngine::XR {
struct InputDeviceCharacteristics;
}
namespace UnityEngine::XR {
struct InputDevice;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRInputTrackingAggregator;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRInputTrackingAggregator_Characteristics;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "XRInputTrackingAggregator");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "XRInputTrackingAggregator/Characteristics");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator
class CORDL_TYPE XRInputTrackingAggregator : public ::System::Object {
public:
// Declarations
using Characteristics = ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics;

/// @brief Field s_XRInputDevices, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_XRInputDevices, put=setStaticF_s_XRInputDevices)) ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  s_XRInputDevices;

/// @brief Method GetEyeGazeStatus, addr 0xb4b5004, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus GetEyeGazeStatus() ;

/// @brief Method GetHMDStatus, addr 0xb4b4d98, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus GetHMDStatus() ;

/// @brief Method GetLeftControllerStatus, addr 0xb4b5198, size 0x11c, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus GetLeftControllerStatus() ;

/// @brief Method GetLeftMetaAimHandStatus, addr 0xb4b54f8, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus GetLeftMetaAimHandStatus() ;

/// @brief Method GetLeftTrackedHandStatus, addr 0xb4b53d0, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus GetLeftTrackedHandStatus() ;

/// @brief Method GetRightControllerStatus, addr 0xb4b52b4, size 0x11c, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus GetRightControllerStatus() ;

/// @brief Method GetRightMetaAimHandStatus, addr 0xb4b5550, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus GetRightMetaAimHandStatus() ;

/// @brief Method GetRightTrackedHandStatus, addr 0xb4b5464, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus GetRightTrackedHandStatus() ;

/// @brief Method GetTrackingStatus, addr 0xb4b4e78, size 0xa4, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus GetTrackingStatus(::UnityEngine::InputSystem::TrackedDevice*  device) ;

/// @brief Method GetTrackingStatus, addr 0xb4b4f24, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus GetTrackingStatus(::UnityEngine::XR::InputDevice  device) ;

/// @brief Method GetTrackingStatus, addr 0xb4b50e4, size 0xac, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus GetTrackingStatus(::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice*  device) ;

/// @brief Method TryGetDeviceWithExactCharacteristics, addr 0xb4b3580, size 0x158, virtual false, abstract: false, final false
static inline bool TryGetDeviceWithExactCharacteristics(::UnityEngine::XR::InputDeviceCharacteristics  desiredCharacteristics, ::by_ref<::UnityEngine::XR::InputDevice>  inputDevice) ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>* getStaticF_s_XRInputDevices() ;

static inline void setStaticF_s_XRInputDevices(::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInputTrackingAggregator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInputTrackingAggregator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInputTrackingAggregator(XRInputTrackingAggregator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInputTrackingAggregator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInputTrackingAggregator(XRInputTrackingAggregator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11600};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator/Characteristics
class CORDL_TYPE XRInputTrackingAggregator_Characteristics : public ::System::Object {
public:
// Declarations
/// @brief Method get_eyeGaze, addr 0xb4b5190, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::InputDeviceCharacteristics get_eyeGaze() ;

/// @brief Method get_hmd, addr 0xb4b4f1c, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::InputDeviceCharacteristics get_hmd() ;

/// @brief Method get_leftController, addr 0xb4b3578, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::InputDeviceCharacteristics get_leftController() ;

/// @brief Method get_leftHandInteraction, addr 0xb4b37c0, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::InputDeviceCharacteristics get_leftHandInteraction() ;

/// @brief Method get_leftMicrosoftHandInteraction, addr 0xb4b37c8, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::InputDeviceCharacteristics get_leftMicrosoftHandInteraction() ;

/// @brief Method get_leftTrackedHand, addr 0xb4b545c, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::InputDeviceCharacteristics get_leftTrackedHand() ;

/// @brief Method get_rightController, addr 0xb4b3884, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::InputDeviceCharacteristics get_rightController() ;

/// @brief Method get_rightHandInteraction, addr 0xb4b388c, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::InputDeviceCharacteristics get_rightHandInteraction() ;

/// @brief Method get_rightMicrosoftHandInteraction, addr 0xb4b3894, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::InputDeviceCharacteristics get_rightMicrosoftHandInteraction() ;

/// @brief Method get_rightTrackedHand, addr 0xb4b54f0, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::InputDeviceCharacteristics get_rightTrackedHand() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInputTrackingAggregator_Characteristics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInputTrackingAggregator_Characteristics", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInputTrackingAggregator_Characteristics(XRInputTrackingAggregator_Characteristics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInputTrackingAggregator_Characteristics", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInputTrackingAggregator_Characteristics(XRInputTrackingAggregator_Characteristics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11599};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs

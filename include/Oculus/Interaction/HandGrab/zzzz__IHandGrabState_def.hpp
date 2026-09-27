#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/IHandGrabState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IHandGrabState)
namespace Oculus::Interaction::HandGrab {
class HandGrabTarget;
}
namespace Oculus::Interaction::Input {
struct HandFingerFlags;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab {
class IHandGrabState;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::IHandGrabState*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::IHandGrabState*, "Oculus.Interaction.HandGrab", "IHandGrabState");
// Dependencies 
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.IHandGrabState
class CORDL_TYPE IHandGrabState {
public:
// Declarations
 __declspec(property(get=get_FingersStrength)) float_t  FingersStrength;

 __declspec(property(get=get_HandGrabTarget)) ::Oculus::Interaction::HandGrab::HandGrabTarget*  HandGrabTarget;

 __declspec(property(get=get_IsGrabbing)) bool  IsGrabbing;

 __declspec(property(get=get_WristStrength)) float_t  WristStrength;

 __declspec(property(get=get_WristToGrabPoseOffset)) ::UnityEngine::Pose  WristToGrabPoseOffset;

/// @brief Method GrabbingFingers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::Input::HandFingerFlags GrabbingFingers() ;

/// @brief Method get_FingersStrength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_FingersStrength() ;

/// @brief Method get_HandGrabTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::HandGrab::HandGrabTarget* get_HandGrabTarget() ;

/// @brief Method get_IsGrabbing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsGrabbing() ;

/// @brief Method get_WristStrength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_WristStrength() ;

/// @brief Method get_WristToGrabPoseOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Pose get_WristToGrabPoseOffset() ;

// Ctor Parameters [CppParam { name: "", ty: "IHandGrabState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHandGrabState(IHandGrabState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16336};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::HandGrab

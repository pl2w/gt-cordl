#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/IHandGrabInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IHandGrabInteractable)
namespace Oculus::Interaction::GrabAPI {
struct GrabbingRule;
}
namespace Oculus::Interaction::Grab {
struct GrabTypeFlags;
}
namespace Oculus::Interaction::HandGrab {
struct HandAlignType;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabResult;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction {
class IMovement;
}
namespace Oculus::Interaction {
class IRelativeToRef;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab {
class IHandGrabInteractable;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::IHandGrabInteractable*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::IHandGrabInteractable*, "Oculus.Interaction.HandGrab", "IHandGrabInteractable");
// Dependencies 
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.IHandGrabInteractable
class CORDL_TYPE IHandGrabInteractable {
public:
// Declarations
 __declspec(property(get=get_HandAlignment)) ::Oculus::Interaction::HandGrab::HandAlignType  HandAlignment;

 __declspec(property(get=get_PalmGrabRules)) ::Oculus::Interaction::GrabAPI::GrabbingRule  PalmGrabRules;

 __declspec(property(get=get_PinchGrabRules)) ::Oculus::Interaction::GrabAPI::GrabbingRule  PinchGrabRules;

 __declspec(property(get=get_Slippiness)) float_t  Slippiness;

 __declspec(property(get=get_SupportedGrabTypes)) ::Oculus::Interaction::Grab::GrabTypeFlags  SupportedGrabTypes;

 __declspec(property(get=get_UsesHandPose)) bool  UsesHandPose;

/// @brief Convert operator to "::Oculus::Interaction::IRelativeToRef"
constexpr operator  ::Oculus::Interaction::IRelativeToRef*() noexcept;

/// [Obsolete("Use CalculateBestPose with offset instead")]
/// @brief Method CalculateBestPose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool CalculateBestPose(::UnityEngine::Pose  userPose, float_t  handScale, ::Oculus::Interaction::Input::Handedness  handedness, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  result) ;

/// @brief Method CalculateBestPose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CalculateBestPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::UnityEngine::Transform*  relativeTo, float_t  handScale, ::Oculus::Interaction::Input::Handedness  handedness, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  result) ;

/// @brief Method GenerateMovement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::IMovement* GenerateMovement(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to) ;

/// @brief Method SupportsHandedness, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool SupportsHandedness(::Oculus::Interaction::Input::Handedness  handedness) ;

/// @brief Method get_HandAlignment, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::HandGrab::HandAlignType get_HandAlignment() ;

/// @brief Method get_PalmGrabRules, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::GrabAPI::GrabbingRule get_PalmGrabRules() ;

/// @brief Method get_PinchGrabRules, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::GrabAPI::GrabbingRule get_PinchGrabRules() ;

/// @brief Method get_Slippiness, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_Slippiness() ;

/// @brief Method get_SupportedGrabTypes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::Grab::GrabTypeFlags get_SupportedGrabTypes() ;

/// @brief Method get_UsesHandPose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_UsesHandPose() ;

/// @brief Convert to "::Oculus::Interaction::IRelativeToRef"
constexpr ::Oculus::Interaction::IRelativeToRef* i___Oculus__Interaction__IRelativeToRef() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IHandGrabInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHandGrabInteractable(IHandGrabInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16333};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::HandGrab

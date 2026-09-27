#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabInteraction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandGrabInteraction)
namespace GlobalNamespace {
struct HandGrabTarget_GrabAnchor;
}
namespace Oculus::Interaction::Grab {
struct GrabPoseScore;
}
namespace Oculus::Interaction::Grab {
struct GrabTypeFlags;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabResult;
}
namespace Oculus::Interaction::HandGrab {
class IHandGrabInteractable;
}
namespace Oculus::Interaction::HandGrab {
class IHandGrabInteractor;
}
namespace Oculus::Interaction::Input {
struct HandFingerFlags;
}
namespace Oculus::Interaction {
class IMovement;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab {
class HandGrabInteraction;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::HandGrabInteraction*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::HandGrabInteraction*, "Oculus.Interaction.HandGrab", "HandGrabInteraction");
// [Extension]
// Dependencies System.Object
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.HandGrabInteraction
class CORDL_TYPE HandGrabInteraction : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method CalculateBestGrab, addr 0xa4dc34c, size 0x398, virtual false, abstract: false, final false
static inline void CalculateBestGrab(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  interactable, ::Oculus::Interaction::Grab::GrabTypeFlags  grabFlags, ::by_ref<::Oculus::Interaction::Grab::GrabTypeFlags>  activeGrabFlags, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  result) ;

/// [Extension]
/// @brief Method CanInteractWith, addr 0xa4db7e4, size 0x26c, virtual false, abstract: false, final false
static inline bool CanInteractWith(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  handGrabInteractable) ;

/// @brief Method ComputeHandGrabScore, addr 0xa4dc0f0, size 0x25c, virtual false, abstract: false, final false
static inline float_t ComputeHandGrabScore(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  handGrabInteractable, ::by_ref<::Oculus::Interaction::Grab::GrabTypeFlags>  handGrabTypes, bool  includeSelecting) ;

/// [Extension]
/// @brief Method ComputeShouldSelect, addr 0xa4d9f04, size 0x230, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Grab::GrabTypeFlags ComputeShouldSelect(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  handGrabInteractable) ;

/// [Extension]
/// @brief Method ComputeShouldUnselect, addr 0xa4da654, size 0x570, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Grab::GrabTypeFlags ComputeShouldUnselect(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  handGrabInteractable) ;

/// [Extension]
/// [Obsolete]
/// @brief Method CurrentGrabType, addr 0xa4debac, size 0xac, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Grab::GrabTypeFlags CurrentGrabType(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor) ;

/// [Extension]
/// @brief Method GenerateMovement, addr 0xa4dad94, size 0xe8, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::IMovement* GenerateMovement(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  interactable) ;

/// [Extension]
/// @brief Method GetGrabOffset, addr 0xa4daca4, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose GetGrabOffset(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor) ;

/// [Extension]
/// @brief Method GetHandGrabPose, addr 0xa4da540, size 0x114, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose GetHandGrabPose(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor) ;

/// [Extension]
/// @brief Method GetPoseOffset, addr 0xa4dec58, size 0x3ac, virtual false, abstract: false, final false
static inline void GetPoseOffset(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::Grab::GrabTypeFlags  anchorMode, ::by_ref<::UnityEngine::Pose>  pose, ::by_ref<::UnityEngine::Pose>  offset) ;

/// [Extension]
/// @brief Method GetPoseScore, addr 0xa4dbd20, size 0x3a0, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Grab::GrabPoseScore GetPoseScore(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  interactable, ::Oculus::Interaction::Grab::GrabTypeFlags  grabTypes, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  result) ;

/// [Extension]
/// @brief Method GrabbingFingers, addr 0xa4d988c, size 0x28c, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Input::HandFingerFlags GrabbingFingers(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  handGrabInteractable) ;

/// @brief Method SupportsPalm, addr 0xa4df214, size 0xb0, virtual false, abstract: false, final false
static inline bool SupportsPalm(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::Grab::GrabTypeFlags  grabTypes) ;

/// @brief Method SupportsPalm, addr 0xa4df0b4, size 0xb0, virtual false, abstract: false, final false
static inline bool SupportsPalm(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  handGrabInteractable) ;

/// @brief Method SupportsPinch, addr 0xa4df164, size 0xb0, virtual false, abstract: false, final false
static inline bool SupportsPinch(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::Grab::GrabTypeFlags  grabTypes) ;

/// @brief Method SupportsPinch, addr 0xa4df004, size 0xb0, virtual false, abstract: false, final false
static inline bool SupportsPinch(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  handGrabInteractable) ;

/// [Extension]
/// [Obsolete("Use CalculateBestGrab instead")]
/// @brief Method TryCalculateBestGrab, addr 0xa4deb68, size 0x44, virtual false, abstract: false, final false
static inline bool TryCalculateBestGrab(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  interactable, ::Oculus::Interaction::Grab::GrabTypeFlags  grabTypes, ::by_ref<::GlobalNamespace::HandGrabTarget_GrabAnchor>  anchorMode, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  handGrabResult) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandGrabInteraction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandGrabInteraction", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandGrabInteraction(HandGrabInteraction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandGrabInteraction", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandGrabInteraction(HandGrabInteraction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16319};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::HandGrab::HandGrabInteraction) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab

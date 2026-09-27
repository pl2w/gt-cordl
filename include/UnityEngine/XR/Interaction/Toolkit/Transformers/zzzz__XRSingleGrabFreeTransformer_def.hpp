#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRSingleGrabFreeTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRBaseGrabTransformer_def.hpp"
CORDL_MODULE_EXPORT(XRSingleGrabFreeTransformer)
namespace GlobalNamespace {
struct XRInteractionUpdateOrder_UpdatePhase;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRGrabInteractable;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRSingleGrabFreeTransformer;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRSingleGrabFreeTransformer");
// [AddComponentMenu("XR/Transformers/XR Single Grab Free Transformer", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Transformers.XRSingleGrabFreeTransformer.html")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRSingleGrabFreeTransformer
class CORDL_TYPE XRSingleGrabFreeTransformer : public ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer* New_ctor() ;

/// @brief Method Process, addr 0xb45e1dc, size 0x1c, virtual true, abstract: false, final false
inline void Process(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase, ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  localScale) ;

/// @brief Method UpdateTarget, addr 0xb45e1f8, size 0x33c, virtual false, abstract: false, final false
static inline void UpdateTarget(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::by_ref<::UnityEngine::Pose>  targetPose) ;

/// @brief Method .ctor, addr 0xb45e534, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRSingleGrabFreeTransformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRSingleGrabFreeTransformer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRSingleGrabFreeTransformer(XRSingleGrabFreeTransformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRSingleGrabFreeTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRSingleGrabFreeTransformer(XRSingleGrabFreeTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11414};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers

#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRLegacyGrabTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRBaseGrabTransformer_def.hpp"
CORDL_MODULE_EXPORT(XRLegacyGrabTransformer)
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
class XRLegacyGrabTransformer;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRLegacyGrabTransformer");
// [AddComponentMenu("")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Transformers.XRLegacyGrabTransformer.html")]
// [Obsolete("XRLegacyGrabTransformer has been deprecated, use XRSingleFreeGrabTransformer instead.", true)]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRLegacyGrabTransformer
class CORDL_TYPE XRLegacyGrabTransformer : public ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer* New_ctor() ;

/// @brief Method OnGrabCountChanged, addr 0xb45e1cc, size 0x4, virtual true, abstract: false, final false
inline void OnGrabCountChanged(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::UnityEngine::Pose  targetPose, ::UnityEngine::Vector3  localScale) ;

/// @brief Method OnLink, addr 0xb45e1c4, size 0x8, virtual true, abstract: false, final false
inline void OnLink(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable) ;

/// @brief Method Process, addr 0xb45e1d0, size 0x4, virtual true, abstract: false, final false
inline void Process(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase, ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  localScale) ;

/// @brief Method .ctor, addr 0xb45e1d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRLegacyGrabTransformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRLegacyGrabTransformer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRLegacyGrabTransformer(XRLegacyGrabTransformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRLegacyGrabTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRLegacyGrabTransformer(XRLegacyGrabTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11413};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers

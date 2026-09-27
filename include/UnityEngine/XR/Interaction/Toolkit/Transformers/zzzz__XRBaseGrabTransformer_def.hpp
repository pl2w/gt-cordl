#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRBaseGrabTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(XRBaseGrabTransformer)
namespace GlobalNamespace {
struct XRBaseGrabTransformer_RegistrationMode;
}
namespace GlobalNamespace {
struct XRInteractionUpdateOrder_UpdatePhase;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRGrabInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class IXRGrabTransformer;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRBaseGrabTransformer;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRBaseGrabTransformer");
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer
class CORDL_TYPE XRBaseGrabTransformer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RegistrationMode = ::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode;

 __declspec(property(get=get_canProcess)) bool  canProcess;

 __declspec(property(get=get_registrationMode)) ::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode  registrationMode;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*() noexcept;

/// @brief Method GetRegistrationMode, addr 0xb459478, size 0xc, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode GetRegistrationMode() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb459618, size 0x8c, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnGrab, addr 0xb4596a8, size 0x4, virtual true, abstract: false, final false
inline void OnGrab(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable) ;

/// @brief Method OnGrabCountChanged, addr 0xb4596ac, size 0x4, virtual true, abstract: false, final false
inline void OnGrabCountChanged(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::UnityEngine::Pose  targetPose, ::UnityEngine::Vector3  localScale) ;

/// @brief Method OnLink, addr 0xb4596a4, size 0x4, virtual true, abstract: false, final false
inline void OnLink(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable) ;

/// @brief Method OnUnlink, addr 0xb4596b0, size 0x4, virtual true, abstract: false, final false
inline void OnUnlink(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable) ;

/// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Process(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase, ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  localScale) ;

/// @brief Method Start, addr 0xb459484, size 0x194, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method .ctor, addr 0xb4596b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_canProcess, addr 0xb459468, size 0x8, virtual true, abstract: false, final false
inline bool get_canProcess() ;

/// @brief Method get_registrationMode, addr 0xb459470, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode get_registrationMode() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* i___UnityEngine__XR__Interaction__Toolkit__Transformers__IXRGrabTransformer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRBaseGrabTransformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRBaseGrabTransformer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRBaseGrabTransformer(XRBaseGrabTransformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRBaseGrabTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRBaseGrabTransformer(XRBaseGrabTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11398};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers

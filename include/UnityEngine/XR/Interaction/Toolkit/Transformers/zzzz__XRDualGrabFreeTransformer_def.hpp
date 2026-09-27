#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRDualGrabFreeTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRBaseGrabTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRDualGrabFreeTransformer_PoseContributor_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(XRDualGrabFreeTransformer)
namespace GlobalNamespace {
struct XRBaseGrabTransformer_RegistrationMode;
}
namespace GlobalNamespace {
struct XRDualGrabFreeTransformer_PoseContributor;
}
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
class XRDualGrabFreeTransformer;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRDualGrabFreeTransformer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRDualGrabFreeTransformer*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRDualGrabFreeTransformer");
// [AddComponentMenu("XR/Transformers/XR Dual Grab Free Transformer", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Transformers.XRDualGrabFreeTransformer.html")]
// Dependencies UnityEngine.Pose, UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer, UnityEngine.XR.Interaction.Toolkit.Transformers.XRDualGrabFreeTransformer::PoseContributor
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRDualGrabFreeTransformer
class CORDL_TYPE XRDualGrabFreeTransformer : public ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer {
public:
// Declarations
using PoseContributor = ::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor;

/// @brief Field <lastInteractorAttachPose>k__BackingField, offset 0x28, size 0x1c 
 __declspec(property(get=__cordl_internal_get__lastInteractorAttachPose_k__BackingField, put=__cordl_internal_set__lastInteractorAttachPose_k__BackingField)) ::UnityEngine::Pose  _lastInteractorAttachPose_k__BackingField;

 __declspec(property(get=get_lastInteractorAttachPose, put=set_lastInteractorAttachPose)) ::UnityEngine::Pose  lastInteractorAttachPose;

/// @brief Field m_LastUp, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_LastUp, put=__cordl_internal_set_m_LastUp)) ::UnityEngine::Vector3  m_LastUp;

/// @brief Field m_MultiSelectPosition, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MultiSelectPosition, put=__cordl_internal_set_m_MultiSelectPosition)) ::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor  m_MultiSelectPosition;

/// @brief Field m_MultiSelectRotation, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MultiSelectRotation, put=__cordl_internal_set_m_MultiSelectRotation)) ::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor  m_MultiSelectRotation;

 __declspec(property(get=get_multiSelectPosition, put=set_multiSelectPosition)) ::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor  multiSelectPosition;

 __declspec(property(get=get_multiSelectRotation, put=set_multiSelectRotation)) ::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor  multiSelectRotation;

 __declspec(property(get=get_registrationMode)) ::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode  registrationMode;

static inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRDualGrabFreeTransformer* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0xb459714, size 0x4, virtual true, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnGrabCountChanged, addr 0xb459718, size 0x80, virtual true, abstract: false, final false
inline void OnGrabCountChanged(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::UnityEngine::Pose  targetPose, ::UnityEngine::Vector3  localScale) ;

/// @brief Method Process, addr 0xb459798, size 0x18, virtual true, abstract: false, final false
inline void Process(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase, ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  localScale) ;

/// @brief Method UpdateTarget, addr 0xb4597b0, size 0x94, virtual false, abstract: false, final false
inline void UpdateTarget(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::by_ref<::UnityEngine::Pose>  targetPose) ;

/// @brief Method UpdateTargetMulti, addr 0xb459844, size 0x91c, virtual false, abstract: false, final false
inline void UpdateTargetMulti(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::by_ref<::UnityEngine::Pose>  targetPose) ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__lastInteractorAttachPose_k__BackingField() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__lastInteractorAttachPose_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LastUp() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LastUp() ;

constexpr ::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor const& __cordl_internal_get_m_MultiSelectPosition() const;

constexpr ::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor& __cordl_internal_get_m_MultiSelectPosition() ;

constexpr ::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor const& __cordl_internal_get_m_MultiSelectRotation() const;

constexpr ::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor& __cordl_internal_get_m_MultiSelectRotation() ;

constexpr void __cordl_internal_set__lastInteractorAttachPose_k__BackingField(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set_m_LastUp(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_MultiSelectPosition(::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor  value) ;

constexpr void __cordl_internal_set_m_MultiSelectRotation(::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor  value) ;

/// @brief Method .ctor, addr 0xb45a160, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_lastInteractorAttachPose, addr 0xb4596e4, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_lastInteractorAttachPose() ;

/// @brief Method get_multiSelectPosition, addr 0xb4596bc, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor get_multiSelectPosition() ;

/// @brief Method get_multiSelectRotation, addr 0xb4596cc, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor get_multiSelectRotation() ;

/// @brief Method get_registrationMode, addr 0xb4596dc, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode get_registrationMode() ;

/// [CompilerGenerated]
/// @brief Method set_lastInteractorAttachPose, addr 0xb4596f8, size 0x1c, virtual false, abstract: false, final false
inline void set_lastInteractorAttachPose(::UnityEngine::Pose  value) ;

/// @brief Method set_multiSelectPosition, addr 0xb4596c4, size 0x8, virtual false, abstract: false, final false
inline void set_multiSelectPosition(::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor  value) ;

/// @brief Method set_multiSelectRotation, addr 0xb4596d4, size 0x8, virtual false, abstract: false, final false
inline void set_multiSelectRotation(::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRDualGrabFreeTransformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRDualGrabFreeTransformer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRDualGrabFreeTransformer(XRDualGrabFreeTransformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRDualGrabFreeTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRDualGrabFreeTransformer(XRDualGrabFreeTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11400};

/// [SerializeField]
/// @brief Field m_MultiSelectPosition, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor  ___m_MultiSelectPosition;

/// [SerializeField]
/// @brief Field m_MultiSelectRotation, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::XRDualGrabFreeTransformer_PoseContributor  ___m_MultiSelectRotation;

/// [CompilerGenerated]
/// @brief Field <lastInteractorAttachPose>k__BackingField, offset: 0x28, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____lastInteractorAttachPose_k__BackingField;

/// @brief Field m_LastUp, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_LastUp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRDualGrabFreeTransformer, ___m_MultiSelectPosition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRDualGrabFreeTransformer, ___m_MultiSelectRotation) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRDualGrabFreeTransformer, ____lastInteractorAttachPose_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRDualGrabFreeTransformer, ___m_LastUp) == 0x44, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRDualGrabFreeTransformer) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers

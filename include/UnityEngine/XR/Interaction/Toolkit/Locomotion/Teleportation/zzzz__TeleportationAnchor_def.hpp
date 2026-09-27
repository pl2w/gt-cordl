#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/TeleportationAnchor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__BaseTeleportationInteractable_def.hpp"
CORDL_MODULE_EXPORT(TeleportationAnchor)
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
struct TeleportRequest;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportationAnchor;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationAnchor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationAnchor*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation", "TeleportationAnchor");
// [AddComponentMenu("XR/Teleportation Anchor", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationAnchor.html")]
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationAnchor
class CORDL_TYPE TeleportationAnchor : public ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable {
public:
// Declarations
/// @brief Field m_TeleportAnchorTransform, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TeleportAnchorTransform, put=__cordl_internal_set_m_TeleportAnchorTransform)) ::UnityW<::UnityEngine::Transform>  m_TeleportAnchorTransform;

 __declspec(property(get=get_teleportAnchorTransform, put=set_teleportAnchorTransform)) ::UnityW<::UnityEngine::Transform>  teleportAnchorTransform;

/// @brief Method GenerateTeleportRequest, addr 0xb44dfd8, size 0xcc, virtual true, abstract: false, final false
inline bool GenerateTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::RaycastHit  raycastHit, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>  teleportRequest) ;

/// @brief Method GetAttachTransform, addr 0xb44dfc8, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetAttachTransform(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationAnchor* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0xb44de74, size 0x154, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnValidate, addr 0xb44ddc4, size 0x8c, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method RequestTeleport, addr 0xb44dfd0, size 0x8, virtual false, abstract: false, final false
inline void RequestTeleport() ;

/// [ContextMenu("Teleport to anchor", false)]
/// @brief Method RequestTeleportFromEditor, addr 0xb44e0a4, size 0x8, virtual false, abstract: false, final false
inline void RequestTeleportFromEditor() ;

/// [ContextMenu("Teleport to anchor", true)]
/// @brief Method RequestTeleportFromEditorValidate, addr 0xb44e0ac, size 0x50, virtual false, abstract: false, final false
inline bool RequestTeleportFromEditorValidate() ;

/// @brief Method Reset, addr 0xb44de50, size 0x24, virtual true, abstract: false, final false
inline void Reset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_TeleportAnchorTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_TeleportAnchorTransform() ;

constexpr void __cordl_internal_set_m_TeleportAnchorTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xb44e0fc, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_teleportAnchorTransform, addr 0xb44ddac, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_teleportAnchorTransform() ;

/// @brief Method set_teleportAnchorTransform, addr 0xb44ddb4, size 0x10, virtual false, abstract: false, final false
inline void set_teleportAnchorTransform(::UnityEngine::Transform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportationAnchor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportationAnchor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportationAnchor(TeleportationAnchor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportationAnchor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportationAnchor(TeleportationAnchor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11360};

/// [SerializeField]
/// [Tooltip("The Transform that represents the teleportation destination.")]
/// @brief Field m_TeleportAnchorTransform, offset: 0x1d8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_TeleportAnchorTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationAnchor, ___m_TeleportAnchorTransform) == 0x1d8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationAnchor) == 0x1e0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation

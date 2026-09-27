#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/TeleportationArea.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__BaseTeleportationInteractable_def.hpp"
CORDL_MODULE_EXPORT(TeleportationArea)
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRRayInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
struct TeleportRequest;
}
namespace UnityEngine {
struct RaycastHit;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportationArea;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation", "TeleportationArea");
// [AddComponentMenu("XR/Teleportation Area", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationArea.html")]
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationArea
class CORDL_TYPE TeleportationArea : public ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable {
public:
// Declarations
/// @brief Method GenerateTeleportRequest, addr 0xb44e100, size 0x110, virtual true, abstract: false, final false
inline bool GenerateTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::RaycastHit  raycastHit, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>  teleportRequest) ;

/// @brief Method IsSelectableBy, addr 0xb44e384, size 0x88, virtual true, abstract: false, final false
inline bool IsSelectableBy(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

/// @brief Method IsSphereCastOverlap, addr 0xb44e334, size 0x50, virtual false, abstract: false, final false
static inline bool IsSphereCastOverlap(::UnityEngine::RaycastHit  raycastHit) ;

/// @brief Method IsSphereCastRay, addr 0xb44e210, size 0x124, virtual false, abstract: false, final false
static inline bool IsSphereCastRay(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>  rayInteractor) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea* New_ctor() ;

/// @brief Method .ctor, addr 0xb44e40c, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportationArea() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportationArea", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportationArea(TeleportationArea && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportationArea", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportationArea(TeleportationArea const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11361};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea) == 0x1d8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation

#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/BuildingBlocks/GrabAndLocate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/BuildingBlocks/zzzz__SpaceLocator_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GrabAndLocate)
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace Meta::XR::MRUtilityKit::BuildingBlocks {
class PlaceWithAnchor;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabInteractable;
}
namespace Oculus::Interaction {
class GrabInteractable;
}
namespace Oculus::Interaction {
struct InteractableStateChangeArgs;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::BuildingBlocks {
class GrabAndLocate;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate*, "Meta.XR.MRUtilityKit.BuildingBlocks", "GrabAndLocate");
// Dependencies Meta.XR.MRUtilityKit.BuildingBlocks.SpaceLocator
namespace Meta::XR::MRUtilityKit::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.BuildingBlocks.GrabAndLocate
class CORDL_TYPE GrabAndLocate : public ::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator {
public:
// Declarations
 __declspec(property(get=get_MaxRaycastDistance)) float_t  MaxRaycastDistance;

 __declspec(property(get=get_RaycastOrigin)) ::UnityW<::UnityEngine::Transform>  RaycastOrigin;

/// @brief Field _cameraRig, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraRig, put=__cordl_internal_set__cameraRig)) ::UnityW<::GlobalNamespace::OVRCameraRig>  _cameraRig;

/// @brief Field _grabInteractable, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabInteractable, put=__cordl_internal_set__grabInteractable)) ::UnityW<::Oculus::Interaction::GrabInteractable>  _grabInteractable;

/// @brief Field _handGrabInteractable, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__handGrabInteractable, put=__cordl_internal_set__handGrabInteractable)) ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>  _handGrabInteractable;

/// @brief Field _placeWithAnchor, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__placeWithAnchor, put=__cordl_internal_set__placeWithAnchor)) ::UnityW<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor>  _placeWithAnchor;

/// @brief Field _requestMove, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__requestMove, put=__cordl_internal_set__requestMove)) bool  _requestMove;

/// @brief Method Awake, addr 0x9f58450, size 0x118, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetRaycastRay, addr 0x9f58778, size 0x198, virtual true, abstract: false, final false
inline ::UnityEngine::Ray GetRaycastRay() ;

static inline ::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate* New_ctor() ;

/// @brief Method OnDisable, addr 0x9f58654, size 0xec, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9f58568, size 0xec, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnInteractableStateChanged, addr 0x9f58740, size 0x38, virtual false, abstract: false, final false
inline void OnInteractableStateChanged(::Oculus::Interaction::InteractableStateChangeArgs  stateChange) ;

constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get__cameraRig() const;

constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get__cameraRig() ;

constexpr ::UnityW<::Oculus::Interaction::GrabInteractable> const& __cordl_internal_get__grabInteractable() const;

constexpr ::UnityW<::Oculus::Interaction::GrabInteractable>& __cordl_internal_get__grabInteractable() ;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable> const& __cordl_internal_get__handGrabInteractable() const;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>& __cordl_internal_get__handGrabInteractable() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor> const& __cordl_internal_get__placeWithAnchor() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor>& __cordl_internal_get__placeWithAnchor() ;

constexpr bool const& __cordl_internal_get__requestMove() const;

constexpr bool& __cordl_internal_get__requestMove() ;

constexpr void __cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig>  value) ;

constexpr void __cordl_internal_set__grabInteractable(::UnityW<::Oculus::Interaction::GrabInteractable>  value) ;

constexpr void __cordl_internal_set__handGrabInteractable(::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>  value) ;

constexpr void __cordl_internal_set__placeWithAnchor(::UnityW<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor>  value) ;

constexpr void __cordl_internal_set__requestMove(bool  value) ;

/// @brief Method .ctor, addr 0x9f58910, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MaxRaycastDistance, addr 0x9f58448, size 0x8, virtual true, abstract: false, final false
inline float_t get_MaxRaycastDistance() ;

/// @brief Method get_RaycastOrigin, addr 0x9f58440, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_RaycastOrigin() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabAndLocate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabAndLocate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabAndLocate(GrabAndLocate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabAndLocate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabAndLocate(GrabAndLocate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25981};

/// @brief Field _handGrabInteractable, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>  ____handGrabInteractable;

/// @brief Field _grabInteractable, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::GrabInteractable>  ____grabInteractable;

/// @brief Field _placeWithAnchor, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor>  ____placeWithAnchor;

/// @brief Field _cameraRig, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRCameraRig>  ____cameraRig;

/// @brief Field _requestMove, offset: 0xa8, size: 0x1, def value: None
 bool  ____requestMove;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate, ____handGrabInteractable) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate, ____grabInteractable) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate, ____placeWithAnchor) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate, ____cameraRig) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate, ____requestMove) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate) == 0xb0, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::BuildingBlocks

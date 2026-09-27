#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/BuildingBlocks/SpaceLocator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/BuildingBlocks/zzzz__SpaceLocator_SurfaceOrientation_def.hpp"
#include "Meta/XR/zzzz__EnvironmentRaycastHit_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpaceLocator)
namespace GlobalNamespace {
struct SpaceLocator_SurfaceOrientation;
}
namespace Meta::XR {
struct EnvironmentRaycastHit;
}
namespace Meta::XR {
class EnvironmentRaycastManager;
}
namespace UnityEngine::Events {
template<typename T0,typename T1>
class UnityEvent_2;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::BuildingBlocks {
class SpaceLocator;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator*, "Meta.XR.MRUtilityKit.BuildingBlocks", "SpaceLocator");
// Dependencies Meta.XR.EnvironmentRaycastHit, Meta.XR.MRUtilityKit.BuildingBlocks.SpaceLocator::SurfaceOrientation, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Meta::XR::MRUtilityKit::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.BuildingBlocks.SpaceLocator
class CORDL_TYPE SpaceLocator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SurfaceOrientation = ::GlobalNamespace::SpaceLocator_SurfaceOrientation;

/// @brief Field CustomSize, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_CustomSize, put=__cordl_internal_set_CustomSize)) ::UnityEngine::Vector3  CustomSize;

 __declspec(property(get=get_MaxRaycastDistance, put=set_MaxRaycastDistance)) float_t  MaxRaycastDistance;

 __declspec(property(get=get_OnSpaceLocateCompleted, put=set_OnSpaceLocateCompleted)) ::UnityEngine::Events::UnityEvent_2<::UnityEngine::Pose,bool>*  OnSpaceLocateCompleted;

/// @brief Field PreferredSurfaceOrientation, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_PreferredSurfaceOrientation, put=__cordl_internal_set_PreferredSurfaceOrientation)) ::GlobalNamespace::SpaceLocator_SurfaceOrientation  PreferredSurfaceOrientation;

 __declspec(property(get=get_RaycastHitResult)) ::Meta::XR::EnvironmentRaycastHit  RaycastHitResult;

 __declspec(property(get=get_RaycastOrigin, put=set_RaycastOrigin)) ::UnityW<::UnityEngine::Transform>  RaycastOrigin;

/// @brief Field UseCustomSize, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseCustomSize, put=__cordl_internal_set_UseCustomSize)) bool  UseCustomSize;

/// @brief Field <MaxRaycastDistance>k__BackingField, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxRaycastDistance_k__BackingField, put=__cordl_internal_set__MaxRaycastDistance_k__BackingField)) float_t  _MaxRaycastDistance_k__BackingField;

/// @brief Field <RaycastOrigin>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__RaycastOrigin_k__BackingField, put=__cordl_internal_set__RaycastOrigin_k__BackingField)) ::UnityW<::UnityEngine::Transform>  _RaycastOrigin_k__BackingField;

/// @brief Field _onSpaceLocateCompleted, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__onSpaceLocateCompleted, put=__cordl_internal_set__onSpaceLocateCompleted)) ::UnityEngine::Events::UnityEvent_2<::UnityEngine::Pose,bool>*  _onSpaceLocateCompleted;

/// @brief Field _raycastHit, offset 0x58, size 0x20 
 __declspec(property(get=__cordl_internal_get__raycastHit, put=__cordl_internal_set__raycastHit)) ::Meta::XR::EnvironmentRaycastHit  _raycastHit;

/// @brief Field _raycastManager, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__raycastManager, put=__cordl_internal_set__raycastManager)) ::UnityW<::Meta::XR::EnvironmentRaycastManager>  _raycastManager;

/// @brief Field _sizeToLocate, offset 0x78, size 0xc 
 __declspec(property(get=__cordl_internal_get__sizeToLocate, put=__cordl_internal_set__sizeToLocate)) ::UnityEngine::Vector3  _sizeToLocate;

/// @brief Method CalculateUpwardFromPlacementSide, addr 0x9f596bc, size 0x1a8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalculateUpwardFromPlacementSide(::Meta::XR::EnvironmentRaycastHit  hit, ::UnityEngine::Transform*  rayOrigin, ::UnityEngine::Ray  ray) ;

/// @brief Method GetRaycastRay, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Ray GetRaycastRay() ;

/// @brief Method GetSurfaceOrientation, addr 0x9f592e0, size 0x70, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SpaceLocator_SurfaceOrientation GetSurfaceOrientation(::UnityEngine::Vector3  normal) ;

/// @brief Method IsHorizontalDown, addr 0x9f598ec, size 0x84, virtual false, abstract: false, final false
static inline bool IsHorizontalDown(::UnityEngine::Vector3  normal) ;

/// @brief Method IsHorizontalUp, addr 0x9f59970, size 0x84, virtual false, abstract: false, final false
static inline bool IsHorizontalUp(::UnityEngine::Vector3  normal) ;

/// @brief Method IsVertical, addr 0x9f59864, size 0x88, virtual false, abstract: false, final false
static inline bool IsVertical(::UnityEngine::Vector3  normal) ;

static inline ::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator* New_ctor() ;

/// @brief Method Start, addr 0x9f590c4, size 0x78, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TryCalculateSurfacePose, addr 0x9f59350, size 0x36c, virtual false, abstract: false, final false
inline bool TryCalculateSurfacePose(::Meta::XR::EnvironmentRaycastHit  hit, ::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::Pose>  surfacePose) ;

/// @brief Method TryLocateSpace, addr 0x9f5913c, size 0x1a4, virtual true, abstract: false, final false
inline bool TryLocateSpace(::by_ref<::UnityEngine::Pose>  surfacePose) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_CustomSize() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_CustomSize() ;

constexpr ::GlobalNamespace::SpaceLocator_SurfaceOrientation const& __cordl_internal_get_PreferredSurfaceOrientation() const;

constexpr ::GlobalNamespace::SpaceLocator_SurfaceOrientation& __cordl_internal_get_PreferredSurfaceOrientation() ;

constexpr bool const& __cordl_internal_get_UseCustomSize() const;

constexpr bool& __cordl_internal_get_UseCustomSize() ;

constexpr float_t const& __cordl_internal_get__MaxRaycastDistance_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MaxRaycastDistance_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__RaycastOrigin_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__RaycastOrigin_k__BackingField() ;

constexpr ::UnityEngine::Events::UnityEvent_2<::UnityEngine::Pose,bool>* const& __cordl_internal_get__onSpaceLocateCompleted() const;

constexpr ::UnityEngine::Events::UnityEvent_2<::UnityEngine::Pose,bool>*& __cordl_internal_get__onSpaceLocateCompleted() ;

constexpr ::Meta::XR::EnvironmentRaycastHit const& __cordl_internal_get__raycastHit() const;

constexpr ::Meta::XR::EnvironmentRaycastHit& __cordl_internal_get__raycastHit() ;

constexpr ::UnityW<::Meta::XR::EnvironmentRaycastManager> const& __cordl_internal_get__raycastManager() const;

constexpr ::UnityW<::Meta::XR::EnvironmentRaycastManager>& __cordl_internal_get__raycastManager() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__sizeToLocate() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__sizeToLocate() ;

constexpr void __cordl_internal_set_CustomSize(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_PreferredSurfaceOrientation(::GlobalNamespace::SpaceLocator_SurfaceOrientation  value) ;

constexpr void __cordl_internal_set_UseCustomSize(bool  value) ;

constexpr void __cordl_internal_set__MaxRaycastDistance_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__RaycastOrigin_k__BackingField(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__onSpaceLocateCompleted(::UnityEngine::Events::UnityEvent_2<::UnityEngine::Pose,bool>*  value) ;

constexpr void __cordl_internal_set__raycastHit(::Meta::XR::EnvironmentRaycastHit  value) ;

constexpr void __cordl_internal_set__raycastManager(::UnityW<::Meta::XR::EnvironmentRaycastManager>  value) ;

constexpr void __cordl_internal_set__sizeToLocate(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x9f58914, size 0xe8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_MaxRaycastDistance, addr 0x9f59094, size 0x8, virtual true, abstract: false, final false
inline float_t get_MaxRaycastDistance() ;

/// @brief Method get_OnSpaceLocateCompleted, addr 0x9f590a4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_2<::UnityEngine::Pose,bool>* get_OnSpaceLocateCompleted() ;

/// @brief Method get_RaycastHitResult, addr 0x9f590b4, size 0x10, virtual false, abstract: false, final false
inline ::Meta::XR::EnvironmentRaycastHit get_RaycastHitResult() ;

/// [CompilerGenerated]
/// @brief Method get_RaycastOrigin, addr 0x9f59084, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_RaycastOrigin() ;

/// [CompilerGenerated]
/// @brief Method set_MaxRaycastDistance, addr 0x9f5909c, size 0x8, virtual true, abstract: false, final false
inline void set_MaxRaycastDistance(float_t  value) ;

/// @brief Method set_OnSpaceLocateCompleted, addr 0x9f590ac, size 0x8, virtual false, abstract: false, final false
inline void set_OnSpaceLocateCompleted(::UnityEngine::Events::UnityEvent_2<::UnityEngine::Pose,bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_RaycastOrigin, addr 0x9f5908c, size 0x8, virtual true, abstract: false, final false
inline void set_RaycastOrigin(::UnityEngine::Transform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpaceLocator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpaceLocator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpaceLocator(SpaceLocator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpaceLocator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpaceLocator(SpaceLocator const& ) = delete;

/// @brief Field HorizontalSurfaceAngleThreshold offset 0xffffffff size 0x4
static constexpr float_t  HorizontalSurfaceAngleThreshold{static_cast<float_t>(0.7f)};

/// @brief Field NormalConfidenceThreshold offset 0xffffffff size 0x4
static constexpr float_t  NormalConfidenceThreshold{static_cast<float_t>(0.4f)};

/// @brief Field VerticalSurfaceAngleThreshold offset 0xffffffff size 0x4
static constexpr float_t  VerticalSurfaceAngleThreshold{static_cast<float_t>(0.3f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25985};

/// @brief Field PreferredSurfaceOrientation, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SpaceLocator_SurfaceOrientation  ___PreferredSurfaceOrientation;

/// [Tooltip("Use CustomSize instead of local scale of Target")]
/// [SerializeField]
/// @brief Field UseCustomSize, offset: 0x24, size: 0x1, def value: None
 bool  ___UseCustomSize;

/// [Tooltip("Size the of the space to locate")]
/// [SerializeField]
/// @brief Field CustomSize, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___CustomSize;

/// [Space]
/// [Tooltip("This event will trigger when a suitable space is located within user\'s physical environment")]
/// [Space]
/// [SerializeField]
/// @brief Field _onSpaceLocateCompleted, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_2<::UnityEngine::Pose,bool>*  ____onSpaceLocateCompleted;

/// [CompilerGenerated]
/// @brief Field <RaycastOrigin>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____RaycastOrigin_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MaxRaycastDistance>k__BackingField, offset: 0x48, size: 0x4, def value: None
 float_t  ____MaxRaycastDistance_k__BackingField;

/// @brief Field _raycastManager, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Meta::XR::EnvironmentRaycastManager>  ____raycastManager;

/// @brief Field _raycastHit, offset: 0x58, size: 0x20, def value: None
 ::Meta::XR::EnvironmentRaycastHit  ____raycastHit;

/// @brief Field _sizeToLocate, offset: 0x78, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____sizeToLocate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator, ___PreferredSurfaceOrientation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator, ___UseCustomSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator, ___CustomSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator, ____onSpaceLocateCompleted) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator, ____RaycastOrigin_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator, ____MaxRaycastDistance_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator, ____raycastManager) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator, ____raycastHit) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator, ____sizeToLocate) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::BuildingBlocks::SpaceLocator) == 0x88, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::BuildingBlocks

#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/BuildingBlocks/PlaceWithAnchor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
CORDL_MODULE_EXPORT(PlaceWithAnchor)
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::BuildingBlocks {
class PlaceWithAnchor;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor*, "Meta.XR.MRUtilityKit.BuildingBlocks", "PlaceWithAnchor");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Pose
namespace Meta::XR::MRUtilityKit::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.BuildingBlocks.PlaceWithAnchor
class CORDL_TYPE PlaceWithAnchor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Target, put=__cordl_internal_set_Target)) ::UnityW<::UnityEngine::Transform>  Target;

/// @brief Field _requestMove, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__requestMove, put=__cordl_internal_set__requestMove)) bool  _requestMove;

/// @brief Field _spatialAnchor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__spatialAnchor, put=__cordl_internal_set__spatialAnchor)) ::UnityW<::GlobalNamespace::OVRSpatialAnchor>  _spatialAnchor;

/// @brief Field _spatialAnchorTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__spatialAnchorTransform, put=__cordl_internal_set__spatialAnchorTransform)) ::UnityW<::UnityEngine::Transform>  _spatialAnchorTransform;

/// @brief Field _surfacePose, offset 0x3c, size 0x1c 
 __declspec(property(get=__cordl_internal_get__surfacePose, put=__cordl_internal_set__surfacePose)) ::UnityEngine::Pose  _surfacePose;

/// @brief Method Awake, addr 0x9f589fc, size 0x118, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method EraseAnchor, addr 0x9f58d18, size 0xa8, virtual false, abstract: false, final false
inline void EraseAnchor() ;

static inline ::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor* New_ctor() ;

/// @brief Method OnLocateSpace, addr 0x9f58c54, size 0xc4, virtual false, abstract: false, final false
inline void OnLocateSpace(::UnityEngine::Pose  surfacePose, bool  success) ;

/// @brief Method RequestMove, addr 0x9f58b14, size 0x24, virtual false, abstract: false, final false
inline void RequestMove(::UnityEngine::Pose  pose) ;

/// @brief Method SetAnchor, addr 0x9f58dc0, size 0x130, virtual false, abstract: false, final false
inline void SetAnchor() ;

/// @brief Method SetTargetWithAnchor, addr 0x9f58bf8, size 0x5c, virtual false, abstract: false, final false
inline void SetTargetWithAnchor(::UnityEngine::Pose  pose) ;

/// @brief Method Update, addr 0x9f58b38, size 0xc0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Target() ;

constexpr bool const& __cordl_internal_get__requestMove() const;

constexpr bool& __cordl_internal_get__requestMove() ;

constexpr ::UnityW<::GlobalNamespace::OVRSpatialAnchor> const& __cordl_internal_get__spatialAnchor() const;

constexpr ::UnityW<::GlobalNamespace::OVRSpatialAnchor>& __cordl_internal_get__spatialAnchor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__spatialAnchorTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__spatialAnchorTransform() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__surfacePose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__surfacePose() ;

constexpr void __cordl_internal_set_Target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__requestMove(bool  value) ;

constexpr void __cordl_internal_set__spatialAnchor(::UnityW<::GlobalNamespace::OVRSpatialAnchor>  value) ;

constexpr void __cordl_internal_set__spatialAnchorTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__surfacePose(::UnityEngine::Pose  value) ;

/// @brief Method .ctor, addr 0x9f58ef0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlaceWithAnchor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlaceWithAnchor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlaceWithAnchor(PlaceWithAnchor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlaceWithAnchor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlaceWithAnchor(PlaceWithAnchor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25982};

/// [Tooltip("Target transform to place")]
/// @brief Field Target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___Target;

/// @brief Field _spatialAnchorTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____spatialAnchorTransform;

/// @brief Field _spatialAnchor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSpatialAnchor>  ____spatialAnchor;

/// @brief Field _requestMove, offset: 0x38, size: 0x1, def value: None
 bool  ____requestMove;

/// @brief Field _surfacePose, offset: 0x3c, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____surfacePose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor, ___Target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor, ____spatialAnchorTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor, ____spatialAnchor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor, ____requestMove) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor, ____surfacePose) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor) == 0x58, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::BuildingBlocks
